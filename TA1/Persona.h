#pragma once
#include <iostream>
#include <conio.h>
#define ARRIBA 80
#define ABAJO 72
#define DERECHA 77
#define IZQUIERDA 75
using namespace std;
using namespace System;
using namespace System::Drawing;
class Persona {
private:
	int x;
	int y;
	int desx;
	int desy;
	int ancho, alto;

	
public:
	Persona(int x, int y, int desx, int desy) {
		this->x = x;
		this->y = y;
		this->desx = desx;
		this->desy = desy;
		ancho = 1;
		alto = 1;
	}
	void Dibujar() {
		Console::ForegroundColor = ConsoleColor::Blue;
		Console::SetCursorPosition(x, y);
		cout << char(254);
	}
	void Borrar() {
		Console::SetCursorPosition(x, y);
		cout << " ";
	}
	void Mover(char tecla) {
		if (tecla == DERECHA) {
			x++;
		}
		else if (tecla == IZQUIERDA) {
			x--;
		}
		else if (tecla == ABAJO) {
			y--;
		}
		else if (tecla == ARRIBA) {
			y++;
		}
		
	}
	Rectangle getRectanguloPersona() {
		return Rectangle(x, y, ancho, alto);
	}

	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }

	int Get_x() {
		return x;
	}
};