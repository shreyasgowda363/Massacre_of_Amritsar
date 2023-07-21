#include<stdio.h>
#include<GL/glut.h>
#include<string.h>
int flag=0;
float p=-100.0;
int countb=0;
float b=-100.0;
void final_fight()
{
	int inc = 75;
	int inca = 50;
	while(1)
	{
		for(b=-100;b<=1050;b=b+100)
		{
			glBegin(GL_POLYGON);
			glColor3ub(135,206,250);
			glVertex2i(0,600);
			glVertex2i(1200,600);
			glVertex2i(1200,900);
			glVertex2i(0,900);
			glEnd();
			glBegin(GL_POLYGON);
			glColor3ub(194,178,128);
			glVertex2i(0,0);
			glVertex2i(1200,0);
			glVertex2i(1200,600);
			glVertex2i(0,600);
			glEnd();
			glPushMatrix();
			glScalef(1.2,1.2,0);
		for(int j=1;j<10;j++)
		{
			if(j%2 == 0)
			{
				glTranslatef(25,-50,0);
				{
					for(int i=1;i<7;i++)
					{
						glColor3ub(0,0,0);
						glPushMatrix();
						glTranslatef(100+i*inc,600,0);
						glutSolidTorus(1,10,100,90);
						glPopMatrix();
						glColor3ub(255,191,128);
						glPushMatrix();
						glTranslatef(100+i*inc,600,0);
						glutSolidTorus(7,7,100,90);
						glPopMatrix();
					
						glColor3ub(0,0,0);
						glBegin(GL_LINES);
						glVertex2i(100+i*inc,600);
				 		glVertex2i(100+i*inc,595); //nose
				  		glVertex2i(91+i*inc,605);
				 		glVertex2i(97+i*inc,605);//eyebrow
				  		glVertex2i(103+i*inc,605);
				 		glVertex2i(109+i*inc,605);//eyebrow
				 		glEnd();
				 		
				 		//ear right
						glBegin(GL_POLYGON);
						glColor3ub(255,191,128);
						glVertex2i(100+i*inc-14,600);
						glVertex2i(100+i*inc-14,596);
						glVertex2i(98+i*inc-14,595);
						glVertex2i(98+i*inc-14,601);
						glEnd();
						
						//ear left
						glBegin(GL_POLYGON);
						glColor3ub(255,191,128);
						glVertex2i(114+i*inc,600);
						glVertex2i(116+i*inc,601);
						glVertex2i(116+i*inc,596);
						glVertex2i(114+i*inc,595);
						glEnd();
						
						// eyes
				 		/*glBegin(GL_POLYGON);
				 		glVertex2i(93+i*inc,603);
				 		glVertex2i(95+i*inc,603);
				 		glVertex2i(95+i*inc,601);
				 		glVertex2i(93+i*inc,601);
						glEnd();

						glBegin(GL_POLYGON);
				 		glVertex2i(105+i*inc,603);
				 		glVertex2i(107+i*inc,603);
				 		glVertex2i(107+i*inc,601);
				 		glVertex2i(105+i*inc,601);
						glEnd();
						*/
						// mouth
						glBegin(GL_POLYGON);
						glColor3ub(255,191,128);
				 		glVertex2i(95+i*inc,592);
				 		glVertex2i(100+i*inc,590);
				 		glVertex2i(105+i*inc,592);
				 		glVertex2i(100+i*inc,592);
						glEnd();
						
						//body
						glBegin(GL_POLYGON);
				 		glColor3ub(25-i*j*30,10+i*j*10,18+i*j*20);
					    	glVertex2i(89+i*inc,585);
				 		glVertex2i(111+i*inc,585);
				 		glVertex2i(126+i*inc,574);
				 		glVertex2i(121+i*inc,564);
				 		glVertex2i(116+i*inc,570);
						glVertex2i(116+i*inc,550);
				 		glVertex2i(84+i*inc,550);
				 		glVertex2i(84+i*inc,570);
				 		glVertex2i(79+i*inc,565);
				 		glVertex2i(74+i*inc,574);
						glEnd(); 
									
						//hands
						glBegin(GL_POLYGON);
						glColor3ub(255,191,128);
			 			glVertex2i(125+i*inc,573);
			 			glVertex2i(135+i*inc,558);
			 			glVertex2i(127+i*inc,559);
			 			glVertex2i(122+i*inc,567);
			 			glEnd();
			 			
			 			glBegin(GL_POLYGON);
						glVertex2i(135+i*inc,558);
						if(flag==0)
						{
							glVertex2i(116+i*inc,543);
				 			glVertex2i(116+i*inc,550);
						}
						else
						if(flag==1)
						{
							glVertex2i(116+i*inc,565);
							glVertex2i(106+i*inc,555);
						}                                                                  
						glVertex2i(127+i*inc,559);
						glEnd();
						
						glBegin(GL_POLYGON);
					 	glVertex2i(75+i*inc,573);
				 		glVertex2i(65+i*inc,558);
				 		glVertex2i(73+i*inc,559);
				 		glVertex2i(78+i*inc,567);
				 		glEnd();

				  		glBegin(GL_POLYGON);
						glVertex2i(65+i*inc,558);
						if(flag==0)
						{
							glVertex2i(84+i*inc,543);
				   			glVertex2i(84+i*inc,550);
						}
						else
						if(flag==1)
						{
				   			glVertex2i(84+i*inc,565);
				   			glVertex2i(106+i*inc,555);
						}
				   		glVertex2i(73+i*inc,559);
				  		glEnd();
				  		
				  		// belt
				 		glBegin(GL_POLYGON);
						glColor3ub(150,12,30);
				 		glVertex2i(116+i*inc,550);
				 		glVertex2i(84+i*inc,550);
				 		glVertex2i(84+i*inc,545);
						glVertex2i(84+i*inc,545);
						glVertex2i(116+i*inc,545);
						glEnd();

						//pant
						glBegin(GL_POLYGON);
						glColor3f(1,0.270588,0);
						glVertex2i(115+i*inc,545);
						glVertex2i(85+i*inc,545);
						glVertex2i(80+i*inc,510);
						glVertex2i(90+i*inc,510);
						glVertex2i(93+i*inc,543);
						glVertex2i(110+i*inc,510);
						glVertex2i(120+i*inc,510);
						glEnd();

						//shoe left
						glBegin(GL_POLYGON);
						glColor3ub(255,0,100);
						glVertex2i(90+i*inc,510);
						glVertex2i(90+i*inc,501);
						glVertex2i(72+i*inc,501);
						glVertex2i(80+i*inc,510);
						glEnd();

						//shoe right
						glBegin(GL_POLYGON);
						glColor3ub(255,0,100);
						glVertex2i(110+i*inc,510);
						glVertex2i(110+i*inc,501);
						glVertex2i(128+i*inc,501);
						glVertex2i(120+i*inc,510);
						glEnd();
					}
				}
			}
			else
			{
				glTranslatef(-25,-50,0);
				{
					for(int i=0;i<6;i++)
					{
						glColor3ub(0,0,0);
						glPushMatrix();
						glTranslatef(100+i*inc,600,0);
						glutSolidTorus(1,10,100,90);
						glPopMatrix();
						glColor3ub(255,191,128);
						glPushMatrix();
						glTranslatef(100+i*inc,600,0);
						glutSolidTorus(7,7,100,90);
						glPopMatrix();
						
						glColor3ub(0,0,0);
						glBegin(GL_LINES);
						glVertex2i(100+i*inc,600);
				 		glVertex2i(100+i*inc,595); //nose
				  		glVertex2i(91+i*inc,605);
				 		glVertex2i(97+i*inc,605);//eyebrow
				  		glVertex2i(103+i*inc,605);
				 		glVertex2i(109+i*inc,605);//eyebrow
				 		glEnd();
			 		
				 		//ear right
						glBegin(GL_POLYGON);
						glColor3ub(255,191,128);
						glVertex2i(100+i*inc-14,600);
						glVertex2i(100+i*inc-14,596);
						glVertex2i(98+i*inc-14,595);
						glVertex2i(98+i*inc-14,601);
						glEnd();
						
						//ear left
						glBegin(GL_POLYGON);
						glColor3ub(255,191,128);
						glVertex2i(114+i*inc,600);
						glVertex2i(116+i*inc,601);
						glVertex2i(116+i*inc,596);
						glVertex2i(114+i*inc,595);
						glEnd();
						
						// eyes
				 		/*glBegin(GL_POLYGON);
				 		glVertex2i(93+i*inc,603);
				 		glVertex2i(95+i*inc,603);
				 		glVertex2i(95+i*inc,601);
				 		glVertex2i(93+i*inc,601);
						glEnd();

						glBegin(GL_POLYGON);
				 		glVertex2i(105+i*inc,603);
				 		glVertex2i(107+i*inc,603);
				 		glVertex2i(107+i*inc,601);
				 		glVertex2i(105+i*inc,601);
						glEnd();
						*/
						// mouth
						glBegin(GL_POLYGON);
						glColor3ub(255,191,128);
				 		glVertex2i(95+i*inc,592);
				 		glVertex2i(100+i*inc,590);
				 		glVertex2i(105+i*inc,592);
				 		glVertex2i(100+i*inc,592);
						glEnd();
						
						//body
						glBegin(GL_POLYGON);
				 		glColor3ub(25-i*j*30,10+i*j*10,18+i*j*20);
					    	glVertex2i(89+i*inc,585);
				 		glVertex2i(111+i*inc,585);
				 		glVertex2i(126+i*inc,574);
				 		glVertex2i(121+i*inc,564);
				 		glVertex2i(116+i*inc,570);
						glVertex2i(116+i*inc,550);
				 		glVertex2i(84+i*inc,550);
				 		glVertex2i(84+i*inc,570);
				 		glVertex2i(79+i*inc,565);
				 		glVertex2i(74+i*inc,574);
						glEnd(); 
									
						//hands
						glBegin(GL_POLYGON);
						glColor3ub(255,191,128);
			 			glVertex2i(125+i*inc,573);
			 			glVertex2i(135+i*inc,558);
			 			glVertex2i(127+i*inc,559);
			 			glVertex2i(122+i*inc,567);
			 			glEnd();
			 			
			 			glBegin(GL_POLYGON);
						glVertex2i(135+i*inc,558);
						if(flag==0)
						{
							glVertex2i(116+i*inc,543);
				 			glVertex2i(116+i*inc,550);
						}
						else
						if(flag==1)
						{
							glVertex2i(116+i*inc,565);
							glVertex2i(106+i*inc,555);
						}                                                                  
						glVertex2i(127+i*inc,559);
						glEnd();
						
						glBegin(GL_POLYGON);
					 	glVertex2i(75+i*inc,573);
				 		glVertex2i(65+i*inc,558);
				 		glVertex2i(73+i*inc,559);
				 		glVertex2i(78+i*inc,567);
				 		glEnd();

				  		glBegin(GL_POLYGON);
						glVertex2i(65+i*inc,558);
						if(flag==0)
						{
							glVertex2i(84+i*inc,543);
				   			glVertex2i(84+i*inc,550);
						}
						else
						if(flag==1)
						{
				   			glVertex2i(84+i*inc,565);
				   			glVertex2i(106+i*inc,555);
						}
				   		glVertex2i(73+i*inc,559);
				  		glEnd();
				  		
				  		// belt
				 		glBegin(GL_POLYGON);
						glColor3ub(150,12,30);
				 		glVertex2i(116+i*inc,550);
				 		glVertex2i(84+i*inc,550);
				 		glVertex2i(84+i*inc,545);
						glVertex2i(84+i*inc,545);
						glVertex2i(116+i*inc,545);
						glEnd();

						//pant
						glBegin(GL_POLYGON);
						glColor3f(1,0.270588,0);
						glVertex2i(115+i*inc,545);
						glVertex2i(85+i*inc,545);
						glVertex2i(80+i*inc,510);
						glVertex2i(90+i*inc,510);
						glVertex2i(93+i*inc,543);
						glVertex2i(110+i*inc,510);
						glVertex2i(120+i*inc,510);
						glEnd();

						//shoe left
						glBegin(GL_POLYGON);
						glColor3ub(255,0,100);
						glVertex2i(90+i*inc,510);
						glVertex2i(90+i*inc,501);
						glVertex2i(72+i*inc,501);
						glVertex2i(80+i*inc,510);
						glEnd();

						//shoe right
						glBegin(GL_POLYGON);
						glColor3ub(255,0,100);
						glVertex2i(110+i*inc,510);
						glVertex2i(110+i*inc,501);
						glVertex2i(128+i*inc,501);
						glVertex2i(120+i*inc,510);
						glEnd();
					}
				}
			}
		}
		glPopMatrix();
		glPushMatrix();
		glScalef(1.2,1.2,0);
		for(int j=0;j<3;j++)
		{
			glTranslatef(40,-100,0);
			{
				for(int i=0;i<6;i++)
				{
					glColor3ub(0,0,0);
					glPushMatrix();
					glTranslatef(600+i*inca,600,0);
					glutSolidTorus(1,10,100,90);
					glPopMatrix();
					glColor3ub(255,191,128);
					glPushMatrix();
					glTranslatef(600+i*inca,600,0);
					glutSolidTorus(7,7,100,90);
					glPopMatrix();
					
					glColor3ub(0,0,0);
					glBegin(GL_LINES);
					glVertex2i(600+i*inca,600);
			 		glVertex2i(600+i*inca,595); //nose
			  		glVertex2i(591+i*inca,605);
			 		glVertex2i(597+i*inca,605);//eyebrow
			  		glVertex2i(603+i*inca,605);
			 		glVertex2i(609+i*inca,605);//eyebrow
			 		glEnd();
			 		
			 		//ear right
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
					glVertex2i(600+i*inca-14,600);
					glVertex2i(600+i*inca-14,596);
					glVertex2i(598+i*inca-14,595);
					glVertex2i(598+i*inca-14,601);
					glEnd();
					
					//ear left
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
					glVertex2i(614+i*inca,600);
					glVertex2i(616+i*inca,601);
					glVertex2i(616+i*inca,596);
					glVertex2i(614+i*inca,595);
					glEnd();
					
					// eyes
			 		/*glBegin(GL_POLYGON);
			 		glVertex2i(93+i*inc,603);
			 		glVertex2i(95+i*inc,603);
			 		glVertex2i(95+i*inc,601);
			 		glVertex2i(93+i*inc,601);
					glEnd();

					glBegin(GL_POLYGON);
			 		glVertex2i(105+i*inc,603);
			 		glVertex2i(107+i*inc,603);
			 		glVertex2i(107+i*inc,601);
			 		glVertex2i(105+i*inc,601);
					glEnd();
					*/
					
					// mouth
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
			 		glVertex2i(595+i*inca,592);
			 		glVertex2i(600+i*inca,590);
			 		glVertex2i(605+i*inca,592);
			 		glVertex2i(600+i*inca,592);
					glEnd();
					
					//body
					glBegin(GL_POLYGON);
			 		glColor3ub(109,113,46);
				    	glVertex2i(589+i*inca,585);
			 		glVertex2i(611+i*inca,585);
			 		glVertex2i(626+i*inca,574);
			 		glVertex2i(621+i*inca,564);
			 		glVertex2i(616+i*inca,570);
					glVertex2i(616+i*inca,550);
			 		glVertex2i(584+i*inca,550);
			 		glVertex2i(584+i*inca,570);
			 		glVertex2i(579+i*inca,565);
			 		glVertex2i(574+i*inca,574);
					glEnd(); 
								
					//hands
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
					glVertex2i(625+i*inca,573);
					glVertex2i(635+i*inca,558);
					glVertex2i(627+i*inca,559);
					glVertex2i(622+i*inca,567);
					glEnd();
					
					glBegin(GL_POLYGON);
					glColor3ub(0,0,0);
					glVertex2i(635+i*inca,558);
					if(flag==0)
					{
						glVertex2i(616+i*inca,543);
			 			glVertex2i(616+i*inca,550);
					}
					else
					if(flag==1)
					{
						glVertex2i(616+i*inca,565);
						glVertex2i(606+i*inca,555);
					}                                                                  
					glVertex2i(627+i*inca,559);
					glEnd();
					
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
				 	glVertex2i(575+i*inca,573);
			 		glVertex2i(565+i*inca,558);
			 		glVertex2i(573+i*inca,559);
			 		glVertex2i(578+i*inca,567);
			 		glEnd();

			  		glBegin(GL_POLYGON);
			  		glColor3ub(0,0,0);
					glVertex2i(565+i*inca,558);
					if(flag==0)
					{
						glVertex2i(584+i*inca,543);
			   			glVertex2i(584+i*inca,550);
					}
					else
					if(flag==1)
					{
			   			glVertex2i(584+i*inca,565);
			   			glVertex2i(606+i*inca,555);
					}
			   		glVertex2i(573+i*inca,559);
			  		glEnd();
			  		
			  		// belt
			 		glBegin(GL_POLYGON);
					glColor3ub(150,12,30);
			 		glVertex2i(616+i*inca,550);
			 		glVertex2i(584+i*inca,550);
			 		glVertex2i(584+i*inca,545);
					glVertex2i(584+i*inca,545);
					glVertex2i(616+i*inca,545);
					glEnd();

					//pant
					glBegin(GL_POLYGON);
					glColor3ub(34,139,34);
					glVertex2i(615+i*inca,545);
					glVertex2i(585+i*inca,545);
					glVertex2i(580+i*inca,510);
					glVertex2i(590+i*inca,510);
					glVertex2i(593+i*inca,543);
					glVertex2i(610+i*inca,510);
					glVertex2i(620+i*inca,510);
					glEnd();

					//shoe left
					glBegin(GL_POLYGON);
					glColor3ub(0,0,0);
					glVertex2i(590+i*inca,510);
					glVertex2i(590+i*inca,501);
					glVertex2i(572+i*inca,501);
					glVertex2i(580+i*inca,510);
					glEnd();

					//shoe right
					glBegin(GL_POLYGON);
					glColor3ub(0,0,0);
					glVertex2i(610+i*inca,510);
					glVertex2i(610+i*inca,501);
					glVertex2i(628+i*inca,501);
					glVertex2i(620+i*inca,510);
					glEnd();
				}
			}
		}
		glPopMatrix();
		glColor3f(1,1,1);
	   
	    
	    
		for(int i=0;i<8;i++)
		{
		    glColor3ub(255,69,0);
		    glColor3ub(0,0,0);
		    glBegin(GL_TRIANGLES);
		    glVertex2f(1045-b,250+i*50);
		    glVertex2f(1050-b,245+i*50);
		    glVertex2f(1050-b,255+i*50);
		    glEnd();
		}
		for(int i=0;i<8;i++)
		{
		    glColor3ub(255,69,0);
		    glColor3ub(0,0,0);
		    glBegin(GL_TRIANGLES);
		    glVertex2f(930-b,250+i*50);
		    glVertex2f(935-b,245+i*50);
		    glVertex2f(940-b,255+i*50);
		    glEnd();
		}
		for(int i=0;i<5;i++)
		{
		    glColor3ub(255,69,0);
		    glColor3ub(0,0,0);
		    glBegin(GL_TRIANGLES);
		    glVertex2f(975-b,350+i*50);
		    glVertex2f(980-b,345+i*50);
		    glVertex2f(985-b,355+i*50);
		    glEnd();
		}
		for(int i=0;i<4;i++)
		{
		    glColor3ub(255,69,0);
		    glColor3ub(0,0,0);
		    glBegin(GL_TRIANGLES);
		    glVertex2f(1005-b,450+i*50);
		    glVertex2f(1010-b,445+i*50);
		    glVertex2f(1015-b,455+i*50);
		    glEnd();
		}
	
	char *str25 = "Press g/G to continue";
	
	glColor3f(0,0,1);
	glRasterPos2f(450.0,25.0);
	for(int i=0;i<strlen(str25);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str25[i]);
	}
		glFlush();		
	}
	b=-100;
	countb++;
	if(countb>2) break;
}

}


