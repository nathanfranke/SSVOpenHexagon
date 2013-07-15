// Copyright (c) 2013 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: http://opensource.org/licenses/AFL-3.0

#ifndef HG_GLOBAL_TYPEDEFS
#define HG_GLOBAL_TYPEDEFS

#include <memory>

namespace hg
{
	template<typename T> using Uptr = std::unique_ptr<T>;
}

#endif