#include<iostream>
using namespace std;
int ContarPalabras(char[]);
 
  int main (){
     char cadena[200];
     cout<<"Ingrese las palabras:\n";
     cin.getline(cadena, 200);
     cout<<"\nLa frase de texto ingresada contiene:  "<<ContarPalabras(cadena)<<"  palabras.\n\n";
     return 0;
     }
     
 int ContarPalabras(char cad[]){
     
     int palabras = 0;
     for(int i=1; cad[i]!='\0';++i)   
         if(cad[i-1]==' '&& isalpha(cad[i]))
             ++palabras;
         if(isalpha(cad[0])) ++palabras;
         return palabras;
         
     
         }
