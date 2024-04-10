#include "pch.h"
#include <string>
// #include "Form1.h"
class Sensor { 
public:
    // Constructor
    Sensor(const std::string& nombre, double temperatura, double presion)
        : nombre(nombre), temperatura(temperatura), presion(presion) {}

    // Getters
    std::string getNombre() const { return nombre; }
    double getTemperatura() const { return temperatura; }
    double getPresion() const { return presion; }

private:
    std::string nombre;
    double temperatura;
    double presion;
};

