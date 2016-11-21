#include <QtWidgets>

#include "materialstyle.h"
#include "materialstyleplugin.h"

QStringList MaterialStylePlugin::keys() const {
  return QStringList() << "GMDAMaterialStyle";
}

QStyle *MaterialStylePlugin::create(const QString &key) {
  if (key.toLower() == "gmdamaterialstyle") return new MaterialStyle;
  return 0;
}
