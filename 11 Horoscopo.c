//LIBRERIAS USADAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//PROTOTIPOS DE LAS FUNCIONES
void vacio();
void titulo();
void llenarSigno();
void signo();
void numero();
void color();
void futuro();
void salud();
void relaciones();
void ingresarUsuario();
void menuPrincipal();

//ESTRUCTURA HOROSCOPO
struct horoscopo{
	char signo[25];
	char futuro[600];
	char salud[600];
	char relaciones[600];
	int numero;
	char color[25];
}arreglo[12];


//ESTRUCTURA USUARIO
struct usuario{
	int dia;
	int mes;
	int anio;
	char nombre[50];
	char sexo[25];
}datos;

//FUNCION PRINCIPAL MAIN
int main(){
	signo();
	numero();
	color();
	futuro();
	salud();
	relaciones();
	ingresarUsuario();
}


void ingresarUsuario(){
	system("cls");
	titulo();
	printf("INGRESE SU FECHA DE NACIMIENTO.\n\n");
	
	do{
		printf("Ingrese dia: ");
		scanf("%i",&datos.dia);
	}while(datos.dia < 1 || datos.dia > 31);
	
	do{
	printf("\nIngrese mes: ");
	scanf("%i",&datos.mes);
	}while(datos.mes < 1 || datos.mes > 12);
	
	do{
	printf("\nIngrese a%co: ",164);
	scanf("%i",&datos.anio);
	}while(datos.anio < 1900 || datos.anio > 2021);
	
	fflush(stdin);
	printf("\nIngrese su nombre: ");
	gets(datos.nombre);
	
	printf("\nIngrese sexo: ");
	gets(datos.sexo);
	menuPrincipal(datos.dia,datos.mes,datos.anio,datos.nombre,datos.sexo);
}


