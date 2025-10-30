#ifndef SISTEMAS_H
#define SISTEMAS_H

typedef struct {
    TickType_t C;
    TickType_t T;
    TickType_t D;
} Tarea;


/* Sistema 1 */
static const Tarea sistema1[] = {
	  {1000, 4000, 8000},
	  {1000, 5000, 5000},
	  {2000, 8000, 8000}
};
#define SISTEMA1_TAREAS 3

/* Sistema 2 */
static const Tarea sistema2[] = {
	    {1000, 4000, 8000},
	    {1000, 8000, 8000},
	    {2000, 9000, 9000}
};
#define SISTEMA2_TAREAS 3

/* Sistema 3 */
static const Tarea sistema3[] = {
	    {1000, 4000, 8000},
	    {1000, 6000, 6000},
	    {1000, 8000, 8000},
	    {3000, 13000, 13000}
};
#define SISTEMA3_TAREAS 4

/* Sistema 4 */
static const Tarea sistema4[] = {
	    {1000, 4000, 8000},
	    {2000, 7000, 7000},
	    {1000, 12000, 12000},
	    {2000, 14000, 18000}
};
#define SISTEMA4_TAREAS 4

/* Sistema 5 */
static const Tarea sistema5[] = {
	    {1000, 5000, 5000},
	    {1000, 9000, 9000},
	    {1000, 10000, 10000},
	    {2000, 15000, 15000},
	    {2000, 16000, 16000}
};
#define SISTEMA5_TAREAS 5

/* Sistema 6 */
static const Tarea sistema6[] = {
	    {1000, 6000, 6000},
	    {1000, 8000, 8000},
	    {2000, 11000, 11000},
	    {1000, 15000, 15000},
	    {2000, 17000, 17000}
};
#define SISTEMA6_TAREAS 5

/* Sistema 7 */
static const Tarea sistema7[] = {
	    {1000, 4000, 8000},
	    {1000, 7000, 7000},
	    {2000, 10000, 10000},
	    {2000, 14000, 18000}
};
#define SISTEMA7_TAREAS 4

/* Sistema 8 */
static const Tarea sistema8[] = {
	    {1000, 4000, 8000},
	    {1000, 8000, 8000},
	    {2000, 10000, 10000},
	    {2000, 14000, 18000}
};
#define SISTEMA8_TAREAS 4

/* Sistema 9 */
static const Tarea sistema9[] = {
	    {1000, 5000, 5000},
	    {1000, 8000, 8000},
	    {2000, 12000, 12000},
	    {1000, 15000, 15000},
	    {1000, 16000, 16000}
};
#define SISTEMA9_TAREAS 5

/* Sistema 10 */
static const Tarea sistema10[] = {
	    {1000, 5000, 5000},
	    {1000, 8000, 8000},
	    {1000, 12000, 12000},
	    {1000, 13000, 13000},
	    {2000, 16000, 16000}
};
#define SISTEMA10_TAREAS 5

#endif
