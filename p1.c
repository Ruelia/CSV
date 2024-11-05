#include <stdio.h>

/* Defining Structures */
typedef struct point{
	double x , y;
}point;

typedef struct Triangle{
	point A , B , C;
}Triangle;

/* Functions */ 
void read_point(point *P){
	scanf("%lf %lf" , &P->x, &P->y);
	return ; 
}

void read_triangle(Triangle *T){
	read_point(&T->A);
	read_point(&T->B);
	read_point(&T->C);
	return; 
}

double area(Triangle T){
	double area = T.A.x * (T.B.y - T.C.y) + T.B.x * (T.C.y - T.A.y) +
	T.C.x * (T.A.y - T.B.y);
	area /= 2;
	return area;
}

int main()
{
	Triangle T;
	printf("Input the Triangles Coordinates");
	read_triangle(&T);
	printf("Triangle coordinates ");
	printf("%lf , %lf) , (%lf , %lf) , (%lf , %lf) ", T.A.x , T.A.y , T.B.x , T.B.y , T.C.x , T.C.y);
	double Area=area(T);
	printf("Area : %lf\n", Area);
	if(Area == 0)
	printf("Collinearity: Collinear");
	else 
	printf("Collinearity: Not Collinear");
	return 0;
}
