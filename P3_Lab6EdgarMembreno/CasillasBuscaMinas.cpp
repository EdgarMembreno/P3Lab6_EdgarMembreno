#include "CasillasBuscaMinas.h"

CasillasBuscaMinas::CasillasBuscaMinas(bool bomba) {
	this ->  esBomba = bomba;
	this -> descubierta= false;
	this ->	 display =  '-';
	this ->	 marcada  = false;
}

bool CasillasBuscaMinas:: getEsBomba(){
	
	return this -> esBomba;
}
void CasillasBuscaMinas:: setBomba(bool bomba){
	this -> esBomba = bomba;
	
}

bool CasillasBuscaMinas:: getMarcada(){
	return this -> marcada;
	
}
void CasillasBuscaMinas::  setMarcada(bool marca){
	this ->marcada =  marca;
	
}

bool CasillasBuscaMinas::getDescubierta(){
	return this -> descubierta;
	
}
void CasillasBuscaMinas::  setDescubierta(bool descu){
	this ->descubierta =  descu;
	
}



