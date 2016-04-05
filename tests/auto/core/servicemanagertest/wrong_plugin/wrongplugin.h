/****************************************************************************
**
** Copyright (C) 2016 Pelagicore AG
** Contact: http://www.qt.io/ or http://www.pelagicore.com/
**
** This file is part of the QtIVI module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL-EXCEPT-PELAGICORE$
** Commercial License Usage
** Licensees holding valid commercial Qt IVI licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Pelagicore. For licensing terms
** and conditions, contact us at http://www.pelagicore.com.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/


#ifndef WRONGPLUGIN_H
#define WRONGPLUGIN_H

#include <QtCore/QObject>
#include <QtCore/QStringList>
#include <QtIVICore/QtIVIServiceInterface>

class WrongPlugin : public QObject
{
    Q_OBJECT
    //Q_INTERFACES(QtIVIServiceInterface)
    Q_PLUGIN_METADATA(IID "com.pelagicore.QtIVIServiceInterface" FILE "wrong_plugin.json")
public:
    WrongPlugin();
    virtual ~WrongPlugin() {}

    QStringList interfaces() const {
        return QStringList() << "wrong_plugin";
    }

    QObject *interfaceInstance(const QString &interface) const {
        Q_UNUSED(interface)
        return 0;
    }

};

#endif // WRONGPLUGIN_H