//FUNCION QUE MUESTRA EN PANTALLA EL MENU DE OPCIONES
void menuPrincipal(){
	int op;
	
	do{
		system("cls");
		titulo();
		printf("Hola %s, que deseas saber?\n\n",datos.nombre);
		printf("1. Signo Zodiacal.\n");
		printf("2. Predecir como sera el futuro 2022.\n");
		printf("3. Como estara de salud.\n");
		printf("4. Que pasara con las relaciones.\n");
		printf("5. Cuales son tu numero y color de la suerte\n");
		printf("6. Salir del programa\n\n");
		printf("Ingrese opcion: ");
		scanf("%i",&op);	
	}while(op < 1 || op > 6);
	system("cls");
	titulo();
	printf("Usuario: %s                                Sexo: %s                    Fecha de nacimiento: %i/%i/%i\n\n",datos.nombre,datos.sexo,datos.dia,datos.mes,datos.anio);
	
	switch(op){
		case 1:
			if((datos.dia >= 21 && datos.mes == 3) || (datos.dia <= 20 && datos.mes == 4)){
				printf("Tu signo zodiacal es: %s",arreglo[0].signo);
			}
			
			else if((datos.dia >= 21 && datos.mes == 4) || (datos.dia <= 20 && datos.mes == 5)){
				printf("Tu signo zodiacal es: %s",arreglo[1].signo);
			}
			
			else if((datos.dia >= 22 && datos.mes == 5) || (datos.dia <= 21 && datos.mes == 6)){
				printf("Tu signo zodiacal es: %s",arreglo[2].signo);
			}
			
			else if((datos.dia >= 22 && datos.mes == 6) || (datos.dia <= 23 && datos.mes == 7)){
				printf("Tu signo zodiacal es: %s",arreglo[3].signo);
			}
			
			else if((datos.dia >= 24 && datos.mes == 7) || (datos.dia <= 23 && datos.mes == 8)){
				printf("Tu signo zodiacal es: %s",arreglo[4].signo);
			}
			
			else if((datos.dia >= 24 && datos.mes == 8) || (datos.dia <= 23 && datos.mes == 9)){
				printf("Tu signo zodiacal es: %s",arreglo[5].signo);
			}
			
			else if((datos.dia >= 24 && datos.mes == 9) || (datos.dia <= 23 && datos.mes == 10)){
				printf("Tu signo zodiacal es: %s",arreglo[6].signo);
			}
			
			else if((datos.dia >= 24 && datos.mes == 10) || (datos.dia <= 22 && datos.mes == 11)){
				printf("Tu signo zodiacal es: %s",arreglo[7].signo);
			}
			
			else if((datos.dia >= 23 && datos.mes == 11) || (datos.dia <= 21 && datos.mes == 12)){
				printf("Tu signo zodiacal es: %s",arreglo[8].signo);
			}
			
			else if((datos.dia >= 22 && datos.mes == 12) || (datos.dia <= 20 && datos.mes == 1)){
				printf("Tu signo zodiacal es: %s",arreglo[9].signo);
			}
			
			else if((datos.dia >= 2 && datos.mes == 1) || (datos.dia <= 19 && datos.mes == 2)){
				printf("Tu signo zodiacal es: %s",arreglo[10].signo);
			}

			else if((datos.dia >= 20 && datos.mes == 2) || (datos.dia <= 20 && datos.mes == 3)){
				printf("Tu signo zodiacal es: %s",arreglo[11].signo);
			}
			
			printf("\n\n");
			system("pause");
			menuPrincipal();
			
			break;
		
		case 2:
			if((datos.dia >= 21 && datos.mes == 3) || (datos.dia <= 20 && datos.mes == 4)){
				printf("PREDICCION PARA EL FUTURO 2022\n\n%s",arreglo[0].futuro);
			}
			
			else if((datos.dia >= 21 && datos.mes == 4) || (datos.dia <= 20 && datos.mes == 5)){
				printf("PREDICCION PARA EL FUTURO 2022\n\n%s",arreglo[1].futuro);
			}
			
			else if((datos.dia >= 22 && datos.mes == 5) || (datos.dia <= 21 && datos.mes == 6)){
				printf("PREDICCION PARA EL FUTURO 2022\n\n%s",arreglo[2].futuro);
			}
			
			else if((datos.dia >= 22 && datos.mes == 6) || (datos.dia <= 23 && datos.mes == 7)){
				printf("PREDICCION PARA EL FUTURO 2022\n\n%s",arreglo[3].futuro);
			}
			
			else if((datos.dia >= 24 && datos.mes == 7) || (datos.dia <= 23 && datos.mes == 8)){
				printf("PREDICCION PARA EL FUTURO 2022\n\n%s",arreglo[4].futuro);
			}
			
			else if((datos.dia >= 24 && datos.mes == 8) || (datos.dia <= 23 && datos.mes == 9)){
				printf("PREDICCION PARA EL FUTURO 2022\n\n%s",arreglo[5].futuro);
			}
			
			else if((datos.dia >= 24 && datos.mes == 9) || (datos.dia <= 23 && datos.mes == 10)){
				printf("PREDICCION PARA EL FUTURO 2022\n\n%s",arreglo[6].futuro);
			}
			
			else if((datos.dia >= 24 && datos.mes == 10) || (datos.dia <= 22 && datos.mes == 11)){
				printf("PREDICCION PARA EL FUTURO 2022\n\n%s",arreglo[7].futuro);
			}
			
			else if((datos.dia >= 23 && datos.mes == 11) || (datos.dia <= 21 && datos.mes == 12)){
				printf("PREDICCION PARA EL FUTURO 2022\n\n%s",arreglo[8].futuro);
			}
			
			else if((datos.dia >= 22 && datos.mes == 12) || (datos.dia <= 20 && datos.mes == 1)){
				printf("PREDICCION PARA EL FUTURO 2022\n\n%s",arreglo[9].futuro);
			}
			
			else if((datos.dia >= 2 && datos.mes == 1) || (datos.dia <= 19 && datos.mes == 2)){
				printf("PREDICCION PARA EL FUTURO 2022\n\n%s",arreglo[10].futuro);
			}

			else if((datos.dia >= 20 && datos.mes == 2) || (datos.dia <= 20 && datos.mes == 3)){
				printf("PREDICCION PARA EL FUTURO 2022\n\n%s",arreglo[11].futuro);
			}
			
			printf("\n\n");
			system("pause");
			menuPrincipal();
			
			break;
			
		case 3:
			if((datos.dia >= 21 && datos.mes == 3) || (datos.dia <= 20 && datos.mes == 4)){
				printf("PREDICCION PARA LA SALUD\n\n%s",arreglo[0].salud);
			}
			
			else if((datos.dia >= 21 && datos.mes == 4) || (datos.dia <= 20 && datos.mes == 5)){
				printf("PREDICCION PARA LA SALUD\n\n%s",arreglo[1].salud);
			}
			
			else if((datos.dia >= 22 && datos.mes == 5) || (datos.dia <= 21 && datos.mes == 6)){
				printf("PREDICCION PARA LA SALUD\n\n%s",arreglo[2].salud);
			}
			
			else if((datos.dia >= 22 && datos.mes == 6) || (datos.dia <= 23 && datos.mes == 7)){
				printf("PREDICCION PARA LA SALUD\n\n%s",arreglo[3].salud);
			}
			
			else if((datos.dia >= 24 && datos.mes == 7) || (datos.dia <= 23 && datos.mes == 8)){
				printf("PREDICCION PARA LA SALUD\n\n%s",arreglo[4].salud);
			}
			
			else if((datos.dia >= 24 && datos.mes == 8) || (datos.dia <= 23 && datos.mes == 9)){
				printf("PREDICCION PARA LA SALUD\n\n%s",arreglo[5].salud);
			}
			
			else if((datos.dia >= 24 && datos.mes == 9) || (datos.dia <= 23 && datos.mes == 10)){
				printf("PREDICCION PARA LA SALUD\n\n%s",arreglo[6].salud);
			}
			
			else if((datos.dia >= 24 && datos.mes == 10) || (datos.dia <= 22 && datos.mes == 11)){
				printf("PREDICCION PARA LA SALUD\n\n%s",arreglo[7].salud);
			}
			
			else if((datos.dia >= 23 && datos.mes == 11) || (datos.dia <= 21 && datos.mes == 12)){
				printf("PREDICCION PARA LA SALUD\n\n%s",arreglo[8].salud);
			}
			
			else if((datos.dia >= 22 && datos.mes == 12) || (datos.dia <= 20 && datos.mes == 1)){
				printf("PREDICCION PARA LA SALUD\n\n%s",arreglo[9].salud);
			}
			
			else if((datos.dia >= 2 && datos.mes == 1) || (datos.dia <= 19 && datos.mes == 2)){
				printf("PREDICCION PARA LA SALUD\n\n%s",arreglo[10].salud);
			}

			else if((datos.dia >= 20 && datos.mes == 2) || (datos.dia <= 20 && datos.mes == 3)){
				printf("PREDICCION PARA LA SALUD\n\n%s",arreglo[11].salud);
			}
			
			printf("\n\n");
			system("pause");
			menuPrincipal();
			
			break;
		
		case 4:
			if((datos.dia >= 21 && datos.mes == 3) || (datos.dia <= 20 && datos.mes == 4)){
				printf("PREDICCION PARA LAS RELACIONES\n\n%s",arreglo[0].relaciones);
			}
			
			else if((datos.dia >= 21 && datos.mes == 4) || (datos.dia <= 20 && datos.mes == 5)){
				printf("PREDICCION PARA LAS RELACIONES\n\n%s",arreglo[1].relaciones);
			}
			
			else if((datos.dia >= 22 && datos.mes == 5) || (datos.dia <= 21 && datos.mes == 6)){
				printf("PREDICCION PARA LAS RELACIONES\n\n%s",arreglo[2].relaciones);
			}
			
			else if((datos.dia >= 22 && datos.mes == 6) || (datos.dia <= 23 && datos.mes == 7)){
				printf("PREDICCION PARA LAS RELACIONES\n\n%s",arreglo[3].relaciones);
			}
			
			else if((datos.dia >= 24 && datos.mes == 7) || (datos.dia <= 23 && datos.mes == 8)){
				printf("PREDICCION PARA LAS RELACIONES\n\n%s",arreglo[4].relaciones);
			}
			
			else if((datos.dia >= 24 && datos.mes == 8) || (datos.dia <= 23 && datos.mes == 9)){
				printf("PREDICCION PARA LAS RELACIONES\n\n%s",arreglo[5].relaciones);
			}
			
			else if((datos.dia >= 24 && datos.mes == 9) || (datos.dia <= 23 && datos.mes == 10)){
				printf("PREDICCION PARA LAS RELACIONES\n\n%s",arreglo[6].relaciones);
			}
			
			else if((datos.dia >= 24 && datos.mes == 10) || (datos.dia <= 22 && datos.mes == 11)){
				printf("PREDICCION PARA LAS RELACIONES\n\n%s",arreglo[7].relaciones);
			}
			
			else if((datos.dia >= 23 && datos.mes == 11) || (datos.dia <= 21 && datos.mes == 12)){
				printf("PREDICCION PARA LAS RELACIONES\n\n%s",arreglo[8].relaciones);
			}
			
			else if((datos.dia >= 22 && datos.mes == 12) || (datos.dia <= 20 && datos.mes == 1)){
				printf("PREDICCION PARA LAS RELACIONES\n\n%s",arreglo[9].relaciones);
			}
			
			else if((datos.dia >= 2 && datos.mes == 1) || (datos.dia <= 19 && datos.mes == 2)){
				printf("PREDICCION PARA LAS RELACIONES\n\n%s",arreglo[10].relaciones);
			}

			else if((datos.dia >= 20 && datos.mes == 2) || (datos.dia <= 20 && datos.mes == 3)){
				printf("PREDICCION PARA LAS RELACIONES\n\n%s",arreglo[11].relaciones);
			}
			
			printf("\n\n");
			system("pause");
			menuPrincipal();
			
			break;
		
		case 5:
			if((datos.dia >= 21 && datos.mes == 3) || (datos.dia <= 20 && datos.mes == 4)){
				printf("PREDICCION PARA EL COLOR Y NUMERO DE SUERTE\n\nColor de la suerte: %s\n\nNumero de la suerte: %i",arreglo[0].color,arreglo[0].numero);
			}
			
			else if((datos.dia >= 21 && datos.mes == 4) || (datos.dia <= 20 && datos.mes == 5)){
				printf("PREDICCION PARA EL COLOR Y NUMERO DE SUERTE\n\nColor de la suerte: %s\n\nNumero de la suerte: %i",arreglo[1].color,arreglo[1].numero);
			}
			
			else if((datos.dia >= 22 && datos.mes == 5) || (datos.dia <= 21 && datos.mes == 6)){
				printf("PREDICCION PARA EL COLOR Y NUMERO DE SUERTE\n\nColor de la suerte: %s\n\nNumero de la suerte: %i",arreglo[2].color,arreglo[2].numero);
			}
			
			else if((datos.dia >= 22 && datos.mes == 6) || (datos.dia <= 23 && datos.mes == 7)){
				printf("PREDICCION PARA EL COLOR Y NUMERO DE SUERTE\n\nColor de la suerte: %s\n\nNumero de la suerte: %i",arreglo[3].color,arreglo[3].numero);
			}
			
			else if((datos.dia >= 24 && datos.mes == 7) || (datos.dia <= 23 && datos.mes == 8)){
				printf("PREDICCION PARA EL COLOR Y NUMERO DE SUERTE\n\nColor de la suerte: %s\n\nNumero de la suerte: %i",arreglo[4].color,arreglo[4].numero);
			}
			
			else if((datos.dia >= 24 && datos.mes == 8) || (datos.dia <= 23 && datos.mes == 9)){
				printf("PREDICCION PARA EL COLOR Y NUMERO DE SUERTE\n\nColor de la suerte: %s\n\nNumero de la suerte: %i",arreglo[5].color,arreglo[5].numero);
			}
			
			else if((datos.dia >= 24 && datos.mes == 9) || (datos.dia <= 23 && datos.mes == 10)){
				printf("PREDICCION PARA EL COLOR Y NUMERO DE SUERTE\n\nColor de la suerte: %s\n\nNumero de la suerte: %i",arreglo[6].color,arreglo[6].numero);
			}
			
			else if((datos.dia >= 24 && datos.mes == 10) || (datos.dia <= 22 && datos.mes == 11)){
				printf("PREDICCION PARA EL COLOR Y NUMERO DE SUERTE\n\nColor de la suerte: %s\n\nNumero de la suerte: %i",arreglo[7].color,arreglo[7].numero);
			}
			
			else if((datos.dia >= 23 && datos.mes == 11) || (datos.dia <= 21 && datos.mes == 12)){
				printf("PREDICCION PARA EL COLOR Y NUMERO DE SUERTE\n\nColor de la suerte: %s\n\nNumero de la suerte: %i",arreglo[8].color,arreglo[8].numero);
			}
			
			else if((datos.dia >= 22 && datos.mes == 12) || (datos.dia <= 20 && datos.mes == 1)){
				printf("PREDICCION PARA EL COLOR Y NUMERO DE SUERTE\n\nColor de la suerte: %s\n\nNumero de la suerte: %i",arreglo[9].color,arreglo[9].numero);
			}
			
			else if((datos.dia >= 2 && datos.mes == 1) || (datos.dia <= 19 && datos.mes == 2)){
				printf("PREDICCION PARA EL COLOR Y NUMERO DE SUERTE\n\nColor de la suerte: %s\n\nNumero de la suerte: %i",arreglo[10].color,arreglo[10].numero);
			}

			else if((datos.dia >= 20 && datos.mes == 2) || (datos.dia <= 20 && datos.mes == 3)){
				printf("PREDICCION PARA EL COLOR Y NUMERO DE SUERTE\n\nColor de la suerte: %s\n\nNumero de la suerte: %i",arreglo[11].color,arreglo[11].numero);
			}
			
			printf("\n\n");
			system("pause");
			menuPrincipal();
			
			break;
		
		case 6:
			exit(0);
			break;
	}
}

