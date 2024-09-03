#include <iostream>

#include "tv.h"

int main() {
	Tv t;
	t.show_settings();

	Remote r;
	r.show_remote_mode();

	r.onoff(t);
	t.show_settings();

	r.voldown(t);
	t.show_settings();

	t.set_remote_mode(r);
	r.show_remote_mode();

	return 0;
}