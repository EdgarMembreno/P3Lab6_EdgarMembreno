#ifndef CASILLASBUSCAMINAS_H
#define CASILLASBUSCAMINAS_H

class CasillasBuscaMinas
{
	public:
		CasillasBuscaMinas(bool);
		bool getEsBomba();
		void setBomba(bool);
		bool getMarcada();
		void setMarcada(bool);
		bool getDescubierta();
		void setDescubierta(bool);
	private:
		bool esBomba;
		bool descubierta;
		char display;
		bool marcada;
		
		
		
};

#endif