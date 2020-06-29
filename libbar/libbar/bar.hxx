#pragma once

#include <iosfwd>
#include <string>

#include <libbaz/baz.hxx>

#include <libbar/export.hxx>

namespace bar
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBBAR_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
