#include <QtWidgets>

#include "demowindow.h"

DemoWindow::DemoWindow() {
  QPushButton *styledButton = new QPushButton(tr("Material Style Button"));

  QGridLayout *layout = new QGridLayout;
  layout->addWidget(styledButton);

  QGroupBox *styleBox = new QGroupBox(tr("A simple style button"));
  styleBox->setLayout(layout);

  QGridLayout *outerLayout = new QGridLayout;
  outerLayout->addWidget(styleBox, 0, 0);
  setLayout(outerLayout);

  setWindowTitle(tr("Qt5 Material Style Plugin Demo"));
}
