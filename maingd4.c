/* File : gd-eg1.c */
#include "gd.h"
#include <stdio.h>

int main() {
	gdImagePtr img; //declaración de la imagen
	FILE *archivo; //archivo de salida
	int black,white;

	img = gdImageCreate(100,100); //crea una imagen, 100 por 100 pixeles

	black = gdImageColorAllocate(img, 0, 0, 0); //asignar color negro
	white = gdImageColorAllocate(img, 255, 255, 255);	//asignar color blanco
	gdImageLine(img, 0, 0,100,100, white); // dibuja una línea utilizando el color blanco.

	archivo = fopen("resultados.jpg", "wb"); //abre un archivo
	if (archivo != NULL) {
                gdImageJpeg(img, archivo, -1); //guarda la imagen en el archivo utilizando la calidad por default
                fclose(archivo); 
	}
        gdImageDestroy(img);
}