void signo(){
	strcpy(arreglo[0].signo, "Aries");
	strcpy(arreglo[1].signo, "Tauro");
	strcpy(arreglo[2].signo, "Geminis");
	strcpy(arreglo[3].signo, "Cancer");
	strcpy(arreglo[4].signo, "Leo");
	strcpy(arreglo[5].signo, "Virgo");
	strcpy(arreglo[6].signo, "Libra");
	strcpy(arreglo[7].signo, "Escorpio");
	strcpy(arreglo[8].signo, "Sagitario");
	strcpy(arreglo[9].signo, "Capricornio");
	strcpy(arreglo[10].signo, "Acuario");
	strcpy(arreglo[11].signo, "Piscis");
}

void numero(){
	arreglo[0].numero = 21;
	arreglo[1].numero = 11;
	arreglo[2].numero = 9;
	arreglo[3].numero = 19;
	arreglo[4].numero = 10;
	arreglo[5].numero = 27;
	arreglo[6].numero = 8;
	arreglo[7].numero = 13;
	arreglo[8].numero = 16;
	arreglo[9].numero = 20;
	arreglo[10].numero = 5;
	arreglo[11].numero = 2;
}

void color(){
	strcpy(arreglo[0].color, "Rojo");
	strcpy(arreglo[1].color, "Amarillo");
	strcpy(arreglo[2].color, "Blanco");
	strcpy(arreglo[3].color, "Blanco");
	strcpy(arreglo[4].color, "Naranja");
	strcpy(arreglo[5].color, "Marron");
	strcpy(arreglo[6].color, "Rosa");
	strcpy(arreglo[7].color, "Rojo");
	strcpy(arreglo[8].color, "Morado");
	strcpy(arreglo[9].color, "Negro");
	strcpy(arreglo[10].color, "Turquesa");
	strcpy(arreglo[11].color, "Verde");
}

