#include <GL/glut.h>
#include <stdio.h> ///���F printf()
float teapotX=0, teapotY=0; ///�s�[���{���A�Ψө�����y��

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///�M�ŭI��
    glPushMatrix(); ///�ƥ��x�}
        glTranslated(teapotX, teapotY, 0); ///��y�в���
        glutSolidTeapot(0.3);
    glPopMatrix(); ///�٭�x�}
    glutSwapBuffers();
}

void mouse(int button, int state, int x, int y) ///�w�q mouse �禡
{
    teapotX = (x-150)/150.0;
    teapotY = -(y-150)/150.0;
}

int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03_mouse");

    glutDisplayFunc(display);
    glutMouseFunc(mouse); ///�o��]�w mouse �禡

    glutMainLoop();
}