void entrance_crowd()
{
	int inc = 75;
	
	glPushMatrix();
	glScalef(1.2,1.2,0);
	for(int j=1;j<5;j++)
	{
		if(j%2 == 0)
		{
			glTranslatef(25,-50,0);
			{
				for(int i=1;i<12;i++)
				{
					glColor3ub(0,0,0);
					glPushMatrix();
					glTranslatef(100+i*inc,400,0);
					glutSolidTorus(1,10,100,90);
					glPopMatrix();
					glColor3ub(255,191,128);
					glPushMatrix();
					glTranslatef(100+i*inc,400,0);
					glutSolidTorus(7,7,100,90);
					glPopMatrix();
					
					glColor3ub(0,0,0);
					glBegin(GL_LINES);
					glVertex2i(100+i*inc,400);
			 		glVertex2i(100+i*inc,395); //nose
			  		glVertex2i(91+i*inc,405);
			 		glVertex2i(97+i*inc,405);//eyebrow
			  		glVertex2i(103+i*inc,405);
			 		glVertex2i(109+i*inc,405);//eyebrow
			 		glEnd();
			 		
			 		//ear right
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
					glVertex2i(100+i*inc-14,400);
					glVertex2i(100+i*inc-14,396);
					glVertex2i(98+i*inc-14,395);
					glVertex2i(98+i*inc-14,401);
					glEnd();
					
					//ear left
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
					glVertex2i(114+i*inc,400);
					glVertex2i(116+i*inc,401);
					glVertex2i(116+i*inc,396);
					glVertex2i(114+i*inc,395);
					glEnd();
					
					// eyes
			 		/*glBegin(GL_POLYGON);
			 		glVertex2i(93+i*inc,403);
			 		glVertex2i(95+i*inc,403);
			 		glVertex2i(95+i*inc,401);
			 		glVertex2i(93+i*inc,401);
					glEnd();

					glBegin(GL_POLYGON);
			 		glVertex2i(105+i*inc,403);
			 		glVertex2i(107+i*inc,403);
			 		glVertex2i(107+i*inc,401);
			 		glVertex2i(105+i*inc,401);
					glEnd();
					*/
					// mouth
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
			 		glVertex2i(95+i*inc,392);
			 		glVertex2i(100+i*inc,390);
			 		glVertex2i(105+i*inc,392);
			 		glVertex2i(100+i*inc,392);
					glEnd();
					
					//body
					glBegin(GL_POLYGON);
			 		glColor3ub(25-i*j*30,10+i*j*10,18+i*j*20);
				    	glVertex2i(89+i*inc,385);
			 		glVertex2i(111+i*inc,385);
			 		glVertex2i(126+i*inc,374);
			 		glVertex2i(121+i*inc,364);
			 		glVertex2i(116+i*inc,370);
					glVertex2i(116+i*inc,350);
			 		glVertex2i(84+i*inc,350);
			 		glVertex2i(84+i*inc,370);
			 		glVertex2i(79+i*inc,365);
			 		glVertex2i(74+i*inc,374);
					glEnd(); 
								
					//hands
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
		 			glVertex2i(125+i*inc,373);
		 			glVertex2i(135+i*inc,358);
		 			glVertex2i(127+i*inc,359);
		 			glVertex2i(122+i*inc,367);
		 			glEnd();
		 			
		 			glBegin(GL_POLYGON);
					glVertex2i(135+i*inc,358);
					if(flag==0)
					{
						glVertex2i(116+i*inc,343);
			 			glVertex2i(116+i*inc,350);
					}
					else
					if(flag==1)
					{
						glVertex2i(116+i*inc,365);
						glVertex2i(106+i*inc,355);
					}                                                                  
					glVertex2i(127+i*inc,359);
					glEnd();
					
					glBegin(GL_POLYGON);
				 	glVertex2i(75+i*inc,373);
			 		glVertex2i(65+i*inc,358);
			 		glVertex2i(73+i*inc,359);
			 		glVertex2i(78+i*inc,367);
			 		glEnd();

			  		glBegin(GL_POLYGON);
					glVertex2i(65+i*inc,358);
					if(flag==0)
					{
						glVertex2i(84+i*inc,343);
			   			glVertex2i(84+i*inc,350);
					}
					else
					if(flag==1)
					{
			   			glVertex2i(84+i*inc,365);
			   			glVertex2i(106+i*inc,355);
					}
			   		glVertex2i(73+i*inc,359);
			  		glEnd();
			  		
			  		// belt
			 		glBegin(GL_POLYGON);
					glColor3ub(150,12,30);
			 		glVertex2i(116+i*inc,350);
			 		glVertex2i(84+i*inc,350);
			 		glVertex2i(84+i*inc,345);
					glVertex2i(84+i*inc,345);
					glVertex2i(116+i*inc,345);
					glEnd();

					//pant
					glBegin(GL_POLYGON);
					glColor3f(1,0.270588,0);
					glVertex2i(115+i*inc,345);
					glVertex2i(85+i*inc,345);
					glVertex2i(80+i*inc,310);
					glVertex2i(90+i*inc,310);
					glVertex2i(93+i*inc,343);
					glVertex2i(110+i*inc,310);
					glVertex2i(120+i*inc,310);
					glEnd();

					//shoe left
					glBegin(GL_POLYGON);
					glColor3ub(255,0,100);
					glVertex2i(90+i*inc,310);
					glVertex2i(90+i*inc,301);
					glVertex2i(72+i*inc,301);
					glVertex2i(80+i*inc,310);
					glEnd();

					//shoe right
					glBegin(GL_POLYGON);
					glColor3ub(255,0,100);
					glVertex2i(110+i*inc,310);
					glVertex2i(110+i*inc,301);
					glVertex2i(128+i*inc,301);
					glVertex2i(120+i*inc,310);
					glEnd();
				}
			}
		}
		else
		{
			glTranslatef(-25,-50,0);
			{
				for(int i=0;i<12;i++)
				{
					glColor3ub(0,0,0);
					glPushMatrix();
					glTranslatef(100+i*inc,400,0);
					glutSolidTorus(1,10,100,90);
					glPopMatrix();
					glColor3ub(255,191,128);
					glPushMatrix();
					glTranslatef(100+i*inc,400,0);
					glutSolidTorus(7,7,100,90);
					glPopMatrix();
					
					glColor3ub(0,0,0);
					glBegin(GL_LINES);
					glVertex2i(100+i*inc,400);
			 		glVertex2i(100+i*inc,395); //nose
			  		glVertex2i(91+i*inc,405);
			 		glVertex2i(97+i*inc,405);//eyebrow
			  		glVertex2i(103+i*inc,405);
			 		glVertex2i(109+i*inc,405);//eyebrow
			 		glEnd();
			 		
			 		//ear right
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
					glVertex2i(100+i*inc-14,400);
					glVertex2i(100+i*inc-14,396);
					glVertex2i(98+i*inc-14,395);
					glVertex2i(98+i*inc-14,401);
					glEnd();
					
					//ear left
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
					glVertex2i(114+i*inc,400);
					glVertex2i(116+i*inc,401);
					glVertex2i(116+i*inc,396);
					glVertex2i(114+i*inc,395);
					glEnd();
					
					// eyes
			 		/*glBegin(GL_POLYGON);
			 		glVertex2i(93+i*inc,403);
			 		glVertex2i(95+i*inc,403);
			 		glVertex2i(95+i*inc,401);
			 		glVertex2i(93+i*inc,401);
					glEnd();

					glBegin(GL_POLYGON);
			 		glVertex2i(105+i*inc,403);
			 		glVertex2i(107+i*inc,403);
			 		glVertex2i(107+i*inc,401);
			 		glVertex2i(105+i*inc,401);
					glEnd();
					*/
					// mouth
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
			 		glVertex2i(95+i*inc,392);
			 		glVertex2i(100+i*inc,390);
			 		glVertex2i(105+i*inc,392);
			 		glVertex2i(100+i*inc,392);
					glEnd();
					
					//body
					glBegin(GL_POLYGON);
			 		glColor3ub(25-i*j*30,10+i*j*10,18+i*j*20);
				    	glVertex2i(89+i*inc,385);
			 		glVertex2i(111+i*inc,385);
			 		glVertex2i(126+i*inc,374);
			 		glVertex2i(121+i*inc,364);
			 		glVertex2i(116+i*inc,370);
					glVertex2i(116+i*inc,350);
			 		glVertex2i(84+i*inc,350);
			 		glVertex2i(84+i*inc,370);
			 		glVertex2i(79+i*inc,365);
			 		glVertex2i(74+i*inc,374);
					glEnd(); 
								
					//hands
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
		 			glVertex2i(125+i*inc,373);
		 			glVertex2i(135+i*inc,358);
		 			glVertex2i(127+i*inc,359);
		 			glVertex2i(122+i*inc,367);
		 			glEnd();
		 			
		 			glBegin(GL_POLYGON);
					glVertex2i(135+i*inc,358);
					if(flag==0)
					{
						glVertex2i(116+i*inc,343);
			 			glVertex2i(116+i*inc,350);
					}
					else
					if(flag==1)
					{
						glVertex2i(116+i*inc,365);
						glVertex2i(106+i*inc,355);
					}                                                                  
					glVertex2i(127+i*inc,359);
					glEnd();
					
					glBegin(GL_POLYGON);
				 	glVertex2i(75+i*inc,373);
			 		glVertex2i(65+i*inc,358);
			 		glVertex2i(73+i*inc,359);
			 		glVertex2i(78+i*inc,367);
			 		glEnd();

			  		glBegin(GL_POLYGON);
					glVertex2i(65+i*inc,358);
					if(flag==0)
					{
						glVertex2i(84+i*inc,343);
			   			glVertex2i(84+i*inc,350);
					}
					else
					if(flag==1)
					{
			   			glVertex2i(84+i*inc,365);
			   			glVertex2i(106+i*inc,355);
					}
			   		glVertex2i(73+i*inc,359);
			  		glEnd();
			  		
			  		// belt
			 		glBegin(GL_POLYGON);
					glColor3ub(150,12,30);
			 		glVertex2i(116+i*inc,350);
			 		glVertex2i(84+i*inc,350);
			 		glVertex2i(84+i*inc,345);
					glVertex2i(84+i*inc,345);
					glVertex2i(116+i*inc,345);
					glEnd();

					//pant
					glBegin(GL_POLYGON);
					glColor3f(1,0.270588,0);
					glVertex2i(115+i*inc,345);
					glVertex2i(85+i*inc,345);
					glVertex2i(80+i*inc,310);
					glVertex2i(90+i*inc,310);
					glVertex2i(93+i*inc,343);
					glVertex2i(110+i*inc,310);
					glVertex2i(120+i*inc,310);
					glEnd();

					//shoe left
					glBegin(GL_POLYGON);
					glColor3ub(255,0,100);
					glVertex2i(90+i*inc,310);
					glVertex2i(90+i*inc,301);
					glVertex2i(72+i*inc,301);
					glVertex2i(80+i*inc,310);
					glEnd();

					//shoe right
					glBegin(GL_POLYGON);
					glColor3ub(255,0,100);
					glVertex2i(110+i*inc,310);
					glVertex2i(110+i*inc,301);
					glVertex2i(128+i*inc,301);
					glVertex2i(120+i*inc,310);
					glEnd();
				}
			}
		}
	}
	glPopMatrix();
}
void colonel_army(){
	int inca = 50;
	int count = 0;
	while(1)
	{
	for(p=-100;p<=1050;p=p+100)
	{
	glBegin(GL_POLYGON);
	glColor3ub(135,206,250);
	glVertex2i(0,600);
	glVertex2i(1200,600);
	glVertex2i(1200,900);
	glVertex2i(0,900);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(194,178,128);
	glVertex2i(0,0);
	glVertex2i(1200,0);
	glVertex2i(1200,600);
	glVertex2i(0,600);
	glEnd();
	glPushMatrix();
	glScalef(1.2,1.2,0);
	for(int j=0;j<4;j++)
	{
		if(j%2 == 0)
		{
			glTranslatef(40,-100,0);
			{
				for(int i=0;i<17;i++)
				{
					glColor3ub(0,0,0);
					glPushMatrix();
					glTranslatef(100+i*inca,600,0);
					glutSolidTorus(1,10,100,90);
					glPopMatrix();
					glColor3ub(255,191,128);
					glPushMatrix();
					glTranslatef(100+i*inca,600,0);
					glutSolidTorus(7,7,100,90);
					glPopMatrix();
					
					glColor3ub(0,0,0);
					glBegin(GL_LINES);
					glVertex2i(100+i*inca,600);
			 		glVertex2i(100+i*inca,595); //nose
			  		glVertex2i(91+i*inca,605);
			 		glVertex2i(97+i*inca,605);//eyebrow
			  		glVertex2i(103+i*inca,605);
			 		glVertex2i(109+i*inca,605);//eyebrow
			 		glEnd();
			 		
			 		//ear right
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
					glVertex2i(100+i*inca-14,600);
					glVertex2i(100+i*inca-14,596);
					glVertex2i(98+i*inca-14,595);
					glVertex2i(98+i*inca-14,601);
					glEnd();
					
					//ear left
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
					glVertex2i(114+i*inca,600);
					glVertex2i(116+i*inca,601);
					glVertex2i(116+i*inca,596);
					glVertex2i(114+i*inca,595);
					glEnd();
					
					// eyes
			 		/*glBegin(GL_POLYGON);
			 		glVertex2i(93+i*inc,603);
			 		glVertex2i(95+i*inc,603);
			 		glVertex2i(95+i*inc,601);
			 		glVertex2i(93+i*inc,601);
					glEnd();

					glBegin(GL_POLYGON);
			 		glVertex2i(105+i*inc,603);
			 		glVertex2i(107+i*inc,603);
			 		glVertex2i(107+i*inc,601);
			 		glVertex2i(105+i*inc,601);
					glEnd();
					*/
					
					// mouth
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
			 		glVertex2i(95+i*inca,592);
			 		glVertex2i(100+i*inca,590);
			 		glVertex2i(105+i*inca,592);
			 		glVertex2i(100+i*inca,592);
					glEnd();
					
					//body
					glBegin(GL_POLYGON);
			 		glColor3ub(109,113,46);
				    	glVertex2i(89+i*inca,585);
			 		glVertex2i(111+i*inca,585);
			 		glVertex2i(126+i*inca,574);
			 		glVertex2i(121+i*inca,564);
			 		glVertex2i(116+i*inca,570);
					glVertex2i(116+i*inca,550);
			 		glVertex2i(84+i*inca,550);
			 		glVertex2i(84+i*inca,570);
			 		glVertex2i(79+i*inca,565);
			 		glVertex2i(74+i*inca,574);
					glEnd(); 
								
					//hands
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
					glVertex2i(125+i*inca,573);
					glVertex2i(135+i*inca,558);
					glVertex2i(127+i*inca,559);
					glVertex2i(122+i*inca,567);
					glEnd();
					
					glBegin(GL_POLYGON);
					glColor3ub(0,0,0);
					glVertex2i(135+i*inca,558);
					if(flag==0)
					{
						glVertex2i(116+i*inca,543);
			 			glVertex2i(116+i*inca,550);
					}
					else
					if(flag==1)
					{
						glVertex2i(116+i*inca,565);
						glVertex2i(106+i*inca,555);
					}                                                                  
					glVertex2i(627+i*inca,559);
					glEnd();
					
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
				 	glVertex2i(75+i*inca,573);
			 		glVertex2i(65+i*inca,558);
			 		glVertex2i(73+i*inca,559);
			 		glVertex2i(78+i*inca,567);
			 		glEnd();

			  		glBegin(GL_POLYGON);
			  		glColor3ub(0,0,0);
					glVertex2i(65+i*inca,558);
					if(flag==0)
					{
						glVertex2i(84+i*inca,543);
			   			glVertex2i(84+i*inca,550);
					}
					else
					if(flag==1)
					{
			   			glVertex2i(84+i*inca,565);
			   			glVertex2i(106+i*inca,555);
					}
			   		glVertex2i(573+i*inca,559);
			  		glEnd();
			  		
			  		// belt
			 		glBegin(GL_POLYGON);
					glColor3ub(150,12,30);
			 		glVertex2i(116+i*inca,550);
			 		glVertex2i(84+i*inca,550);
			 		glVertex2i(84+i*inca,545);
					glVertex2i(84+i*inca,545);
					glVertex2i(116+i*inca,545);
					glEnd();

					//pant
					glBegin(GL_POLYGON);
					glColor3ub(34,139,34);
					glVertex2i(115+i*inca,545);
					glVertex2i(85+i*inca,545);
					glVertex2i(80+i*inca,510);
					glVertex2i(90+i*inca,510);
					glVertex2i(93+i*inca,543);
					glVertex2i(110+i*inca,510);
					glVertex2i(120+i*inca,510);
					glEnd();

					//shoe left
					glBegin(GL_POLYGON);
					glColor3ub(0,0,0);
					glVertex2i(90+i*inca,510);
					glVertex2i(90+i*inca,501);
					glVertex2i(72+i*inca,501);
					glVertex2i(80+i*inca,510);
					glEnd();

					//shoe right
					glBegin(GL_POLYGON);
					glColor3ub(0,0,0);
					glVertex2i(110+i*inca,510);
					glVertex2i(110+i*inca,501);
					glVertex2i(128+i*inca,501);
					glVertex2i(120+i*inca,510);
					glEnd();
				}
			}
		}
		else
		{
			glTranslatef(-40,-100,0);
			{
				for(int i=0;i<17;i++)
				{
					glColor3ub(0,0,0);
					glPushMatrix();
					glTranslatef(100+i*inca,600,0);
					glutSolidTorus(1,10,100,90);
					glPopMatrix();
					glColor3ub(255,191,128);
					glPushMatrix();
					glTranslatef(100+i*inca,600,0);
					glutSolidTorus(7,7,100,90);
					glPopMatrix();
					
					glColor3ub(0,0,0);
					glBegin(GL_LINES);
					glVertex2i(100+i*inca,600);
			 		glVertex2i(100+i*inca,595); //nose
			  		glVertex2i(91+i*inca,605);
			 		glVertex2i(97+i*inca,605);//eyebrow
			  		glVertex2i(103+i*inca,605);
			 		glVertex2i(109+i*inca,605);//eyebrow
			 		glEnd();
			 		
			 		//ear right
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
					glVertex2i(100+i*inca-14,600);
					glVertex2i(100+i*inca-14,596);
					glVertex2i(98+i*inca-14,595);
					glVertex2i(98+i*inca-14,601);
					glEnd();
					
					//ear left
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
					glVertex2i(114+i*inca,600);
					glVertex2i(116+i*inca,601);
					glVertex2i(116+i*inca,596);
					glVertex2i(114+i*inca,595);
					glEnd();
					
					// eyes
			 		/*glBegin(GL_POLYGON);
			 		glVertex2i(93+i*inc,603);
			 		glVertex2i(95+i*inc,603);
			 		glVertex2i(95+i*inc,601);
			 		glVertex2i(93+i*inc,601);
					glEnd();

					glBegin(GL_POLYGON);
			 		glVertex2i(105+i*inc,603);
			 		glVertex2i(107+i*inc,603);
			 		glVertex2i(107+i*inc,601);
			 		glVertex2i(105+i*inc,601);
					glEnd();
					*/
					
					// mouth
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
			 		glVertex2i(95+i*inca,592);
			 		glVertex2i(100+i*inca,590);
			 		glVertex2i(105+i*inca,592);
			 		glVertex2i(100+i*inca,592);
					glEnd();
					
					//body
					glBegin(GL_POLYGON);
			 		glColor3ub(109,113,46);
				    	glVertex2i(89+i*inca,585);
			 		glVertex2i(111+i*inca,585);
			 		glVertex2i(126+i*inca,574);
			 		glVertex2i(121+i*inca,564);
			 		glVertex2i(116+i*inca,570);
					glVertex2i(116+i*inca,550);
			 		glVertex2i(84+i*inca,550);
			 		glVertex2i(84+i*inca,570);
			 		glVertex2i(79+i*inca,565);
			 		glVertex2i(74+i*inca,574);
					glEnd(); 
								
					//hands
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
					glVertex2i(125+i*inca,573);
					glVertex2i(135+i*inca,558);
					glVertex2i(127+i*inca,559);
					glVertex2i(122+i*inca,567);
					glEnd();
					
					glBegin(GL_POLYGON);
					glColor3ub(0,0,0);
					glVertex2i(135+i*inca,558);
					if(flag==0)
					{
						glVertex2i(116+i*inca,543);
			 			glVertex2i(116+i*inca,550);
					}
					else
					if(flag==1)
					{
						glVertex2i(116+i*inca,565);
						glVertex2i(106+i*inca,555);
					}                                                                  
					glVertex2i(627+i*inca,559);
					glEnd();
					
					glBegin(GL_POLYGON);
					glColor3ub(255,191,128);
				 	glVertex2i(75+i*inca,573);
			 		glVertex2i(65+i*inca,558);
			 		glVertex2i(73+i*inca,559);
			 		glVertex2i(78+i*inca,567);
			 		glEnd();

			  		glBegin(GL_POLYGON);
			  		glColor3ub(0,0,0);
					glVertex2i(65+i*inca,558);
					if(flag==0)
					{
						glVertex2i(84+i*inca,543);
			   			glVertex2i(84+i*inca,550);
					}
					else
					if(flag==1)
					{
			   			glVertex2i(84+i*inca,565);
			   			glVertex2i(106+i*inca,555);
					}
			   		glVertex2i(573+i*inca,559);
			  		glEnd();
			  		
			  		// belt
			 		glBegin(GL_POLYGON);
					glColor3ub(150,12,30);
			 		glVertex2i(116+i*inca,550);
			 		glVertex2i(84+i*inca,550);
			 		glVertex2i(84+i*inca,545);
					glVertex2i(84+i*inca,545);
					glVertex2i(116+i*inca,545);
					glEnd();

					//pant
					glBegin(GL_POLYGON);
					glColor3ub(34,139,34);
					glVertex2i(115+i*inca,545);
					glVertex2i(85+i*inca,545);
					glVertex2i(80+i*inca,510);
					glVertex2i(90+i*inca,510);
					glVertex2i(93+i*inca,543);
					glVertex2i(110+i*inca,510);
					glVertex2i(120+i*inca,510);
					glEnd();

					//shoe left
					glBegin(GL_POLYGON);
					glColor3ub(0,0,0);
					glVertex2i(90+i*inca,510);
					glVertex2i(90+i*inca,501);
					glVertex2i(72+i*inca,501);
					glVertex2i(80+i*inca,510);
					glEnd();

					//shoe right
					glBegin(GL_POLYGON);
					glColor3ub(0,0,0);
					glVertex2i(110+i*inca,510);
					glVertex2i(110+i*inca,501);
					glVertex2i(128+i*inca,501);
					glVertex2i(120+i*inca,510);
					glEnd();
				}
			}
			
		}
	}
	glPopMatrix();
	glColor3f(0.7,0.7,0.0);
	    glBegin(GL_QUADS);
	    glVertex2f(750-p,750);
	    glVertex2f(900-p,750);
	    glVertex2f(900-p,700);
	    glVertex2f(750-p,700);
	    glEnd();
	    
	    glBegin(GL_QUADS);
	    glVertex2f(900-p,750);
	    glVertex2f(950-p,800);
	    glVertex2f(980-p,800);
	    glVertex2f(900-p,700);
	    glEnd();
	    
	    glColor3f(0.7,0.0,1.0);
	    glBegin(GL_TRIANGLES);
	    glVertex2f(700-p,710);
	    glVertex2f(750-p,750);
	    glVertex2f(750-p,700);
	    glEnd();
	    
	    glColor3f(0,0,1);
	    glBegin(GL_QUADS);
	    glVertex2f(820-p,750);
	    glVertex2f(860-p,790);
	    glVertex2f(880-p,790);
	    glVertex2f(850-p,750);
	    glEnd();
	    
	    glBegin(GL_QUADS);
	    glVertex2f(820-p,700);
	    glVertex2f(850-p,700);
	    glVertex2f(860-p,670);
	    glVertex2f(840-p,670);
	    glEnd();
	  char *str30 = "Press e/E to continue";
	glColor3f(0,0,1);
	glRasterPos2f(450.0,25.0);
	for(int i=0;i<strlen(str30);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str30[i]);
	}
	glFlush();
}
	p=-100;
	count++;
	if(count>1) break;
}
}

