#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*
	1. Solicitar al usuario un n�mero entero positivo P menor o igual que 104. 
	Si el n�mero ingresado no es correcto mostrar un mensaje de error y solicitar nuevamente el n�mero, 
	hasta que el usuario introduzca un n�mero v�lido.                    (5 ptos.)
	------------------------------------------------------------------------------------------------------------
	2. Con el valor P dado por el usuario en el paso anterior, calcular la suma de:  
    P2 � (P�1)2 + (P�2)2 � (P�3)2 + (P�4)2 � (P�5)2 +� � (P � n-1)2 + (P � n) 2 
    El �ltimo t�rmino de la suma es igual a 1 o -1       
    Por ejemplo, si el valor de P es igual a 5 se obtiene: 
    25 � 16 + 9 � 4 + 1 = 15 
   Si el valor de P es igual a 6: 
    36 � 25 + 16 � 9 + 4 � 1 = 21             (10 ptos.) 
	--------------------------------------------------------------------------------------------------------------
	3. Determinar si el n�mero P es un n�mero invicto.
	Un n�mero es invicto cuando al borrar los d�gitos que no son primos,
	nos queda un n�mero que s� lo es.
	Por ejemplo: 9362 se obtiene 32 que no es primo (no es un n�mero invicto) 
	1783 se obtiene 73 que si es primo (por lo tanto si es un n�mero invicto)                  (30 ptos.)
	---------------------------------------------------------------------------------------------------------------
	4. Un n�mero es �feliz� si al sumar el cuadrado de cada uno de los d�gitos que lo conforma y repetir este proceso un n�mero finito de veces la suma converge a 1.
   Para algunos n�meros, la cantidad de iteraciones necesarias para que la suma sea 1 puede ser mayor que para otros y a esa cantidad de iteraciones se le conoce como la �distancia de la felicidad�. 
   Por ejemplo, para el caso del n�mero 1 su �distancia de la felicidad� es 0 ya que 12 = 1.   
   No as� para el 23 cuya �distancia de la felicidad� es 3, como se muestra a continuaci�n: 
   N�mero 23 13 10 
   Proceso 22 + 32  12 + 32 12 + 02 
   Suma 13 10 1 
   Iteraci�n 1 2 3     
   Distancia de la felicidad  
   Un n�mero se dice que es �no feliz� cuando est� infinitamente lejos de llegar a la felicidad, es decir, se queda atrapado en un ciclo y su suma nunca llega a 1.
   Se puede demostrar que todo n�mero �no feliz� se queda atrapado en el ciclo 4, 16, 37, 58, 89, 145, 42, 20, 4, 16, 37� y as� para siempre sin llegar al 1.
   Por ejemplo, este es el caso del n�mero 11, el n�mero 20 y el n�mero 89 como se observa en las siguientes secuencias:   
   12 + 12 = 22 = 42 = 12 + 62 = 32 + 72 = 52 + 82 = 82 + 92 = 12  + 42 + 52 = 42 + 22 = 22 + 02 = 42 = . . .  
   11 2 4 16 37 58 89 145 42 20 4 16     
   22 + 02 = 42 = 12 + 62 = 32 + 72 = 52 + 82 = 82 + 92 = 12  + 42 + 52 = 42 + 22 = 22 + 02 = 42 = . . .    
   20 4 16 37 58 89 145 42 20 4 16   
   82 + 92 = 12  + 42 + 52 = 42 + 22 = 22 + 02 = 42 = 12 + 62 = 32 + 72 = 52 + 82 = 82 + 92 = 12  + 42 + 52 = 42 + 22 = 22 + 02 = 42 = . . . 
   89 145 42 20 4 16 37 58 89 145 42 20 4 16  
   Se requiere determinar cu�ntos n�meros no felices hay entre 1 y P.  (30 ptos.) 
   ------------------------------------------------------------------------------------------------------
   5. El usuario podr� realizar las operaciones que requiera, sin salir del programa.         (5 ptos.) 
   ------------------------------------------------------------------------------------------------------
	*/
	
	
	
	return 0;
}
