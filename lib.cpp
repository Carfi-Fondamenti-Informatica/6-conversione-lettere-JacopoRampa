#include "lib.h"
bool lettera_altro(char carattere){
    if ((carattere>=65 && carattere<=90) || (carattere>=97 && carattere<=122)){
        return true;
    }else{
        return false;
    }
}
char minuscolo_maiuscolo(char carattere){
    if (carattere>=65 && carattere<=90){
        carattere = carattere + 32;
        return carattere;
    }else if (carattere>=97 && carattere<=122){
        carattere = carattere - 32;
        return carattere;
    }
}
