#include <GL/glut.h>
#include <stdio.h> ///為了 printf()
float teapotX=0, teapotY=0; ///新加的程式，用來放茶壺座標
float angle = 0;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///清空背景
    glPushMatrix(); ///備份矩陣
        glTranslatef(teapotX, teapotY,0);
        glRotatef(angle, 0, 0, 1); ///把座標移動
        glutSolidTeapot(0.3);
    glPopMatrix(); ///還原矩陣
    glutSwapBuffers();
}
int method = 1;
int oldX = 0, oldY = 0;

void mouse(int button, int state, int x, int y) ///定義 mouse 函式
{
    oldX = x;
    oldY = y;
}

void motion(int x, int y)
{
    if(method == 1) angle += x - oldX;
    if(method == 2){
        teapotX += (x - oldX)/150.0;
        teapotY -= (y - oldY)/150.0;
    }
    oldX = x;
    oldY = y;
    display();
}

void keyboard(unsigned char key, int x, int y)
{
    if(key == 'e') method = 1;/// Rotate旋轉
    if(key == 'w') method = 2;/// Translate移動
}

int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03_mouse");

    glutDisplayFunc(display);
    glutMouseFunc(mouse); ///這行設定 mouse 函式
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
}
