#include<GL/glut.h>

int main(int argc,char *argv[])
{
  glutInit(&argc,argv);
  glutInitWindowPosition(100,100);
  glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
  glutInitWindowSize(500,500);
  glutCreateWindow("Hello World");
glClearColor(0.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,200.0,0.0,150.0);
glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1.0,1.0,1.0);
  glBegin(GL_LINES);
  glVertex2f(100.0, 100.0); // origin of the line
  glVertex2f(200.0, 140.0); // ending point of the line
  glEnd( );
  glFlush();
  glutMainLoop();
  
  return 0;
}
