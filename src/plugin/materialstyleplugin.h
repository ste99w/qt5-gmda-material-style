#ifndef MATERIALSTYLEPLUGIN_H
#define MATERIALSTYLEPLUGIN_H

#include <QStylePlugin>

QT_BEGIN_NAMESPACE
class QStringList;
class QStyle;
QT_END_NAMESPACE

class MaterialStylePlugin : public QStylePlugin {
  Q_OBJECT
  Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QStyleFactoryInterface" FILE
                        "materialstyle.json")

 public:
  MaterialStylePlugin() {}

  QStringList keys() const;
  QStyle *create(const QString &key) Q_DECL_OVERRIDE;
};

#endif
