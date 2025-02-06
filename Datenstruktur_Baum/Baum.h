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

    // Rekursive Methode zum Einf�gen eines Wertes in den Baum
    // Wenn der aktuelle Knoten nullptr ist, wird ein neuer Knoten erstellt
    // Andernfalls wird der Wert entsprechend der Baumstruktur eingef�gt
    Knoten* einfuegen_Rekursiv(Knoten* k, int wert) {
        
        // ToDo
        
        return nullptr;
    }

    // Rekursive Methode zum L�schen eines Wertes aus dem Baum
    // Es wird der Knoten gefunden und entsprechend gel�scht
    Knoten* loeschen_Rekursiv(Knoten* k, int wert) {

        // ToDo

        return nullptr;
    }

    // Rekursive Methode zum Suchen eines Wertes im Baum
    // Gibt den Knoten zur�ck, wenn der Wert gefunden wurde, andernfalls nullptr
    Knoten* suchen_Rekursiv(Knoten* k, int wert) {

        // ToDo

        return nullptr;
    }

public:
    Baum(Knoten* wurzel) : wurzel(wurzel) {}

    Knoten* getWurzel() {
        return wurzel;
    }

    // F�hrt eine Pre-Order Traversierung des Baums durch
    // Bei dieser Traversierung wird zuerst der Knoten besucht,
    // dann der linke Teilbaum und anschlie�end der rechte Teilbaum
    void preOrderTraversal(Knoten* knoten) {
     
        // ToDo

    }

    // F�hrt eine In-Order Traversierung des Baums durch
    // Bei dieser Traversierung wird zuerst der linke Teilbaum besucht,
    // dann der Knoten und anschlie�end der rechte Teilbaum
    void inOrderTraversal(Knoten* knoten) {

        // ToDo

    }

    // F�hrt eine Post-Order Traversierung des Baums durch
    // Bei dieser Traversierung werden zuerst die beiden Teilb�ume besucht,
    // und schlie�lich der Knoten selbst
    void postOrderTraversal(Knoten* knoten) {

        // ToDo

    }

    // F�gt einen neuen Wert in den Baum ein
    // Ruft die rekursive Einf�gemethode auf
    void einfuegen(int wert) {
        wurzel = einfuegen_Rekursiv(wurzel, wert);
    }

    // L�scht einen Wert aus dem Baum
    // Ruft die rekursive L�schmethode auf
    void loeschen(int wert) {
        wurzel = loeschen_Rekursiv(wurzel, wert);
    }

    // Sucht nach einem Wert im Baum
    // Ruft die rekursive Suchmethode auf
    Knoten* suchen(int wert) {
        return suchen_Rekursiv(wurzel, wert);
    }

    // �berpr�ft, ob der Baum leer ist
    // Gibt true zur�ck, wenn die Wurzel nullptr ist
    bool istLeer() {
        return wurzel == nullptr;
    }

    // Findet den minimalen Wert in einem gegebenen Teilbaum
    // Geht so lange nach links, bis der linke Knoten nullptr ist
    int minWert(Knoten* k) {

        // ToDo

        return 0;
    }

    // Berechnet die H�he des Baums
    // Die H�he ist die maximale Anzahl der Knoten von der Wurzel bis zu einem Blatt
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
    // Bestimmt die H�he des Baums und druckt jede Ebene entsprechend
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