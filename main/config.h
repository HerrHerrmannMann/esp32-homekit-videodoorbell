#pragma once

// Configuration stuff
#include <esp_camera.h>

#define TAG "esp32_camera"

#define CAMERA_FRAME_RATE 30   // default = 30
#define CAMERA_FRAME_SIZE FRAMESIZE_VGA   // default = FRAMESIZE_VGA
#define CAMERA_WIDTH 640   // default = 640
#define CAMERA_HEIGHT 480   // default = 480

// Scale factors to get image for video stream
#define VIDEO_IMAGE_SCALE_NUM 1   // default = 1
#define VIDEO_IMAGE_SCALE_DENOM 4  // default = 4

// Calculated stuff
#define VIDEO_IMAGE_SCALED(x) ((x) * VIDEO_IMAGE_SCALE_NUM / VIDEO_IMAGE_SCALE_DENOM)

#define VIDEO_WIDTH VIDEO_IMAGE_SCALED(CAMERA_WIDTH)
#define VIDEO_HEIGHT VIDEO_IMAGE_SCALED(CAMERA_HEIGHT)
