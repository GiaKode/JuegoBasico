#pragma once
class Aguila {
private:
	int x;
	int y;
	int dx;
public:
	Aguila(int x, int y, int dx) {
		this->x = x;
		this->y = y;
		this->dx = dx;
	}
	//Borrar - Mover -  Dibujar
	void Dibujar() {
		Console::ForegroundColor = ConsoleColor::DarkYellow;
		Console::SetCursorPosition(x, y);     cout << " ____ ";
		Console::SetCursorPosition(x, y + 1); cout << "(O)(O)";
		Console::SetCursorPosition(x, y + 2); cout << "  \\/ ";
	}
	void Borrar() {
		Console::SetCursorPosition(x, y);   cout << "      ";
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
};