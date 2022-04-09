#ifndef _CAVION_H
#define _CAVION_H

class cAvion {
    public: 

        #pragma region constructor y destructor 

            // constructor parametrizado
            cAvion(unsigned int _totalPasajeros, unsigned int _pesoMaximo, unsigned int _nPasajeros);
            // destructor
            ~cAvion();

        #pragma endregion

        #pragma region metodos

            /// <summary>
            /// Depegue del avion. Esto implica que
            ///       1. La fecha y el numero de vuelo del pasajero deja de ser valida
            ///       2. Debe cambiar el estado del vuelo
            ///       3. [...]
            /// </summary>
            void despegar();


            void aterrizar();
            void pedirPermiso();
            void chequearCargaMaxima();

        #pragma endregion
    private: 
        const unsigned int ID;
        unsigned int totalPasajeros;
        unsigned int pesoMaximo;
        unsigned int nPasajeros;
};

#endif //_CAVION_H