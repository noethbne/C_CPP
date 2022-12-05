#pragma once;

enum phase{ RED = 0, RED_YELLOW, GREEN, GREEN_YELLOW, YELLOW, NOTHING };

void blink();

bool setDaytime();
bool getDaytime();