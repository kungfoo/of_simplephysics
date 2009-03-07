/*
 *  Dragable.h
 *  openFrameworks
 *
 *  Created by Silvio Heuberger on 06.03.09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef _DRAGABLE
#define _DRAGABLE

namespace mollusca{
    class Dragable{
        public:
            virtual void mouseDragged(int& x, int& y) = 0;
    };
}

#endif
