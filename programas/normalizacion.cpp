#include <iostream>
#include <cstdio>     // FILE, fopen, fread, fwrite, fseek, fclose, sprintf
#include <cstring>    // strcpy, strcmp

using namespace std;

// ESTRUCTURAS //


struct ComandaHistorica {
    char  fecha[11];        // "DD-MM-AAAA"
    char  nombreMozo[50];   // nombre completo, repetido en cada venta
    int   codigoProducto;
    int   cantidad;
    float comision;
};


struct Producto {
    int   codigo;
    char  descripcion[50];
    float precio;
    int   stockActual;
};


struct Mozo {
    int   idMozo;
    char  nombre[50];
    char  password[20];     
    float totalComision;
};


struct Comanda {
    int   idMozo;
    int   codigoProducto;
    int   cantidad;
    float comision;
};

//  CONSTANTES 
const float TASA_COMISION = 0.10f; // 10% de comisión sugerido por la cátedra
