#include<stdio.h>
#include<stdlib.h>

//Declaracion de estructura
struct salon{
			char Nombre[30];
			int Cantidad_tareas, Puntos_participacion;
			float Promedio_final,Calf_examen;
};
//Declaracion de variable globales, grupos de salones
struct salon a[15], b[15], c[15];
main()
{
	//i= contador, Prom_AByC =Promedios de los grupos
	int i; 
	float Prom_A,Prom_B,Prom_C,ac;
	
	//Pedir datos del Grupo A
		printf("---Ingresa los datos del grupo A---\n");
			for(i=0;i<15;i++){
				printf("\nAlumno %i\n",i+1);
				printf("Nombre del alumno: "); scanf("%s",&a[i].Nombre);
				
				do{
					printf("Cantidad de tareas [MAX:5]: "); scanf("%i",&a[i].Cantidad_tareas);
				}while(a[i].Cantidad_tareas>5);
				
				printf("Puntos de participacion: "); scanf("%i",&a[i].Puntos_participacion);
				
				do{
				printf("Calificacion de examen [MAX: 100]: "); scanf("%f",&a[i].Calf_examen);
				}while(a[i].Calf_examen>100);
				
				a[i].Promedio_final = (a[i].Calf_examen*0.5)+(a[i].Cantidad_tareas*10)+a[i].Puntos_participacion;
				
				if(a[i].Promedio_final>100)
					a[i].Promedio_final =100;
			}
			//promedio de grupo A
		for(i=0,ac=0;i<15;i++){	
			ac=ac+a[i].Promedio_final;
			}Prom_A= ac/15;
			
		//Pedir datos del Grupo B
		printf("\n---Ingresa los datos del grupo B---\n");
			for(i=0;i<15;i++){
				printf("\nAlumno %i\n",i+1);
				printf("Nombre del alumno: "); scanf("%s",&b[i].Nombre);
				
				do{
				printf("Cantidad de tareas [MAX:5]: "); scanf("%i",&b[i].Cantidad_tareas);
				}while(b[i].Cantidad_tareas>5);
				
				printf("Puntos de participacion: "); scanf("%i",&b[i].Puntos_participacion);
				
				do{
				printf("Calificacion de examen [MAX:100]: "); scanf("%f",&b[i].Calf_examen);
				}while(b[i].Calf_examen>100);
				
				b[i].Promedio_final = (b[i].Calf_examen*0.5)+(b[i].Cantidad_tareas*10)+b[i].Puntos_participacion;
				
				if(b[i].Promedio_final>100)
					b[i].Promedio_final =100;
			}
	//promedio de grupo B
		for(i=0,ac=0;i<15;i++){	
			ac=ac+b[i].Promedio_final;
			}Prom_B= ac/15;
			
		//Pedir datos del Grupo C
		printf("\n---Ingresa los datos del grupo C---\n");
			for(i=0;i<15;i++){
				printf("\nAlumno %i\n",i+1);
				printf("Nombre del alumno: "); scanf("%s",&c[i].Nombre);
				
				do{
				printf("Cantidad de tareas [MAX:5]: "); scanf("%i",&c[i].Cantidad_tareas);
				}while(c[i].Cantidad_tareas>5);
				
				printf("Puntos de participacion: "); scanf("%i",&c[i].Puntos_participacion);
				
				do{
				printf("Calificacion de examen [MAX:100]: "); scanf("%f",&c[i].Calf_examen);
				}while(c[i].Calf_examen>100);
				
				c[i].Promedio_final = (c[i].Calf_examen*0.5)+(c[i].Cantidad_tareas*10)+c[i].Puntos_participacion;
				
				if(c[i].Promedio_final>100)
					c[i].Promedio_final =100;
			}
		//promedio de grupo C
		for(i=0,ac=0;i<15;i++){	
			ac=ac+c[i].Promedio_final;
			}Prom_C= ac/15;
		
		//imprimir Promedios de grupos
		printf("\nPromedio del grupo A: %.2f\nPromedio del grupo B: %.2f\nPromedio del grupo C: %.2f\n",Prom_A,Prom_B,Prom_C);
		//Grupo con mayor promedio
		if(Prom_A>Prom_B)
		{
		
			if(Prom_A>Prom_C)
				printf("\nEl grupo A obtuvo mayor calificacion con: %.2f",Prom_A);
			else 
				printf("\nEl grupo C obtuvo mayor calificacion con: %.2f",Prom_C);
		}
		else{
		
			if(Prom_B>Prom_C)
				printf("\nEl grupo B obtuvo mayor calificacion con: %.2f",Prom_B);
			else
				printf("\nEl grupo C obtuvo mayor calificacion con: %.2f",Prom_C);
		}
				
		//Imprimir todos los datos 
		printf("-----------------------\nGrupo A\n"); 
			for(i=0;i<15;i++){
				printf("%i) %s\tNum. Tareas: %i\tCalificacion Examen: %.2f\tPuntos extras: %i\tPromedio: %.2f\n",i+1,a[i].Nombre,a[i].Cantidad_tareas,a[i].Calf_examen,a[i].Puntos_participacion,a[i].Promedio_final);
			}
		
		printf("-----------------------\nGrupo B\n"); 
			for(i=0;i<15;i++){
				printf("%i) %s\tNum. Tareas: %i\tCalificacion Examen: %.2f\tPuntos extras: %i\tPromedio: %.2f\n",i+1,b[i].Nombre,b[i].Cantidad_tareas,b[i].Calf_examen,b[i].Puntos_participacion,b[i].Promedio_final);
			}
		
		printf("-----------------------\nGrupo C\n"); 
			for(i=0;i<15;i++){
				printf("%i) %s\tNum. Tareas: %i\tCalificacion Examen: %.2f\tPuntos extras: %i\tPromedio: %.2f\n",i+1,c[i].Nombre,c[i].Cantidad_tareas,c[i].Calf_examen,c[i].Puntos_participacion,c[i].Promedio_final);
			}
								
}
