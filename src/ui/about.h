/***************************************************************************
 *   Copyright (C) 2009 - 2013 by Artem 'DOOMer' Galichkin                        *
 *   doomer3d@gmail.com                                                    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef ABOUT_H
#define ABOUT_H

#include <QtGui/QDialog>
#include <QtGui/QTabBar>
#include <QtCore/QUrl>

// #include "src/core/screengrab.h"

namespace Ui {
    class aboutWidget;
}

class AboutDialog : public QDialog {
    Q_OBJECT
public:
    explicit AboutDialog(QWidget *parent = 0);
    ~AboutDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::aboutWidget *_ui;
    QTabBar *_tabs;

private slots:
    void on_txtArea_anchorClicked(QUrl );
    void changeTab(int tabIndex);
    void on_butClose_clicked();
    void on_butAboutQt_clicked();

    QString tabAbout();
    QString tabHelpUs();
    QString tabThanks();
};

#endif // ABOUT_H
