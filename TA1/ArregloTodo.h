#pragma once
#include "Persona.h"
#include "Leon.h"
#include "Aguila.h"
#include "Serpiente.h"
#include <vector>

class Arrtodo 
{
private:
	Persona* objpersona;
	Leon* leon;
	Aguila* aguila;
	Serpiente* serpiente;
	//vectores
	vector<Leon*>arreglo;
	vector<Serpiente*>arreglo2;
	vector<Aguila*>arreglo3;
	//dato extra
	char tecla;


public:
	Arrtodo() {
		objpersona = new Persona(58, 28, 1, 1);
		leon = new Leon(2, 2, 1);
		aguila = new Aguila(2, 7, 3);
		serpiente = new Serpiente(2, 18, 4);
		//definir que las copias de cada clase sean las mismas clases
		arreglo.push_back(new Leon(2, 2, 1));
		arreglo2.push_back(new Serpiente(2, 18, 4));
		arreglo3.push_back(new Aguila(2, 7, 3));

	}

	~Arrtodo(){}

	
	void agregarleon(Leon* s) {
		arreglo.push_back(s);
	}
	void agregarserpiente(Serpiente* s) {
		arreglo2.push_back(s);
	}
	void agregaraguila(Aguila* s) {
		arreglo3.push_back(s);
	}

	
	

	//Erase - Move - Draw

	void borrartodo() {

		objpersona->Borrar();
	

		for (int i = 0; i < arreglo.size(); i++) {
			
			arreglo.at(i)->Borrar();
		}

		for (int i = 0; i < arreglo2.size(); i++) {
			
			arreglo2.at(i)->Borrar();
		}

		for (int i = 0; i < arreglo3.size(); i++) {
			
			arreglo3.at(i)->Borrar();
		}
	}

	void movertodo() {

		objpersona->Mover(tecla);

		for (int i = 0; i < arreglo.size(); i++) {
			arreglo[i]->Mover();
		}

		for (int i = 0; i < arreglo2.size(); i++) {
			arreglo2[i]->Mover();
		}

		for (int i = 0; i < arreglo3.size(); i++) {
			arreglo3[i]->Mover();
		}
	}

	void dibujartodo() {

		objpersona->Dibujar();
		

		for (int i = 0; i < arreglo.size(); i++) {
			arreglo[i]->Dibujar();
		}

		for (int i = 0; i < arreglo2.size(); i++) {
			arreglo2[i]->Dibujar();
		}

		for (int i = 0; i < arreglo3.size(); i++) {
			arreglo3[i]->Dibujar();
		}
	}

	void movimientosanimales() {

		leon->Realizar_movimiento();
		aguila->Realizar_movimiento();
		serpiente->Realizar_movimiento();
	}
	
	Persona* getPersona() {

		return objpersona;
	}

	void colisiones() {
		for (int i = 0; i < arreglo.size(); i++) { //tamaño del "dato"
			if (objpersona->getRectanguloPersona().IntersectsWith(arreglo[i]->getRectanguloLeon())) {
				
				arreglo[i]->Borrar();
				objpersona->setX(58);
				objpersona->setY(28);
			}
		}

		for (int i = 0; i < arreglo2.size(); i++) {
			if (objpersona->getRectanguloPersona().IntersectsWith(arreglo2[i]->getRectanguloSerpiente())) {

				arreglo2[i]->Borrar();
				objpersona->setX(58);
				objpersona->setY(28);
			}
		}

	

	}	
	
	/*void Comprobando_limite() {
		for (int i = 0; i < arreglo.size(); i++) 
			if (arreglo[i]->Get_x() > 111) {
				// Eliminamos el león del arreglo
				arreglo.at(i)->Borrar();

			}
	}*/

};

/*
//no necesario:
void insertarposicion(int position, Leon* s) {
	arreglo.insert(arreglo.begin() + position, s);
}
void borrarleon() {
	arreglo.pop_back();
}
void borrarposicion(int position) {
	arreglo[position]->Borrar();
	arreglo.erase(arreglo.begin() + position);
}
*/



