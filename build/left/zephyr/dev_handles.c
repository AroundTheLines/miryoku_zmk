#include <device.h>
#include <toolchain.h>

/* 1 : /soc/clock@40000000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_clock_40000000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 2 : /soc/gpio@50000000:
 * Direct Dependencies:
 *   - (/soc)
 * Supported:
 *   - /encoder_left
 *   - /encoder_right
 *   - /ext-power
 *   - /kscan
 *   - (/leds/led_0)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_gpio_50000000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 11, 10, 8, 45, DEVICE_HANDLE_ENDS };

/* 3 : /soc/gpio@50000300:
 * Direct Dependencies:
 *   - (/soc)
 * Supported:
 *   - /kscan
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_gpio_50000300[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 45, DEVICE_HANDLE_ENDS };

/* 4 : /soc/random@4000d000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_random_4000d000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 5 : sysinit:
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_usb_hid_device_0[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 6 : /soc/adc@40007000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_adc_40007000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 7 : /soc/flash-controller@4001e000:
 * Direct Dependencies:
 *   - (/soc)
 * Supported:
 *   - (/soc/flash-controller@4001e000/flash@0)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_flash_controller_4001e000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 8 : /ext-power:
 * Direct Dependencies:
 *   - (/)
 *   - /soc/gpio@50000000
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_ext_power[] = { 2, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 9 : /vbatt:
 * Direct Dependencies:
 *   - (/)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_vbatt[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 10 : /encoder_right:
 * Direct Dependencies:
 *   - (/)
 *   - /soc/gpio@50000000
 * Supported:
 *   - (/sensors)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_encoder_right[] = { 2, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 11 : /encoder_left:
 * Direct Dependencies:
 *   - (/)
 *   - /soc/gpio@50000000
 * Supported:
 *   - (/sensors)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_encoder_left[] = { 2, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 12 : /behaviors/behavior_reset_dfu:
 * Direct Dependencies:
 *   - (/behaviors)
 * Supported:
 *   - (/keymap/4)
 *   - (/keymap/5)
 *   - (/keymap/6)
 *   - (/keymap/7)
 *   - (/keymap/8)
 *   - (/keymap/9)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_reset_dfu[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 13 : /behaviors/behavior_reset:
 * Direct Dependencies:
 *   - (/behaviors)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_reset[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 14 : /behaviors/behavior_key_press:
 * Direct Dependencies:
 *   - (/behaviors)
 * Supported:
 *   - /behaviors/behavior_layer_tap
 *   - /behaviors/homerow_mods
 *   - /behaviors/u_caps_word
 *   - (/keymap/0)
 *   - (/keymap/1)
 *   - (/keymap/2)
 *   - (/keymap/3)
 *   - (/keymap/4)
 *   - (/keymap/5)
 *   - (/keymap/6)
 *   - (/keymap/7)
 *   - (/keymap/8)
 *   - (/keymap/9)
 *   - /macros/u_macro_btn1
 *   - /macros/u_macro_btn2
 *   - /macros/u_macro_btn3
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_key_press[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 19, 15, 16, 27, 18, 20, DEVICE_HANDLE_ENDS };

/* 15 : /behaviors/homerow_mods:
 * Direct Dependencies:
 *   - (/behaviors)
 *   - /behaviors/behavior_key_press
 * Supported:
 *   - (/keymap/0)
 *   - (/keymap/1)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_homerow_mods[] = { 14, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 16 : /behaviors/behavior_layer_tap:
 * Direct Dependencies:
 *   - (/behaviors)
 *   - /behaviors/behavior_key_press
 *   - /behaviors/behavior_momentary_layer
 * Supported:
 *   - (/keymap/0)
 *   - (/keymap/1)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_layer_tap[] = { 14, 26, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 17 : /behaviors/behavior_caps_word:
 * Direct Dependencies:
 *   - (/behaviors)
 * Supported:
 *   - /behaviors/u_caps_word
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_caps_word[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 27, DEVICE_HANDLE_ENDS };

/* 18 : /macros/u_macro_btn3:
 * Direct Dependencies:
 *   - (/macros)
 *   - /behaviors/behavior_key_press
 * Supported:
 *   - (/keymap/3)
 *   - (/keymap/5)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_macros_S_u_macro_btn3[] = { 14, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 19 : /macros/u_macro_btn2:
 * Direct Dependencies:
 *   - (/macros)
 *   - /behaviors/behavior_key_press
 * Supported:
 *   - (/keymap/3)
 *   - (/keymap/5)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_macros_S_u_macro_btn2[] = { 14, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 20 : /macros/u_macro_btn1:
 * Direct Dependencies:
 *   - (/macros)
 *   - /behaviors/behavior_key_press
 * Supported:
 *   - (/keymap/3)
 *   - (/keymap/5)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_macros_S_u_macro_btn1[] = { 14, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 21 : /macros/u_macro_u_bt_sel_4:
 * Direct Dependencies:
 *   - (/macros)
 *   - /behaviors/behavior_bluetooth
 * Supported:
 *   - /behaviors/u_bt_sel_4
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_macros_S_u_macro_u_bt_sel_4[] = { 43, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 34, DEVICE_HANDLE_ENDS };

/* 22 : /macros/u_macro_u_bt_sel_3:
 * Direct Dependencies:
 *   - (/macros)
 *   - /behaviors/behavior_bluetooth
 * Supported:
 *   - /behaviors/u_bt_sel_3
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_macros_S_u_macro_u_bt_sel_3[] = { 43, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 35, DEVICE_HANDLE_ENDS };

/* 23 : /macros/u_macro_u_bt_sel_2:
 * Direct Dependencies:
 *   - (/macros)
 *   - /behaviors/behavior_bluetooth
 * Supported:
 *   - /behaviors/u_bt_sel_2
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_macros_S_u_macro_u_bt_sel_2[] = { 43, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 36, DEVICE_HANDLE_ENDS };

/* 24 : /macros/u_macro_u_bt_sel_1:
 * Direct Dependencies:
 *   - (/macros)
 *   - /behaviors/behavior_bluetooth
 * Supported:
 *   - /behaviors/u_bt_sel_1
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_macros_S_u_macro_u_bt_sel_1[] = { 43, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 37, DEVICE_HANDLE_ENDS };

/* 25 : /macros/u_macro_u_bt_sel_0:
 * Direct Dependencies:
 *   - (/macros)
 *   - /behaviors/behavior_bluetooth
 * Supported:
 *   - /behaviors/u_bt_sel_0
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_macros_S_u_macro_u_bt_sel_0[] = { 43, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 38, DEVICE_HANDLE_ENDS };

/* 26 : /behaviors/behavior_momentary_layer:
 * Direct Dependencies:
 *   - (/behaviors)
 * Supported:
 *   - /behaviors/behavior_layer_tap
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_momentary_layer[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 16, DEVICE_HANDLE_ENDS };

/* 27 : /behaviors/u_caps_word:
 * Direct Dependencies:
 *   - (/behaviors)
 *   - /behaviors/behavior_caps_word
 *   - /behaviors/behavior_key_press
 * Supported:
 *   - (/keymap/4)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_u_caps_word[] = { 14, 17, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 28 : /behaviors/u_ep_tog:
 * Direct Dependencies:
 *   - (/behaviors)
 *   - /behaviors/behavior_ext_power
 * Supported:
 *   - (/keymap/6)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_u_ep_tog[] = { 44, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 29 : /behaviors/u_rgb_bri:
 * Direct Dependencies:
 *   - (/behaviors)
 *   - (/behaviors/behavior_rgb_underglow)
 * Supported:
 *   - (/keymap/6)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_u_rgb_bri[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 30 : /behaviors/u_rgb_sai:
 * Direct Dependencies:
 *   - (/behaviors)
 *   - (/behaviors/behavior_rgb_underglow)
 * Supported:
 *   - (/keymap/6)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_u_rgb_sai[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 31 : /behaviors/u_rgb_hui:
 * Direct Dependencies:
 *   - (/behaviors)
 *   - (/behaviors/behavior_rgb_underglow)
 * Supported:
 *   - (/keymap/6)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_u_rgb_hui[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 32 : /behaviors/u_rgb_eff:
 * Direct Dependencies:
 *   - (/behaviors)
 *   - (/behaviors/behavior_rgb_underglow)
 * Supported:
 *   - (/keymap/6)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_u_rgb_eff[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 33 : /behaviors/u_out_tog:
 * Direct Dependencies:
 *   - (/behaviors)
 *   - /behaviors/behavior_outputs
 * Supported:
 *   - (/keymap/6)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_u_out_tog[] = { 39, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 34 : /behaviors/u_bt_sel_4:
 * Direct Dependencies:
 *   - (/behaviors)
 *   - /behaviors/behavior_bluetooth
 *   - /macros/u_macro_u_bt_sel_4
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_u_bt_sel_4[] = { 43, 21, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 35 : /behaviors/u_bt_sel_3:
 * Direct Dependencies:
 *   - (/behaviors)
 *   - /behaviors/behavior_bluetooth
 *   - /macros/u_macro_u_bt_sel_3
 * Supported:
 *   - (/keymap/6)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_u_bt_sel_3[] = { 22, 43, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 36 : /behaviors/u_bt_sel_2:
 * Direct Dependencies:
 *   - (/behaviors)
 *   - /behaviors/behavior_bluetooth
 *   - /macros/u_macro_u_bt_sel_2
 * Supported:
 *   - (/keymap/6)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_u_bt_sel_2[] = { 43, 23, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 37 : /behaviors/u_bt_sel_1:
 * Direct Dependencies:
 *   - (/behaviors)
 *   - /behaviors/behavior_bluetooth
 *   - /macros/u_macro_u_bt_sel_1
 * Supported:
 *   - (/keymap/6)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_u_bt_sel_1[] = { 24, 43, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 38 : /behaviors/u_bt_sel_0:
 * Direct Dependencies:
 *   - (/behaviors)
 *   - /behaviors/behavior_bluetooth
 *   - /macros/u_macro_u_bt_sel_0
 * Supported:
 *   - (/keymap/6)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_u_bt_sel_0[] = { 25, 43, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 39 : /behaviors/behavior_outputs:
 * Direct Dependencies:
 *   - (/behaviors)
 * Supported:
 *   - /behaviors/u_out_tog
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_outputs[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 33, DEVICE_HANDLE_ENDS };

/* 40 : /behaviors/behavior_to_layer:
 * Direct Dependencies:
 *   - (/behaviors)
 * Supported:
 *   - (/keymap/4)
 *   - (/keymap/5)
 *   - (/keymap/6)
 *   - (/keymap/7)
 *   - (/keymap/8)
 *   - (/keymap/9)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_to_layer[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 41 : /behaviors/behavior_none:
 * Direct Dependencies:
 *   - (/behaviors)
 * Supported:
 *   - (/keymap/0)
 *   - (/keymap/1)
 *   - (/keymap/2)
 *   - (/keymap/3)
 *   - (/keymap/4)
 *   - (/keymap/5)
 *   - (/keymap/6)
 *   - (/keymap/7)
 *   - (/keymap/8)
 *   - (/keymap/9)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_none[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 42 : /behaviors/behavior_sensor_rotate_key_press:
 * Direct Dependencies:
 *   - (/behaviors)
 * Supported:
 *   - (/keymap/0)
 *   - (/keymap/1)
 *   - (/keymap/2)
 *   - (/keymap/3)
 *   - (/keymap/4)
 *   - (/keymap/5)
 *   - (/keymap/6)
 *   - (/keymap/7)
 *   - (/keymap/8)
 *   - (/keymap/9)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_sensor_rotate_key_press[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 43 : /behaviors/behavior_bluetooth:
 * Direct Dependencies:
 *   - (/behaviors)
 * Supported:
 *   - /behaviors/u_bt_sel_0
 *   - /behaviors/u_bt_sel_1
 *   - /behaviors/u_bt_sel_2
 *   - /behaviors/u_bt_sel_3
 *   - /behaviors/u_bt_sel_4
 *   - /macros/u_macro_u_bt_sel_0
 *   - /macros/u_macro_u_bt_sel_1
 *   - /macros/u_macro_u_bt_sel_2
 *   - /macros/u_macro_u_bt_sel_3
 *   - /macros/u_macro_u_bt_sel_4
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_bluetooth[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 22, 23, 25, 24, 37, 38, 34, 35, 36, 21, DEVICE_HANDLE_ENDS };

/* 44 : /behaviors/behavior_ext_power:
 * Direct Dependencies:
 *   - (/behaviors)
 * Supported:
 *   - /behaviors/u_ep_tog
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_behaviors_S_behavior_ext_power[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 28, DEVICE_HANDLE_ENDS };

/* 45 : /kscan:
 * Direct Dependencies:
 *   - (/)
 *   - /soc/gpio@50000000
 *   - /soc/gpio@50000300
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_kscan[] = { 3, 2, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };
