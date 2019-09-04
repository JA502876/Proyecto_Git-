//Programa de conversiones 

#include<iostream>

main ()
{
	printf("Programa de conversiones en distancia \n\n");
	
	char op;
	float val_mm, val_cm, val_m;
	
	printf("a. Conversion en mm \n");
	printf("b. Conversion en cm \n");
	printf("c. Conversion en m \n\n");
	printf("Unidad del valor a introducir:  ");
	scanf("%c", &op);
	
	switch(op)
	{
		case 'a':
			printf("\n Valor en mm: ");
			scanf("%f", &val_mm);
			val_cm=val_mm/10;
			val_m=val_mm/1000;
			printf("\n Conversion a cm: %f", val_cm);
			printf("\n Conversion a m: %f", val_m);
			break;	
			
		case 'b':
			printf("\n Valor en cm: ");
			scanf("%f", &val_cm);
			val_mm=val_cm*10;
			val_m=val_cm/100;
			printf("\n Conversion a mm: %f", val_mm);
			printf("\n Conversion a m: %f", val_m);
			break;
				
		case 'c':
			printf("\n Valor en m: ");
			scanf("%f", &val_m);
			val_mm=val_m*1000;
			val_cm=val_m*100;
			printf("\n Conversion a mm: %f", val_mm);
			printf("\n Conversion a m: %f", val_cm);
			break;	
			default:
				printf("\n Tu opcion no es valida");
	}
	
}
