#ifndef _CAEROPUERTO_H
#define _CAEROPUERTO_H

class cAeropuerto {
public: 

cAeropuerto(void const unsigned int ID, void unsigned int totalAeropuerto);

~cAeropuerto();

bool agregarAvion(cAvion* avion);

bool eliminarAvion(int pos);
    
bool darPermiso();

private: 
    void const unsigned int ID;
    void unsigned int capacidadAeropuerto;
};

#endif //_CAEROPUERTO_H