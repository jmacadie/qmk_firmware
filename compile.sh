#!/bin/bash

# Left side
rm ferris_left.uf2
sed -i 's?// #define INIT_EE_HANDS_LEFT?#define INIT_EE_HANDS_LEFT?' keyboards/ferris/keymaps/jmacadie/config.h
sed -i 's?#define INIT_EE_HANDS_RIGHT?// #define INIT_EE_HANDS_RIGHT?' keyboards/ferris/keymaps/jmacadie/config.h
qmk compile
mv ferris_sweep_jmacadie.uf2 ferris_left.uf2

# Right side
rm ferris_right.uf2
sed -i 's?#define INIT_EE_HANDS_LEFT?// #define INIT_EE_HANDS_LEFT?' keyboards/ferris/keymaps/jmacadie/config.h
sed -i 's?// #define INIT_EE_HANDS_RIGHT?#define INIT_EE_HANDS_RIGHT?' keyboards/ferris/keymaps/jmacadie/config.h
qmk compile
mv ferris_sweep_jmacadie.uf2 ferris_right.uf2
