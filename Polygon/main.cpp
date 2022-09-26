#include <windows.h>
#include <GL/glut.h>


void polygon(){
    static int tick=0;
    glBegin(GL_LINE_LOOP);
    glColor3f(1,0,1);
    glVertex2i(12,18);
    glVertex2i(9,18);
    glVertex2i(9,9);
    glVertex2i(15,9);
    glVertex2i(15,12);
    glVertex2i(12,12);
    glEnd();
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    polygon();
    glutSwapBuffers();
}
int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("E1E120106_KATHARINA AMELIA NGII");
    glClearColor(1,1,1,0);
    gluOrtho2D(0.,24.,0.,24.);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
return 0;
}
