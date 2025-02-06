#include <iostream>
#include "Knoten.h"
#include "Baum.h"

using namespace std;

// Beispiel für die Verwendung
int main() {
/*
         4
       /    \
     2        6
    / \      /  \
   1   3    5     7
*/
    // Baumstruktur aufbauen
    Knoten* wurzel = new Knoten(4);

    wurzel->setLinks(new Knoten(2));
    wurzel->setRechts(new Knoten(6));

    wurzel->getLinks()->setLinks(new Knoten(1));
    wurzel->getLinks()->setRechts(new Knoten(3));

    wurzel->getRechts()->setLinks(new Knoten(5));
    wurzel->getRechts()->setRechts(new Knoten(7));

    // Baum erstellen
    Baum baum(wurzel);

    //baum.einfuegen(8);
    //baum.einfuegen(9);
    //baum.einfuegen(10);
    //baum.loeschen(2);
    //cout << "Ist Leer? " << baum.istLeer() << endl;
    //cout << "minWert " << baum.minWert(wurzel->getRechts()) << endl;
    //Knoten* k = baum.suchen(3);
    //cout << "Suche " << k->getDaten() << endl;
    //baum.druckeBaum();


    /*
    Pre-order Traversal: Zuerst wird der aktuelle Knoten besucht, 
    dann wird der linke Teilbaum und anschließend der rechte Teilbaum besucht.
    */
    //cout << "Pre-Order Traversal: ";
    //baum.preOrderTraversal(wurzel); 
    //cout << endl;

    /*
    In-order Traversal: Zuerst wird der linke Teilbaum besucht, dann der 
    aktuelle Knoten und anschließend der rechte Teilbaum. 
    Dies ergibt eine sortierte Ausgabe für einen binären Suchbaum.
    */
    //cout << "In-Order Traversal: ";
    //baum.inOrderTraversal(wurzel);  
    //cout << endl;

    /*
    Post-order Traversal: Zuerst werden der linke und der rechte Teilbaum besucht, 
    bevor der aktuelle Knoten besucht wird.
    */
    //cout << "Post-Order Traversal: ";
    //baum.postOrderTraversal(wurzel); 
    //cout << endl;

    return 0;
}