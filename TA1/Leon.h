#pragma once
#include <iostream>
using namespace System::Drawing;
class Leon {

private:
	int x;
	int y;
	int dx;
	int ancho, alto;

public:
	Leon(int x, int y, int dx) {
		this->x = x;
		this->y = y;
		this->dx = dx;
		ancho = 9;
		alto = 4;
		

	}
	//borrar - dibujar
	void Dibujar() {
		Console::ForegroundColor = ConsoleColor::Yellow;
		Console::SetCursorPosition(x, y);     cout << ".-WWWWW-.";
		Console::SetCursorPosition(x, y + 1); cout << " WO---OW ";
		Console::SetCursorPosition(x, y + 2); cout << "   ***   ";
		Console::SetCursorPosition(x, y + 3); cout << "    *    ";
	}
	void Borrar() {
		Console::SetCursorPosition(x, y);     cout << "         ";
		Console::SetCursorPosition(x, y + 1); cout << "         ";
		Console::SetCursorPosition(x, y + 2); cout << "         ";
		Console::SetCursorPosition(x, y + 3); cout << "         ";

	}
	void Mover() {
		if (x + dx < 0 || 111 < x + dx) {
			
		
			dx *= -1;
			
			
		}
		x += dx;
	}
	void Realizar_movimiento() {
		Borrar();
		Mover();
		Dibujar();

	}
	/*int Get_x() {
		return x;
	}*/

	Rectangle getRectanguloLeon() {
		return Rectangle(x, y, ancho, alto);
	}
};
