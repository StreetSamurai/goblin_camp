/* Copyright 2010-2011 Ilkka Halila
This file is part of Goblin Camp.

Goblin Camp is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Goblin Camp is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License 
along with Goblin Camp. If not, see <http://www.gnu.org/licenses/>.*/
#pragma once

// precompiled header
#if defined(BOOST_BUILD_PCH_ENABLED) && !defined(GC_SKIP_PCH)
// STL
#	include <vector>
#	include <deque>
#	include <map>
#	include <list>
#	include <queue>
#	include <set>
#	include <string>
#	include <sstream>
#	include <fstream>
#	include <algorithm>
#	include <functional>
#	include <numeric>
#	include <memory>
#	include <limits>
#	include <iterator>
#	include <exception>
#	include <stdexcept>
// CRT
#	include <ctime>
#	include <cmath>
#	include <cstdlib>
#	include <cstring>
#	include <cstdarg>
// Boost
#	pragma warning(push, 2)
#		include <boost/thread/thread.hpp>
#		include <boost/multi_array.hpp>
#		include <boost/shared_ptr.hpp>
#		include <boost/weak_ptr.hpp>
#		include <boost/serialization/serialization.hpp>
#		include <boost/serialization/split_member.hpp>
#		include <boost/archive/binary_iarchive.hpp>
#		include <boost/archive/binary_oarchive.hpp>
#		include <boost/serialization/map.hpp>
#		include <boost/serialization/list.hpp>
#		include <boost/serialization/set.hpp>
#		include <boost/serialization/weak_ptr.hpp>
#		include <boost/serialization/shared_ptr.hpp>
#		include <boost/serialization/deque.hpp>
#		include <boost/serialization/export.hpp>
#		include <boost/serialization/array.hpp>
#		include <boost/serialization/vector.hpp>
#		include <boost/enable_shared_from_this.hpp>
#		include <boost/format.hpp>
#		include <boost/algorithm/string.hpp>
#		include <boost/accumulators/accumulators.hpp>
#		include <boost/accumulators/statistics/mean.hpp>
#		include <boost/accumulators/statistics/weighted_mean.hpp>
#		include <boost/function.hpp>
#		include <boost/bind.hpp>
#		include <boost/lambda/lambda.hpp>
#		include <boost/lambda/bind.hpp>
#		include <boost/lexical_cast.hpp>
#		include <boost/date_time/local_time/local_time.hpp>
#		include <boost/foreach.hpp>
#		include <boost/assign/list_inserter.hpp>
#		include <boost/assert.hpp>
#		include <boost/unordered_map.hpp>
#		include <boost/cstdint.hpp>
#		include <boost/numeric/ublas/matrix.hpp>
#		include <boost/random/mersenne_twister.hpp>
#		include <boost/random/uniform_int.hpp>
#		include <boost/random/uniform_01.hpp>
#		include <boost/random/variate_generator.hpp>
#		include <boost/filesystem.hpp>
#		include <boost/math/constants/constants.hpp>
#		include <boost/tuple/tuple.hpp>
#       include <boost/python/detail/wrap_python.hpp>
#	    include <boost/python.hpp>
		namespace py = boost::python;
#	pragma warning(pop)
// libtcod
#	include <libtcod.hpp>
#	include <SDL.h>
#   include <SDL_image.h>

#endif

// Use with care.
#if defined(_MSC_VER) && defined(DEBUG)
#	define GC_DEBUG_INDUCE_CRASH() *((short*)0xDEADC0DE) = 0xDEAD
#	define GC_DEBUG_BREAKPOINT()   __asm int 3
#else
#	define GC_DEBUG_INDUCE_CRASH()
#	define GC_DEBUG_BREAKPOINT()
#endif
