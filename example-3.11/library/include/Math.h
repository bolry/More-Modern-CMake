#include "boost/outcome.hpp"

namespace outcome = BOOST_OUTCOME_V2_NAMESPACE;

outcome::result<int> convert(const std::string& str) noexcept;

