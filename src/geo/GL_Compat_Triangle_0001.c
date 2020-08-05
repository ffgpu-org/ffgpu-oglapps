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

void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	//Triangles hint testing
	glColor3f(1.0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0-240, 0-160);
	glVertex2f(30-240, 0-160);
	glVertex2f(30-240, 140-160);
	glColor3f(0, 1, 0);
	glVertex2f(30-240, 0-160);
	glVertex2f(30-240, 140-160);
	glVertex2f(60-240, 140-160);

	glColor3f(1, 0, 0);
	glVertex2f(40-240, 20-160);
	glVertex2f(60-240, 0-160);
	glVertex2f(90-240, 140-160);
	glColor3f(0, 1, 0);
	glVertex2f(60-240, 0-160);
	glVertex2f(110-240, 120-160);
	glVertex2f(90-240, 140-160);

	glColor3f(0, 1, 0);
	glVertex2f(100-240, 0-160);
	glVertex2f(130-240, 30-160);
	glVertex2f(120-240, 140-160);
	glColor3f(1, 0, 0);
	glVertex2f(130-240, 30-160);
	glVertex2f(120-240, 140-160);
	glVertex2f(150-240, 170-160);

	glColor3f(0, 1, 0);
	glVertex2f(140-240, 0-160);
	glVertex2f(200-240, 170-160);
	glVertex2f(150-240, 105-160);
	glColor3f(1, 0, 0);
	glVertex2f(140-240, 0-160);
	glVertex2f(190-240, 60-160);
	glVertex2f(200-240, 170-160);

	glColor3f(0, 1, 0);
	glVertex2f(220-240, 0-160);
	glVertex2f(250-240, 160-160);
	glVertex2f(210-240, 120-160);
	glColor3f(1, 0, 0);
	glVertex2f(250-240, 160-160);
	glVertex2f(210-240, 120-160);
	glVertex2f(270-240, 0-160);

	glColor3f(0, 1, 0);
	glVertex2f(280-240, 0-160);
	glVertex2f(310-240, 140-160);
	glVertex2f(280-240, 140-160);
	glColor3f(1, 0, 0);
	glVertex2f(280-240, 0-160);
	glVertex2f(310-240, 0-160);
	glVertex2f(310-240, 140-160);

	glColor3f(0, 1, 0);
	glVertex2f(320-240, 20-160);
	glVertex2f(370-240, 140-160);
	glVertex2f(350-240, 160-160);
	glColor3f(1, 0, 0);
	glVertex2f(320-240, 20-160);
	glVertex2f(340-240, 0-160);
	glVertex2f(370-240, 140-160);

	glColor3f(0, 1, 0);
	glVertex2f(370-240, 110-160);
	glVertex2f(380-240, 0-160);
	glVertex2f(400-240, 140-160);
	glColor3f(1, 0, 0);
	glVertex2f(380-240, 0-160);
	glVertex2f(410-240, 30-160);
	glVertex2f(400-240, 140-160);

	glColor3f(0, 1, 0);
	glVertex2f(420-240, 80-160);
	glVertex2f(480-240, 80-160);
	glVertex2f(450-240, 160-160);
	glColor3f(1, 0, 0);
	glVertex2f(420-240, 80-160);
	glVertex2f(460-240, 0-160);
	glVertex2f(480-240, 80-160);
	glEnd();

	//Small Traingle Testbench
	glBegin(GL_TRIANGLES);
	glColor3f(1, 0, 0);
	glVertex2f(250-240, 280-160);
	glVertex2f(251-240, 280-160);
	glVertex2f(251-240, 281-160);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(1, 0, 0);
	glVertex2f(255-240, 280-160);
	glVertex2f(257-240, 280-160);
	glVertex2f(257-240, 282-160);
	glEnd();
	glFlush(); 
}

void reshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glMatrixMode(GL_PROJECTION);
	glOrtho(-240, 240, -160, 160, -2, 2);
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
