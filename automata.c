/*PROGRAMA DE UN AUTOMATA DETERMINISTICO
  PARA LENGUALES FORMALES Y AUTOMATAS
  EVALUA SI UNA CADENA DE 1'S Y 0'S TERMINA EN '01'*/

/*NOTA: EL AUTOMATA AUN NO ESTA OPTIMIZADO PARA RECIBIR
        UNICAMENTE CEROS Y UNOS, SI RECIBE OTRO CARACTER
        EN ESE MOMENTO TERMINARA LA CADENA Y EVALUARA*/

#include  <stdio.h>

int main()
{
	char d[100];
  int i=0;    /*INDICE DEL ARREGLO*/
  int e=1;    /*INDICA EN QUE ESTADO SE ENCUENTRA EL AUTOMATA*/
	printf("\nAutomata no deterministico.\nEvalua si las cadenas terminan en '01'");
	printf("\n\nIngresa tu enunciado: ");
  scanf("%s",d);

  do{         /*LA VARIABLE 'e' CAMBIA DEPENDIENDO DE LA ENTRADA DEL ENUNCIADO*/

    switch(e){

      case 1:
        if (d[i]=='0')
          e=2;
        if (d[i]=='1')
          e=1;
      break;

      case 2:
          if (d[i]=='0')
            e=2;
          if (d[i]=='1')
            e=3;
      break;

      case 3:
          if (d[i]=='0')
            e=2;
          if (d[i]=='1')
            e=1;
      break;
    }

    i++;

  }while(d[i]=='1' || d[i]=='0');   /*TERMINA EN EL MOMENTO EN QUE EL ARREGLO NO CONTENGA UN '1' O '0'*/

  if (e==3)
    printf("\nEl enunciado termina en '01'\nCUMPLE.\n\n");
  else
    printf("\nEl enunciado NO termina en '01'\nNO CUMPLE.\n\n");

}