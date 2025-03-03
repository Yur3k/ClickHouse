#pragma once

#include <cstdint>
#include <string>
#include <vector>
#include <unordered_set>
#include <base/strong_typedef.h>
#include <base/defines.h>
#include <base/types.h>
#include <base/Decimal_fwd.h>

namespace wide
{

template <size_t Bits, typename Signed>
class integer;

}

using Int128 = wide::integer<128, signed>;
using UInt128 = wide::integer<128, unsigned>;
using Int256 = wide::integer<256, signed>;
using UInt256 = wide::integer<256, unsigned>;

namespace DB
{

using UUID = StrongTypedef<UInt128, struct UUIDTag>;

using IPv4 = StrongTypedef<UInt32, struct IPv4Tag>;

struct IPv6;

struct Null;

using UInt128 = ::UInt128;
using UInt256 = ::UInt256;
using Int128 = ::Int128;
using Int256 = ::Int256;

enum class TypeIndex;

/// Not a data type in database, defined just for convenience.
using Strings = std::vector<String>;
using TypeIndexesSet = std::unordered_set<TypeIndex>;

}
