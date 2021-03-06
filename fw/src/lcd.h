#ifndef _lcd_h_
#define _lcd_h_

#include "SSD1306.h"
#include "Display.h"

extern Display display;

void lcd_setup();
void lcd_update();

void lcd_menu_bar(const char*, const char*);

void lcd_menu();
void lcd_home();
void lcd_about();

void lcd_sleep();

void lcd_txs();

void lcd_menu_item(unsigned int pos, const char * label, String value, bool selected);

#endif