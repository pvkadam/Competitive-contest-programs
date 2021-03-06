#include <iostream>
#include <GL/gl.h>
#include <GL/freeglut.h>
#include <map>
#include <cmath>
#define inf 1000000

using namespace std;

double x1,x2,y2,y3,c,m;
int mat[200][200];
double sigma;

double dist(double x1, double y3) {
	double y1 = m*x1 + c;
	double distance = (double)pow(2.73, abs(y3-y1) / sigma);
	return distance;
}

void input() {
	cin >>x1>>y3>>x2>>y2;
	cin >> sigma;
	for (int i=0;i<200;i++) for (int j=0;j<200;j++) mat[i][j]=-1;
	m=(y2-y3)/(x2-x1);
	c=y3-m*x1;
	for (int i=(int)x1;i<(int)x2;i++) for (int j=(int)y3;j<(int)y2;j++) mat[i][j]=dist(i,j);
	
}

void init() { 
	glOrtho(-100,100,-100,100,-100,100); 
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);
}

void pointPlot(int i, int j, double d1) {
	glColor3f(d1,d1,d1);
	glBegin(GL_POINTS);
	glVertex3f(i,j,0);
	glEnd();
	glFlush();
}

void func1()
{
	for (int i=0;i<100;i++) {
		for (int j=0;j<100;j++) {
			if (mat[i][j]==1) {
				pointPlot(i,j,1);
			} else if (mat[i][j]==2 || mat[i][j]==3) {
				pointPlot(i,j,0.3);
			} else if (mat[i][j]==4) {
				pointPlot(i,j,0.1);
			} 
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (mat[i][j] == 1) {
				pointPlot(i, j, 1);
			}
		}
	}
	glutSwapBuffers();
}

int main(int argc, char **argv)
{
	input();
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_DOUBLE);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("hello world");
	init();
	glutDisplayFunc(func1);
	glutMainLoop();

	return 0;
}
