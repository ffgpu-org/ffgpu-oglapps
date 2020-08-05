///////////////////////////////////////////////////////////////////////////////
// ____________ _____ ______ _   _
// |  ___|  ___|  __ \| ___ \ | | |
// | |_  | |_  | |  \/| |_/ / | | |
// |  _| |  _| | | __ |  __/| | | |
// | |   | |   | |_\ \| |   | |_| |
// \_|   \_|    \____/\_|    \___/
//
// Copyright (C) 2017-2020 ffgpu.org
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// version 2 as published by the Free Software Foundation;
//
///////////////////////////////////////////////////////////////////////////////

#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void init(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
	glLoadIdentity();

	glPushMatrix();
	glTranslatef(0.0,0.0,-5.0);

	glLineWidth(5.0);
	glBegin(GL_LINES);
	//画x轴
	glColor3f(1.0,0.0,0.0);
	glVertex3f(-5.0,0.0,0.0);
	glVertex3f(5.0,0.0,0.0);
	//画y轴
	glColor3f(1.0,1.0,1.0);
	glVertex3f(0.0,-5.0,0.0);
	glVertex3f(0.0,5.0,0.0);
	//画z轴
	glColor3f(0.0,1.0,0.0);
	glVertex3f(0.0,0.0,-5.0);
	glVertex3f(0.0,0.0,5.0);
	glEnd();
	glColor3f(0.0,1.0,0.0);

	//点在视景体后，中，前的情况
	glPointSize(5.0);
	glLineWidth(5.0);
	glBegin(GL_TRIANGLES);
	glVertex3f(1.0,1.0,0.0);
	glVertex3f(-1.0,1.0,0.0);
	glVertex3f(-1.0,-1.0,0.0);
	glEnd();

	glPopMatrix();
	glFlush(); 
}

void reshape(int w,int h)
{
	glViewport(0,0,(GLsizei)w,(GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-2.0,2.0,-2.0,2.0,1.0,5.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
	glutInitWindowSize(480, 320);
	glutInitWindowPosition(0, 0);
	glutCreateWindow(argv[0]);
	init ();
	glutReshapeFunc(reshape);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
