#include<stdio.h>
#include<GL/glut.h>
#include<string.h>

char *str1="COMPUTER GRAPHICS AND VISUALIZATION";
char *str2="MINI PROJECT";
char *str3="MASSACRE OF AMRITHSAR";
char *str4="BY";
char *str5="SHREYAS G S";
char *str6="SHRINIDHI SHETTY";
char *str7="4SF20CS137";
char *str8="4SF20CS140";
char *str9="Press a/A to Continue";
char *str10 = "The Jallianwala Bagh massacre,also known as";
char *str20 = "\"The Amritsar massacre\"";
char *str11 = "Took place on 13 April 1919.";
char *str12 = "A large peaceful crowd had gathered at";
char *str21 = "the Jallianwala Bagh in Amritsar,Punjab";
char *str13 = "to protest against the arrest of pro-Indian";
char *str22 = "independence leaders Saifuddin Kitchlew and Dr.Satya Pal.";

char *str14 = "In response to the public gathering,";
char *str24 = "the temporary Brigadier general R. E. H. Dyer";
char *str25 = "surrounded the protesters with his army of";
char *str26 = "Gurkha British Indian Army unit and Sindh regiment.";
char *str27 = "Press d/D to continue";
char *str28 = "General through his airforce found out ";
char *str29 = "large gathering at jallianwala bhag.";
char *str19 = "Press b/B to continue";

void final_fight();
void colonel_army();
void entrance_crowd();
void final_text();
void fight_text();
void memorial_screen();
void display();
void init()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.1, 0.9, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,900);
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
//computer graphics
	glColor3f(0,0,1);
	glRasterPos2f(400.0,800.0);
	for(int i=0;i<strlen(str1);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
	}
	
//mini project
	glColor3f(0,0,1);
	glRasterPos2f(500.0,700.0);
	for(int i=0;i<strlen(str2);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
	}

//jallianwala bhag	
	glColor3f(0,0,1);
	glRasterPos2f(450.0,600.0);
	for(int i=0;i<strlen(str3);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[i]);
	}

//by	
	glColor3f(0,0,1);
	glRasterPos2f(550.0,500.0);
	for(int i=0;i<strlen(str4);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[i]);
	}

//SHREYAS G S NAME
	glColor3f(0,0,1);
	glRasterPos2f(200.0,450.0);
	for(int i=0;i<strlen(str5);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[i]);
	}
	
//SHRINIDHI'S NAME	
	glColor3f(0,0,1);
	glRasterPos2f(775.0,450.0);
	for(int i=0;i<strlen(str6);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6[i]);
	}
	
//SHREYAS usn
	glColor3f(0,0,1);
	glRasterPos2f(200.0,400.0);
	for(int i=0;i<strlen(str7);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[i]);
	}
	
//SHRINIDHI usn
	glColor3f(0,0,1);
	glRasterPos2f(775.0,400.0);
	for(int i=0;i<strlen(str8);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
	}
//press a to continue
	glColor3f(0,0,1);
	glRasterPos2f(400.0,25.0);
	for(int i=0;i<strlen(str9);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str9[i]);
	}
	glFlush();
}

void first_screen(){
	glClear(GL_COLOR_BUFFER_BIT);
	//intro
	glColor3f(0, 0, 1);
	glRasterPos2f(200.0, 800.0);
	for (int i = 0; i < strlen(str10); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str10[i]);
	}

	glColor3f(0, 0, 1);
	glRasterPos2f(350.0, 700.0);
	for (int i = 0; i < strlen(str20); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str20[i]);
	}

	//date
	glColor3f(0, 0, 1);
	glRasterPos2f(375.0, 600.0);
	for (int i = 0; i < strlen(str11); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str11[i]);
	}

	//description
	glColor3f(0, 0, 1);
	glRasterPos2f(275.0, 500.0);
	for (int i = 0; i < strlen(str12); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str12[i]);
	}
	glColor3f(0, 0, 1);
	glRasterPos2f(290.0, 400.0);
	for (int i = 0; i < strlen(str21); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str21[i]);
	}

	glColor3f(0, 0, 1);
	glRasterPos2f(250.0, 300.0);
	for (int i = 0; i < strlen(str13); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str13[i]);
	}
	glColor3f(0, 0, 1);
	glRasterPos2f(75.0, 200.0);
	for (int i = 0; i < strlen(str22); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str22[i]);
	}

	//press b to continue
	glColor3f(0, 0, 1);
	glRasterPos2f(450.0, 25.0);
	for (int i = 0; i < strlen(str19); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str19[i]);
	}
	glFlush();
}