void futuro(){
	strcpy(arreglo[0].futuro, "Este a�o 2022 estaras con muchos proyectos personales que iras desarrollando a medida que vaya transcurriendo el a�o. Sentir�s que las cosas est�n a tu favor y eso te permitir� acceder a las oportunidades que se te presenten con muchas facilidades para el �xito y la consecuci�n de metas.");
	strcpy(arreglo[1].futuro, "Este a�o 2022 tendr�s claros tus objetivos personales pero te dar� cuenta de que hay personas en tu entorno que te pedir�n algunos favores que pueden retrasar tus metas, es por eso que deber�s de intentar planificarte bien para que no finalice el a�o con tus proyectos sin acabar como te ha pasado este a�o anterior. Es importante que te des algo m�s de prioridad e importancia a ti mism@.");
	strcpy(arreglo[2].futuro, "Este a�o 2022 lo empezar�s con muchos proyectos en mente y con una gran organizaci�n para cumplir tus metas a medida que avance el a�o. Ser�s capaz de lograr superar un obst�culo que lleva tiempo bloque�ndote y que es el causante de muchos altos y bajos emocionales que has tenido hasta ahora, por lo que es un a�o de recuperaci�n y de volver a ilusionarte.");
	strcpy(arreglo[3].futuro, "Este a�o 2022 optar�s por cambiar algunas rutinas que tienes para mejorar en varios aspectos que sabes que te dar�n bienestar y mejor�as. Es un buen a�o para afianzar tanto relaciones como proyectos personales, todo estar� a tu favor para que puedas conseguir cualquier prop�sito que te hagas. Tu ambici�n y dedicaci�n en las cosas te dar� grandes resultados.  ");
	strcpy(arreglo[4].futuro, "Este a�o 2022 estar�s preparad@ para dar pasos m�s estables en tu vida, aunque te encantan los retos ser� un a�o para asentar todo lo conseguido y empezar a avanzar un poco m�s a nivel general, porque es un a�o donde sentir�s esa necesidad de desarrollo y crecimiento personal.");
	strcpy(arreglo[5].futuro, "Este a�o 2022 te sentir�s preparad@ para hacer algunos cambios que vas evitando por miedos a no encontrar la respuesta o estado de bienestar que deseas. Es un a�o donde tendr�s muchas opciones para mejorar tu vida y calidad en tus relaciones personales. Te centrar�s en ti y en una recuperaci�n de algo que te marc� mucho en el pasado, gracias a eso todo lo dem�s empezar� a fluir de forma favorable a tus intereses.");
	strcpy(arreglo[6].futuro, "Este a�o 2022 dejar�s muchos miedos y dudas atr�s al empezar este a�o. Es un buen momento para ti y tendr�s el apoyo de todos para que puedas conseguir las metas que te propongas. Formar�s parte de algo importante que te subir� la autoestima y te har� sentir mejor contigo mismo. Agradecer�s el poder hacer lo que realmente se te da bien y te libera de las tensiones y del estr�s.");
	strcpy(arreglo[7].futuro, "Este a�o 2022 sentir�s que es un a�o de cambios y crecimiento personal interior, aprender�s de tus errores y sabr�s superar los obst�culos con mucha inteligencia y perseverancia. Entras en un periodo muy productivo para todos tus proyectos as� que cerrar�s todas las etapas del pasado que ya no necesitas para enfocarte en ese cambio que mejorar� tus expectativas para este nuevo a�o tan esperado por ti. Estar�s con mucha motivaci�n e ilusiones.");
	strcpy(arreglo[8].futuro, "Este a�o 2022 te plantear�s aprovechar tu tiempo libre de diferente manera, valorando m�s tus intereses y viajando para conocer lugares que hasta ahora pasaban desapercibidos para ti. Es un a�o de movimientos, de conocer gente nueva y de abrirte a nuevas experiencias tanto sociales como personales. Estar�s con ganas de aprender y de dejarte llevar por tu intuici�n, algo que evitabas por miedos a cometer errores, pero esta es una nueva etapa muy positiva para ti.");
	strcpy(arreglo[9].futuro, "Este a�o 2022 te plantear�s seguir algunos consejos de tu entorno para hacer esos cambios que sabes que son necesarios en tu d�a a d�a, por lo que es un buen a�o para plantearte nuevas metas y prop�sitos para cumplir. Todo lo tendr�s a tu favor si tienes que hacer gestiones o tratar con documentos importantes.");
	strcpy(arreglo[10].futuro, "Este a�o 2022 te plantear�s hacer un poco m�s de vida social y de viajar porque sabes que este cambio en tu rutina diaria es necesario para avanzar a nivel personal en muchos de los proyectos que tienes y esperas. Intentar�s compartir con las personas de tu entorno tus ilusiones y proyectos personales porque a veces no te das cuenta de que les dejas a un lado y por eso se apartan. Pero este es un a�o muy social para ti, lleno de reencuentros y de hacer cosas en grupo.");
	strcpy(arreglo[11].futuro, "Este a�o 2022 la inspiraci�n y la creatividad ser�n dos elementos vitales en tu vida y sabr�s como aprovechar esa intuici�n que te permitir� lograr varias de tus metas propuestas en varias ocasiones anteriormente. Es un a�o de progreso para ti y te ser� f�cil conseguir objetivos personales gracias a un apoyo incondicional de alguien que volver� a tu vida y te ayudar�.s");
}

