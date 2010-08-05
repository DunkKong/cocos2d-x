/****************************************************************************
Copyright (c) 2010 cocos2d-x.org

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#ifndef __CCX_APPLICATION_UPHONE_H__
#define __CCX_APPLICATION_UPHONE_H__

#include "ccxCommon.h"

#include "TG3.h"

namespace   cocos2d {

class CCX_DLL CCXApplication : public TApplication
{
public:
    CCXApplication();
    virtual ~CCXApplication();

    virtual Boolean EventHandler(EventType * pEvent);

    /**
    @brief	Implement CCDirector and sense init code here.
    @return TRUE    Initialize success, app continue.
    @return FALSE   Initialize failed, app terminate.
    */
    virtual Boolean initCocos2d() = 0;

    /**
    @brief	rotate main window by device orientation.
    @param  nOritation device orientation enum value.
    @see    ccDeviceOrientation
    */
    void setDeviceOrientation(int nOritation);

    /**
    @brief	Get current applicaiton instance.
    @return Current application instance pointer.
    */
    static CCXApplication * getSharedApplication();

private:
    MESSAGE_t m_tMsg;
};

}       // end of namespace   cocos2d

#endif	// end of __CCX_APPLICATION_UPHONE_H__
