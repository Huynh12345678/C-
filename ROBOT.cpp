//Ho va ten: Le Xuan Huynh
//Lop: 58TH1
//Ma sinh vien: 1651061098


#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

int Hand = 169; 
int Cube2 = -180; 
int Cube4 = 55;
int Cube6 = -55; 
int Finger1 = -39;
int Finger2 = 50; 
int Cube21=0;
//int ST=0;


void SetColor(GLfloat mat_diffuse[4]){
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0, 1.0 };
    GLfloat mat_shininess[] = { 50.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, mat_shininess);
}

void Draw(){
	GLfloat yellow[] = { 1.0, 1.0, 0.0, 0.0 };
	
	//Tay
	glPushMatrix();	
	glTranslatef(-3.0, 0.0, 0.0);	
	glRotatef((GLfloat) Hand, 0.0, 0.0, 1.0);		
	glPushMatrix();
	glTranslatef(1.5, 0.0, 0.0);
	
	// Cube1
	glPushMatrix();	
	SetColor(yellow);		
	glScalef(3.0, 1.0, 1.0);
	glutSolidCube (1.0);			
	glPopMatrix();
			
	// Cube2
	glPushMatrix();
	glTranslatef(1.5, 0.0, 0.0);
	glRotatef((GLfloat) Cube21,1.0,0.0,0.0);
	glRotatef((GLfloat) Cube2, 0.0, 0.0, 1.0);

	glPushMatrix();	
	SetColor(yellow);		
	glTranslatef(1.5, 0.0, 0.0);
	glScalef(3.0, 1.0, 1.0);
	glutSolidCube (1.0);
	glPopMatrix();
				
	// Ngontay1
	glPushMatrix();
	glTranslatef(3, -0.35, 0);
	glRotatef((GLfloat) Finger1, 0.0, 0.0, 1.0);
					
	// Cube3
	
	glPushMatrix();	
	glTranslatef(0.5, 0.0, 0.0);
	glScalef(1.0, 0.3, 0.25);
	glutSolidCube (1.0);
	glPopMatrix();
					
	// Cube4
	glPushMatrix();
	glTranslatef(1, 0.0, 0.0);
	glRotatef((GLfloat) Cube4, 0.0, 0.0, 1.0);
	glPushMatrix();
	glTranslatef(0.5, 0.0, 0.0);
	glScalef(1.0, 0.3, 0.25);
	glutSolidCube (1.0);
	glPopMatrix();				
	glPopMatrix();												
	glPopMatrix();
				
	// Ngontay2
	glPushMatrix();
	glTranslatef(3, 0.35, 0);
	glRotatef((GLfloat) Finger2, 0.0, 0.0, 1.0);
					
	// Cube5
	glPushMatrix();
	glTranslatef(0.5, 0.0, 0.0);
	glScalef(1.0, 0.3, 0.25);
	glutSolidCube (1.0);
	glPopMatrix();
					
	// Cube6
	glPushMatrix();
	glTranslatef(1, 0.0, 0.0);
	glRotatef((GLfloat) Cube6, 0.0, 0.0, 1.0);			
	glPushMatrix();
	glTranslatef(0.5, 0.0, 0.0);
	glScalef(1.0, 0.3, 0.25);
	glutSolidCube (1.0);
	glPopMatrix();				
	glPopMatrix();											
	glPopMatrix();
				
	// Ngontay3
	glPushMatrix();
	glTranslatef(3, 0.35, 0.375);
	glRotatef((GLfloat) Finger2, 0.0, 0.0, 1.0);
					
	// Cube5a
	glPushMatrix();
	glTranslatef(0.5, 0.0, 0.0);
	glScalef(1.0, 0.3, 0.25);
	glutSolidCube (1.0);
	glPopMatrix();
					
	// Cube6a
	glPushMatrix();
	glTranslatef(1, 0.0, 0.0);
	glRotatef((GLfloat) Cube6, 0.0, 0.0, 1.0);		
	glPushMatrix();	
	glTranslatef(0.5, 0.0, 0.0);
	glScalef(1.0, 0.3, 0.25);
	glutSolidCube (1.0);
	glPopMatrix();				
	glPopMatrix();												
	glPopMatrix();
				
	// Ngontay4
	glPushMatrix();
	glTranslatef(3, 0.35, -0.375);
	glRotatef((GLfloat) Finger2, 0.0, 0.0, 1.0);
					
	// Cube5b
	glPushMatrix();
	glTranslatef(0.5, 0.0, 0.0);
	glScalef(1.0, 0.3, 0.25);
	glutSolidCube (1.0);
	glPopMatrix();
					
    // Cube6b
	glPushMatrix();
	glTranslatef(1, 0.0, 0.0);
	glRotatef((GLfloat) Cube6, 0.0, 0.0, 1.0);			
	glPushMatrix();
	glTranslatef(0.5, 0.0, 0.0);
	glScalef(1.0, 0.3, 0.25);
	glutSolidCube (1.0);
	glPopMatrix();				
	glPopMatrix();
													
	glPopMatrix();									
	glPopMatrix();								
	glPopMatrix();
	glPopMatrix();

}

//void spinDisplayB(void){
//	Cube21 += 10;
//	if(Cube21 > 360)Cube21 -= 360;
//	glutPostRedisplay();
//}

void Mouse(int button,int state,int x,int y)
{
	switch(button)
	{
	case GLUT_LEFT_BUTTON:
		if(state==GLUT_DOWN)
			Hand += 20;
		break;
	case GLUT_MIDDLE_BUTTON:
		if(state==GLUT_DOWN)
		{
			Finger2 +=20;
		}
		break;
	case GLUT_RIGHT_BUTTON:
		if(state==GLUT_DOWN)
			Cube2 += 20;
		break;
	default:
		break;
	}
}

void Keyboard(unsigned char key, int x, int y){
	if(key == 's'){
		Cube4 -=20;
		Cube6 +=20;
		glutPostRedisplay();
	}
	else if(key == 'd'){
		Cube4 += 20;
		Cube6 -=20;
		glutPostRedisplay();
	}
	else if(key == 'f'){
		Cube21 -= 2.0;
		glutPostRedisplay();
	}
//	else if(key=='F')
//	{
//		glutIdleFunc(spinDisplayB);
//		glutPostRedisplay();
//		
//	}
}

void display(void){
	glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f (0.0, 0.0, 0.0);
	glLoadIdentity ();
	gluLookAt (3, 3, 5.0, 0.0, 0.0, 0.0, 0.0, 1, 0.0);
	Draw();
	glFlush ();
}
void Reshape (int w, int h){
	glViewport (0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity ();
	gluPerspective(85.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity ();
	glTranslatef (0.0, 0.0, -5.0);
}
void init(void){	
    GLfloat light_position[] = { 0.0, 20.0, 20.0, 0.0 };
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_SMOOTH);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (400, 100);
	glutCreateWindow (argv[0]);
	init ();
	glutDisplayFunc(display);
	glutReshapeFunc(Reshape);
	glutKeyboardFunc(Keyboard);
	glutMouseFunc(Mouse);
	glutMainLoop();
	return 0;
}



