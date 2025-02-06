#pragma once
#include <sstream>
#include <string>
using namespace std;

class Knoten {
private:
// ToDo

public:
    // Konstruktor
    Knoten(char daten) : daten(daten), links(nullptr), rechts(nullptr) {}

    // Getter-Methoden
    int getDaten() {
        return daten;
    }

    Knoten* getLinks() {
        return links;
    }

    Knoten* getRechts() {
        return rechts;
    }

    // Setter-Methoden
    void setDaten(int daten) {
        this->daten = daten;
    }

    void setLinks(Knoten* links) {
        this->links = links;
    }

    void setRechts(Knoten* rechts) {
        this->rechts = rechts;
    }
};