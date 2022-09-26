#include <windows.h>
#include <GL/glut.h>


void garis(){
    static int tick=0;
    // 1. GARIS
    glColor3f(0.,0.,1.);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(10,19);
    glVertex2f(10,12);
    glEnd();
}


void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    garis();
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
