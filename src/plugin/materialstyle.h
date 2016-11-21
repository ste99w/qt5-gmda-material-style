/****************************************************************************
**
** Copyright (c) 2016 Stephen Wong <stephenhwong@outlook.com>
** All rights reserved.
**
** $QT_BEGIN_LICENSE:MIT$
** MIT License
**
** Permission is hereby granted, free of charge, to any person obtaining a copy
** of this software and associated documentation files (the "Software"), to deal
** in the Software without restriction, including without limitation the rights
** to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
** copies of the Software, and to permit persons to whom the Software is
** furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
** SOFTWARE.
** $QT_END_LICENSE$
**
****************************************************************************/

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
