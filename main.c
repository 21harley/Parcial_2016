#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*
	1. Solicitar al usuario un número entero positivo P menor o igual que 104. 
	Si el número ingresado no es correcto mostrar un mensaje de error y solicitar nuevamente el número, 
	hasta que el usuario introduzca un número válido.                    (5 ptos.)
	------------------------------------------------------------------------------------------------------------
	2. Con el valor P dado por el usuario en el paso anterior, calcular la suma de:  
    P2 – (P–1)2 + (P–2)2 – (P–3)2 + (P–4)2 – (P–5)2 +… – (P – n-1)2 + (P – n) 2 
    El último término de la suma es igual a 1 o -1       
    Por ejemplo, si el valor de P es igual a 5 se obtiene: 
    25 – 16 + 9 – 4 + 1 = 15 
   Si el valor de P es igual a 6: 
    36 – 25 + 16 – 9 + 4 – 1 = 21             (10 ptos.) 
	--------------------------------------------------------------------------------------------------------------
	3. Determinar si el número P es un número invicto.
	Un número es invicto cuando al borrar los dígitos que no son primos,
	nos queda un número que sí lo es.
	Por ejemplo: 9362 se obtiene 32 que no es primo (no es un número invicto) 
	1783 se obtiene 73 que si es primo (por lo tanto si es un número invicto)                  (30 ptos.)
	---------------------------------------------------------------------------------------------------------------
	4. Un número es “feliz” si al sumar el cuadrado de cada uno de los dígitos que lo conforma y repetir este proceso un número finito de veces la suma converge a 1.
   Para algunos números, la cantidad de iteraciones necesarias para que la suma sea 1 puede ser mayor que para otros y a esa cantidad de iteraciones se le conoce como la “distancia de la felicidad”. 
   Por ejemplo, para el caso del número 1 su “distancia de la felicidad” es 0 ya que 12 = 1.   
   No así para el 23 cuya “distancia de la felicidad” es 3, como se muestra a continuación: 
   Número 23 13 10 
   Proceso 22 + 32  12 + 32 12 + 02 
   Suma 13 10 1 
   Iteración 1 2 3     
   Distancia de la felicidad  
   Un número se dice que es “no feliz” cuando está infinitamente lejos de llegar a la felicidad, es decir, se queda atrapado en un ciclo y su suma nunca llega a 1.
   Se puede demostrar que todo número “no feliz” se queda atrapado en el ciclo 4, 16, 37, 58, 89, 145, 42, 20, 4, 16, 37… y así para siempre sin llegar al 1.
   Por ejemplo, este es el caso del número 11, el número 20 y el número 89 como se observa en las siguientes secuencias:   
   12 + 12 = 22 = 42 = 12 + 62 = 32 + 72 = 52 + 82 = 82 + 92 = 12  + 42 + 52 = 42 + 22 = 22 + 02 = 42 = . . .  
   11 2 4 16 37 58 89 145 42 20 4 16     
   22 + 02 = 42 = 12 + 62 = 32 + 72 = 52 + 82 = 82 + 92 = 12  + 42 + 52 = 42 + 22 = 22 + 02 = 42 = . . .    
   20 4 16 37 58 89 145 42 20 4 16   
   82 + 92 = 12  + 42 + 52 = 42 + 22 = 22 + 02 = 42 = 12 + 62 = 32 + 72 = 52 + 82 = 82 + 92 = 12  + 42 + 52 = 42 + 22 = 22 + 02 = 42 = . . . 
   89 145 42 20 4 16 37 58 89 145 42 20 4 16  
   Se requiere determinar cuántos números no felices hay entre 1 y P.  (30 ptos.) 
   ------------------------------------------------------------------------------------------------------
   5. El usuario podrá realizar las operaciones que requiera, sin salir del programa.         (5 ptos.) 
   ------------------------------------------------------------------------------------------------------
	*/
	
	
	
	return 0;
}
