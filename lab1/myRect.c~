#include<stdio.h>
#include<GL/glut.h>

void drawRect();
int main (int argc, char**argv)
{
   int windowWidth = 640;
   int windowHeight = 480;
   glutInit(&argc, argv);
   glutInitWindowSize(windowWidth, windowHeight);
   glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
   glutCreateWindow("Basic OpenGL Example");
   glutIdleFunc(drawRect);

   glViewport( 0, 0, windowWidth, windowHeight );
   glMatrixMode( GL_PROJECTION );
   glEnable( GL_DEPTH_TEST );
   gluPerspective( 45, (float)windowWidth/windowHeight, .1, 100 );
   glMatrixMode( GL_MODELVIEW );

   glutMainLoop();
   return 0;

}

void drawRect()
{
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glLoadIdentity();
   glTranslatef(0,5, -20);
   glBegin(GL_QUADS);
   glVertex2f(0, 3);
   glVertex2f(6, 3);
   glVertex2f(6, 0);
   glVertex2f(0, 0);
   glEnd();
   glutSwapBuffers();

}
