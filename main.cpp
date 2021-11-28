#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    char carattere='0';
    cin >> carattere;
    if(lettera_altro(carattere)){
        cout << minuscolo_maiuscolo(carattere) << endl;
    }
    else{
        cout << "errore";
    }
    return 0;
}
