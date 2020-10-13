#include <iostream>
#include <math.h>

using namespace std;

int problema_1(int T);
bool problema_3(char A[] , char B[]);
int problema_4(char car[]);
char problema_6(char cad[]);
int problema_8(char[]);
int problema_9(int n);
int problema_12(int fila, int columna);
void problema_13();
void problema_15();

//otras funciones
void imprimir(int photo[][8]);
int cantidadEstrellas(int (*p1)[8]);
bool esEstrella(int centro, int at,int ad, int arr,int ab);
void imprimirArreglo(float *data);
void calcularInterseccion(float *d1, float *d2,float *dC);

int main()
{
    int opcion=1;
        int a, b, c,N,fila,columna;
        char A[5]={"abcd"};    //definicion de cadenas a comparar
        char B[5]={"abcd"};
        char array[10]={"123"};

        while(opcion !=0)
        {
        cout<<"******* Ejercicios de la practica 2 ********"<<endl;
        cout<<"Presione 1 para determinar la minima cantidad de dinero "<<endl;
        cout<<"Presione 2 para comparar las cadenas "<<endl;
        cout<<"Presione 3 para retornar un caracter en entero"<<endl;
        cout<<"Presione 4 para convertir cada minuscula a mayuscula "<<endl;
        cout<<"Presione 5 para separar los numeros y las letras "<<endl;
        cout<<"Presione 6 para la suma de cada n numeros, separarlos e imprimirlos"<<endl;
        cout<<"Presione 7 para el cuadro magico"<<endl;
        cout<<"Presione 8 para fotografia"<<endl;
        cout<<"Presione 9 para intersecciones de par de rectangulos "<<endl;
        cout<<"Presione 10 para permutacion lexicografica "<<endl;
        cout<<"Presione 0 para salir"<<endl;
        cin>>opcion;

       switch(opcion)
        {
          case 1:
           //Problema 1
           int T;

           cout << "Ingrese valor a determinar " << endl;
           cin >> T;
           cout<<endl<<endl;
           problema_1(T);

          break;


         case 2:
            //Problema 3

           cout<<problema_3(A,B)<<endl;

           break;

       case 3:
           //Problema 4
           //char array[100];
           //cin>>array;

           cout<<problema_4(array)<<endl;

           break;

       case 4:

           //problema 6

           char cad[100];
           cout << "Ingrese palabra: "<< endl;
           cin>>cad;


           problema_6(cad);

           break;

       case 5:
           //problema 8

           cout << "Ingrese palabra: "<< endl;
           cin>>cad;

           problema_8(cad);
           break;

        case 6:
           //problema 9

           int n;
           cout << "Ingrese en cuanto quiere dividir la cadena: ";
           cin>>n;
           problema_9(n);
           break;

        case 7:
           //problema 12

           cout << "Ingrese las filas: ";
           cin >> fila;
           cout << "Ingrese las columnas: ";
           cin >> columna;
           problema_12(fila, columna);

           break;

        case 8:
           //Problema 13

           problema_13();
           break;

       case 9:
           //problema 15

           problema_15();
           break;


       default:
               cout<<"Opcion no es valida"<<endl;
               break;
       }
    }
        return 0;
}


int problema_1(int valor)
{
    int valores[10]={50000,20000,10000,5000,2000,1000,500,200,100,50};

        for(int i=0; i<10;i++){
            cout<<valores[i]<<": "<<valor/valores[i]<<endl;
            valor%=valores[i];

        }
        cout<<"Faltante: "<<valor<<endl;
}

bool problema_3(char A[] , char B[]){
    int i,j;
    bool res;

    for (i=0,j=0;A[i]!='\0';i++){ //compara hasta el final de la cadena
        if(A[i]==B[j]){
            j++;     //suma si son iguales
        }
    }
    if(i==j){          //si los contadores no son iguales false
        res=true;
        return res;
    }
    else{
        res=false;
        return res;
    }
}


int problema_4(char car[]){
    int i=0,j=0,k=0;
    int res,resultado,fin=0;

    while (car[i]!='\0'){  //contamos la longitud de la cadena (i)
        i++;

    }
    i--;      //como llega hasta uno mas se le resta uno
    k=i;      // igualamos para multiplicarlos por las decimas
    for (j=0;j<=i;j++){
        res= int ((car[j])-48);  //conversion de cada nunero a entero
        resultado=res*pow(10,k); //conversion a las decimas pow libreria math.h
        fin=fin+resultado;       //suma de cada uno como decima
        k--;
    }

    return fin;
    }


