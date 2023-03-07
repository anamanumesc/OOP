#include "Canvas.h"
#include <iostream>
using namespace std;

Canvas::Canvas(int columns ,int lines) {

	//the matrix contains pointers to the beggining of a new line

	nr_of_columns = columns;
	nr_of_lines = lines;

    this->matrix = (char**)(malloc(nr_of_lines * sizeof(char*))); //initializam matrix cu nr de linii

	for (int i = 0; i < nr_of_lines; i++) {

		matrix[i] = (char*)(malloc(nr_of_columns * sizeof(char)));
	}	

	for (int i = 0; i < nr_of_lines; i++) {

		for (int j = 0; j < nr_of_columns; j++) {

			matrix[i][j] = ' ';
		}
	}
}

void Canvas::Print(){


	for (int i = 0; i < this->nr_of_lines; i++) {

		for (int j = 0; j < this->nr_of_columns; j++) {

			cout << matrix[i][j];
			}
			cout << endl;
		}
	}

void Canvas::DrawCircle(int x, int y, int r, char ch) {

	for (int i = 0; i < nr_of_lines; i++) {

		for (int j = 0; j < nr_of_columns; j++) {

			if (pow(i - x, 2) + pow(j - y, 2) == pow(r, 2)) {

				if (pow(i - x, 2) + pow(j - y, 2) >= r * (r - 1) && pow(i - x, 2) + pow(j - y, 2) <= r * (r + 1)) {

					matrix[i][j] = ch;

				}
			}
			
		}
	}
}

void Canvas::FillCircle(int x, int y, int r, char ch) {


	for (int i = 0; i < nr_of_lines; i++) {

       for (int j = 0; j < nr_of_columns; j++) {

		   if ((i - x) * (i - x) + (j - y) * (j - y) <= r * r) {

			   matrix[i][j] = ch;
		   }
		}
	}
}

void Canvas::SetPoint(int x, int y, char ch){

	matrix[x][y] = ch;

}

void Canvas::DrawRect(int x1, int y1, int x2, int y2, char ch) {

	//upper line
	for (int i = y1; i <= y2; i++) {

		this->matrix[x1][i] = ch;

	}
     //lower line
	for (int j = y1; j <= y2; j++) {

		this->matrix[x2][j] = ch;

   }

	//line on the right
	for (int k = x1; k <= x2; k++) {

		this->matrix[k][y1] = ch;

	}
	//line on the left
	for (int l = x1; l <= x2; l++) {

		this->matrix[l][y2] = ch;

	}

}

void Canvas::Clear() {

	for (int i = 0; i < nr_of_lines; i++) {

		for (int j = 0; j < nr_of_columns; j++) {
			

			matrix[i][j] = ' ';



		}
	}



} 

void Canvas::DrawLine(int x0, int y0, int x1, int y1, char ch) {
	int dx = x1 - x0;
	int dy = y1 - y0;
	int D = 2 * dy - dx;
	int y = y0;

	for (int x = x0; x <= x1; x++) {
		matrix[x][y] = ch;

			if (D > 0) {
				y = y + 1;
				D = D - 2 * dx;
			}
			D = D + 2 * dy;
		}
	}

void Canvas::FillRect(int x1, int y1, int x2, int y2, char ch) {


	for (int i = x1; i <= x2; i++) {

		for (int j = y1; j <= y2; j++) {

			matrix[i][j] = ch;
		}
	}


}
	




