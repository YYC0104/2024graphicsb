#include <GL/glut.h>

void display(){
    glClear(GL_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
int main(int argc, char * argv[])
{
    glutInit( &argc, argv );
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week07-0_sample");
    glutDisplayFunc(display);
    glutMainLoop();
}
