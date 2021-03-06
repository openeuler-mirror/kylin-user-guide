/*
 * Copyright (C) 2021, KylinSoft Co., Ltd.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include <QObject>
#include <QTimer>
#include <QSettings>
#include "ipc/daemon_ipc_dbus.h"

class MainController : public QObject
{
    Q_OBJECT
public:
    static MainController* self();
    virtual ~MainController();
private:
    explicit MainController();
private:
    static MainController *mSelf;
    DaemonIpcDbus *daemonIpcDbus;
public:
};

