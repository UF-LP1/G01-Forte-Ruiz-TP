# G1-FORTE-RUIZ-TP
Fran:
Queríamos dejar unos comentarios respecto al TP:
Seguimos teniendo problemas con los constructores, arreglamos el que te habíamos presentado*, pero surgieron otros.
A la hora de correr las pruebas del Unit Test, nos surgen errores de tipo LNK2019 que por lo que entendimos
(https://learn.microsoft.com/es-es/cpp/error-messages/tool-errors/linker-tools-error-lnk2019?view=msvc-170) al parecer algo esta mal vinculado,
y creemos que tiene que ver con la clase PRODUCTO y/o con sus constructores, porque también aparecen errores de todas sus clases derivadas (comestibles, disfraces y utensilios),
pero no logramos encontrar el error. Capaz que esta relacionado con que nos pedía ponerle llaves a los constructores (de las clases derivadas) en los .h.

*Este lo resolvimos sacando los atributos de JPG y CARRITO que tenía CLIENTE. Creemos que tiene que ver con lo que nos habías dicho, de que no era necesario
agregar un atributo de esos tipos cuando ya hacíamos agregación en el UML. 
