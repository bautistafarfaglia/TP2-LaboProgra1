/**
 * Project Untitled
 */


#ifndef _CVUELO_H
#define _CVUELO_H

class cVuelo {
public: 
    
void bool validarPasajero();
    
void bool agregarPasajero();
    
void bool cambiarPasajero();
    
void bool eliminarPasajero();
private: 
    void unsigned int numeroDeVuelo;
    void eEstado estado;
    void bool partidaArribo;
    void static string** posibleDestino;
};

#endif //_CVUELO_H