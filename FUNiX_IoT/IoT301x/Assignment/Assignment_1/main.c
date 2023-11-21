#include <stdio.h>
#include <stdint.h>
#include <math.h>

float coor[6] = {};

void triangle_area();
void wait_for_user_input(void);
int triangle_check();
void triangle_side();
void triangle_evaluate();
void triangle_height();
void triangle_median();
void triangle_centre();
int triangle_decode();

int main(void) {
	while (triangle_decode() == 0) {
		printf("Please input again!\n");
		//triangle_decode();
	}

	return 0;
}

int triangle_decode() {
	printf("Please input the A coordinates:\n");
	printf("Ax: ");
	scanf("%f", &coor[0]);
	printf("\nAy: ");
	scanf("%f", &coor[1]);
	printf("\nPlease input the B coordinates:\n");
	printf("Bx: ");
	scanf("%f", &coor[2]);
	printf("\nBy: ");
	scanf("%f", &coor[3]);
	printf("Please input the C coordinates:\n");
	printf("Cx: ");
	scanf("%f", &coor[4]);
	printf("\nCy: ");
	scanf("%f", &coor[5]);

	//to check if three points form a triangle or not.
	if(triangle_check(coor)){
		printf("\nThe coordinates of A is: A(%0.2f,%0.2f)\n", coor[0], coor[1]);
		printf("The coordinates of B is: B(%0.2f,%0.2f)\n", coor[2], coor[3]);
		printf("The coordinates of C is: C(%0.2f,%0.2f)\n", coor[4], coor[5]);
		printf("------------------------------------------------------\n");

		printf("A, B and C form a triangle!\n");

		printf("\nBasic information of the triangle: \n");
		triangle_side(coor);
		triangle_evaluate(coor);

		triangle_area();

		printf("\nAdvanced information of the triangle: \n");
		triangle_height(coor);
		triangle_median(coor);

		printf("\nCoordinates of the special points of ABC: \n");
		triangle_centre(coor);
		return 1;
	} else {
		printf("\nA, B and C do not form a triangle.\n");
		return 0;
	}
}

int triangle_check() {
	float Ax = coor[0];
	float Ay = coor[1];
	float Bx = coor[2];
	float By = coor[3];
	float Cx = coor[4];
	float Cy = coor[5];

	float slopeA = (By - Ay) * (Cx - Bx);
	float slopeB = (Cy - By) * (Bx - Ax);

	if ((Ax == Bx && Ax == Cx) || (Ay == By && Ay == Cy)) {
		return 0;
	} else {
		//if 2 slope are equal, it is a straght line not a triangle
		if (slopeA == slopeB){
			return 0;
		} else {
			return 1;
		}
	}

}

void triangle_side(){
	float Ax = coor[0];
	float Ay = coor[1];
	float Bx = coor[2];
	float By = coor[3];
	float Cx = coor[4];
	float Cy = coor[5];

	float AB, BC, AC, BAC, CBA, ACB;
	AB = sqrt((Bx-Ax) * (Bx-Ax) + (By-Ay) * (By-Ay));
	BC = sqrt((Cx-Bx) * (Cx-Bx) + (Cy-By) * (Cy-By));
	AC = sqrt((Ax-Cx) * (Ax-Cx) + (Ay-Cy) * (Ay-Cy));

	BAC = acos((pow(AB, 2)+ pow(AC, 2) - pow(BC, 2))/(2 * AB * AC));
	CBA = acos((pow(AB, 2)+ pow(BC, 2) - pow(AC, 2))/(2 * AB * BC));
	ACB = acos((pow(BC, 2)+ pow(AC, 2) - pow(AB, 2))/(2 * BC * AC));

	BAC = BAC * (180.0/M_PI);
	CBA = CBA * (180.0/M_PI);
	ACB = ACB * (180.0/M_PI);


	printf("AB = %0.2f\n", AB);
	printf("BC = %0.2f\n", BC);
	printf("AC = %0.2f\n", AC);
	printf("A angle = %0.2f\n", BAC);
	printf("B angle = %0.2f\n", CBA);
	printf("C angle = %0.2f\n", ACB);
}

