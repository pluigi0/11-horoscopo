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
	strcpy(arreglo[0].futuro, "Este año 2022 estaras con muchos proyectos personales que iras desarrollando a medida que vaya transcurriendo el año. Sentirás que las cosas están a tu favor y eso te permitirá acceder a las oportunidades que se te presenten con muchas facilidades para el éxito y la consecución de metas.");
	strcpy(arreglo[1].futuro, "Este año 2022 tendrás claros tus objetivos personales pero te dará cuenta de que hay personas en tu entorno que te pedirán algunos favores que pueden retrasar tus metas, es por eso que deberás de intentar planificarte bien para que no finalice el año con tus proyectos sin acabar como te ha pasado este año anterior. Es importante que te des algo más de prioridad e importancia a ti mism@.");
	strcpy(arreglo[2].futuro, "Este año 2022 lo empezarás con muchos proyectos en mente y con una gran organización para cumplir tus metas a medida que avance el año. Serás capaz de lograr superar un obstáculo que lleva tiempo bloqueándote y que es el causante de muchos altos y bajos emocionales que has tenido hasta ahora, por lo que es un año de recuperación y de volver a ilusionarte.");
	strcpy(arreglo[3].futuro, "Este año 2022 optarás por cambiar algunas rutinas que tienes para mejorar en varios aspectos que sabes que te darán bienestar y mejorías. Es un buen año para afianzar tanto relaciones como proyectos personales, todo estará a tu favor para que puedas conseguir cualquier propósito que te hagas. Tu ambición y dedicación en las cosas te dará grandes resultados.  ");
	strcpy(arreglo[4].futuro, "Este año 2022 estarás preparad@ para dar pasos más estables en tu vida, aunque te encantan los retos será un año para asentar todo lo conseguido y empezar a avanzar un poco más a nivel general, porque es un año donde sentirás esa necesidad de desarrollo y crecimiento personal.");
	strcpy(arreglo[5].futuro, "Este año 2022 te sentirás preparad@ para hacer algunos cambios que vas evitando por miedos a no encontrar la respuesta o estado de bienestar que deseas. Es un año donde tendrás muchas opciones para mejorar tu vida y calidad en tus relaciones personales. Te centrarás en ti y en una recuperación de algo que te marcó mucho en el pasado, gracias a eso todo lo demás empezará a fluir de forma favorable a tus intereses.");
	strcpy(arreglo[6].futuro, "Este año 2022 dejarás muchos miedos y dudas atrás al empezar este año. Es un buen momento para ti y tendrás el apoyo de todos para que puedas conseguir las metas que te propongas. Formarás parte de algo importante que te subirá la autoestima y te hará sentir mejor contigo mismo. Agradecerás el poder hacer lo que realmente se te da bien y te libera de las tensiones y del estrés.");
	strcpy(arreglo[7].futuro, "Este año 2022 sentirás que es un año de cambios y crecimiento personal interior, aprenderás de tus errores y sabrás superar los obstáculos con mucha inteligencia y perseverancia. Entras en un periodo muy productivo para todos tus proyectos así que cerrarás todas las etapas del pasado que ya no necesitas para enfocarte en ese cambio que mejorará tus expectativas para este nuevo año tan esperado por ti. Estarás con mucha motivación e ilusiones.");
	strcpy(arreglo[8].futuro, "Este año 2022 te plantearás aprovechar tu tiempo libre de diferente manera, valorando más tus intereses y viajando para conocer lugares que hasta ahora pasaban desapercibidos para ti. Es un año de movimientos, de conocer gente nueva y de abrirte a nuevas experiencias tanto sociales como personales. Estarás con ganas de aprender y de dejarte llevar por tu intuición, algo que evitabas por miedos a cometer errores, pero esta es una nueva etapa muy positiva para ti.");
	strcpy(arreglo[9].futuro, "Este año 2022 te plantearás seguir algunos consejos de tu entorno para hacer esos cambios que sabes que son necesarios en tu día a día, por lo que es un buen año para plantearte nuevas metas y propósitos para cumplir. Todo lo tendrás a tu favor si tienes que hacer gestiones o tratar con documentos importantes.");
	strcpy(arreglo[10].futuro, "Este año 2022 te plantearás hacer un poco más de vida social y de viajar porque sabes que este cambio en tu rutina diaria es necesario para avanzar a nivel personal en muchos de los proyectos que tienes y esperas. Intentarás compartir con las personas de tu entorno tus ilusiones y proyectos personales porque a veces no te das cuenta de que les dejas a un lado y por eso se apartan. Pero este es un año muy social para ti, lleno de reencuentros y de hacer cosas en grupo.");
	strcpy(arreglo[11].futuro, "Este año 2022 la inspiración y la creatividad serán dos elementos vitales en tu vida y sabrás como aprovechar esa intuición que te permitirá lograr varias de tus metas propuestas en varias ocasiones anteriormente. Es un año de progreso para ti y te será fácil conseguir objetivos personales gracias a un apoyo incondicional de alguien que volverá a tu vida y te ayudará.s");
}

