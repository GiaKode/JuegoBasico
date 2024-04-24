#include "pch.h"
#include <conio.h>
#include "ArregloTodo.h"


int main() {
	
	char tecla;
	Console::CursorVisible = false;
	//Nuevo:
	Arrtodo* arreglo = new Arrtodo();
	while (1) {
		//Objeto Persona
		
		if (_kbhit()) {

			tecla = _getch();
			tecla = toupper(tecla);
			arreglo->getPersona()->Borrar();
			arreglo->getPersona()->Mover(tecla);
			
			switch (tecla) {
			case 'L': arreglo->agregarleon(new Leon(rand() % 111, rand() % 23, 1)); break;
			case 'S': arreglo->agregarserpiente(new Serpiente(rand() % 114, rand() % 27, 4)); break;
			case 'A': arreglo->agregaraguila(new Aguila(rand() % 110, rand() % 23, 3)); break;
			}

		}
		arreglo->borrartodo();
		arreglo->colisiones();
		arreglo->movimientosanimales();
		arreglo->movertodo();
		arreglo->dibujartodo();
		
		_sleep(100);
	}
	
	return 0;
}


