// Bitmaps.h
#ifndef BITMAPS_H
#define BITMAPS_H
// Dummy icon (32x32 pixels)
const unsigned char WIFI[] PROGMEM = {
  // 'wifi2, 32x32px
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0f, 0xf0, 0x00, 0x00, 0x30, 0x0c, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x01, 0x87, 0xe1, 0x80,
  0x00, 0x18, 0x18, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x43, 0xc2, 0x00, 0x00, 0x0e, 0x70, 0x00,
  0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x04, 0x20, 0x00,
  0x00, 0x04, 0x20, 0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x06, 0x60, 0x00, 0x00, 0x03, 0xc0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char SERVER[] PROGMEM = {
  // 'SSS, 32x32px
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00,
  0x00, 0xbf, 0x03, 0x00, 0x00, 0xa1, 0x01, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xa1, 0x01, 0x00, 0x00, 0xa1, 0x01, 0x00,
  0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00
};


const unsigned char SETTINGS[] PROGMEM = {
  // 'FFFFFFFFFF (2), 32x32px
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xc0, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x83, 0xc1, 0x00, 0x01, 0xe7, 0xe7, 0x80,
  0x03, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 0x80, 0x00, 0xfc, 0x3f, 0x00,
  0x00, 0xf0, 0x0f, 0x00, 0x01, 0xf0, 0x0f, 0x80, 0x0f, 0xe1, 0x87, 0xf0, 0x0f, 0xe3, 0xc7, 0xf0,
  0x0f, 0xe3, 0xc7, 0xf0, 0x0f, 0xe1, 0x87, 0xf0, 0x01, 0xf0, 0x0f, 0x80, 0x00, 0xf0, 0x0f, 0x00,
  0x00, 0xfc, 0x3f, 0x00, 0x01, 0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 0xc0,
  0x01, 0xe7, 0xe7, 0x80, 0x00, 0x03, 0xc3, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x03, 0xc0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char ESPNOW[] PROGMEM = {
  // 'ANT (2), 32x32px
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x01, 0x80, 0x00, 0x80, 0x03, 0x00, 0x00, 0x40,
  0x06, 0x30, 0x0c, 0x60, 0x04, 0x60, 0x06, 0x20, 0x0c, 0x40, 0x02, 0x30, 0x08, 0x84, 0x21, 0x10,
  0x08, 0x88, 0x11, 0x10, 0x08, 0x88, 0x11, 0x10, 0x08, 0x99, 0x99, 0x10, 0x08, 0x99, 0x91, 0x10,
  0x08, 0x89, 0x91, 0x10, 0x08, 0x8d, 0xb1, 0x10, 0x08, 0xc1, 0x83, 0x10, 0x04, 0x40, 0x02, 0x20,
  0x04, 0x21, 0x84, 0x20, 0x02, 0x03, 0xc0, 0x40, 0x03, 0x03, 0xc0, 0xc0, 0x01, 0x82, 0x41, 0x80,
  0x00, 0x02, 0x40, 0x00, 0x00, 0x06, 0x60, 0x00, 0x00, 0x05, 0xa0, 0x00, 0x00, 0x05, 0xa0, 0x00,
  0x00, 0x06, 0x60, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x0a, 0x50, 0x00, 0x00, 0x09, 0x90, 0x00,
  0x00, 0x0a, 0x50, 0x00, 0x00, 0x0c, 0x30, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char FullBattery[24] =
{
  0x3F, 0xFF, 0xFF, 0xE0, 0x00, 0x01, 0x9E, 0xF7, 0xBD, 0x9E, 0xF7, 0xBD,
  0x9E, 0xF7, 0xBD, 0x9E, 0xF7, 0xBD, 0xE0, 0x00, 0x01, 0x3F, 0xFF, 0xFF
};

const unsigned char HighBattery[24] =
{
  0x3F, 0xFF, 0xFF, 0xE0, 0x00, 0x01, 0x80, 0xF7, 0xBD, 0x80, 0xF7, 0xBD,
  0x80, 0xF7, 0xBD, 0x80, 0xF7, 0xBD, 0xE0, 0x00, 0x01, 0x3F, 0xFF, 0xFF
};

const unsigned char MediumBattery[24] =
{
  0x3F, 0xFF, 0xFF, 0xE0, 0x00, 0x01, 0x80, 0x07, 0xBD, 0x80, 0x07, 0xBD,
  0x80, 0x07, 0xBD, 0x80, 0x07, 0xBD, 0xE0, 0x00, 0x01, 0x3F, 0xFF, 0xFF
};

const unsigned char LowBattery[24] =
{
  0x3F, 0xFF, 0xFF, 0xE0, 0x00, 0x01, 0x80, 0x00, 0x3D, 0x80, 0x00, 0x3D,
  0x80, 0x00, 0x3D, 0x80, 0x00, 0x3D, 0xE0, 0x00, 0x01, 0x3F, 0xFF, 0xFF
};

const unsigned char EmpttyBattery[24] =
{
  0x3F, 0xFF, 0xFF, 0xE0, 0x00, 0x01, 0x80, 0x00, 0x01, 0x80, 0x00, 0x01,
  0x80, 0x00, 0x01, 0x80, 0x00, 0x01, 0xE0, 0x00, 0x01, 0x3F, 0xFF, 0xFF
};
const unsigned char wifiicon[] PROGMEM  ={ // wifi icon
	0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x3f, 0xc0, 0x60, 0x60, 0x5f, 0xa0, 0x30, 0xc0, 0x0f, 0x00, 
	0x0f, 0x00, 0x06, 0x00, 0x06, 0x00, 0x00, 0x00
  };
#endif  // BITMAPS_H
