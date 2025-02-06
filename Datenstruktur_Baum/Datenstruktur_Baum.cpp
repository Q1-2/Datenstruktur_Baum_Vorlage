#include <iostream>
#include "Knoten.h"
#include "Baum.h"

using namespace std;

// 1. Übung ohne Traversal-Methoden
//int main() {
//    // Knoten erstellen
//    Knoten* wurzelKnoten = new Knoten('R');
//    Knoten* knotenA = new Knoten('A');
//    Knoten* knotenB = new Knoten('B');
//    Knoten* knotenC = new Knoten('C');
//    Knoten* knotenD = new Knoten('D');
//    Knoten* knotenE = new Knoten('E');
//    Knoten* knotenF = new Knoten('F');
//    Knoten* knotenG = new Knoten('G');
//
//    // Baumstruktur aufbauen
//    wurzelKnoten->setLinks(knotenA);
//    wurzelKnoten->setRechts(knotenB);
//    knotenA->setLinks(knotenC);
//    knotenA->setRechts(knotenD);
//    knotenB->setLinks(knotenE);
//    knotenB->setRechts(knotenF);
//    knotenF->setLinks(knotenG);
//
//    // Baum erstellen
//    Baum baum(wurzelKnoten);
//
//    // Test
//    baum.getWurzel()->getRechts()->getLinks()->setDaten('X');
//    cout << "baum->wurzel->rechts->links->data: " << baum.getWurzel()->getRechts()->getLinks()->getDaten() << endl;
//
//    // Ausgabe der Preorder-Traversal des Baums
//    cout << "Baum erstellt mit Wurzel: " << baum.getWurzel()->getDaten() << endl;
//
//    return 0;
//}