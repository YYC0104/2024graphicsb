#include <GL/glut.h> ///�ϥ� GLUT 18��

void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("�O�ڦۤv�g���@!");

    glutDisplayFunc(display);

    glutMainLoop();
}
