// -*- c++ -*-
// Generated by gmmproc 2.42.0 -- DO NOT MODIFY!
#ifndef _GIOMM_RESOURCE_H
#define _GIOMM_RESOURCE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2012 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <glibmm/error.h>


namespace Gio
{

/** Exception class for resource file handling errors.
 */
class ResourceError : public Glib::Error
{
public:
  enum Code
  {
    NOT_FOUND,
    INTERNAL
  };

  ResourceError(Code error_code, const Glib::ustring& error_message);
  explicit ResourceError(GError* gobject);
  Code code() const;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
private:

  static void throw_func(GError* gobject);

  friend void wrap_init(); // uses throw_func()

  #endif //DOXYGEN_SHOULD_SKIP_THIS
};


} // namespace Gio


#endif /* _GIOMM_RESOURCE_H */

