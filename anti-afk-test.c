#include <X11/Xlib.h>
#include <X11/keysym.h>
#include <stdio.h>
#include <unistd.h>

int main() {
	Display *display = XOpenDisplay(NULL);
	if (!display) {
		fprintf(stderr, "Failed to open display\n");
		return 1;
	}

	while (1) {
		XKeyEvent event;
		event.type = KeyPress;
		event.display = display;
		event.window = DefaultRootWindow(display);
		event.root = DefaultRootWindow(display);
		event.subwindow = None;
		event.time = CurrentTime;
		event.x = 0;
		event.y = 0;
		event.x_root = 0;
		event.y_root = 0;
		event.state = 0;
		event.keycode = XKeysymToKeycode(display, XK_p);

		XSendEvent(display, event.window, True, KeyPressMask, (XEvent *)&event);

		printf("P pressed.\n");
		sleep(90); // 1.5 minutes
	}

	XCloseDisplay(display);
	return 0;
}