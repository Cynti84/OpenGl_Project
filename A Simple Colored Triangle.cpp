#include <GL/glut.h>

// vertices of the triangle
GLfloat vertices[] = {
    0.0f, 0.8f, 0.0f, // Top vertex (blue)
    -0.5f, 0.0f, 0.0f, // Bottom-left vertex (red)
    0.5f, 0.0f, 0.0f  // Bottom-right vertex (green)
};

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_TRIANGLES);
    
    // Vertex 1 (blue)
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3fv(&vertices[0]);
    
    // Vertex 2 (red)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3fv(&vertices[3]);
    
    // Vertex 3 (green)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3fv(&vertices[6]);
    
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f,1.0f);//first vertex top left blue
	glVertex2f(-0.3f, 0.0f);

	glColor3f(0.0f, 1.0f,0.0f);//second vertex bottom left green
	glVertex2f(-0.3f, -0.5f);

	glColor3f(0.0f, 0.0f,1.0f);//first vertex bottom right blue
	glVertex2f(0.3f, -0.5f);

	glColor3f(1.0f, 0.0f,0.0f);//first vertex top right red
	glVertex2f(0.3f, 0.0f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);//first line red
	glVertex2f(-0.4f, 0.0f);
	glVertex2f(-0.4f, -0.6f);

	glColor3f(0.0f, 1.0f, 0.0f);//second line green
	glVertex2f(-0.4f, -0.6f);
	glVertex2f(0.4f, -0.6f);

	glColor3f(0.0f, 0.0f, 1.0f);//third line blue
	glVertex2f(0.4f, -0.6f);
	glVertex2f(0.4f, 0.0f);

	glEnd();


    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(300, 300);
    glutCreateWindow("My Hut");
    
    // Set the display function
    glutDisplayFunc(display);
    
    // Set the clear color (background color)
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black background
    
    glutMainLoop();
    return 0;
}