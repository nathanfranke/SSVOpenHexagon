// Copyright (c) 2013-2020 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: https://opensource.org/licenses/AFL-3.0

#pragma once

#include <tuple>

namespace hg 
{
	// Allow us to represent the game's version in a major.minor.micro format
	struct GameVersion
	{
		int major;
		int minor;
		int micro;

		auto operator<(const GameVersion& rhs) const 
		{
			return std::tie(major, minor, micro) < std::tie(rhs.major, rhs.minor, rhs.micro);
		}
		
		auto operator>(const GameVersion& rhs) const 
		{
			return std::tie(major, minor, micro) > std::tie(rhs.major, rhs.minor, rhs.micro);
		}
		
		bool operator==(GameVersion other) const
		{
			return (major == other.major)  &&
					(minor == other.minor) &&
					(micro == other.micro);
		}
	};
} // namespace hg;