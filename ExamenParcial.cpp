#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    string nombre;
    int precio;
    int cantidad,subtotal;
    double iva,total;
    cout << "Ingresa nombre del cliente: ";
    getline(cin, nombre);

    cout << "Ingresa precio del producto: ";
    cin >> precio;

    cout << "Introduce la cantidad comprada: ";
    cin >> cantidad;

    subtotal = precio * cantidad;
    iva = subtotal * 0.12;
    total = subtotal + iva;

    cout << fixed << setprecision(2);
    cout << "Nombre: " << nombre << endl;
    cout << "Precio: " << precio << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Iva: " << iva << endl;
    cout << "Total: " << total << endl;

    return 0;
}