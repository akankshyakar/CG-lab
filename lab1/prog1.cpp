#include<GL/glut.h>

int main(int argc,char *argv[])
{
  glutInit(&argc,argv);
  glutInitWindowPosition(100,100);
  glutInitWindowSize(500,500);
  glutCreateWindow("Hello World");
  
  glBegin(GL_LINES);
  glVertex3f(100.0f, 100.0f, 0.0f); // origin of the line
  glVertex3f(200.0f, 140.0f, 5.0f); // ending point of the line
  glEnd( );
  glutMainLoop();
  
  return 0;
}
