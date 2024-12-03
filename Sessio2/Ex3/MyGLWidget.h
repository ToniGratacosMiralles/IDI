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

    glm::vec4 posFocusEscena, posFocusCamera;
    glm::vec3 colorFocus;
    GLuint posFocusLoc, colorFocusLoc, boolFocusEscenaLoc;
    bool focus_escena;

  private:
    int printOglError(const char file[], int line, const char func[]);
};
