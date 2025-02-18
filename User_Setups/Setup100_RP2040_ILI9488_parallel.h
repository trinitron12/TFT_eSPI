// This setup is for the RP2040 processor only when used with 8-bit parallel displays
// See SetupX_Template.h for all options available
#define USER_SETUP_ID 100

////////////////////////////////////////////////////////////////////////////////////////////
// Interface Configuration
////////////////////////////////////////////////////////////////////////////////////////////
#define TFT_PARALLEL_8_BIT    // 8-bit parallel interface for ILI9488

////////////////////////////////////////////////////////////////////////////////////////////
// Display Driver Type
////////////////////////////////////////////////////////////////////////////////////////////
#define ILI9488_DRIVER         // Use the ILI9488 driver for the display

////////////////////////////////////////////////////////////////////////////////////////////
// RP2040 Pin Definitions for 8-bit Parallel
////////////////////////////////////////////////////////////////////////////////////////////

// Chip Select is permanently connected to 0V in this setup, no need to define
//#define TFT_CS   -1   // Not needed as chip select pin is tied to ground

// Data Command control pin
#define TFT_DC    28        // Data/Command control pin (change if using different pin)

// Reset pin for the display
#define TFT_RST   2         // Reset pin (change if using a different pin)

// Write pin for 8-bit parallel communication (must be sequentially increasing)
#define TFT_WR   22         // Write control pin

// Data pins for 8-bit parallel communication, sequentially increasing
#define TFT_D0    6         // Data pin 0
#define TFT_D1    7         // Data pin 1
#define TFT_D2    8         // Data pin 2
#define TFT_D3    9         // Data pin 3
#define TFT_D4   10         // Data pin 4
#define TFT_D5   11         // Data pin 5
#define TFT_D6   12         // Data pin 6
#define TFT_D7   13         // Data pin 7

////////////////////////////////////////////////////////////////////////////////////////////
// Font Configuration
////////////////////////////////////////////////////////////////////////////////////////////
// Font settings for display (load desired fonts)
#define LOAD_GLCD   // Load the original Adafruit 8-pixel font (~1820 bytes in FLASH)
#define LOAD_FONT2  // Small 16-pixel font (~3534 bytes in FLASH, 96 characters)
#define LOAD_FONT4  // Medium 26-pixel font (~5848 bytes in FLASH, 96 characters)
#define LOAD_FONT6  // Large 48-pixel font (~2666 bytes in FLASH, only 1234567890:-.apm)
#define LOAD_FONT7  // 7-segment 48-pixel font (~2438 bytes in FLASH, only 1234567890:.)
#define LOAD_FONT8  // Large 75-pixel font (~3256 bytes in FLASH, only 1234567890:-.)
#define LOAD_GFXFF  // Include FreeFonts (FF1 to FF48 and custom fonts)
#define SMOOTH_FONT // Enable smooth fonts for better readability
