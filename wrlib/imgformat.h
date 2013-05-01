/*
 * Raster graphics library
 *
 * Copyright (c) 1997-2003 Alfredo K. Kojima
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public
 *  License along with this library; if not, write to the Free
 *  Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston,
 *  MA 02110-1301, USA.
 */

/*
 * Functions to load and save RImage from/to file in a specific file format
 *
 * These functions are for WRaster library's internal use only, please use
 * the RLoadImage function defined in 'wraster.h'
 */

#ifndef IMGFORMAT_INTERNAL_H
#define IMGFORMAT_INTERNAL_H


#define IM_ERROR   -1
#define IM_UNKNOWN  0
#define IM_XPM      1
#define IM_TIFF     2
#define IM_PNG      3
#define IM_PPM      4
#define IM_JPEG     5
#define IM_GIF      6

/* How many image types we have. */
/* Increase this when adding new image types! */
#define IM_TYPES    6

/*
 * Function for Loading in a specific format
 */
RImage *RLoadPPM(char *file_name);

RImage *RLoadXPM(RContext *context, char *file);

#ifdef USE_TIFF
RImage *RLoadTIFF(char *file, int index);
#endif

#ifdef USE_PNG
RImage *RLoadPNG(RContext *context, char *file);
#endif

#ifdef USE_JPEG
RImage *RLoadJPEG(RContext *context, char *file);
#endif

#ifdef USE_GIF
RImage *RLoadGIF(char *file, int index);
#endif


#endif