void final_text(){
	glClear(GL_COLOR_BUFFER_BIT);
	char *str18 = "Estimates of those killed vary between";
	char *str39 = "379 and 1500+ people ";
	char *str40 = "and over 1,200 other people were injured";
	char *str41 = "of whom 192 were seriously injured.";
	char *str43 = "Government of India has built a";
	char *str44 = "Memorial in order to remember the shahids.";
	char *str42 = "Press h/H to continue";
	glColor3f(0,0,1);
	glRasterPos2f(50.0,850.0);
	for(int i=0;i<strlen(str18);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str18[i]);
	}
	
	glColor3f(0,0,1);
	glRasterPos2f(50.0,750.0);
	for(int i=0;i<strlen(str39);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str39[i]);
	}
	
		glColor3f(0,0,1);
	glRasterPos2f(50.0,650.0);
	for(int i=0;i<strlen(str40);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str40[i]);
	}
	glColor3f(0,0,1);
	glRasterPos2f(50.0,550.0);
	for(int i=0;i<strlen(str41);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str41[i]);
	}
	glColor3f(0,0,1);
	glRasterPos2f(50.0,450.0);
	for(int i=0;i<strlen(str43);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str43[i]);
	}
	glColor3f(0,0,1);
	glRasterPos2f(50.0,350.0);
	for(int i=0;i<strlen(str44);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str44[i]);
	}
			glColor3f(0,0,1);
	glRasterPos2f(450.0,25.0);
	for(int i=0;i<strlen(str42);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str42[i]);
	}
	glFlush();
}
void drawTree(int x, int y) {
glColor3f(0.3, 0.9, 0.1);
glBegin(GL_POLYGON);
glVertex2i(x - 36, y + 100);
glVertex2i(x + 44, y + 100);
glVertex2i(x + 4, y + 230);
glEnd();
glColor3f(0.384, 0.231, 0.176);
glBegin(GL_POLYGON);
glVertex2i(x, y);
glVertex2i(x + 8, y);
glVertex2i(x + 8, y + 100);
glVertex2i(x, y + 100);
glEnd();
}

