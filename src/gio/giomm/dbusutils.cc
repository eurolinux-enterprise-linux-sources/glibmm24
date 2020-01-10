// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/dbusutils.h>
#include <giomm/private/dbusutils_p.h>


// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2010 The giomm Development Team
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

#include <gio/gio.h>
#include <glibmm/utility.h>

namespace Gio
{

namespace DBus
{

std::string
generate_guid()
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_dbus_generate_guid());
}

bool
is_guid(const std::string& string)
{
  return static_cast<bool>(g_dbus_is_guid(string.c_str()));
}

bool
is_name(const Glib::ustring& string)
{
  return static_cast<bool>(g_dbus_is_name(string.c_str()));
}

bool
is_unique_name(const Glib::ustring& string)
{
  return static_cast<bool>(g_dbus_is_unique_name(string.c_str()));
}

bool
is_member_name(const Glib::ustring& string)
{
  return static_cast<bool>(g_dbus_is_member_name(string.c_str()));
}

bool
is_interface_name(const Glib::ustring& string)
{
  return static_cast<bool>(g_dbus_is_interface_name(string.c_str()));
}

} // namespace DBus

} // namespace Gio

namespace
{
} // anonymous namespace


