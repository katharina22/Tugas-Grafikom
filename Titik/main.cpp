#include <windows.h>
#include <GL/glut.h>

void titik(){
    static int tick=0;

    glColor3f(1,0,0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(6,13);
    glEnd();

    glColor3f(0,1,0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(6,14);
    glEnd();

    glColor3f(0,0,1);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(6,15);
    glEnd();

    glColor3f(1,0,0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(6,16);
    glEnd();

    glColor3f(0.4,1,0.4);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(6,17);
    glEnd();

    glColor3f(0,0.5,1);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(7,16);
    glEnd();

    glColor3f(0.8,0.5,0.5);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(8,15);
    glEnd();

    glColor3f(0.5,1,0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(9,14);
    glEnd();

    glColor3f(1.,0.8,0.5);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(10,13);
    glEnd();

    glColor3f(1.0,0.0,1.0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(10,14);
    glEnd();

    glColor3f(1,0.5,0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(10,15);
    glEnd();

    glColor3f(0.0,1.0,1.0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(10,16);
    glEnd();

    glColor3f(1.0,1.0,0.0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(10,17);
    glEnd();
}


void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    titik();
    glutSwapBuffers();
}

int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("E1E120106_KATHARINA AMELIA NGII");
    glClearColor(0,0,0,0);
    gluOrtho2D(0.,24.,0.,24.);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
return 0;
}
