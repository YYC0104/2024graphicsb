#include <GL/glut.h>
#include <stdio.h> ///為了 printf()

void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}

void mouse(int button, int state, int x, int y) ///定義 mouse 函式
{
    if(state==GLUT_DOWN){
        printf("glVertex2f((%d-150)/150.0 - (%d-150)/150.5);\n", x, y);
    }
}

int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03_mouse");

    glutDisplayFunc(display);
    glutMouseFunc(mouse); ///這行設定 mouse 函式

    glutMainLoop();
}
