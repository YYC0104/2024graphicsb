#include <GL/glut.h> ///使用 GLUT 18行

void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("是我自己寫的哦!");

    glutDisplayFunc(display);

    glutMainLoop();
}
