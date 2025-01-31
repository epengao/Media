/*
* This software is developed for study and improve coding skill ...
*
* Project:  Enjoyable Coding< EC >
* Copyright (C) 2014-2016 Gao Peng

* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Library General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.

* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Library General Public License for more details.

* You should have received a copy of the GNU Library General Public
* License along with this library; if not, write to the Free
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

* ---------------------------------------------------------------------
* VideoDecPort.cpp
* This file for VideoDecPort class implemetaion
*
* Eamil:   epengao@126.com
* Author:  Peter Gao
* Version: Intial first version.
* --------------------------------------------------------------------
*/

#include "VideoDecPort.h"

VideoDecPort::VideoDecPort(VideoDecoder* pOwner)
:m_pOwner(pOwner)
{
}

VideoDecPort::~VideoDecPort()
{
}

EC_U32 VideoDecPort::GetVideoFrame(VideoFrame** ppFrame)
{
    return m_pOwner->GetVdieoFrame(ppFrame);
}

EC_VOID VideoDecPort::ReturnVideoFrame(VideoFrame* pFrame)
{
    m_pOwner->ReturnVdieoFrame(pFrame);
}
