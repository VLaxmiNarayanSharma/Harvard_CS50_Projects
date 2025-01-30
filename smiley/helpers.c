#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x <width; ++x) {
            // Check if the pixel is black (assuming black is (0,0,0) in BGR format)
            if (image[x][y].rgbtRed == 0x00 && image[x][y].rgbtGreen== 0x00 && image[x][y].rgbtBlue== 0x00) {
                // Change the color of the pixel to your desired color
                image[x][y].rgbtRed = 0x5A;  // Blue component
                image[x][y].rgbtGreen =0x42;    // Green component
                image[x][y].rgbtBlue = 0XBE;    // Red component
            }
        }
    }
}