void salud(){
	strcpy(arreglo[0].salud, "Tendrás una energía corporal sorprendente y contarás con la vitalidad necesaria para comerte al mundo, lo tendrás todo en tu mano para emprender todo lo que te propongas. Aprovecha este buen momento de salud en tu vida y valoralo como debes.");
	strcpy(arreglo[1].salud, "Estas en un buen momento fisico y no tienes problemas de salud a la vista. Pero mucho cuidado con tu alimentación porque si te relajas mucho y empiezas a volver a los malos habitos del pasado podría empezar a cambiar tu bienestar.");
	strcpy(arreglo[2].salud, "En tema de salud, deberías cuidarte más con las comidas. Recuerda que somos lo que comemos, por lo tanto, deberías consumir alimentos ricos en vitaminas y mierales que aporten vitalidad y energia a tu organismo. Recuerda que tu estado de animo también tiene que ver con tu alimentación.");
	strcpy(arreglo[3].salud, "Te has sentido algo perezoso estos días, nada mejor que ir a correr para despertar ese cuerpo e iniciar cada día con energía. Si acostumbras al cuerpo ha estar sentado y sin hacer nada, el no hara nada para darte energía porque no la necesitarás. Ayuda a tu organismo y cuidalo como se merece. ¡Tú puedes!");
	strcpy(arreglo[4].salud, "Si no haces ejercicio, tu espalda se resentirá. Practica deporte y visita a tu medico para que te indique tu estado fisico y asi tu sepas la intensidad que puedes darle a tu rutina de ejercicio. Practicar deporte es bueno, pero debe hacerse con responsabilidad para evitar lesiones.");
	strcpy(arreglo[5].salud, "El exceso de exposición al sol puede producir consecuencias irreparables en tu salud, concretamente en tu piel. Debes protegerte con crema solar siempre que vayas a exponerte al sol. Recuerda este consejo, «Mas vale prevenir que curar».");
	strcpy(arreglo[6].salud, "Si tus uñas te preocupan quizás deberías pensar en cambiar el tipo de esmalte que usas, los tratamientos estéticos innovadores también te vendrían de maravilla. Complementalo con una alimentación que favorezca a la salud de las uñas.");
	strcpy(arreglo[7].salud, "Nada mejor para tratar los calambres que una caminata matutina que ayude a mejorar la circulación y una buena hidratación, a partir de ese momento notarás como esas molestas cesan. Si persisten acude a tu medico para buscar otros tratamientos más efectivos.");
	strcpy(arreglo[8].salud, "Tu salud es importante, tenlo presente cuando inicies una actividad. No puedes pasar de 0 a 100 en un día. Si no has practicado regularmente ejercicio cona nterioridad no puedes pretender ponerte al nivel de deportistas que llevan toda la vida practicando ejercicio. ");
	strcpy(arreglo[9].salud, "Cuidado con el exceso de chocolate, además de engordar, puede perjudicar a tu salud. Recuerda que solo el chocolate negro, con un alto porcentaje de cacao es saludable en pequeñas porciones. Deja a un lado todos los chocolates procesados y llenos de azucares muy malos para nuestro organismo.");
	strcpy(arreglo[10].salud, "Puede que ya sea hora de sacar ese viejo colchón a la calle. Has notado ciertas reacciones en tu piel que podrían ser por la presencia de ácaros en tu viejo colchón. Recuerda que el descanso ayuda a nuestro organismo a regenerarse y recuperarse bien del día a día y con un colchon nuevo lo natarás desde la primera noche..");
	strcpy(arreglo[11].salud, "El mejor médico que puede tener alguien, es uno mismo. Aliméntate bien, haz ejercicio y a cualquier indicio de molestia visita tu médico para prevenir problemas mayores, evitaras muchos contratiempos así.");
}

