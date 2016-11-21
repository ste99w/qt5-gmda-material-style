#include <QtWidgets>

#include "materialstyle.h"

void MaterialStyle::polish(QPalette &palette) {
  palette.setBrush(QPalette::Button, Qt::red);
}
