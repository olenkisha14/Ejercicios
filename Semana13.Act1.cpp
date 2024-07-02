#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

const float tarifa_local = 0.30;
const float tarifa_celular = 0.80;
const float tarifa_internacional = 1.50;

//CON STRUCT

//struct Llamada
//{
//    int oficina; // 1: Logística, 2: Recursos humanos, 3: Ventas
//    int minutos; // Duración de la llamada
//    int tipo; // 1: local, 2: celular, 3: internacional
//};
//
//// Generar el arreglo de llamadas de forma aleatoria
//void generar_llamadas(Llamada llamadas[], int num_llamadas)
//{
//    for (int i = 0; i < num_llamadas; i++)
//    {
//        llamadas[i].oficina = rand() % 3 + 1; // 1: Logística, 2: Recursos humanos, 3: Ventas
//        llamadas[i].minutos = rand() % 30 + 1;  // Minutos: 1 a 30
//        llamadas[i].tipo = rand() % 3 + 1; // Tipo de llamada: 1, 2, 3
//    }
//}
//
//// Calcular la cantidad de minutos por oficina
//void calcular_minutos_por_oficina(const Llamada llamadas[], int num_llamadas, int minutos_por_oficina[])
//{
//    for (int i = 0; i < num_llamadas; i++)
//    {
//        minutos_por_oficina[llamadas[i].oficina - 1] += llamadas[i].minutos;
//    }
//}
//
//// Encontrar la oficina con mayor cantidad de minutos
//void encontrar_oficina_con_max_minutos(const int minutos_por_oficina[], int oficina_con_max_minutos[])
//{
//    int max_minutos = 0;
//    for (int i = 0; i < 3; i++)
//    {
//        if (minutos_por_oficina[i] > max_minutos)
//        {
//            oficina_con_max_minutos[0] = i + 1;
//            oficina_con_max_minutos[1] = 0;
//            oficina_con_max_minutos[2] = 0;
//        }
//        else if (minutos_por_oficina[i] == max_minutos)
//        {
//            for (int j = 0; j < 3; j++)
//            {
//                if (oficina_con_max_minutos[j] == 0)
//                {
//                    oficina_con_max_minutos[j] = i + 1;
//                    break;
//                }
//            }
//        }
//    }
//}
//
//// Calcular el monto total a pagar por cada tipo de llamada
//void calcular_monto_total(const Llamada llamadas[], int num_llamadas, float& total_local, float& total_celular, float& total_internacional)
//{
//    for (int i = 0; i < num_llamadas; ++i)
//    {
//        if (llamadas[i].tipo == 1) {
//            total_local += llamadas[i].minutos * tarifa_local;
//        }
//        else if (llamadas[i].tipo == 2) {
//            total_celular += llamadas[i].minutos * tarifa_celular;
//        }
//        else if (llamadas[i].tipo == 3) {
//            total_internacional += llamadas[i].minutos * tarifa_internacional;
//        }
//    }
//}
//
//// Calcular el tiempo promedio de llamadas para la oficina de Ventas
//void calcular_promedio_llamadas_ventas(const Llamada llamadas[], int num_llamadas, float& promedio_local, float& promedio_celular, float& promedio_internacional)
//{
//    int minutos_local = 0, minutos_celular = 0, minutos_internacional = 0;
//    int contador_local = 0, contador_celular = 0, contador_internacional = 0;
//    for (int i = 0; i < num_llamadas; ++i)
//    {
//        if (llamadas[i].oficina == 3) 
//        { // Oficina de Ventas
//            if (llamadas[i].tipo == 1)
//            {
//                minutos_local += llamadas[i].minutos;
//                contador_local++;
//            }
//            if (llamadas[i].tipo == 2)
//            {
//                minutos_celular += llamadas[i].minutos;
//                contador_celular++;
//            }
//            if (llamadas[i].tipo == 3)
//            {
//                minutos_internacional += llamadas[i].minutos;
//                contador_internacional++;
//            }
//        }
//    }
//    
//    promedio_local = minutos_local / contador_local;
//    promedio_celular = minutos_celular / contador_celular;
//    promedio_internacional = minutos_internacional / contador_internacional;
//}
//
//int main()
//{
//    srand(time(nullptr));
//    const int num_llamadas = 50;
//
//    // Arreglo para almacenar las llamadas
//    Llamada llamadas[num_llamadas];
//
//    // Generar las llamadas
//    generar_llamadas(llamadas, num_llamadas);
//
//    // Calcular la cantidad de minutos por oficina
//    int minutos_por_oficina[3] = { 0, 0, 0 };
//    calcular_minutos_por_oficina(llamadas, num_llamadas, minutos_por_oficina);
//
//    // Encontrar la oficina con mayor cantidad de minutos
//    int oficina_con_max_minutos[3] = { 0, 0, 0 };
//    encontrar_oficina_con_max_minutos(minutos_por_oficina, oficina_con_max_minutos);
//
//    // Calcular el monto total a pagar por cada tipo de llamada
//    float totalLocal = 0.0, totalCelular = 0.0, totalInternacional = 0.0;
//    calcular_monto_total(llamadas, num_llamadas, totalLocal, totalCelular, totalInternacional);
//
//
//    // Calcular el tiempo promedio de llamadas para la oficina de Ventas
//    float promedio_local = 0.0, promedio_celular = 0.0, promedio_internacional = 0.0;
//    calcular_promedio_llamadas_ventas(llamadas, num_llamadas, promedio_local, promedio_celular, promedio_internacional);
//    
//    // Mostrar resultados
//    cout << "Oficina(s) con mayor cantidad de minutos en llamadas: ";
//    for (int i = 0; i < 3; ++i) {
//        if (oficina_con_max_minutos[i] != 0) {
//            cout << oficina_con_max_minutos[i] << " ";
//        }
//    }
//    cout << endl;
//
//    cout << "Monto total a pagar por llamadas locales: " << totalLocal << " soles" << endl;
//    cout << "Monto total a pagar por llamadas a celular: " << totalCelular << " soles" << endl;
//    cout << "Monto total a pagar por llamadas internacionales: " << totalInternacional << " soles" << endl;
//    cout << endl;
//
//    cout << "Tiempo promedio de llamadas locales en la oficina de Ventas: "
//        << promedio_local << " minutos" << endl;
//    cout << "Tiempo promedio de llamadas a celular en la oficina de Ventas: "
//        << promedio_celular << " minutos" << endl;
//    cout << "Tiempo promedio de llamadas internacionales en la oficina de Ventas: "
//        << promedio_internacional << " minutos" << endl;
//
//    system("pause>0");
//    return 0;
//}


