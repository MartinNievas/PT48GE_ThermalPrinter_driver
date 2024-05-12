#ifndef __FONTS_HPP__
#define __FONTS_HPP__

unsigned char ucFont[] = {
    // ANSI 437 character set
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3c, 0x3c, 0x18, 0x18, 0x00, 0x18, 0x00, // " " "!" (#32, 33)
    0x6c, 0x6c, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6c, 0x6c, 0xfe, 0x6c, 0xfe, 0x6c, 0x6c, 0x00, // " # (34, 35)
    0x18, 0x7e, 0xc0, 0x7c, 0x06, 0xfc, 0x18, 0x00, 0x00, 0xc6, 0xcc, 0x18, 0x30, 0x66, 0xc6, 0x00, // $ % (36, 37)
    0x38, 0x6c, 0x38, 0x76, 0xdc, 0xcc, 0x76, 0x00, 0x30, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, // & ' (38, 39)
    0x18, 0x30, 0x60, 0x60, 0x60, 0x30, 0x18, 0x00, 0x60, 0x30, 0x18, 0x18, 0x18, 0x30, 0x60, 0x00, // ( ) (40, 41)
    0x00, 0x66, 0x3c, 0xff, 0x3c, 0x66, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7e, 0x18, 0x18, 0x00, 0x00, // * + (42, 43)
    0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // , - (44, 45)
    0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x06, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0x80, 0x00, // . / (46, 47)
    0x7c, 0xce, 0xde, 0xf6, 0xe6, 0xc6, 0x7c, 0x00, 0x30, 0x70, 0x30, 0x30, 0x30, 0x30, 0xfc, 0x00, // 0 1 (48, 49)
    0x78, 0xcc, 0x0c, 0x38, 0x60, 0xcc, 0xfc, 0x00, 0x78, 0xcc, 0x0c, 0x38, 0x0c, 0xcc, 0x78, 0x00, // 2 3 (50, 51)
    0x1c, 0x3c, 0x6c, 0xcc, 0xfe, 0x0c, 0x1e, 0x00, 0xfc, 0xc0, 0xf8, 0x0c, 0x0c, 0xcc, 0x78, 0x00, // 4 5 (52, 53)
    0x38, 0x60, 0xc0, 0xf8, 0xcc, 0xcc, 0x78, 0x00, 0xfc, 0xcc, 0x0c, 0x18, 0x30, 0x30, 0x30, 0x00, // 6 7 (54, 55)
    0x78, 0xcc, 0xcc, 0x78, 0xcc, 0xcc, 0x78, 0x00, 0x78, 0xcc, 0xcc, 0x7c, 0x0c, 0x18, 0x70, 0x00, // 8 9 (56, 57)
    0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x30, // : ; (58, 59)
    0x18, 0x30, 0x60, 0xc0, 0x60, 0x30, 0x18, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00, // < = (60, 61)
    0x60, 0x30, 0x18, 0x0c, 0x18, 0x30, 0x60, 0x00, 0x3c, 0x66, 0x0c, 0x18, 0x18, 0x00, 0x18, 0x00, // > ? (62, 63)
    0x7c, 0xc6, 0xde, 0xde, 0xdc, 0xc0, 0x7c, 0x00, 0x30, 0x78, 0xcc, 0xcc, 0xfc, 0xcc, 0xcc, 0x00, // @ A (64, 65)
    0xfc, 0x66, 0x66, 0x7c, 0x66, 0x66, 0xfc, 0x00, 0x3c, 0x66, 0xc0, 0xc0, 0xc0, 0x66, 0x3c, 0x00, // B C (66, 67)
    0xf8, 0x6c, 0x66, 0x66, 0x66, 0x6c, 0xf8, 0x00, 0xfe, 0x62, 0x68, 0x78, 0x68, 0x62, 0xfe, 0x00, // D E (68, 69)
    0xfe, 0x62, 0x68, 0x78, 0x68, 0x60, 0xf0, 0x00, 0x3c, 0x66, 0xc0, 0xc0, 0xce, 0x66, 0x3a, 0x00, // F G (70, 71)
    0xcc, 0xcc, 0xcc, 0xfc, 0xcc, 0xcc, 0xcc, 0x00, 0x78, 0x30, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00, // H I (72, 73)
    0x1e, 0x0c, 0x0c, 0x0c, 0xcc, 0xcc, 0x78, 0x00, 0xe6, 0x66, 0x6c, 0x78, 0x6c, 0x66, 0xe6, 0x00, // J K (74, 75)
    0xf0, 0x60, 0x60, 0x60, 0x62, 0x66, 0xfe, 0x00, 0xc6, 0xee, 0xfe, 0xfe, 0xd6, 0xc6, 0xc6, 0x00, // L M (76, 77)
    0xc6, 0xe6, 0xf6, 0xde, 0xce, 0xc6, 0xc6, 0x00, 0x38, 0x6c, 0xc6, 0xc6, 0xc6, 0x6c, 0x38, 0x00, // N O (78, 79)
    0xfc, 0x66, 0x66, 0x7c, 0x60, 0x60, 0xf0, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xd6, 0x7c, 0x0e, 0x00, // P Q (80, 81)
    0xfc, 0x66, 0x66, 0x7c, 0x6c, 0x66, 0xe6, 0x00, 0x7c, 0xc6, 0xe0, 0x78, 0x0e, 0xc6, 0x7c, 0x00, // R S (82, 83)
    0xfc, 0xb4, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xfc, 0x00, // T U (84, 85)
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x78, 0x30, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xd6, 0xfe, 0x6c, 0x00, // V W (86, 87)
    0xc6, 0xc6, 0x6c, 0x38, 0x6c, 0xc6, 0xc6, 0x00, 0xcc, 0xcc, 0xcc, 0x78, 0x30, 0x30, 0x78, 0x00, // X Y (88, 89)
    0xfe, 0xc6, 0x8c, 0x18, 0x32, 0x66, 0xfe, 0x00, 0x78, 0x60, 0x60, 0x60, 0x60, 0x60, 0x78, 0x00, // Z [ (90, 91)
    0xc0, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x02, 0x00, 0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x78, 0x00, // \ ] (92, 93)
    0x10, 0x38, 0x6c, 0xc6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // ^ _ (94, 95)
    0x30, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x0c, 0x7c, 0xcc, 0x76, 0x00, // ` a (96, 97)
    0xe0, 0x60, 0x60, 0x7c, 0x66, 0x66, 0xdc, 0x00, 0x00, 0x00, 0x78, 0xcc, 0xc0, 0xcc, 0x78, 0x00, // b c (98, 99)
    0x1c, 0x0c, 0x0c, 0x7c, 0xcc, 0xcc, 0x76, 0x00, 0x00, 0x00, 0x78, 0xcc, 0xfc, 0xc0, 0x78, 0x00, // d e (100, 101)
    0x38, 0x6c, 0x64, 0xf0, 0x60, 0x60, 0xf0, 0x00, 0x00, 0x00, 0x76, 0xcc, 0xcc, 0x7c, 0x0c, 0xf8, // f g (102, 103)
    0xe0, 0x60, 0x6c, 0x76, 0x66, 0x66, 0xe6, 0x00, 0x30, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00, // h i (104, 105)
    0x0c, 0x00, 0x1c, 0x0c, 0x0c, 0xcc, 0xcc, 0x78, 0xe0, 0x60, 0x66, 0x6c, 0x78, 0x6c, 0xe6, 0x00, // j k (106, 107)
    0x70, 0x30, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00, 0x00, 0x00, 0xcc, 0xfe, 0xfe, 0xd6, 0xd6, 0x00, // l m (108, 109)
    0x00, 0x00, 0xb8, 0xcc, 0xcc, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x78, 0xcc, 0xcc, 0xcc, 0x78, 0x00, // n o (110, 111)
    0x00, 0x00, 0xdc, 0x66, 0x66, 0x7c, 0x60, 0xf0, 0x00, 0x00, 0x76, 0xcc, 0xcc, 0x7c, 0x0c, 0x1e, // p q (112, 113)
    0x00, 0x00, 0xdc, 0x76, 0x62, 0x60, 0xf0, 0x00, 0x00, 0x00, 0x7c, 0xc0, 0x70, 0x1c, 0xf8, 0x00, // r s (114, 115)
    0x10, 0x30, 0xfc, 0x30, 0x30, 0x34, 0x18, 0x00, 0x00, 0x00, 0xcc, 0xcc, 0xcc, 0xcc, 0x76, 0x00, // t u (116, 117)
    0x00, 0x00, 0xcc, 0xcc, 0xcc, 0x78, 0x30, 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xd6, 0xfe, 0x6c, 0x00, // v w (118, 119)
    0x00, 0x00, 0xc6, 0x6c, 0x38, 0x6c, 0xc6, 0x00, 0x00, 0x00, 0xcc, 0xcc, 0xcc, 0x7c, 0x0c, 0xf8, // x y (120, 121)
    0x00, 0x00, 0xfc, 0x98, 0x30, 0x64, 0xfc, 0x00, 0x1c, 0x30, 0x30, 0xe0, 0x30, 0x30, 0x1c, 0x00, // z { (122, 123)
    0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00, 0xe0, 0x30, 0x30, 0x1c, 0x30, 0x30, 0xe0, 0x00, // | } (124, 125)
    0x76, 0xdc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x38, 0x6c, 0xc6, 0xc6, 0xfe, 0x00, // ~ ⌂ (126, 127) del is printed as house
    0x7c, 0xc6, 0xc0, 0xc6, 0x7c, 0x0c, 0x06, 0x7c, 0x00, 0xcc, 0x00, 0xcc, 0xcc, 0xcc, 0x76, 0x00, // Ç ü (128, 129) Ç ü	left is ANSI 437 character set
    0x1c, 0x00, 0x78, 0xcc, 0xfc, 0xc0, 0x78, 0x00, 0x7e, 0x81, 0x3c, 0x06, 0x3e, 0x66, 0x3b, 0x00, // é â (130, 131) é â	right is change to CP852 (Latin-2)
    0xcc, 0x00, 0x78, 0x0c, 0x7c, 0xcc, 0x76, 0x00, 0xe0, 0x00, 0x78, 0x0c, 0x7c, 0xcc, 0x76, 0x00, // ä à (132, 133) ä ů
    0x30, 0x30, 0x78, 0x0c, 0x7c, 0xcc, 0x76, 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc0, 0x78, 0x0c, 0x38, // å ç (134, 135) ć ç
    0x7e, 0x81, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00, 0xcc, 0x00, 0x78, 0xcc, 0xfc, 0xc0, 0x78, 0x00, // ê ë (136, 137) ł ë
    0xe0, 0x00, 0x78, 0xcc, 0xfc, 0xc0, 0x78, 0x00, 0xcc, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00, // è ï (138, 139) Ő ő
    0x7c, 0x82, 0x38, 0x18, 0x18, 0x18, 0x3c, 0x00, 0xe0, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00, // î ì (140, 141) î Ź
    0xc6, 0x10, 0x7c, 0xc6, 0xfe, 0xc6, 0xc6, 0x00, 0x30, 0x30, 0x00, 0x78, 0xcc, 0xfc, 0xcc, 0x00, // Ä Å (142, 143) Ä Ć
    0x1c, 0x00, 0xfc, 0x60, 0x78, 0x60, 0xfc, 0x00, 0x00, 0x00, 0x7f, 0x0c, 0x7f, 0xcc, 0x7f, 0x00, // É æ (144, 145) É Ĺ
    0x3e, 0x6c, 0xcc, 0xfe, 0xcc, 0xcc, 0xce, 0x00, 0x78, 0x84, 0x00, 0x78, 0xcc, 0xcc, 0x78, 0x00, // Æ ô (146, 147) Í ô
    0x00, 0xcc, 0x00, 0x78, 0xcc, 0xcc, 0x78, 0x00, 0x00, 0xe0, 0x00, 0x78, 0xcc, 0xcc, 0x78, 0x00, // ö ò (148, 149) ö Ľ
    0x78, 0x84, 0x00, 0xcc, 0xcc, 0xcc, 0x76, 0x00, 0x00, 0xe0, 0x00, 0xcc, 0xcc, 0xcc, 0x76, 0x00, // û ù (150, 151) ľ Ś
    0x00, 0xcc, 0x00, 0xcc, 0xcc, 0x7c, 0x0c, 0xf8, 0xc3, 0x18, 0x3c, 0x66, 0x66, 0x3c, 0x18, 0x00, // ÿ Ö (152, 153) ś Ö
    0xcc, 0x00, 0xcc, 0xcc, 0xcc, 0xcc, 0x78, 0x00, 0x18, 0x18, 0x7e, 0xc0, 0xc0, 0x7e, 0x18, 0x18, // Ü ¢ (154, 155) Ü Ť
    0x38, 0x6c, 0x64, 0xf0, 0x60, 0xe6, 0xfc, 0x00, 0xcc, 0xcc, 0x78, 0x30, 0xfc, 0x30, 0xfc, 0x30, // £ ¥ (156, 157) ť Ł
    0xf8, 0xcc, 0xcc, 0xfa, 0xc6, 0xcf, 0xc6, 0xc3, 0x0e, 0x1b, 0x18, 0x3c, 0x18, 0x18, 0xd8, 0x70, // ₧ ƒ (158, 159) × č
    0x1c, 0x00, 0x78, 0x0c, 0x7c, 0xcc, 0x76, 0x00, 0x38, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00, // á í (160, 161) á í
    0x00, 0x1c, 0x00, 0x78, 0xcc, 0xcc, 0x78, 0x00, 0x00, 0x1c, 0x00, 0xcc, 0xcc, 0xcc, 0x76, 0x00, // ó ú (162, 163) ó ú
    0x00, 0xf8, 0x00, 0xb8, 0xcc, 0xcc, 0xcc, 0x00, 0xfc, 0x00, 0xcc, 0xec, 0xfc, 0xdc, 0xcc, 0x00, // ñ Ñ (164, 165) Ą ą
    0x3c, 0x6c, 0x6c, 0x3e, 0x00, 0x7e, 0x00, 0x00, 0x38, 0x6c, 0x6c, 0x38, 0x00, 0x7c, 0x00, 0x00, // ạ ọ (166, 167) Ž ž
    0x18, 0x00, 0x18, 0x18, 0x30, 0x66, 0x3c, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xc0, 0xc0, 0x00, 0x00, // ¿ ⌐ (168, 169) Ę ę
    0x00, 0x00, 0x00, 0xfc, 0x0c, 0x0c, 0x00, 0x00, 0xc6, 0xcc, 0xd8, 0x36, 0x6b, 0xc2, 0x84, 0x0f, // ¬ ½ (170, 171) ¬ ź
    0xc3, 0xc6, 0xcc, 0xdb, 0x37, 0x6d, 0xcf, 0x03, 0x18, 0x00, 0x18, 0x18, 0x3c, 0x3c, 0x18, 0x00, // ¼ ¡ (172, 173) Č ş
    0x00, 0x33, 0x66, 0xcc, 0x66, 0x33, 0x00, 0x00, 0x00, 0xcc, 0x66, 0x33, 0x66, 0xcc, 0x00, 0x00, // « » (174, 175)
    0x22, 0x88, 0x22, 0x88, 0x22, 0x88, 0x22, 0x88, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, // ░ ▒ (176, 177)
    0xdb, 0xf6, 0xdb, 0x6f, 0xdb, 0x7e, 0xd7, 0xed, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, // ▓ │ (178, 179)
    0x18, 0x18, 0x18, 0x18, 0xf8, 0x18, 0x18, 0x18, 0x18, 0x18, 0xf8, 0x18, 0xf8, 0x18, 0x18, 0x18, // ┤ ╡ (180, 181) ┤ Á
    0x36, 0x36, 0x36, 0x36, 0xf6, 0x36, 0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x36, 0x36, 0x36, // ╢ ╖ (182, 183) Â Ě
    0x00, 0x00, 0xf8, 0x18, 0xf8, 0x18, 0x18, 0x18, 0x36, 0x36, 0xf6, 0x06, 0xf6, 0x36, 0x36, 0x36, // ╕ ╣ (184, 185) Ş ╣
    0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00, 0xfe, 0x06, 0xf6, 0x36, 0x36, 0x36, // ║ ╗ (186, 187) ║ ╗
    0x36, 0x36, 0xf6, 0x06, 0xfe, 0x00, 0x00, 0x00, 0x36, 0x36, 0x36, 0x36, 0xfe, 0x00, 0x00, 0x00, // ╝ ╜ (188, 189) ╝ Ż
    0x18, 0x18, 0xf8, 0x18, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x18, 0x18, 0x18, // ╛ ┐ (190, 191) ż ┐
    0x18, 0x18, 0x18, 0x18, 0x1f, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0xff, 0x00, 0x00, 0x00, // └ ┴ (192, 193) └ ┴
    0x00, 0x00, 0x00, 0x00, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1f, 0x18, 0x18, 0x18, // ┬ ├ (194, 195) ┬ ├
    0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0xff, 0x18, 0x18, 0x18, // ─ ┼ (196, 197) ─ ┼
    0x18, 0x18, 0x1f, 0x18, 0x1f, 0x18, 0x18, 0x18, 0x36, 0x36, 0x36, 0x36, 0x37, 0x36, 0x36, 0x36, // ╞ ╟ (198, 199) Ă ă
    0x36, 0x36, 0x37, 0x30, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x30, 0x37, 0x36, 0x36, 0x36, // ╚ ╔ (200, 201) ╚ ╔
    0x36, 0x36, 0xf7, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xf7, 0x36, 0x36, 0x36, // ╩ ╦ (202, 203) ╩ ╦
    0x36, 0x36, 0x37, 0x30, 0x37, 0x36, 0x36, 0x36, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, // ╠ ═ (204, 205) ╠ ═
    0x36, 0x36, 0xf7, 0x00, 0xf7, 0x36, 0x36, 0x36, 0x18, 0x18, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, // ╬ ╧ (206, 207) ╬ ¤
    0x36, 0x36, 0x36, 0x36, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x18, 0x18, 0x18, // ╨ ╤ (208, 209) đ Đ
    0x00, 0x00, 0x00, 0x00, 0xff, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x3f, 0x00, 0x00, 0x00, // ╥ ╙ (210, 211) Ď Ë
    0x18, 0x18, 0x1f, 0x18, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x18, 0x1f, 0x18, 0x18, 0x18, // ╘ ╒ (212, 213) ď Ň
    0x00, 0x00, 0x00, 0x00, 0x3f, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0xff, 0x36, 0x36, 0x36, // ╓ ╫ (214, 215) Í î
    0x18, 0x18, 0xff, 0x18, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xf8, 0x00, 0x00, 0x00, // ╪ ┘ (216, 217) ě ┘
    0x00, 0x00, 0x00, 0x00, 0x1f, 0x18, 0x18, 0x18, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, // ┌ █ (218, 219) ┌ █
    0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, // ▄ ▌ (220, 221) ▄ Ţ
    0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, // ▐ ▀ (222, 223) Ů ▀
    0x00, 0x00, 0x76, 0xdc, 0xc8, 0xdc, 0x76, 0x00, 0x00, 0x78, 0xcc, 0xf8, 0xcc, 0xf8, 0xc0, 0xc0, // α β (224, 225) Ó β
    0x00, 0xfc, 0xcc, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0xfe, 0x6c, 0x6c, 0x6c, 0x6c, 0x00, // Γ π (226, 227) Ô Ń
    0xfc, 0xcc, 0x60, 0x30, 0x60, 0xcc, 0xfc, 0x00, 0x00, 0x00, 0x7e, 0xd8, 0xd8, 0xd8, 0x70, 0x00, // Σ σ (228, 229) ń ň
    0x00, 0x66, 0x66, 0x66, 0x66, 0x7c, 0x60, 0xc0, 0x00, 0x76, 0xdc, 0x18, 0x18, 0x18, 0x18, 0x00, // μ Τ (230, 231) Š š
    0xfc, 0x30, 0x78, 0xcc, 0xcc, 0x78, 0x30, 0xfc, 0x38, 0x6c, 0xc6, 0xfe, 0xc6, 0x6c, 0x38, 0x00, // ϕ Ө (232, 233) Ŕ Ú
    0x38, 0x6c, 0xc6, 0xc6, 0x6c, 0x6c, 0xee, 0x00, 0x1c, 0x30, 0x18, 0x7c, 0xcc, 0xcc, 0x78, 0x00, // Ω δ (234, 235) ŕ Ű
    0x00, 0x00, 0x7e, 0xdb, 0xdb, 0x7e, 0x00, 0x00, 0x06, 0x0c, 0x7e, 0xdb, 0xdb, 0x7e, 0x60, 0xc0, // ∞ ø (236, 237) ý Ý
    0x38, 0x60, 0xc0, 0xf8, 0xc0, 0x60, 0x38, 0x00, 0x78, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x00, //   ∩ (238, 239) ţ ´
    0x00, 0x7e, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x18, 0x18, 0x7e, 0x18, 0x18, 0x00, 0x7e, 0x00, // ≡ ± (240, 241) ­ ̋
    0x60, 0x30, 0x18, 0x30, 0x60, 0x00, 0xfc, 0x00, 0x18, 0x30, 0x60, 0x30, 0x18, 0x00, 0xfc, 0x00, // ≥ ≤ (242, 243) ̨ ˇ
    0x0e, 0x1b, 0x1b, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xd8, 0xd8, 0x70, // ⌠ ⌡ (244, 245) ̆ §
    0x18, 0x18, 0x00, 0x7e, 0x00, 0x18, 0x18, 0x00, 0x00, 0x76, 0xdc, 0x00, 0x76, 0xdc, 0x00, 0x00, // ÷ ꞊ (246, 247) ÷ ̧
    0x38, 0x6c, 0x6c, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, // ○ ● (248, 249) ° ¨
    0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x0f, 0x0c, 0x0c, 0x0c, 0xec, 0x6c, 0x3c, 0x1c, // ▪ √ (250, 251) ̇ ű
    0x58, 0x6c, 0x6c, 0x6c, 0x6c, 0x00, 0x00, 0x00, 0x70, 0x98, 0x30, 0x60, 0xf8, 0x00, 0x00, 0x00, // ⁿ ² (252, 253) Ř ř
    0x00, 0x00, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00  // ■   (254, 255) ■
};

#endif