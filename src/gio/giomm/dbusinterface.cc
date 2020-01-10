// Generated by gmmproc 2.54.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/dbusinterface.h>
#include <giomm/private/dbusinterface_p.h>


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
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <gio/gio.h>
#include <giomm/dbusintrospection.h>
#include <giomm/dbusobject.h>

namespace Gio
{

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::DBus::Interface> wrap(GDBusInterface* object, bool take_copy)
{
  return Glib::RefPtr<Gio::DBus::Interface>( dynamic_cast<Gio::DBus::Interface*> (Glib::wrap_auto_interface<Gio::DBus::Interface> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gio
{

namespace DBus
{


/* The *_Class implementation: */

const Glib::Interface_Class& Interface_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &Interface_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = g_dbus_interface_get_type();
  }

  return *this;
}

void Interface_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr);

  klass->get_info = &get_info_vfunc_callback;
  klass->get_object = &get_object_vfunc_callback;
  klass->set_object = &set_object_vfunc_callback;
  klass->dup_object = &dup_object_vfunc_callback;

}

GDBusInterfaceInfo* Interface_Class::get_info_vfunc_callback(GDBusInterface* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        return Glib::unwrap(obj->get_info_vfunc());
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->get_info)
    return (*base->get_info)(self);

  using RType = GDBusInterfaceInfo*;
  return RType();
}
GDBusObject* Interface_Class::get_object_vfunc_callback(GDBusInterface* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        return Glib::unwrap(obj->get_object_vfunc());
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->get_object)
    return (*base->get_object)(self);

  using RType = GDBusObject*;
  return RType();
}
void Interface_Class::set_object_vfunc_callback(GDBusInterface* self, GDBusObject* object)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->set_object_vfunc(Glib::wrap(object, true)
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->set_object)
    (*base->set_object)(self, object);
}
GDBusObject* Interface_Class::dup_object_vfunc_callback(GDBusInterface* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        return Glib::unwrap(obj->dup_object_vfunc());
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->dup_object)
    return (*base->dup_object)(self);

  using RType = GDBusObject*;
  return RType();
}


Glib::ObjectBase* Interface_Class::wrap_new(GObject* object)
{
  return new Interface((GDBusInterface*)(object));
}


/* The implementation: */

Interface::Interface()
:
  Glib::Interface(interface_class_.init())
{}

Interface::Interface(GDBusInterface* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

Interface::Interface(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

Interface::Interface(Interface&& src) noexcept
: Glib::Interface(std::move(src))
{}

Interface& Interface::operator=(Interface&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

Interface::~Interface() noexcept
{}

// static
void Interface::add_interface(GType gtype_implementer)
{
  interface_class_.init().add_interface(gtype_implementer);
}

Interface::CppClassType Interface::interface_class_; // initialize static member

GType Interface::get_type()
{
  return interface_class_.init().get_type();
}


GType Interface::get_base_type()
{
  return g_dbus_interface_get_type();
}


Glib::RefPtr<InterfaceInfo> Interface::get_info()
{
  return Glib::wrap(g_dbus_interface_get_info(gobj()));
}

Glib::RefPtr<const InterfaceInfo> Interface::get_info() const
{
  return const_cast<Interface*>(this)->get_info();
}

Glib::RefPtr<Gio::DBus::Object> Interface::get_object()
{
  return Glib::wrap(g_dbus_interface_get_object(gobj()));
}

Glib::RefPtr<const Gio::DBus::Object> Interface::get_object() const
{
  return const_cast<Interface*>(this)->get_object();
}

Glib::RefPtr<Gio::DBus::Object> Interface::dup_object()
{
  return Glib::wrap(g_dbus_interface_dup_object(gobj()));
}

Glib::RefPtr<const Gio::DBus::Object> Interface::dup_object() const
{
  return const_cast<Interface*>(this)->dup_object();
}

void Interface::set_object(const Glib::RefPtr<Gio::DBus::Object>& object)
{
  g_dbus_interface_set_object(gobj(), Glib::unwrap(object));
}


Glib::RefPtr<InterfaceInfo> Gio::DBus::Interface::get_info_vfunc() const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_info)
  {
    Glib::RefPtr<InterfaceInfo> retval(Glib::wrap((*base->get_info)(const_cast<GDBusInterface*>(gobj()))));
    return retval;
  }

  using RType = Glib::RefPtr<InterfaceInfo>;
  return RType();
}
Glib::RefPtr<Gio::DBus::Object> Gio::DBus::Interface::get_object_vfunc() const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_object)
  {
    Glib::RefPtr<Gio::DBus::Object> retval(Glib::wrap((*base->get_object)(const_cast<GDBusInterface*>(gobj()))));
    return retval;
  }

  using RType = Glib::RefPtr<Gio::DBus::Object>;
  return RType();
}
void Gio::DBus::Interface::set_object_vfunc(const Glib::RefPtr<Gio::DBus::Object>& object) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->set_object)
  {
    (*base->set_object)(gobj(),Glib::unwrap(object));
  }
}
Glib::RefPtr<Gio::DBus::Object> Gio::DBus::Interface::dup_object_vfunc() const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->dup_object)
  {
    Glib::RefPtr<Gio::DBus::Object> retval(Glib::wrap((*base->dup_object)(const_cast<GDBusInterface*>(gobj()))));
    return retval;
  }

  using RType = Glib::RefPtr<Gio::DBus::Object>;
  return RType();
}


} // namespace DBus

} // namespace Gio


