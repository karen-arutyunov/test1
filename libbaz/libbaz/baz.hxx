#pragma once

#include <iosfwd>
#include <string>

#include <libbaz/export.hxx>

namespace baz
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBBAZ_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