void memorial_screen()
{
//ground
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex2i(0, 0);
glVertex2i(1300, 0);
glVertex2i(1300, 160);
glVertex2i(0, 160);
glEnd();

//sky
glColor3f(0.380, 0.921, 0.960);
glBegin(GL_POLYGON);
glVertex2i(0, 160);
glVertex2i(1300, 160);
glVertex2i(1300, 900);
glVertex2i(0, 900);
glEnd();

//platform
glColor3f(0.301, 0.180, 0.137);
glBegin(GL_POLYGON);
glVertex2i(280,180);
glVertex2i(760,180);
glVertex2i(760,200);
glVertex2i(280,200);
glEnd();

glColor3f(0.301, 0.180, 0.137);
glBegin(GL_POLYGON);
glVertex2i(230, 160);
glVertex2i(800, 160);
glVertex2i(800, 180);
glVertex2i(230, 180);
glEnd();


glColor3f(0.478, 0.360, 0.219);
//left poly
int p1[13][2] = { { 380,200 },{ 380,220 },{ 385,240 }, { 390,260 },{ 400,280 },  { 410,290 }, {420,290},{ 430,290 }, { 440,280 }, { 450,260 },{ 455,240 },{ 460,220 }, {460,200 }};
glBegin(GL_POLYGON);
for (int i = 0; i < 13; i++) {
glVertex2i(p1[i][0], p1[i][1]);
}
glEnd();

//center poly
int p2[][2] = { { 460,220 }, {460,200 }, { 440,280 },{435,310},{430,350},{430,410},{435,460},{440,500},{450,550},{460,600},{470,640},{480,680},{500,700},{520,700},
{540,700},{560,680},{570,640},{580,600},{590,550},{600,500},{605,460},{610,410},{610,350},{605,310},{580,220}};
glBegin(GL_POLYGON);
for (int i = 0; i <25; i++) {
glVertex2i(p2[i][0], p2[i][1]);
}
glEnd();

//right poly

int p3[13][2] = { { 580,200 },{ 580,220 },{ 585,240 }, { 590,260 },{600,280},  { 610,290 }, {620,290},{ 630,290 }, { 640,280 }, { 650,260 },{ 655,240 },{ 660,220 }, {660,200 } };
glBegin(GL_POLYGON);
for (int i = 0; i < 13; i++) {
glVertex2i(p3[i][0], p3[i][1]);
}
glEnd();

//lines

glColor3f(0.188, 0.133, 0.074);
glBegin(GL_LINES);
for (int i = 1; i < 13 / 2; i++) {
glVertex2iv(p3[i]);
glVertex2iv(p3[13 - i]);
}
glEnd();

glBegin(GL_LINES);
for (int i = 1; i < 13 / 2; i++) {
glVertex2iv(p1[i]);
glVertex2iv(p1[13 - i]);
}
glEnd();

glBegin(GL_LINES);
for (int i = 1; i < 25 / 2; i++) {
glVertex2iv(p2[i]);
glVertex2iv(p2[25 - i-1]);
}
glEnd();

//bush

int x=70,y=40;
glColor3f(0.1, 0.6324, 0.1);
glBegin(GL_TRIANGLES);
glVertex2f(x, y);
glVertex2f(x + 25, y);
glVertex2f(x - 25, y + 100);
glVertex2f(x + 25, y);
glVertex2f(x + 50, y);
glVertex2f(x + 25, y + 100);
glEnd();

x = 850, y = 70;
glColor3f(0.1, 0.6324, 0.1);
glBegin(GL_TRIANGLES);
glVertex2f(x, y);
glVertex2f(x + 25, y);
glVertex2f(x - 25, y + 100);
glVertex2f(x + 25, y);
glVertex2f(x + 50, y);
glVertex2f(x + 25, y + 100);
glEnd();

x = 1100, y = 50;
glColor3f(0.1, 0.6324, 0.1);
glBegin(GL_TRIANGLES);
glVertex2f(x, y);
glVertex2f(x + 25, y);
glVertex2f(x - 25, y + 100);
glVertex2f(x + 25, y);
glVertex2f(x + 50, y);
glVertex2f(x + 25, y + 100);
glEnd();

   //tree
drawTree(200, 150);
drawTree(120, 100);
drawTree(40, 50);

drawTree(850, 150);
drawTree(930, 100);
drawTree(1010, 50);

	char *str43 = "Press q/Q to Quit";
	glColor3f(0,0,1);
	glRasterPos2f(350.0,25.0);
	for(int i=0;i<strlen(str43);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str43[i]);
	}

