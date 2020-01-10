// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/settingsschema.h>
#include <giomm/private/settingsschema_p.h>


/* Copyright (C) 2015 The giomm Development Team
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

namespace Gio
{

} // namespace Gio

namespace
{
} // anonymous namespace


/* Why reinterpret_cast<SettingsSchema*>(gobject) is needed:
 *
 * A SettingsSchema instance is in fact always a GSettingsSchema instance.
 * Unfortunately, GSettingsSchema cannot be a member of SettingsSchema,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because SettingsSchema does not have any member data, and
 * it is impossible to derive from it.  This is ensured by using final on the
 * class and by using = delete on the default constructor.
 */

namespace Glib
{

Glib::RefPtr<Gio::SettingsSchema> wrap(GSettingsSchema* object, bool take_copy)
{
  if(take_copy && object)
    g_settings_schema_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gio::SettingsSchema>(reinterpret_cast<Gio::SettingsSchema*>(object));
}

} // namespace Glib


namespace Gio
{


void SettingsSchema::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_settings_schema_ref(reinterpret_cast<GSettingsSchema*>(const_cast<SettingsSchema*>(this)));
}

void SettingsSchema::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_settings_schema_unref(reinterpret_cast<GSettingsSchema*>(const_cast<SettingsSchema*>(this)));
}

GSettingsSchema* SettingsSchema::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GSettingsSchema*>(this);
}

const GSettingsSchema* SettingsSchema::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GSettingsSchema*>(this);
}

GSettingsSchema* SettingsSchema::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  const auto gobject = reinterpret_cast<GSettingsSchema*>(const_cast<SettingsSchema*>(this));
  g_settings_schema_ref(gobject);
  return gobject;
}


Glib::ustring SettingsSchema::get_id() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_settings_schema_get_id(const_cast<GSettingsSchema*>(gobj())));
}

Glib::ustring SettingsSchema::get_path() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_settings_schema_get_path(const_cast<GSettingsSchema*>(gobj())));
}

Glib::RefPtr<SettingsSchemaKey> SettingsSchema::get_key(const Glib::ustring& name)
{
  return Glib::wrap(g_settings_schema_get_key(gobj(), name.c_str()));
}

Glib::RefPtr<const SettingsSchemaKey> SettingsSchema::get_key(const Glib::ustring& name) const
{
  return Glib::wrap(g_settings_schema_get_key(const_cast<GSettingsSchema*>(gobj()), name.c_str()));
}

bool SettingsSchema::has_key(const Glib::ustring& name) const
{
  return g_settings_schema_has_key(const_cast<GSettingsSchema*>(gobj()), name.c_str());
}

std::vector<Glib::ustring> SettingsSchema::list_keys() const
{
  return Glib::ArrayHandler<Glib::ustring>::array_to_vector(g_settings_schema_list_keys(const_cast<GSettingsSchema*>(gobj())), Glib::OWNERSHIP_DEEP);
}

std::vector<Glib::ustring> SettingsSchema::list_children() const
{
  return Glib::ArrayHandler<Glib::ustring>::array_to_vector(g_settings_schema_list_children(const_cast<GSettingsSchema*>(gobj())), Glib::OWNERSHIP_DEEP);
}


} // namespace Gio


