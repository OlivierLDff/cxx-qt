// clang-format off
// SPDX-FileCopyrightText: 2021 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
// clang-format on
// SPDX-FileContributor: Andrew Hayzen <andrew.hayzen@kdab.com>
// SPDX-FileContributor: Gerhard de Clercq <gerhard.declercq@kdab.com>
//
// SPDX-License-Identifier: MIT OR Apache-2.0
#include <QtCore/QtGlobal>
#include <QtQml/QQmlEngine>
#include <QtQuickTest/quicktest.h>

#include "cxx-qt-gen/include/my_data.h"

class Setup : public QObject
{
  Q_OBJECT

public:
  Setup() { qmlRegisterType<MyData>("com.kdab.cxx_qt.demo", 1, 0, "MyData"); }
};

QUICK_TEST_MAIN_WITH_SETUP(mydata, Setup)

#include "tst_mydata.moc"
