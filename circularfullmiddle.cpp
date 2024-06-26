#include <iostream>
#include <string>
using namespace std;

const int maximal = 5;
string arrayBuku[maximal];
int top = 0;

bool isFull() {
    return top == maximal;
}

bool isEmpty() {
    return top == 0;
}

void pushArray(string data) {
    if (isFull()) {
        cout << "Data Penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArray() {
    if (isEmpty()) {
        cout << "Data kosong !!" << endl;
    } else {
        top--;
        arrayBuku[top] = ""; 
    }
}

void displayArray() {
    cout << "Data stack array: " << endl;
    for (int i = top - 1; i >= 0; i--) {
        cout << "Data: " << arrayBuku[i] << endl;
    }
    cout << "\n";
}

void peekArray(int posisi) {
    if (isEmpty()) {
        cout << "Data kosong!!" << endl;
    } else if (posisi >= 0 && posisi < top) {
        cout << "Data pada posisi " << posisi << ": " << arrayBuku[posisi] << endl;
    } else {
        cout << "Posisi tidak valid" << endl;
    }
}

void peekMiddle() {
    if (isEmpty()) {
        cout << "Data kosong!!" << endl;
    } else {
        int middleIndex = top / 2;
        cout << "Data pada posisi tengah: " << arrayBuku[middleIndex] << endl;
    }
}

int main() {
    pushArray("Matematika");
    displayArray();
    pushArray("Web Programming");
    pushArray("Pemrograman Berbasis Objek");
    pushArray("Sistem Operasi");
    pushArray("Struktur Data");
    displayArray();

    pushArray("Basis Data");
    displayArray();

    popArray();
    displayArray();

    cout << "Apakah data full? : " << (isFull() ? "Ya" : "Tidak") << endl;
    cout << "Apakah data kosong? : " << (isEmpty() ? "Ya" : "Tidak") << endl;

    peekMiddle();

    return 0;
}
