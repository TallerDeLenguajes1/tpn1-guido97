1 b
I)
El archivo .gitignore sirve para no hacerle el seguimiento a ciertos archivos, es decir ignorarlos. Esto es útil para ocasiones como por ejemplo ignorar cosas que no sean relativas al proyecto a compartir o las incluidas en cada sistema y no se necesite redundar la información (como librerías). Tambien para archivos intermedios generados, resultados de análisis, de pruebas, o copias de seguridad. Además esto le da simplicidad al uso de git, como leer la salida de git status.
II)
Se debería hacer siempre que se vea útil, dado que otorga ventajas. Sin embargo si se realiza un repositorio dedicado a brindar información como wikis, el archivo .gitignore no tendría sentido.
III)
La página www.gitignore.io brinda una forma común para completar el .gitignore basado en el lenguaje o programa donde se va a colocar.
IV)
Por lo pronto crearía un .gitignore en la raiz del repositorio y lo rellenaría con lo sugerido por la página anterior basado en el lenguaje C y Visual Studio Code, luego iría modificando según las necesidades, y si necesito excluir archivos de un subdirectorio, lo más probable es que agregue un .gitignore dentro del mismo.

2)
I)El resultado es el mismo, ya que el puntero guarda efectivamente la direccion de la variable.
II)Lo que se obtiene es la dirección de memoria donde se aloja el puntero;
III)No es lo mismo a los anteriores;
IV)Ya que el puntero es una variable distinta, y por ello está alojada en otro espacio de memoria, dando como resultado direcciones distintas.