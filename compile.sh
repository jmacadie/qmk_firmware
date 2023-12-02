#!/bin/bash

# Left side
sed -i 's?// #define INIT_EE_HANDS_LEFT?#define INIT_EE_HANDS_LEFT?' keyboards/ferris/keymaps/jmacadie/config.h
sed -i 's?#define INIT_EE_HANDS_RIGHT?// #define INIT_EE_HANDS_RIGHT?' keyboards/ferris/keymaps/jmacadie/config.h
qmk compile
mv ferris_sweep_jmacadie_rp2040_ce.uf2 ferris_left.uf2

# Right side
sed -i 's?#define INIT_EE_HANDS_LEFT?// #define INIT_EE_HANDS_LEFT?' keyboards/ferris/keymaps/jmacadie/config.h
sed -i 's?// #define INIT_EE_HANDS_RIGHT?#define INIT_EE_HANDS_RIGHT?' keyboards/ferris/keymaps/jmacadie/config.h
qmk compile
mv ferris_sweep_jmacadie_rp2040_ce.uf2 ferris_right.uf2
