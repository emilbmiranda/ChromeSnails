#ifndef _FERNANDO_H_
#define _FERNANDO_H_

#include <X11/Xlib.h>
#include <GL/glx.h>

typedef double Vec[3];

struct Platform {
	float pos[2];

	Platform(); 

	void drawPlatform();
};

void initializeFH();

#endif