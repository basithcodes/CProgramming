/* Printing the formula values */
int main(int argc, char *argv[])
{
	int formula;
	float radius;
	/* float r,a,b,l; */
	/* float area_circle = 3.14*r; */
	/* float a_plus_b = a*a+b*b+2*a*b; */
	/* float perimeterCircle = 2*3.14*r; */
	/* float areaRectangle = l*b; */
	/* float permimeterRectangle = 2*(l+b); */
   /*  */

	/*! \enum formulas
	*
	*  Writing some bunch of formulas
	*/
	enum formulas { 
		areaOfCircle, 
		a_plus_b_squared,
		speed,
		areaOfTriangle,
		permimeterOfCircle,
		areaOfRectangle,
		permimeterOfRectangle
	};

	switch (formula) {
		case areaOfCircle:
			float area = 3.14*radius*radius;
		/* case a_plus_b_squared: */
	}

	return 0;
}
