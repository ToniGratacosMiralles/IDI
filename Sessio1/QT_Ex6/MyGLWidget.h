// MyGLWidget.h
#include "BL3GLWidget.h"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/matrix_inverse.hpp"

class MyGLWidget : public BL3GLWidget {
  Q_OBJECT

  public:
    MyGLWidget(QWidget *parent=0) : BL3GLWidget(parent) {}
    ~MyGLWidget();

  protected:
    virtual void mouseMoveEvent(QMouseEvent *e);
    virtual void keyPressEvent(QKeyEvent* event);

    virtual void iniMaterialTerra();
    virtual void initializeGL();
    void iniFocus();

    glm::vec3 posFocus, colorFocus;
    GLuint posFocusLoc, colorFocusLoc;

  private:
    int printOglError(const char file[], int line, const char func[]);

public slots:
  void moveFocus(int n);
  void pinkWall();
  void greenWall();

signals:
  void changedFocus(int n);
};
