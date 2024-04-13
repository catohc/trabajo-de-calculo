#include <iostream>
#include <limits>
using namespace std;
int main() {
    bool ban = true;
    int selection;
    double value_n,constant_a,constant_b;
    do {
        cout << "................................................" << endl;
        cout << "1. form: a(x)^n..................2.form:a(b)^n/n" << endl;
        cout << "3. form: (-a)^n..................4.form:e^ax...." << endl;
        cout << "5. form: e^ax^n...................6.EXIT........" << endl;
        cout <<"Seleccione una opcion: ";
        cin >> selection;
        if (selection >=1 && selection <=6){
        switch (selection) {
            case 1: {
                bool ban2;
                char option;
                do {
                    cout <<"Ingrese el valor de a (constante) y n (variable)" << endl;
                    cout <<"a: ";cin >> constant_a; cout <<" "<<endl;
                    cout <<"n: ";cin >> value_n; cout <<" "<<endl;
                    if (!cin.fail()){
                        if (value_n-1 != 1){
                            cout <<"La derivada es: "; cout << constant_a * value_n; cout <<"x^";cout << value_n -1 <<endl;
                        } else{cout <<"La derivada es: "; cout << constant_a * value_n; cout <<"x"<<endl;}
                        cout <<"Form: a.n(x)^n-1" << endl;
                    } else{
                        cout <<"Su valor es invalido."<<endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                    cout << "................................................" << endl;
                    cout << "Desea ingresar otra cantidad? s/n";
                    cin >> option;
                    if ('s' == option){
                    ban2 = true;
                    } else{ban2 = false;}
                }while (ban2);
                ban = true;
                break;
            }
            case 2:{
                bool ban3;
                char option2;
                do {
                    cout << "Ingresar los valores de a y b (constantes numericas)";
                    cout <<"a: ";cin >> constant_a; cout <<" "<<endl;
                    cout <<"b: ";cin >> constant_b; cout <<" "<<endl;
                    if (!cin.fail()){
                        if (constant_b > 0){
                            cout <<"La derivada es: " << constant_a << "ln("<<constant_b<<")(" << constant_b << ")^x"<<endl;
                            cout <<"Form: aln(b)b^x" << endl;
                        }else{cout << "Error su numero es negativo, intentelo de nuevo"<<endl;}
                    } else{
                        cout <<"Su valor es invalido."<<endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                    cout << "................................................" << endl;
                    cout <<"Desea ingresar otra cantidad? s/n";
                    cin >> option2;
                    if ('s' == option2){
                        ban3 = true;
                    } else{ban3 = false;}
                } while (ban3);
                break;
            }
            case 3:{
                bool ban2;
                char option;
                do {
                    cout << "Ingresa la cantidad de a (constante) y n (variable)";
                    cout <<"a: ";cin >> constant_a; cout <<" "<<endl;
                    cout <<"n: ";cin >> value_n; cout <<" "<<endl;
                    if (!cin.fail()){
                        if (constant_a <0 && value_n <0){
                            cout <<"La derivada es: " << "ln(" << constant_a << ") . (" << constant_a << ")^" << value_n <<endl;
                            cout <<"Form: ln (-a) . -a^x" << endl;
                        } else{cout << "sus valores no son negativos, intentelo de nuevo."<<endl;}
                    } else{
                        cout <<"Su valor es invalido."<<endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }

                    cout << "................................................" << endl;
                    cout << "Desea ingresar otra cantidad? s/n";
                    cin >> option;
                    if ('s' == option){
                        ban2 = true;
                    } else{ban2 = false;}
                } while (ban2);
                break;
            }
            case 4:{
                bool ban2;
                char option;
                do {
                    cout << "Ingrese a (constante numerica)";
                    cout <<"a: ";cin >> constant_a; cout <<" "<<endl;
                    if (!cin.fail()){
                        cout <<"La derivada es: " << "(e" << "^" << constant_a << "x)("<<constant_a<<")"<<endl;
                        cout <<"form: e^ax . 'ax"<<endl;
                    } else{cout <<"Su valor es invalido."<<endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                    cout << "................................................" << endl;
                    cout << "Desea ingresar otra cantidad? s/n";
                    cin >> option;
                    if ('s' == option){
                        ban2 = true;
                    } else{ban2 = false;}
                } while (ban2);
                break;
            }
            case 5:{
                bool ban2;
                char option;
                do {
                    cout << "Ingrese la cantidad de a (constante) y n (variable)";
                    cout <<"a: ";cin >> constant_a; cout <<" "<<endl;
                    cout <<"n: ";cin >> value_n; cout <<" "<<endl;
                    if (!cin.fail()){
                        if (value_n - 1 == 1){
                            cout <<"La derivada es: " << "e" << "^" << constant_a << "x^" << value_n << " . ("<<constant_a*value_n<<"x"<<")"<<endl;
                        } else{
                            cout <<"La derivada es: " << "e" << "^" << constant_a << "x^" << value_n << " . ("<<constant_a*value_n<<"x^"<<value_n-1<<")"<<endl;}
                            cout <<"Form: e^ax . 'ax"<<endl;
                    }else{cout << "Su caracter es invalido."<<endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                    cout << "................................................" << endl;
                    cout << "Desea ingresar otra cantidad? s/n"<<endl;
                    cin >> option;
                    if ('s' == option){
                        ban2 = true;
                    } else{ban2 = false;}
                } while (ban2);
                break;
            }
            case 6:{
                cout <<"Finalizando el programa.";
                ban = false;
            }
        }
    }
    }while (ban);
}
