#include <iostream>
using namespace std;
int divisione(int a, int b);

int input(int a);

int moltiplicazione(int a, int b);

int potenza(int esponente, int base);

int somma(int a, int b);

int sottrazione(int a, int b);

int main() {
    int a, b, f;

    cout << "dammi 2 valori e io farò un'addizione, sotrazione, moltiplicazione,divisione e la potenza" << endl;
    cout << "inserisci il primo valore" << endl;
    cin >> a;
    f = input(a);
    cout << "inserisci il secondo valore" << endl;
    cin >> b;
    f = input(b);
    f = somma(a, b);
    cout << "la somma è " << f << endl;
    f = sottrazione(a, b);
    cout << "la sotrazione è " << f << endl;
    f = moltiplicazione(a, b);
    cout << "la moltiplicazione è " << f << endl;
    f = divisione(a, b);
    cout << "la divisione è " << f << endl;
    f = potenza(a, b);
    cout << "la potenza è " << f << endl;
    return 0;
}

int divisione(int a, int b) {
    int f;

    f = (int) ((double) a / b);
    
    return f;
}

int input(int a) {
    int f;

    while (a < 0) {
        cout << "non ci possono essere valori negativi" << endl;
        cin >> a;
    }
    f = a;
    
    return f;
}

int moltiplicazione(int a, int b) {
    int f;

    f = a * b;
    
    return f;
}

int potenza(int esponente, int base) {
    int f;

    f = 1;
    for (f = 0; f <= base - 1; f++) {
        f = f * esponente;
    }
    f = esponente;
    
    return f;
}

int somma(int a, int b) {
    int f;

    f = a + b;
    
    return f;
}

int sottrazione(int a, int b) {
    int f;

    f = a - b;
    
    return f;
}