//SIN STRUCT
// Generar y mostrar la matriz de llamadas de forma aleatoria
int** generar_mostrar(int num_llamadas)//para la matriz 3 x 50
{
	int** matriz = new int* [num_llamadas];
	for (int i = 0; i < num_llamadas; i++)
	{
		matriz[i] = new int[3];
	}
	for (int i = 0; i < num_llamadas; i++)
	{
		matriz[i][0] = rand() % 3 + 1; // 1: Logística, 2: Recursos humanos, 3: Ventas
		matriz[i][1] = rand() % 30 + 1;  // Minutos: 1 a 30
		matriz[i][2] = rand() % 3 + 1; // Tipo de llamada: 1, 2, 3
		cout << "Oficina: " << matriz[i][0] << ", Minutos: " << matriz[i][1] << ", Tipo: " << matriz[i][2] << endl;
	}
	return matriz;
}

// Calcular la cantidad de minutos por oficina
void calcular_minutos_por_oficina(int** llamadas, int num_llamadas, int minutos_por_oficina[]) {
	for (int i = 0; i < num_llamadas; ++i) {
		minutos_por_oficina[llamadas[i][0] - 1] += llamadas[i][1];
	}
}

// Encontrar la oficina con mayor cantidad de minutos
void encontrar_oficina_con_max_minutos(const int minutos_por_oficina[], int oficinas_con_max_minutos[])
{
	int max_minutos = 0;
	for (int i = 0; i < 3; ++i)
	{
		if (minutos_por_oficina[i] > max_minutos)
		{
			max_minutos = minutos_por_oficina[i];
			oficinas_con_max_minutos[0] = i + 1;
			oficinas_con_max_minutos[1] = 0;
			oficinas_con_max_minutos[2] = 0;
		}
		else if (minutos_por_oficina[i] == max_minutos)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (oficinas_con_max_minutos[j] == 0)
				{
					oficinas_con_max_minutos[j] = i + 1;
					break;
				}
			}
		}
	}
}