glFlush();
}
void fight_text()
{
glClear(GL_COLOR_BUFFER_BIT);
	char *str15 = "The Jallianwala Bagh could only be exited on one side,";
	char *str28 = "as its other three sides were enclosed by buildings. ";
	char *str16 = "After blocking the exit with his troops,";
	char *str29 = "General ordered them to shoot at the crowd, ";
	char *str30 = "continuing to fire even as the protestors tried to flee.";
	char *str17 = "The troops kept on firing until their ammunition was exhausted.";
	char *str36 = "Press f/F to continue";
	
	glColor3f(0,0,1);
	glRasterPos2f(50.0,850.0);
	for(int i=0;i<strlen(str15);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str15[i]);
	}
	
	glColor3f(0,0,1);
	glRasterPos2f(50.0,750.0);
	for(int i=0;i<strlen(str28);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str28[i]);
	}
	
	glColor3f(0,0,1);
	glRasterPos2f(50.0,650.0);
	for(int i=0;i<strlen(str16);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str16[i]);
	}
	
	glColor3f(0,0,1);
	glRasterPos2f(50.0,550.0);
	for(int i=0;i<strlen(str29);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str29[i]);
	}
	
	glColor3f(0,0,1);
	glRasterPos2f(50.0,450.0);
	for(int i=0;i<strlen(str30);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str30[i]);
	}
	
	glColor3f(0,0,1);
	glRasterPos2f(50.0,350.0);
	for(int i=0;i<strlen(str17);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str17[i]);
	}

	glColor3f(0,0,1);
	glRasterPos2f(450.0,25.0);
	for(int i=0;i<strlen(str36);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str36[i]);
	}
	glFlush();
}

