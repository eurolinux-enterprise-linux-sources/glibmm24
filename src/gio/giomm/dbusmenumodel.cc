// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/dbusmenumodel.h>
#include <giomm/private/dbusmenumodel_p.h>


/* Copyright (C) 2012 The giomm Development Team
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
#include <giomm/dbusconnection.h>

namespace Gio
{

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::DBus::MenuModel> wrap(GDBusMenuModel* object, bool take_copy)
{
  return Glib::RefPtr<Gio::DBus::MenuModel>( dynamic_cast<Gio::DBus::MenuModel*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{

namespace DBus
{


/* The *_Class implementation: */

const Glib::Class& MenuModel_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &MenuModel_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_dbus_menu_model_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void MenuModel_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* MenuModel_Class::wrap_new(GObject* object)
{
  return new MenuModel((GDBusMenuModel*)object);
}


/* The implementation: */

GDBusMenuModel* MenuModel::gobj_copy()
{
  reference();
  return gobj();
}

MenuModel::MenuModel(const Glib::ConstructParams& construct_params)
:
  ::Gio::MenuModel(construct_params)
{

}

MenuModel::MenuModel(GDBusMenuModel* castitem)
:
  ::Gio::MenuModel((GMenuModel*)(castitem))
{}


MenuModel::MenuModel(MenuModel&& src) noexcept
: ::Gio::MenuModel(std::move(src))
{}

MenuModel& MenuModel::operator=(MenuModel&& src) noexcept
{
  ::Gio::MenuModel::operator=(std::move(src));
  return *this;
}


MenuModel::~MenuModel() noexcept
{}


MenuModel::CppClassType MenuModel::menumodel_class_; // initialize static member

GType MenuModel::get_type()
{
  return menumodel_class_.init().get_type();
}


GType MenuModel::get_base_type()
{
  return g_dbus_menu_model_get_type();
}


MenuModel::MenuModel()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  ::Gio::MenuModel(Glib::ConstructParams(menumodel_class_.init()))
{
  

}

Glib::RefPtr<MenuModel> MenuModel::get(const Glib::RefPtr<Connection>& connection, const Glib::ustring& bus_name, const Glib::ustring& object_path)
{
  return Glib::wrap(g_dbus_menu_model_get(Glib::unwrap(connection), bus_name.c_str(), object_path.c_str()));
}


} // namespace DBus

} // namespace Gio


