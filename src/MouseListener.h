/*
 *  MouseListener.h
 *  openFrameworks
 *
 *  Created by Silvio Heuberger on 06.03.09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef _MOUSE_LISTENER
#define _MOUSE_LISTENER

namespace mollusca{
    class MouseListener{
        protected:
        bool hover;

        public:

        MouseListener(): hover(false) {}

        virtual bool intersects(int& x, int& y) = 0;
        virtual void mouseClicked() = 0;
        virtual void mouseOver() = 0;
        virtual void mouseOut() = 0;
    };
}

#endif
