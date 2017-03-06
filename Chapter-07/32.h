/*
 * Define your own versions of Screen and Window_mgr in which clear is
 * a member of Window_mgr and a friend of Screen.
 */

#ifndef CH07_27_H
#define CH07_27_H

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::ostream;
using std::vector;

class Screen;

class Window_mgr {
public:
	using ScreenIndex = vector<Screen>::size_type;
	void clear(ScreenIndex);

private:
	vector<Screen> screens;	
};

class Screen {
friend void Window_mgr::clear(ScreenIndex);

public:
	using pos = string::size_type;

	Screen() = default;
	Screen(pos ht, pos wd): height(ht), width(wd), contents(ht*wd, ' ') { }
	Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht*wd, c) { }

	char get() const { return contents[cursor]; }
	char get(pos r, pos c) const { return contents[r*width+c]; }	
	Screen &move(pos, pos);
	Screen &set(char);
	Screen &set(pos, pos, char);
	Screen &display(ostream &os) { do_display(os); return *this; }
	const Screen &display(ostream &os) const { do_display(os); return *this; }

private:
	void do_display(ostream &os) const { os << contents; }

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
};

inline void Window_mgr::clear(ScreenIndex i) {
	Screen &s = screens[i];
	s.contents = string(s.height*s.width, ' ');
}

inline Screen &Screen::move(pos r, pos c) {
	cursor = r * width + c;
	return *this;
}

inline Screen &Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r, pos c, char ch) {
	contents[r*width+c] = ch;
	return *this;
}

#endif