// Calcular el monto total a pagar por cada tipo de llamada
void calcular_monto_total(int** llamadas, int num_llamadas, float& total_local, float& total_celular, float& total_internacional) {
	for (int i = 0; i < num_llamadas; ++i) {
		if (llamadas[i][2] == 1) {
			total_local += llamadas[i][1] * tarifa_local;
		}
		else if (llamadas[i][2] == 2) {
			total_celular += llamadas[i][1] * tarifa_celular;
		}
		else if (llamadas[i][2] == 3) {
			total_internacional += llamadas[i][1] * tarifa_internacional;
		}
	}
}

void calcular_promedio_llamadas_ventas(int** llamadas, int num_llamadas, float& promedio_local, float& promedio_celular, float& promedio_internacional) 
{
	int minutos_local = 0, minutos_celular = 0, minutos_internacional = 0;
	int contador_local = 0, contador_celular = 0, contador_internacional = 0;

	for (int i = 0; i < num_llamadas; ++i) {
		if (llamadas[i][0] == 3) { // Oficina de Ventas
			if (llamadas[i][2] == 1) {
				minutos_local += llamadas[i][1];
				++contador_local;
			}
			else if (llamadas[i][2] == 2) {
				minutos_celular += llamadas[i][1];
				++contador_celular;
			}
			else if (llamadas[i][2] == 3) {
				minutos_internacional += llamadas[i][1];
				++contador_internacional;
			}
		}
	}

	promedio_local = minutos_local / contador_local;
	promedio_celular = minutos_celular / contador_celular;
	promedio_internacional = minutos_internacional / contador_internacional;
}

// Liberar memoria de la matriz de llamadas
void liberar_memoria(int** matriz, int num_llamadas) {
	for (int i = 0; i < num_llamadas; i++) {
		delete[] matriz[i];
	}
	delete[] matriz;
}

int main()
{
    srand(time(nullptr));
    const int num_llamadas = 50;

    // Arreglo para almacenar las llamadas
   int** llamadas = generar_mostrar(num_llamadas);

    // Calcular la cantidad de minutos por oficina
    int minutos_por_oficina[3] = { 0, 0, 0 };
    calcular_minutos_por_oficina(llamadas, num_llamadas, minutos_por_oficina);

    // Encontrar la oficina con mayor cantidad de minutos
    int oficina_con_max_minutos[3] = { 0, 0, 0 };
    encontrar_oficina_con_max_minutos(minutos_por_oficina, oficina_con_max_minutos);

    // Calcular el monto total a pagar por cada tipo de llamada
    float totalLocal = 0.0, totalCelular = 0.0, totalInternacional = 0.0;
    calcular_monto_total(llamadas, num_llamadas, totalLocal, totalCelular, totalInternacional);


    // Calcular el tiempo promedio de llamadas para la oficina de Ventas
    float promedio_local = 0.0, promedio_celular = 0.0, promedio_internacional = 0.0;
    calcular_promedio_llamadas_ventas(llamadas, num_llamadas, promedio_local, promedio_celular, promedio_internacional);
    
    // Mostrar resultados
    cout << "Oficina(s) con mayor cantidad de minutos en llamadas: ";
    for (int i = 0; i < 3; ++i) {
        if (oficina_con_max_minutos[i] != 0) {
            cout << oficina_con_max_minutos[i] << " ";
        }
    }
    cout << endl;

    cout << "Monto total a pagar por llamadas locales: " << totalLocal << " soles" << endl;
    cout << "Monto total a pagar por llamadas a celular: " << totalCelular << " soles" << endl;
    cout << "Monto total a pagar por llamadas internacionales: " << totalInternacional << " soles" << endl;
    cout << endl;

    cout << "Tiempo promedio de llamadas locales en la oficina de Ventas: "
        << promedio_local << " minutos" << endl;
    cout << "Tiempo promedio de llamadas a celular en la oficina de Ventas: "
        << promedio_celular << " minutos" << endl;
    cout << "Tiempo promedio de llamadas internacionales en la oficina de Ventas: "
        << promedio_internacional << " minutos" << endl;


	// Liberar memoria de la matriz de llamadas
	liberar_memoria(llamadas, num_llamadas);

    system("pause>0");
    return 0;
}
