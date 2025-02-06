#pragma once
#include <vector>
#include <queue>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include "Knoten.h"
using namespace std;

class Baum {
private:
    Knoten* wurzel; 

    // Rekursive Methode zum Einfügen eines Wertes in den Baum
    // Wenn der aktuelle Knoten nullptr ist, wird ein neuer Knoten erstellt
    // Andernfalls wird der Wert entsprechend der Baumstruktur eingefügt
    Knoten* einfuegen_Rekursiv(Knoten* k, int wert) {
        
        // ToDo
        
        return nullptr;
    }

    // Rekursive Methode zum Löschen eines Wertes aus dem Baum
    // Es wird der Knoten gefunden und entsprechend gelöscht
    Knoten* loeschen_Rekursiv(Knoten* k, int wert) {

        // ToDo

        return nullptr;
    }

    // Rekursive Methode zum Suchen eines Wertes im Baum
    // Gibt den Knoten zurück, wenn der Wert gefunden wurde, andernfalls nullptr
    Knoten* suchen_Rekursiv(Knoten* k, int wert) {

        // ToDo

        return nullptr;
    }

public:
    Baum(Knoten* wurzel) : wurzel(wurzel) {}

    Knoten* getWurzel() {
        return wurzel;
    }

    // Führt eine Pre-Order Traversierung des Baums durch
    // Bei dieser Traversierung wird zuerst der Knoten besucht,
    // dann der linke Teilbaum und anschließend der rechte Teilbaum
    void preOrderTraversal(Knoten* knoten) {
     
        // ToDo

    }

    // Führt eine In-Order Traversierung des Baums durch
    // Bei dieser Traversierung wird zuerst der linke Teilbaum besucht,
    // dann der Knoten und anschließend der rechte Teilbaum
    void inOrderTraversal(Knoten* knoten) {

        // ToDo

    }

    // Führt eine Post-Order Traversierung des Baums durch
    // Bei dieser Traversierung werden zuerst die beiden Teilbäume besucht,
    // und schließlich der Knoten selbst
    void postOrderTraversal(Knoten* knoten) {

        // ToDo

    }

    // Fügt einen neuen Wert in den Baum ein
    // Ruft die rekursive Einfügemethode auf
    void einfuegen(int wert) {
        wurzel = einfuegen_Rekursiv(wurzel, wert);
    }

    // Löscht einen Wert aus dem Baum
    // Ruft die rekursive Löschmethode auf
    void loeschen(int wert) {
        wurzel = loeschen_Rekursiv(wurzel, wert);
    }

    // Sucht nach einem Wert im Baum
    // Ruft die rekursive Suchmethode auf
    Knoten* suchen(int wert) {
        return suchen_Rekursiv(wurzel, wert);
    }

    // Überprüft, ob der Baum leer ist
    // Gibt true zurück, wenn die Wurzel nullptr ist
    bool istLeer() {
        return wurzel == nullptr;
    }

    // Findet den minimalen Wert in einem gegebenen Teilbaum
    // Geht so lange nach links, bis der linke Knoten nullptr ist
    int minWert(Knoten* k) {

        // ToDo

        return 0;
    }

    // Berechnet die Höhe des Baums
    // Die Höhe ist die maximale Anzahl der Knoten von der Wurzel bis zu einem Blatt
    int getHoehe(Knoten* k) {
        if (k == nullptr) return 0;
        return 1 + max(getHoehe(k->getLinks()), getHoehe(k->getRechts()));
    }

    // Gibt eine Ebene des Baums aus
    // Platziert die Knoten entsprechend ihrer Position in der Ebene
    void druckeEbene(vector<Knoten*> nodes, int level, int maxWidth) {
        int count = nodes.size();
        int spaceBetween = maxWidth / (count + 1);
        for (int i = 0; i < count; ++i) {
            if (nodes[i]) cout << string(spaceBetween, ' ') << nodes[i]->getDaten();
            else cout << string(spaceBetween, ' ') << " ";
        }
        cout << endl;
    }

    // Gibt den gesamten Baum aus, ebeneweise
    // Bestimmt die Höhe des Baums und druckt jede Ebene entsprechend
    void druckeBaum() {
        if (!wurzel) return;

        int height = getHoehe(wurzel);
        int maxWidth = pow(2, height) * 2;
        queue<Knoten*> q;
        q.push(wurzel);

        for (int level = 0; level < height; ++level) {
            int levelNodes = q.size();
            vector<Knoten*> currentLevel;
            for (int i = 0; i < levelNodes; ++i) {
                Knoten* node = q.front(); q.pop();
                currentLevel.push_back(node);
                if (node) {
                    q.push(node->getLinks());
                    q.push(node->getRechts());
                }
                else {
                    q.push(nullptr);
                    q.push(nullptr);
                }
            }
            druckeEbene(currentLevel, level, maxWidth);
        }
    }
};