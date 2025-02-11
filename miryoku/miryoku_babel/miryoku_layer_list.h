// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-

#pragma once

#if !defined (MIRYOKU_LAYER_LIST)

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base",   RIGHT_ARROW, LEFT_ARROW) \
MIRYOKU_X(EXTRA,  "Extra",  RIGHT_ARROW, LEFT_ARROW) \
MIRYOKU_X(TAP,    "Tap",    RIGHT_ARROW, LEFT_ARROW) \
MIRYOKU_X(BUTTON, "Button", RIGHT_ARROW, LEFT_ARROW) \
MIRYOKU_X(NAV,    "Nav",    RIGHT_ARROW, LEFT_ARROW) \
MIRYOKU_X(MOUSE,  "Mouse",  RIGHT_ARROW, LEFT_ARROW) \
MIRYOKU_X(MEDIA,  "Media",  RIGHT_ARROW, LEFT_ARROW) \
MIRYOKU_X(NUM,    "Num",    DOWN_ARROW,  UP_ARROW) \
MIRYOKU_X(SYM,    "Sym",    DOWN_ARROW,  UP_ARROW) \
MIRYOKU_X(FUN,    "Fun",    DOWN_ARROW,  UP_ARROW)

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9

#endif