void relaciones(){
	strcpy(arreglo[0].relaciones, "En lo que respecta al amor Aries, es un buen momento para asentar tu relación. No obstante, no te debes asustar en ser absolutamente sincero contigo mismo, ya que de tu respuesta honesta y 100% verdadera dependerá tu bienestar. No temas a lo que sientes, piensas o deseas, recuerda que eres un individuo en esta tierra que deberá estar en comunión con su contexto, para alcanzar la felicidad y evitar el sufrimiento o desolación. ");
	strcpy(arreglo[1].relaciones, "El ámbito amoroso también mejorará de forma significativa en comparación con el año 2020. Si tienes pareja, ambos requieren de ciertos cambios para que su relación fluya y no se estanque en un abismo sin fin. Es el momento de que tu evolución personal se manifieste en tu pareja y empieces a asumir los cambios en las diferentes etapas de tu vida.");
	strcpy(arreglo[2].relaciones, "En el amor no habrá mayores cambios, pero habrá momentos de tensión. Todo se puede solucionar a través de la pasión y el deseo que también crece en el 2021. Utiliza ese deseo sexual aumentado para rescatar tu relación,  te darás cuenta que el cambio físico aumentará tu disfrute sexual y el de tu pareja.");
	strcpy(arreglo[3].relaciones, "Durante el segundo trimestre del venidero año volverá a tu vida un viejo amor del pasado, pero es bueno que reflexiones acerca de si vale la pena reabrir viejas heridas que marcaron tu ser y la opinión que tienes acerca del amor, porque tal vez esa persona ya no tiene espacio en tu mundo y en esa paz que tanto te ha costado conseguir, analiza si de verdad quieres volver a coincidir con esa persona sea de manera casual o de una forma más duradera.");
	strcpy(arreglo[4].relaciones, "En el 2021 el amor se hará presente, pero si estás en una relación, debes reforzar los sentimientos hacia esa persona especial y hacerle sentir que la amas y que valoras cada día a su lado. Si tienes a alguien especial pero aún no declaras tu amor, prepárate para hacerlo, esa persona se encuentra ansiosa y esperando que des el primer paso. Acércate con toda la seguridad y confianza que te caracteriza cuando buscas lo que más deseas, no se resistirá a tus encantos.");
	strcpy(arreglo[5].relaciones, "No es bueno Virgo que traten de pisotearte una y otra vez, mereces el mismo respeto que te gusta dar, y si les dejas claro que la relación que buscas debe ser formal, evitarás perder tiempo y estar más centrado. Una persona que está dispuesta a amarte tanto o igual que tú.");
	strcpy(arreglo[6].relaciones, "Si te encuentras en una relación que consideras estable, debes saber que el venidero año será ideal para comenzar a pensar acerca de cuáles son las metas a largo plazo con tu pareja, será el momento ideal para comenzar a pensar en un futuro mucho más estable al lado de tu ser querido. Si la meta de la pareja es casarse, comenzar a formar una familia o adquirir una propiedad juntos, los últimos meses del 2021 serán ideales para ver materializados estas metas");
	strcpy(arreglo[7].relaciones, "Si estás soltero, este será un año en el cual tendrás dudas sobre de la clase de relación que deseas tener, si por el contrario prefieres mantenerte soltero hasta lograr solucionar problemas relacionados con otros aspectos de tu vida que últimamente han estado acaparando la mayor parte de tu atención. Es momento de que te quites los escudos o corazas que por tanto tiempo te han impedido establecer una relación duradera que te permita lograr ese grado de intimidad, amor, compañía y confianza que en el fondo has estado deseando.");
	strcpy(arreglo[8].relaciones, "Si estás casado, debes tener cuidado durante todo el año, pues comenzarás a sentir poco interés hacia tu pareja, es posible que se presenten varios problemas, pero puedes estar seguro y confiar en su amor. Todas las parejas tienen altos y bajos, pero ustedes sabrán cómo superar esos inconvenientes. ");
	strcpy(arreglo[9].relaciones, "Si estás en una relación, comprometido o casado, debes tener mucho cuidado, este año 2021 será dependiente de la energía proveniente de varios eclipses a lo largo de su transcurso. Las peleas y discusiones con tu pareja se harán sentir, lo importante, y que no debes olvidar en ningún momento, es mantener la calma, respira las veces que sean necesarias antes de responder de forma arrogante, egoísta y cruel a tu pareja, pues gracias a ciertos comentarios que pueden salir de tu boca, lograrás lastimarla y es lo que menos quieres.");
	strcpy(arreglo[10].relaciones, "Este año refleja el número perfecto para establecer lazos entre dos personas. Los eclipses de 2021 potenciarán estos vínculos. Para los Acuarianos comprometidos o casados, deben recordar y hacer de cada día como si fuera el primero, cuida los detalles porque ellos son los que tienen más valor, dedica tiempo, dedica canciones, dedica momentos únicos y de calidad, solo así mantendrás viva esa llama que ahora arde con todo su esplendor.");
	strcpy(arreglo[11].relaciones, "Es momento de que comiences a pensar acerca de lo que realmente quieres y buscas en ese ser especial, analiza con detenimiento si estas buscando iniciar una relación duradera y comienza a sentar las base sobre las cuales construirás tu futuro soñado al lado de otra persona. ");
}


//FUNCION QUE MUESTRA EL ENCABEZADO O TITULO DEL PROGRAMA
void titulo(){
	static char titulo[50] = "            HOROSCOPO";
	static char linea[50] = "==================================";
	printf("\t\t\t\t\t%s\n",linea);
	printf("\t\t\t\t\t%s\n",titulo);
	printf("\t\t\t\t\t%s\n\n\n",linea);
}



