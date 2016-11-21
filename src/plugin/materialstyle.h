#ifndef MATERIALSTYLE_H
#define MATERIALSTYLE_H

#include <QProxyStyle>

QT_BEGIN_NAMESPACE
class QPalette;
QT_END_NAMESPACE

class MaterialStyle : public QProxyStyle {
  Q_OBJECT

 public:
  MaterialStyle(){};

  void polish(QPalette &palette) Q_DECL_OVERRIDE;
};

#endif
