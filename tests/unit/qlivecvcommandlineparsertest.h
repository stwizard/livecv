/****************************************************************************
**
** Copyright (C) 2014-2017 Dinu SV.
** (contact: mail@dinusv.com)
** This file is part of Live CV Application.
**
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
****************************************************************************/

#ifndef QCOMMANDLINEPARSERTEST_H
#define QCOMMANDLINEPARSERTEST_H

#include <QObject>
#include "qtestrunner.h"

class QLiveCVCommandLineParserTest : public QObject{

    Q_OBJECT
    Q_TEST_RUNNER_SUITE

public:
    QLiveCVCommandLineParserTest(QObject* parent = 0);
    ~QLiveCVCommandLineParserTest();

private slots:
    void initTestCase();
    void versionFlagTest();
    void helpFlagTest();
    void noFlagTest();
    void flagMultiNameTest();
    void noOptionTest();
    void optionTest();
    void optionAndFlagTest();
    void invalidOptiontest();

    void scriptTest();

    void scriptNoFlagTest();
    void scriptFlagMultiNameTest();
    void scriptNoOptionTests();
    void scriptOptionTest();
    void scriptOptionAndFlagTest();
    void scriptInvalidOptionTest();

    //TODO
//    void scriptHelpFlagTest();
};

#endif // QCOMMANDLINEPARSERTEST_H