void triangle_evaluate() {
	float Ax = coor[0];
	float Ay = coor[1];
	float Bx = coor[2];
	float By = coor[3];
	float Cx = coor[4];
	float Cy = coor[5];

	float AB, BC, AC, BAC, CBA, ACB;

	AB = sqrt((Bx-Ax) * (Bx-Ax) + (By-Ay) * (By-Ay));
	BC = sqrt((Cx-Bx) * (Cx-Bx) + (Cy-By) * (Cy-By));
	AC = sqrt((Ax-Cx) * (Ax-Cx) + (Ay-Cy) * (Ay-Cy));

	BAC = acos((pow(AB, 2)+ pow(AC, 2) - pow(BC, 2))/(2 * AB * AC));
	CBA = acos((pow(AB, 2)+ pow(BC, 2) - pow(AC, 2))/(2 * AB * BC));
	ACB = acos((pow(BC, 2)+ pow(AC, 2) - pow(AB, 2))/(2 * BC * AC));

	BAC = BAC * (180.0/M_PI);
	CBA = CBA * (180.0/M_PI);
	ACB = ACB * (180.0/M_PI);

	if (AB == BC && BC == AC){
		printf("\nABC is a equilateral triangle.\n\n");
	} else if (ACB == 90){
		printf("\nABC is a right triangle at C.\n\n");
	} else if (BAC == 90) {
		printf("\nABC is a right triangle at A.\n\n");
	} else if (CBA == 90) {
		printf("\nABC is a right triangle at B.\n\n");
	} else if (AB == AC) {
		if (BAC == 90){
			printf("\nABC is a right isosceles triangle at A.\n\n");
		} else if(BAC > 90){
			printf("\nABC is an obtuse isosceles triangle at A.\n\n");
		} else {
			printf("\nABC is an acute isosceles triangle at A.\n\n");
		}
	} else if (AB == BC) {
		if (CBA == 90){
			printf("\nCBA is a right isosceles triangle at B.\n\n");
		} else if(CBA > 90){
			printf("\nCBA is an obtuse isosceles triangle at B.\n\n");
		} else {
			printf("\nCBA is an acute isosceles triangle at B.\n\n");
		}
	} else if (AC == BC) {
		if (ACB == 90){
			printf("\nACB is a right isosceles triangle at C.\n\n");
		} else if(ACB > 90){
			printf("\nACB is an obtuse isosceles triangle at C.\n\n");
		} else {
			printf("\nACB is an acute isosceles triangle at C.\n\n");
		}
	} else {
		printf("\nABC is a normal triangle.\n");
	}


}

void triangle_area() {
	float Ax = coor[0];
	float Ay = coor[1];
	float Bx = coor[2];
	float By = coor[3];
	float Cx = coor[4];
	float Cy = coor[5];

    float area = 0.5 * fabs(Ax * (By - Cy) + Bx * (Cy - Ay) + Cx * (Ay - By));
	printf("The area of the triangle is: %0.2f\n", area);

}

void triangle_height() {
	float Ax = coor[0];
	float Ay = coor[1];
	float Bx = coor[2];
	float By = coor[3];
	float Cx = coor[4];
	float Cy = coor[5];
	float AB, BC, AC;

	AB = sqrt((Bx-Ax) * (Bx-Ax) + (By-Ay) * (By-Ay));
	BC = sqrt((Cx-Bx) * (Cx-Bx) + (Cy-By) * (Cy-By));
	AC = sqrt((Ax-Cx) * (Ax-Cx) + (Ay-Cy) * (Ay-Cy));

	float area = 0.5 * fabs(Ax*(By-Cy) + Bx*(Cy-Ay) + Cx*(Ay-By));
	float height[3] = {};

	height[0] = area * 2 / BC;
	height[1] = area * 2 / AC;
	height[2] = area * 2 / AB;

	printf("The height from point A is: %0.2f\n", height[0]);
	printf("The height from point B is: %0.2f\n", height[1]);
	printf("The height from point C is: %0.2f\n", height[2]);
}

void triangle_median(){
	float Ax = coor[0];
	float Ay = coor[1];
	float Bx = coor[2];
	float By = coor[3];
	float Cx = coor[4];
	float Cy = coor[5];
	float median[3] = {};

	float mid_ABx = (Ax+Bx)/2;
	float mid_ABy = (Ay+By)/2;
	float mid_ACx = (Ax+Cx)/2;
	float mid_ACy = (Ay+Cy)/2;
	float mid_BCx = (Bx+Cx)/2;
	float mid_BCy = (By+Cy)/2;

	median[0] = sqrt((mid_BCx-Ax) * (mid_BCx-Ax) + (mid_BCy-Ay) * (mid_BCy-Ay));
	median[1] = sqrt((mid_ACx-Bx) * (mid_ACx-Bx) + (mid_ACy-By) * (mid_ACy-By));
	median[2] = sqrt((mid_ABx-Cx) * (mid_ABx-Cx) + (mid_ABy-Cy) * (mid_ABy-Cy));

	printf("The median from point A is: %0.2f\n", median[0]);
	printf("The median from point B is: %0.2f\n", median[1]);
	printf("The median from point C is: %0.2f\n", median[2]);
}
void triangle_centre(){
	float Ax = coor[0];
	float Ay = coor[1];
	float Bx = coor[2];
	float By = coor[3];
	float Cx = coor[4];
	float Cy = coor[5];
	float centre[2] = {};

	centre[0] = (Ax+Bx+Cx) / 3;
	centre[1] = (Ay+By+Cy) / 3;

	printf("The coordinates of the triangle centre point is: [%0.2f, %0.2f]\n", centre[0], centre[1]);
}