void salud(){
	strcpy(arreglo[0].salud, "Tendr�s una energ�a corporal sorprendente y contar�s con la vitalidad necesaria para comerte al mundo, lo tendr�s todo en tu mano para emprender todo lo que te propongas. Aprovecha este buen momento de salud en tu vida y valoralo como debes.");
	strcpy(arreglo[1].salud, "Estas en un buen momento fisico y no tienes problemas de salud a la vista. Pero mucho cuidado con tu alimentaci�n porque si te relajas mucho y empiezas a volver a los malos habitos del pasado podr�a empezar a cambiar tu bienestar.");
	strcpy(arreglo[2].salud, "En tema de salud, deber�as cuidarte m�s con las comidas. Recuerda que somos lo que comemos, por lo tanto, deber�as consumir alimentos ricos en vitaminas y mierales que aporten vitalidad y energia a tu organismo. Recuerda que tu estado de animo tambi�n tiene que ver con tu alimentaci�n.");
	strcpy(arreglo[3].salud, "Te has sentido algo perezoso estos d�as, nada mejor que ir a correr para despertar ese cuerpo e iniciar cada d�a con energ�a. Si acostumbras al cuerpo ha estar sentado y sin hacer nada, el no hara nada para darte energ�a porque no la necesitar�s. Ayuda a tu organismo y cuidalo como se merece. �T� puedes!");
	strcpy(arreglo[4].salud, "Si no haces ejercicio, tu espalda se resentir�. Practica deporte y visita a tu medico para que te indique tu estado fisico y asi tu sepas la intensidad que puedes darle a tu rutina de ejercicio. Practicar deporte es bueno, pero debe hacerse con responsabilidad para evitar lesiones.");
	strcpy(arreglo[5].salud, "El exceso de exposici�n al sol puede producir consecuencias irreparables en tu salud, concretamente en tu piel. Debes protegerte con crema solar siempre que vayas a exponerte al sol. Recuerda este consejo, �Mas vale prevenir que curar�.");
	strcpy(arreglo[6].salud, "Si tus u�as te preocupan quiz�s deber�as pensar en cambiar el tipo de esmalte que usas, los tratamientos est�ticos innovadores tambi�n te vendr�an de maravilla. Complementalo con una alimentaci�n que favorezca a la salud de las u�as.");
	strcpy(arreglo[7].salud, "Nada mejor para tratar los calambres que una caminata matutina que ayude a mejorar la circulaci�n y una buena hidrataci�n, a partir de ese momento notar�s como esas molestas cesan. Si persisten acude a tu medico para buscar otros tratamientos m�s efectivos.");
	strcpy(arreglo[8].salud, "Tu salud es importante, tenlo presente cuando inicies una actividad. No puedes pasar de 0 a 100 en un d�a. Si no has practicado regularmente ejercicio cona nterioridad no puedes pretender ponerte al nivel de deportistas que llevan toda la vida practicando ejercicio. ");
	strcpy(arreglo[9].salud, "Cuidado con el exceso de chocolate, adem�s de engordar, puede perjudicar a tu salud. Recuerda que solo el chocolate negro, con un alto porcentaje de cacao es saludable en peque�as porciones. Deja a un lado todos los chocolates procesados y llenos de azucares muy malos para nuestro organismo.");
	strcpy(arreglo[10].salud, "Puede que ya sea hora de sacar ese viejo colch�n a la calle. Has notado ciertas reacciones en tu piel que podr�an ser por la presencia de �caros en tu viejo colch�n. Recuerda que el descanso ayuda a nuestro organismo a regenerarse y recuperarse bien del d�a a d�a y con un colchon nuevo lo natar�s desde la primera noche..");
	strcpy(arreglo[11].salud, "El mejor m�dico que puede tener alguien, es uno mismo. Alim�ntate bien, haz ejercicio y a cualquier indicio de molestia visita tu m�dico para prevenir problemas mayores, evitaras muchos contratiempos as�.");
}

