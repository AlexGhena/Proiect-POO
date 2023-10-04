#ifndef NOTE_H
#define NOTE_H
#include <vector>
#include <algorithm>
#include <iostream>
#include <memory>

class Note
{
private:
    std::vector<std::shared_ptr<int>> note; // (folosit mai mult pt a cuprinde cerintele, nu are o utilitate anume)

public:
    Note() {
        note.reserve(10);
    }

    void adauganota(int nota) {
        if (note.size() >= 10) {
            throw std::out_of_range("Numarul de note este limitat la 10.");
        }
        if (nota <= 0 || nota >= 11) {
            throw std::invalid_argument("Nota trebuie sa fie intre 1 si 10.");
        }
        note.push_back(std::make_shared<int>(nota));
    }

    void afisnote() const {
        for (const auto& n : note) {
            std::cout << *n << " ";
        }
        std::cout << std::endl;
    }

    double media() const {
        if (note.empty()) {
            return 0;
        }
        int suma = 0;
        for (const auto& n : note) {
            suma += *n;
        }
        return suma / double(note.size());
    }

    int max_nota() const {
        if (note.empty()) {
            return 0;
        }
        int max_n = **std::max_element(note.begin(), note.end(),
            [](const auto& a, const auto& b) { return *a < *b; });
        return max_n;
    }

    int min_nota() const {
        if (note.empty()) {
            return 0;
        }
        int min_n = **std::min_element(note.begin(), note.end(),
            [](const auto& a, const auto& b) { return *a < *b; });
        return min_n;
    }
};

#endif // NOTE_H