char problema_6(char cad[]){
    int i,f;
    for (i=0;i<100;i++){
        f=cad[i];
        if (f>96 && f<123){
            cad[i]-=32;

        }
    }
    cout<<cad<<endl;
}


int problema_8(char cad[]){
    int i,f,j,k;
    char num[50];
    char cadf[50];

    cout<<"Original: "<<cad<<endl;;
    for (i=0,j=0,k=0;cad[i]!='\0';i++){
        f=cad[i];       // f es cada uno de los caracteres
        if (f>47 && f<58){     // si es un numero
            num[j]=f;       //se agrega a la cadena de numeros
            j++;       // j se aumenta para tener la proxima posicion de la cadena
        }
        if (f>96 && f<123){   //si es una letra
            cadf[k]=f;      //se agrega a la cadena de letras
            k++;       //k se aumenta para tener la proxima posicion de la cadena
        }

    }
    cout<<"Texto: ";   //se imprime cada posicion de la cadena de texto
    for(i=0;i<k;i++){
        cout<<cadf[i];
    }

    cout<<endl<<"Numero: ";   //se imprime cada posicion de la cadena de numeros
    for (i=0;i<j;i++){
        cout<<num[i]-48;
    }


cout<<endl<<endl;

    return 0;

}

int problema_9(int n){

    int i=0,fin=0,aux=0,j,s,mod,k;
    char cad[90]="87512395";
    int cad1[90];

    cout<<endl<<"Original: ";

    while(cad[i]!='\0'){  // encontramos la longitud de la cadena a determinar y la imprimimos (i)
        cout<<cad[i];
        i++;

    }
    cout<<endl;
    mod=i%n;    //modulo de la longitud de la cadena

    i--;

    if (mod == 2){  //si es par
        mod--;    //son los ceros que se van a imprimir al principio
        for(j=0;j!=mod;j++){
            cad1[j]=0;     //se va creando la nueva cadena con los ceros al principio
        }
    }
    else if (mod == 1){ //si es impar
        mod++;    //son los ceros que se van a imprimir al principio
        for(j=0;j!=mod;j++){
            cad1[j]=0;     //se va creando la nueva cadena con los ceros al principio
        }
    }
    k=0;
    s=i+mod;

    for (j=mod;j<=s;j++,k++){
        cad1[j]=int (cad[k]-48);  //como son caracteres los convertimos a enteros y los agregamos a la nueva cadena con los ceros al principio
    }
    k=0;
    while (k<=s){   //se suman de a n numeros separados
        aux=n;
        int suma_total[n];

        for (j=0;j<n;j++){
            suma_total[j]=cad1[k]; //se separan de a n numeros en una nueva cadena para sumarlos

            cout<<cad1[k];     //se imprimen los n numeros correspondientes
            k++;
        }
        if(k<=s){
            cout<<"+";
        }
        else{
            cout<<"=";
        }
        for (j=0;j<n;j++){
            int resultado=0;
            resultado=suma_total[j]*pow(10,aux-1);   //se multiplican por las decimas
            fin=fin+resultado;                   //se suman cada vez que ya tengan las decimas
            aux--;
        }

    }

    cout<<fin<<endl;
    cout<<endl;
}