void relaciones(){
	strcpy(arreglo[0].relaciones, "En lo que respecta al amor Aries, es un buen momento para asentar tu relaci�n. No obstante, no te debes asustar en ser absolutamente sincero contigo mismo, ya que de tu respuesta honesta y 100% verdadera depender� tu bienestar. No temas a lo que sientes, piensas o deseas, recuerda que eres un individuo en esta tierra que deber� estar en comuni�n con su contexto, para alcanzar la felicidad y evitar el sufrimiento o desolaci�n. ");
	strcpy(arreglo[1].relaciones, "El �mbito amoroso tambi�n mejorar� de forma significativa en comparaci�n con el a�o 2020. Si tienes pareja, ambos requieren de ciertos cambios para que su relaci�n fluya y no se estanque en un abismo sin fin. Es el momento de que tu evoluci�n personal se manifieste en tu pareja y empieces a asumir los cambios en las diferentes etapas de tu vida.");
	strcpy(arreglo[2].relaciones, "En el amor no habr� mayores cambios, pero habr� momentos de tensi�n. Todo se puede solucionar a trav�s de la pasi�n y el deseo que tambi�n crece en el 2021. Utiliza ese deseo sexual aumentado para rescatar tu relaci�n,  te dar�s cuenta que el cambio f�sico aumentar� tu disfrute sexual y el de tu pareja.");
	strcpy(arreglo[3].relaciones, "Durante el segundo trimestre del venidero a�o volver� a tu vida un viejo amor del pasado, pero es bueno que reflexiones acerca de si vale la pena reabrir viejas heridas que marcaron tu ser y la opini�n que tienes acerca del amor, porque tal vez esa persona ya no tiene espacio en tu mundo y en esa paz que tanto te ha costado conseguir, analiza si de verdad quieres volver a coincidir con esa persona sea de manera casual o de una forma m�s duradera.");
	strcpy(arreglo[4].relaciones, "En el 2021 el amor se har� presente, pero si est�s en una relaci�n, debes reforzar los sentimientos hacia esa persona especial y hacerle sentir que la amas y que valoras cada d�a a su lado. Si tienes a alguien especial pero a�n no declaras tu amor, prep�rate para hacerlo, esa persona se encuentra ansiosa y esperando que des el primer paso. Ac�rcate con toda la seguridad y confianza que te caracteriza cuando buscas lo que m�s deseas, no se resistir� a tus encantos.");
	strcpy(arreglo[5].relaciones, "No es bueno Virgo que traten de pisotearte una y otra vez, mereces el mismo respeto que te gusta dar, y si les dejas claro que la relaci�n que buscas debe ser formal, evitar�s perder tiempo y estar m�s centrado. Una persona que est� dispuesta a amarte tanto o igual que t�.");
	strcpy(arreglo[6].relaciones, "Si te encuentras en una relaci�n que consideras estable, debes saber que el venidero a�o ser� ideal para comenzar a pensar acerca de cu�les son las metas a largo plazo con tu pareja, ser� el momento ideal para comenzar a pensar en un futuro mucho m�s estable al lado de tu ser querido. Si la meta de la pareja es casarse, comenzar a formar una familia o adquirir una propiedad juntos, los �ltimos meses del 2021 ser�n ideales para ver materializados estas metas");
	strcpy(arreglo[7].relaciones, "Si est�s soltero, este ser� un a�o en el cual tendr�s dudas sobre de la clase de relaci�n que deseas tener, si por el contrario prefieres mantenerte soltero hasta lograr solucionar problemas relacionados con otros aspectos de tu vida que �ltimamente han estado acaparando la mayor parte de tu atenci�n. Es momento de que te quites los escudos o corazas que por tanto tiempo te han impedido establecer una relaci�n duradera que te permita lograr ese grado de intimidad, amor, compa��a y confianza que en el fondo has estado deseando.");
	strcpy(arreglo[8].relaciones, "Si est�s casado, debes tener cuidado durante todo el a�o, pues comenzar�s a sentir poco inter�s hacia tu pareja, es posible que se presenten varios problemas, pero puedes estar seguro y confiar en su amor. Todas las parejas tienen altos y bajos, pero ustedes sabr�n c�mo superar esos inconvenientes. ");
	strcpy(arreglo[9].relaciones, "Si est�s en una relaci�n, comprometido o casado, debes tener mucho cuidado, este a�o 2021 ser� dependiente de la energ�a proveniente de varios eclipses a lo largo de su transcurso. Las peleas y discusiones con tu pareja se har�n sentir, lo importante, y que no debes olvidar en ning�n momento, es mantener la calma, respira las veces que sean necesarias antes de responder de forma arrogante, ego�sta y cruel a tu pareja, pues gracias a ciertos comentarios que pueden salir de tu boca, lograr�s lastimarla y es lo que menos quieres.");
	strcpy(arreglo[10].relaciones, "Este a�o refleja el n�mero perfecto para establecer lazos entre dos personas. Los eclipses de 2021 potenciar�n estos v�nculos. Para los Acuarianos comprometidos o casados, deben recordar y hacer de cada d�a como si fuera el primero, cuida los detalles porque ellos son los que tienen m�s valor, dedica tiempo, dedica canciones, dedica momentos �nicos y de calidad, solo as� mantendr�s viva esa llama que ahora arde con todo su esplendor.");
	strcpy(arreglo[11].relaciones, "Es momento de que comiences a pensar acerca de lo que realmente quieres y buscas en ese ser especial, analiza con detenimiento si estas buscando iniciar una relaci�n duradera y comienza a sentar las base sobre las cuales construir�s tu futuro so�ado al lado de otra persona. ");
}


//FUNCION QUE MUESTRA EL ENCABEZADO O TITULO DEL PROGRAMA
void titulo(){
	static char titulo[50] = "            HOROSCOPO";
	static char linea[50] = "==================================";
	printf("\t\t\t\t\t%s\n",linea);
	printf("\t\t\t\t\t%s\n",titulo);
	printf("\t\t\t\t\t%s\n\n\n",linea);
}



