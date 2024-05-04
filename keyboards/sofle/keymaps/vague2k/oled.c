#ifdef OLED_ENABLE

static const char PROGMEM mac_logo[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x60, 0x78, 0x7c, 0x3e, 0x3e, 0x0f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xe0, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe,
    0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x1e, 0x0c, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f,
    0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x1f, 0x0f, 0x03, 0x00, 0x00, 0x00
};

// 32 x 32 windows logo
static const char PROGMEM windows_logo[] = {
    0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0xf0,
    0xf8, 0xf8, 0xf8, 0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0x00,
    0x00, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x7f,
    0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x00,
    0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0xfe,
    0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x00,
    0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x0f,
    0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0x00,
};

// 32 x 32 linux logo
// just an italicized times new roman capital L lol, actual logo looks like shit in this size
static const char PROGMEM linux_logo[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x86, 0xfe,
    0xfe, 0xfe, 0xfe, 0x1e, 0x06, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xfc, 0xff, 0xff,
    0x3f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xfe, 0xff, 0xff, 0x1f, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x81, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0xc0, 0xe0, 0xf0, 0x7c, 0x0f, 0x01, 0x00, 0x00, 0x00
};

// 32 x 32 question mark
static const char PROGMEM unsure_os_logo[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xf8, 0xfc, 0xfe, 0x7e, 0x3f, 0x1f, 0x1f, 0x0f,
    0x0f, 0x0f, 0x0f, 0x1f, 0x1f, 0x3e, 0xfe, 0xfc, 0xf8, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xff, 0x7f, 0x3f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xfc,
    0xfe, 0xff, 0x3f, 0x0f, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf1, 0xf1,
    0xf1, 0xf1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static void render_berserk(void) {
    static const char PROGMEM guts[] = {
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x07, 0x03, 0x43, 0x03,
        0x03, 0x23, 0x41, 0x03, 0x43, 0x23, 0x23, 0x03, 0x43, 0x07, 0x07, 0x0f, 0x0f, 0x1f, 0x3f, 0x3f,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0x80, 0x00, 0x00, 0x00, 0x00, 0xc0,
        0xe0, 0xe4, 0x2c, 0x08, 0x80, 0x84, 0x8e, 0x20, 0xe0, 0x90, 0xb0, 0xc0, 0x20, 0x20, 0x80, 0x00,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xcf, 0x1f, 0x7f, 0x7f, 0x3c, 0xe7, 0xf0, 0xf8, 0xe7, 0x87,
        0x0f, 0x0f, 0x1f, 0x3f, 0x3f, 0xbf, 0xbd, 0x8e, 0x66, 0x70, 0x78, 0x6f, 0x2e, 0x96, 0xf1, 0xf0,
        0x8f, 0x3f, 0x33, 0x67, 0xcf, 0x9f, 0x3f, 0x78, 0xf7, 0xef, 0x3f, 0x7f, 0xdf, 0x3f, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0x7e, 0x7e, 0x7d, 0x3f, 0xb9, 0xff, 0xff, 0xff,
        0x07, 0x5e, 0xf8, 0x60, 0x40, 0x87, 0xc8, 0xd0, 0x31, 0x63, 0xc7, 0x84, 0x08, 0x19, 0x00, 0x05,
        0x0f, 0x07, 0x07, 0x07, 0x47, 0x47, 0x4f, 0xc6, 0xc6, 0xc2, 0xc3, 0x43, 0x63, 0x33, 0x13, 0x3b,
        0x0e, 0x0c, 0x41, 0xc3, 0xc6, 0xc4, 0xc9, 0x69, 0xe3, 0x06, 0x1e, 0x0f, 0x87, 0xf8, 0x70, 0x06,
        0x02, 0x0c, 0x18, 0x1a, 0x12, 0x32, 0x30, 0x11, 0x31, 0x70, 0x60, 0x30, 0x38, 0x18, 0x0c, 0x07,
        0x00, 0x00, 0x08, 0x2d, 0x3f, 0x7f, 0xff, 0xff, 0xfe, 0xfd, 0xf0, 0xe0, 0x31, 0x03, 0x0c, 0xd8,
        0x01, 0x06, 0x8c, 0x18, 0x78, 0xf0, 0xe0, 0x80, 0x00, 0x08, 0x20, 0x10, 0x08, 0xc4, 0x33, 0x39,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x01,
        0x1f, 0x78, 0xf1, 0x81, 0x03, 0x03, 0x06, 0x1e, 0x0d, 0x1b, 0x72, 0x76, 0x73, 0x11, 0x00, 0x30,
        0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xfe, 0xff, 0xff, 0xc0, 0xc0, 0xe0, 0x38,
        0x08, 0x00, 0x11, 0x03, 0x3e, 0xf0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x5d, 0xdd, 0x38, 0x30, 0x00, 0x80, 0xe2, 0xf4, 0xf8, 0x7c, 0x1f, 0x2e, 0x7f, 0x3f, 0x37, 0x72,
        0x40, 0x80, 0x00, 0x03, 0x0e, 0x1c, 0x07, 0x3c, 0xf0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x78, 0x7d, 0xbe, 0x1e, 0x0f, 0x47, 0x03, 0x01, 0x00, 0x00, 0x00, 0xf0, 0xfc, 0xfc, 0xfc, 0xfc,
        0x1c, 0xcc, 0xfc, 0xf0, 0x00, 0x01, 0x04, 0x70, 0xc0, 0x03, 0x0e, 0x38, 0x60, 0xc0, 0x00, 0x00,
        0x20, 0xf6, 0xff, 0x00, 0x06, 0x07, 0x63, 0xc0, 0x0c, 0x24, 0x60, 0x07, 0x0f, 0x0b, 0x4f, 0x0f,
        0x3c, 0x2c, 0x4f, 0x0f, 0x3e, 0xc0, 0x00, 0x00, 0x01, 0x04, 0x10, 0xe0, 0x80, 0x01, 0x0e, 0x78,
        0x7e, 0x6f, 0x60, 0xc8, 0x80, 0x00, 0x08, 0x38, 0x80, 0x18, 0x10, 0x00, 0x80, 0x80, 0x80, 0x80,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x18, 0x00, 0x00, 0x07, 0x3c, 0xf0, 0xc0,
        0x00, 0x00, 0x90, 0xa0, 0x60, 0x4d, 0x88, 0x10, 0x61, 0xc0, 0x80, 0x00, 0x00, 0x03, 0x03, 0x07,
        0x07, 0x07, 0x3f, 0x0f, 0x0e, 0x07, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x03,
        0x22, 0x22, 0x26, 0xb6, 0xb6, 0x94, 0x94, 0x93, 0x82, 0x84, 0x80, 0x80, 0x40, 0x40, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x40, 0xc0, 0x80, 0x80, 0x94, 0x90, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00,
        0x3d, 0x39, 0x99, 0x19, 0x1d, 0x0d, 0x0c, 0x0c, 0x44, 0x60, 0x20, 0x00, 0x02, 0x02, 0x00, 0x00,
        0x20, 0x00, 0x01, 0x03, 0x02, 0x04, 0x08, 0x18, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };

    oled_write_raw_P(guts, sizeof(guts));
}

static void print_status_narrow(void) {
    oled_set_cursor(0,0);

    // print os name and image
    switch (detected_host_os()) {
        case OS_MACOS:
            oled_write_P(PSTR("MACOS"), false);
            oled_write_P(PSTR("\n\n"), false);
            oled_write_raw_P(mac_logo, sizeof(mac_logo));
            break;
        case OS_IOS:
            oled_write_P(PSTR("IOS"), false);
            oled_write_P(PSTR("\n\n"), false);
            oled_write_raw_P(mac_logo, sizeof(mac_logo));
            break;
        case OS_WINDOWS:
            oled_write_P(PSTR("WINOS"), false);
            oled_write_P(PSTR("\n\n"), false);
            oled_write_raw_P(windows_logo, sizeof(windows_logo));
            break;
        case OS_LINUX:
            oled_write_P(PSTR("LINUX"), false);
            oled_write_P(PSTR("\n\n"), false);
            oled_write_raw_P(linux_logo, sizeof(linux_logo));
            break;
        case OS_UNSURE:
            oled_write_P(PSTR("?????"), false);
            oled_write_P(PSTR("\n\n"), false);
            oled_write_raw_P(unsure_os_logo, sizeof(unsure_os_logo));
            break;
    }

    oled_set_cursor(0,9);

    // Print current mode
    oled_write_ln_P(PSTR("LAYER"), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_ln_P(PSTR("ALPHA"), false);
            break;
        case 1:
            oled_write_ln_P(PSTR("DELIM"), false);
            break;
        default:
            oled_write_P(PSTR("MOD3\n"), false);
            break;
    }

    // display WPM counter
    uint8_t n = get_current_wpm();
    char    wpm_str[4];
    oled_set_cursor(1, 14);
    wpm_str[3] = '\0';
    wpm_str[2] = '0' + n % 10;
    wpm_str[1] = '0' + (n /= 10) % 10;
    wpm_str[0] = '0' + n / 10;
    oled_write(wpm_str, false);

    oled_set_cursor(0, 15);
    oled_write(" WPM", false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270; // 128 x 32 OLED screens are vertical
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_berserk();
    }
    return false;
}

#endif
