104626011498
1. No se pueden crear objetos de vehículo porque es una clase abstracta, o sea tiene al menos una función virtual. O sea que solo se pueden crear objetos de sus instancias, como carro, moto, camion o bus
2.El destructor de Vehiculo es virtual porque los vehículos se almacenan y eliminan mediante punteros de la clase base. Y a la hora de eliminarlos, en lugar de eliminar vehículo como tal, elimina la instancia directamente
3.Se lanzaría la excpeción de datos inválidos, sin poderlo imprimir. Lo elegí porque pues evita que pasen datos erróneos 