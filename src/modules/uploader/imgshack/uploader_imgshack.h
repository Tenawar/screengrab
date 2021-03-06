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

#ifndef UPLOADER_IMGSHACK_H
#define UPLOADER_IMGSHACK_H

#include <uploader.h>

#include <QtCore/QUrl>
#include <QtCore/QVector>
#include <QtCore/QSize>

class Uploader_ImgShack : public Uploader
{
	Q_OBJECT
public:
    explicit Uploader_ImgShack(QObject* parent = 0);
    virtual ~Uploader_ImgShack();
    
    virtual void startUploading();
    
protected:
    virtual QUrl apiUrl();
    void createData(bool inBase64 = false);

protected Q_SLOTS:
    virtual void replyFinished(QNetworkReply* reply);
	
private:
	QVector<QSize> _sizes;
};

#endif // UPLOADER_IMGSHACK_H
