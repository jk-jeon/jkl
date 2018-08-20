/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Copyright (c) 2018 Junekey Jeon                                                                   ///
/// Permission is hereby granted, free of charge, to any person obtaining a copy of this software     ///
/// and associated documentation files(the "Software"), to deal in the Software without restriction,  ///
/// including without limitation the rights to use, copy, modify, merge, publish, distribute,         ///
/// sublicense, and / or sell copies of the Software, and to permit persons to whom the Software is   ///
/// furnished to do so, subject to the following conditions :                                         ///
///                                                                                                   ///
/// The above copyright notice and this permission notice shall be included in all copies or          ///
/// substantial portions of the Software.                                                             ///
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING     ///
/// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND        ///
/// NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,       ///
/// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,    ///
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.           ///
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once
#include "general.h"

namespace jkl {
	namespace math {
		inline namespace math_literals {
			// Degree to radian conversion
			JKL_GPU_EXECUTABLE constexpr float operator""_degf(long double deg) noexcept {
				return float(deg) * constants<float>::pi / 180.0f;
			}
			JKL_GPU_EXECUTABLE constexpr double operator""_deg(long double deg) noexcept {
				return double(deg) * constants<double>::pi / 180.0;
			}
			JKL_GPU_EXECUTABLE constexpr long double operator""_degl(long double deg) noexcept {
				return deg * constants<long double>::pi / 180.0l;
			}
		}
	}
}