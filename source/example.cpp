#include "fensterchen.hpp"
#include "point2d.hpp"

int main(int argc, char* argv[])
{
  Window win(glm::ivec2(800,800));

  while (!win.shouldClose()) {
    if (win.isKeyPressed(GLFW_KEY_ESCAPE)) {
      win.stop();
    }

    auto t = win.getTime();
    auto m = win.mousePosition();

    win.drawPoint(0.5, 0.5, 0, 0, 255);
    win.drawLine(0.1f,0.1f, 0.8f,0.1f, 255,0,0);

    Point2d p1();

    win.update();
  }

  return 0;
}
