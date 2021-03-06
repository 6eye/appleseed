
//
// This source file is part of appleseed.
// Visit https://appleseedhq.net/ for additional information and resources.
//
// This software is released under the MIT license.
//
// Copyright (c) 2018 Francois Beaune, The appleseedhq Organization
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#pragma once

namespace renderer
{

//
// Perceptually uniform sequential color maps from Matplotlib in sRGB color space.
//
// References:
//
//   http://bids.github.io/colormap/
//   https://github.com/BIDS/colormap/blob/master/colormaps.py
//   http://medvis.org/2016/02/23/better-than-the-rainbow-the-matplotlib-alternative-colormaps/
//

extern const float MagmaColorMap[3 * 256];
extern const float InfernoColorMap[3 * 256];
extern const float PlasmaColorMap[3 * 256];
extern const float ViridisColorMap[3 * 256];


//
// For completeness, the Jet color map popularized by MATLAB, in sRGB color space.
//
// References:
//
//   https://blogs.mathworks.com/cleve/2015/02/02/origins-of-colormaps/
//   https://www.mathworks.com/content/dam/mathworks/tag-team/Objects/r/81137_92238v00_RainbowColorMap_57312.pdf
//   https://blogs.mathworks.com/steve/2014/10/20/a-new-colormap-for-matlab-part-2-troubles-with-rainbows/
//   https://www.youtube.com/watch?v=xAoljeRJ3lU
//

extern const float JetColorMap[3 * 9];

}   // namespace renderer
