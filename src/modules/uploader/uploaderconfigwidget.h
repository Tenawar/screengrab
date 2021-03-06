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

#ifndef UPLOADERCONFIGWIDGET_H
#define UPLOADERCONFIGWIDGET_H

#include <QtGui/QWidget>

#include "imgur/uploaderconfigwidget_imgur.h"
#include "imgshack/uploaderconfigwidget_imgshack.h"
#include "mediacrush/uploaderconfigwidget_mediacrush.h"

namespace Ui {
class UploaderConfigWidget;
}

class UploaderConfigWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit UploaderConfigWidget(QWidget *parent = 0);
    ~UploaderConfigWidget();
	
public Q_SLOTS:
	void loadSettings();
	void saveSettings();
	    
protected:
    void changeEvent(QEvent *e);
    
private:
    Ui::UploaderConfigWidget *_ui;
	
	// services widgets
	UploaderConfigWidget_MediaCrush *_crush;
	UploaderConfigWidget_ImgUr *_imgur;
	UploaderConfigWidget_ImgShack *_imgshack;
};

#endif // UPLOADERCONFIGWIDGET_H
