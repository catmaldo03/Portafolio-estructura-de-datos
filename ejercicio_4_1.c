// Ejercicio 4.1.1
#define num_asignaturas 5
#define num_estudiantes 3
#define NUM_DOC 10
#define MAX_CLAVE 15
#define MAX_LARGO_CLAVE 15
struct estudiante{
    char nombre[15];
    char apellido [15];
    int ID;
};
struct calificaciones {
   char asignatura[20];
   int nota;
   float poderacion_nota;
};
struct registro_estudiante{
     struct estudiante informacion;
     struct calificaciones notas[num_asignaturas];
};
struct registro_estudiante alumnos[num_estudiantes];

//ejercicio 4.1.2
struct fecha{
    int dia;
    int mes;
    int anno;
};
struct duenno{
   char nombre[20];
   char apellido[20];
   struct fecha nacimiento;
   int cantidad_infracciones[10];
};
struct vehiculo{
    char marca[15];
    char matricula[12];
    int anno;
    char modelo[30];
    struct duenno informacion;
};
//ejercicio 4.1.3
struct documento{
    char titulo[30];
    char autor[50];
    char resumen[250];
    char contenido[2000];
    char palabra_clave[MAX_CLAVE][MAX_LARGO_CLAVE];
};
struct repositorio_doc{
    int num_documento;
    struct documento archivos[NUM_DOC];
};
//ejercicio 4.1.4
struct pinta{
    ORO;
    ESPADA;
    BASTO;
    COPA;
};
struct Carta{
    int valor;
    struct pinta Pinta;
    
};
struct Mazo{
    struct Carta cartas_total[48];
    int cartas_mazo;
};
//ejercicio 4.1.5
struct polinomio{
    int coeficiente;
    int exponente;
    char variable;
};
struct sistema{
    struct polinomio cantidad[3];
    int terminos_independientes[3];
};