void jallianwalabhag_entrance(){
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.8, 1.0, 1.0, 0.0);
	//ground
	glColor3ub(194,178,128);
	glBegin(GL_POLYGON);
	
	glVertex2i(0,0);
	glVertex2i(1200,0);
	glVertex2i(1200,300);
	glVertex2i(0,300);
	glEnd();
	
	//wall1
	glColor3f(0.5, 0.2, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(400, 300);
	glVertex2i(900, 300);
	glVertex2i(900, 800);
	glVertex2i(400, 800);
	glEnd();
	
	glColor3f(0.047, 0.137, 0.494);
	glBegin(GL_POLYGON);
	glVertex2i(440, 760);
	glVertex2i(540, 760);
	glVertex2i(540, 660);
	glVertex2i(440, 660);
	glEnd();
	glColor3f(0.047, 0.137, 0.494);
	glBegin(GL_POLYGON);
	glVertex2i(580, 760);
	glVertex2i(680, 760);
	glVertex2i(680, 660);
	glVertex2i(580, 660);
	glEnd();
	glColor3f(0.047, 0.137, 0.494);
	glBegin(GL_POLYGON);
	glVertex2i(720, 760);
	glVertex2i(820, 760);
	glVertex2i(820, 660);
	glVertex2i(720, 660);
	glEnd();
	
	glColor3f(0.047, 0.137, 0.494);
	glBegin(GL_POLYGON);
	glVertex2i(440, 620);
	glVertex2i(540, 620);
	glVertex2i(540, 520);
	glVertex2i(440, 520);
	glEnd();
	glColor3f(0.047, 0.137, 0.494);
	glBegin(GL_POLYGON);
	glVertex2i(580, 620);
	glVertex2i(680, 620);
	glVertex2i(680, 520);
	glVertex2i(580, 520);
	glEnd();
	glColor3f(0.047, 0.137, 0.494);
	glBegin(GL_POLYGON);
	glVertex2i(720, 620);
	glVertex2i(820, 620);
	glVertex2i(820, 520);
	glVertex2i(720, 520);
	glEnd();
	
	glColor3f(0.047, 0.137, 0.494);
	glBegin(GL_POLYGON);
	glVertex2i(440, 480);
	glVertex2i(540, 480);
	glVertex2i(540, 300);
	glVertex2i(440, 300);
	glEnd();
	glColor3f(0.047, 0.137, 0.494);
	glBegin(GL_POLYGON);
	glVertex2i(580, 480);
	glVertex2i(680, 480);
	glVertex2i(680, 300);
	glVertex2i(580, 300);
	glEnd();
	glColor3f(0.047, 0.137, 0.494);
	glBegin(GL_POLYGON);
	glVertex2i(720, 480);
	glVertex2i(820, 480);
	glVertex2i(820, 300);
	glVertex2i(720, 300);
	glEnd();
	
	glColor3f(0.5, 0.2, 0.0);
	glBegin(GL_POLYGON);
	//wall2
	glVertex2i(900, 300);
	glVertex2i(1100, 300);
	glVertex2i(1100, 650);
	glVertex2i(900, 650);
	glEnd();

	//entrance
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2i(920, 300);
	glVertex2i(1080, 300);
	glVertex2i(1080, 600);
	glVertex2i(920, 600);
	glEnd();
	
	//wall3
	glColor3f(0.5, 0.2, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(1100, 300);
	glVertex2i(1200, 300);
	glVertex2i(1200, 900);
	glVertex2i(1100, 900);
	glEnd();
	
	//wall4
	glColor3f(0.5, 0.2, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(100, 300);
	glVertex2i(400, 300);
	glVertex2i(400, 750);
	glVertex2i(100, 750);
	glEnd();
	entrance_crowd();
	char *str23 = "Press c/C to continue";
	glColor3f(0,0,1);
	glRasterPos2f(450.0,25.0);
	for(int i=0;i<strlen(str23);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str23[i]);
	}
	glFlush();
}
void army_explain()
{
	glClear(GL_COLOR_BUFFER_BIT);
	//intro
	glColor3f(0, 0, 1);
	glRasterPos2f(50.0, 850.0);
	for (int i = 0; i < strlen(str28); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str28[i]);
	}

	glColor3f(0, 0, 1);
	glRasterPos2f(50.0, 750.0);
	for (int i = 0; i < strlen(str29); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str29[i]);
	}

	//date
	glColor3f(0, 0, 1);
	glRasterPos2f(50.0, 650.0);
	for (int i = 0; i < strlen(str14); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str14[i]);
	}

	//description
	glColor3f(0, 0, 1);
	glRasterPos2f(50.0, 550.0);
	for (int i = 0; i < strlen(str24); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str24[i]);
	}
	glColor3f(0, 0, 1);
	glRasterPos2f(50.0, 450.0);
	for (int i = 0; i < strlen(str25); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str25[i]);
	}

	glColor3f(0, 0, 1);
	glRasterPos2f(50.0, 350.0);
	for (int i = 0; i < strlen(str26); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str26[i]);
	}

	//press b to continue
	glColor3f(0, 0, 1);
	glRasterPos2f(450.0, 25.0);
	for (int i = 0; i < strlen(str27); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str27[i]);
	}
	glFlush();
}
void keystroke(unsigned char key,int x,int y){
	if (key == 'a' || key == 'A')
		first_screen();
	if (key == 'b' || key == 'B')
		jallianwalabhag_entrance();
	if (key == 'c' || key == 'C')
		army_explain();
	if (key == 'd' || key == 'D')
		colonel_army();
	if (key == 'e' || key == 'E')
		fight_text();
	if (key == 'f' || key == 'F')
		final_fight();
	if (key == 'g' || key == 'G')
		final_text();
	if (key == 'h' || key == 'h')
		memorial_screen();
	if (key == 'q' || key == 'Q')
		exit(0);
}

void main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1100,650);
	glutInitWindowPosition(0,0);
	glutCreateWindow("4SF20CS140 SHRINIDHI");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(keystroke);
	glutMainLoop();
}
