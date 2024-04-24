#pragma once
using namespace System::Drawing;
class Serpiente {
private:
	int x;
	int y;
	int dx;
	int ancho, alto;
public:
	Serpiente(int x, int y, int dx) {
		this->x = x;
		this->y = y;
		this->dx = dx;
		ancho = 6;
		alto = 1;
	}
	//Borrar - Mover -  Dibujar
	void Dibujar() {
		Console::ForegroundColor = ConsoleColor::DarkGreen;
		Console::SetCursorPosition(x, y); cout << "====D-";
	}
	void Borrar() {
		Console::SetCursorPosition(x, y);     cout << "      ";
		Console::SetCursorPosition(x, y + 1); cout << "      ";
		Console::SetCursorPosition(x, y + 2); cout << "      ";
	}
	void Mover() {
		if (x + dx < 2 || 111 < x + dx) {
			dx *= -1;
		}
		x += dx;
	}
	void Realizar_movimiento() {
		Borrar();
		Mover();
		Dibujar();
	}
	Rectangle getRectanguloSerpiente() {
		return Rectangle(x, y, ancho, alto);
	}
};