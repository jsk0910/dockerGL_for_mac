#include <GL/glut.h> // opengl 라이브러리를 임포트 한다.

void play_display() // 생성할 opengl source를 설계한다. (실제 도형 및 그림 설계 )
{


 glClear(GL_COLOR_BUFFER_BIT);
 glBegin(GL_TRIANGLES);
   
 glVertex2f(0.5, 0.5);
 glVertex2f(-0.5, 0.5);
 glVertex2f(0.5, -0.5);
 glEnd();
glFlush();
}
void wincolor() { // 생성될 glut 디스플레이의 배경색을 결정할 함수를 설계 한다.
    glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // glut 시작시 가장 먼저 포함되어야 할 중요한 함수 선언 
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); // 생성될 glut 디스플레이의 모드 
    glutInitWindowPosition(5,5); // 생성될 glut 디스플레이의 위치
    glutInitWindowSize(700, 700); // 생성될 glut 디스플레이의 사이즈
    glutCreateWindow("sample"); // 생성될 glut 디스플레이의 이름 선언

    wincolor(); // 설계한 배경색 함수를 호출 한다.
    glutDisplayFunc(play_display); // 설계한 opengl source를 호출한다.
    glutMainLoop(); // main함수의 전체 glut 소스 명령을 실행한다.

    return 0;
}
