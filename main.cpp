#include <iostream>
#include "Producto/Producto.h"
#include "Fruta/Fruta.h"
#include "Lacteo/Lacteo.h"
#include "Limpieza/Limpieza.h"
#include "NoPerecible/NoPerecible.h"

int main() {

    Producto *productos[] = {

            new Fruta("Platano", 25, "Amarillo", 20),
            new Fruta("Pera", 20, "Verde", 40),
            new Lacteo("Leche", 40, 600, 2),
            new Lacteo("Crema", 10, 400, 5),
            new Limpieza("Jabon", 30, "Koh", 15),
            new Limpieza("Cloro", 50, "HCI", 40),
            new NoPerecible("Sardina", 20, "10/10/25", "Pescado"),
            new NoPerecible("Atun", 15, "10/20/26", "Pescados")


    };
    for(auto producto : productos)
        producto->showProduct();
    for(auto producto :productos)
        delete producto;

    return 0;
}