int problema_12(int fila, int columna){

    int  plus1=0,plus2=0,fin=0;

    int matriz[fila][columna];

    for (int i = 0;i<fila;i++) //Imprime la matriz disponible
    {
        for(int j = 0;j<columna;j++)
        {
            matriz[i][j]=0;
            cout << matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i = 0; i<fila; i++){
        for(int j = 0; j<columna; j++){
            cout << "Ingrese el numero para la posicion matriz["<<i<<"]["<<j<<"]: ";
            cin >> matriz[i][j];
            for (int i = 0;i<fila;i++){ //Imprime las matriz actualizada con los nuevos valores
                for(int j = 0;j<columna;j++){
                    cout << matriz[i][j]<<" ";
                }
                cout<<endl;
            }

        }
    }
    for(int j = 0 ;j<columna ;j++){  //Recorre la matriz y suma la primera fila para compararla con las demas
        plus1 += matriz[0][j];
    }
    for(int i = 0 ;i<columna ;i++){
        plus2=0;
        for(int k=0;k<fila;k++){ // suma cada una de las filas y las compara para saber si son iguales a la primera
            plus2 += matriz[i][k];
        }
        if (plus2!=plus1){
            i=columna;
            fin=1;
        }
        else if(plus1 == plus2 && i==columna-1){ // compara la suma de las columnas
            for(int i = 0 ;i<columna ;i++){
                plus2=0;
                for(int k=0;k<fila;k++){
                    plus2 += matriz[k][i];
                }
                if (plus2!=plus1){
                    i=columna;
                    fin=1;
                }
            }
            plus2=0;
            int j;
            for(i=0,j=0 ; i<columna ;i++,j++){ // compara la primera diagonal
                plus2+=matriz[i][j];
            }

            if (plus2!=plus1){
                i=columna;
                fin=1;
            }
            plus2=0;
            for(i=0,j=columna-1 ; i<columna ;i++,j--){ // comapra la segunda diagonal
                plus2+=matriz[i][j];
            }
            if (plus2!=plus1){
                i=columna;
                fin=1;
            }
        }
    }
    if (fin==0)
        cout<<"Es un cuadrado magico"<<endl;
    else
        cout<<"No es un cuadrado magico"<<endl;
}

void problema_13(){
    int fotografia[][8]= {0, 3, 4, 0, 0, 0, 6, 8, //
                      5,13, 6, 0, 0, 0, 2, 3,     //
                      2, 6, 2, 7, 3, 0,10, 0,     //--> imagen
                      0, 0, 4,15, 4, 1, 6, 0,     //
                      0, 0, 7,12, 6, 9,10, 4,     //
                      5, 0, 6,10, 6, 4, 8, 0};    //
    int c=0;
    int (*pF)[8]=fotografia; //Puntero que referencia a fotografia
    imprimir(fotografia); //impresion del arreglo bidimencional
    c=cantidadEstrellas(pF);  //Uso de la cantidad de estrellas

    if(c>0){
        cout << "\nLa cantidad de estrellas es: "<<c<<endl; //Impresion de la salida
    }

}

void problema_15(){
    float data1[]={2,1,8,4}; //Rectangulo A
    float data2[]={6,3,7,7}; //Rectangulo B
    float dataC[4]; //Interseccion del rectangulo A con el B.

    float *pd1=data1; //Puntero al rectangulo A
    float *pd2=data2; //Puntero al rectangulo B

    calcularInterseccion(pd1,pd2,dataC); //Funcion que pide el ejercicio, de inteseccion.

    cout <<"Data C="; //Formato de salida
    imprimirArreglo(dataC);

}



void imprimir(int photo[][8]){

    cout <<"\t------ Imagen -------"<<endl;  //Encabezado
    for(int fila=0;fila<6;fila++){   //Recorre sus filas
        for(int pos = 0;pos<8;pos++){  //Recorre sus columnas
            if(photo[fila][pos]<10){  //Ajustes visuales
                cout<<"   ";
            }else{
                cout<<"  ";
            }
            cout<<photo[fila][pos]; //imprime el valor
        }
        cout << endl; //Salto de linea
    }
}

//*(*(p1+fila)+pos) --> fila:filas, pos:posicion
int cantidadEstrellas(int (*p1)[8]){
    int cant=0;
    for(int fila=1;fila<5;fila++){
        for(int pos = 1;pos<7;pos++){
            if(esEstrella(*(*(p1+fila)+pos),       //
                          *(*(p1+fila)+(pos-1)),   //
                          *(*(p1+fila)+(pos+1)),   //---->Posiciones de al rededor
                          *(*(p1+(fila-1))+pos),   //
                          *(*(p1+(fila+1))+pos))){ //

                cout<<"\nEstrella con centro en ["<<fila<<","<<pos<<"]"<<endl; //Si la encuentra imprime este formato

                cant++; //Numero de filas
            }
        }
    }
    return cant; //Numero de filas

}

bool esEstrella(int centro, int at,int ad, int arr,int ab){ //Formula para saber si es o no estrella
    if((centro+at+ad+arr+ab)/5.0>6){ //Si la sumatoria de las posiciones dividido 5.0 es mayor a 6.
        return true; //
    }else{
        return false;
    }
}


void calcularInterseccion(float *d1, float *d2,float *dC){
    dC[0]=d2[0]; //--->Se encuentra el vertice de la interseccion
    dC[1]=d2[1]; //
    dC[2]=(d1[0]+d1[2])-d2[0]; // Encuentra el ancho de la interseccion
    dC[3]=(d1[1]+d1[3])-d2[1]; // Encuentra el largo de la interseccion
}


void imprimirArreglo(float *data){
    cout <<"{";               //Formato de salida
    for(int i=0;i<4;i++){       //Imprime cada posicion de data separado por una
        cout <<*(data+i)<<",";  // ',' hasta el indice 3 y cierra con }
    }
    cout <<"\b"<< "}";
}
