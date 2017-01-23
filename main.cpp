#include "window.h"
#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  // set opengl version information
  QSurfaceFormat format;
  format.setRenderableType(QSurfaceFormat::OpenGL);
  format.setProfile(QSurfaceFormat::CoreProfile);
  format.setVersion(3, 3);

  // window setup
  Window window;
  window.setFormat(format);
  window.resize(QSize(800, 600));
  window.show();

  return a.exec();
}
