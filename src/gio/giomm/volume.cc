// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/volume.h>
#include <giomm/private/volume_p.h>


// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The gtkmm Development Team
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
#include <glibmm/exceptionhandler.h>
#include <giomm/file.h>
#include <giomm/drive.h>
#include <gio/gio.h>
#include "slot_async.h"

namespace Gio {

void
Volume::mount(const Glib::RefPtr<MountOperation>& mount_operation, const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, MountMountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_volume_mount(gobj(),
                 static_cast<GMountMountFlags>(flags),
                 Glib::unwrap(mount_operation),
                 Glib::unwrap(cancellable),
                 &SignalProxy_async_callback,
                 slot_copy);

}

void
Volume::mount(const Glib::RefPtr<MountOperation>& mount_operation, const SlotAsyncReady& slot, MountMountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_volume_mount(gobj(),
                 static_cast<GMountMountFlags>(flags),
                 Glib::unwrap(mount_operation),
                 0, // cancellable
                 &SignalProxy_async_callback,
                 slot_copy);
}

void
Volume::mount(const Glib::RefPtr<MountOperation>& mount_operation, MountMountFlags flags)
{
  g_volume_mount(gobj(),
                 static_cast<GMountMountFlags>(flags),
                 Glib::unwrap(mount_operation),
                 0, // cancellable
                 0,
                 0);
}

void
Volume::mount(MountMountFlags flags)
{
  g_volume_mount(gobj(),
                 static_cast<GMountMountFlags>(flags),
                 0,
                 0, // cancellable
                 0,
                 0);
}


void Volume::eject(const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, MountUnmountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_volume_eject_with_operation(gobj(),
                                static_cast<GMountUnmountFlags>(flags),
                                0, // mount_operation
                                Glib::unwrap(cancellable),
                                &SignalProxy_async_callback,
                                slot_copy);
}

void Volume::eject(const SlotAsyncReady& slot, MountUnmountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_volume_eject_with_operation(gobj(),
                                static_cast<GMountUnmountFlags>(flags),
                                0, // mount_operation
                                0, // cancellable
                                &SignalProxy_async_callback,
                                slot_copy);
}

void Volume::eject(MountUnmountFlags flags)
{
  g_volume_eject_with_operation(gobj(),
                                static_cast<GMountUnmountFlags>(flags),
                                0, // mount_operation
                                0, // cancellable
                                0, // callback
                                0); // data
}

void Volume::eject(const Glib::RefPtr<MountOperation>& mount_operation, const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, MountUnmountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_volume_eject_with_operation(gobj(),
                                static_cast<GMountUnmountFlags>(flags),
                                Glib::unwrap(mount_operation),
                                Glib::unwrap(cancellable),
                                &SignalProxy_async_callback,
                                slot_copy);
}

void Volume::eject(const Glib::RefPtr<MountOperation>& mount_operation, const SlotAsyncReady& slot, MountUnmountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_volume_eject_with_operation(gobj(),
                                static_cast<GMountUnmountFlags>(flags),
                                Glib::unwrap(mount_operation),
                                0, // cancellable
                                &SignalProxy_async_callback,
                                slot_copy);
}

void Volume::eject(const Glib::RefPtr<MountOperation>& mount_operation, MountUnmountFlags flags)
{
    g_volume_eject_with_operation(gobj(),
                                  static_cast<GMountUnmountFlags>(flags),
                                  Glib::unwrap(mount_operation),
                                  0, // cancellable
                                  0, // callback
                                  0); // data
}

} // namespace Gio


namespace
{


static const Glib::SignalProxyInfo Volume_signal_changed_info =
{
  "changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Volume_signal_removed_info =
{
  "removed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::Volume> wrap(GVolume* object, bool take_copy)
{
  return Glib::RefPtr<Gio::Volume>( dynamic_cast<Gio::Volume*> (Glib::wrap_auto_interface<Gio::Volume> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gio
{


/* The *_Class implementation: */

const Glib::Interface_Class& Volume_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &Volume_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = g_drive_get_type();
  }

  return *this;
}

void Volume_Class::iface_init_function(void* g_iface, void*)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != 0); 


  klass->changed = &changed_callback;
  klass->removed = &removed_callback;
}


void Volume_Class::changed_callback(GVolume* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->on_changed();
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)    );

  // Call the original underlying C function:
  if(base && base->changed)
    (*base->changed)(self);
}
void Volume_Class::removed_callback(GVolume* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->on_removed();
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)    );

  // Call the original underlying C function:
  if(base && base->removed)
    (*base->removed)(self);
}


Glib::ObjectBase* Volume_Class::wrap_new(GObject* object)
{
  return new Volume((GVolume*)(object));
}


/* The implementation: */

Volume::Volume()
:
  Glib::Interface(volume_class_.init())
{}

Volume::Volume(GVolume* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

Volume::Volume(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

Volume::~Volume()
{}

// static
void Volume::add_interface(GType gtype_implementer)
{
  volume_class_.init().add_interface(gtype_implementer);
}

Volume::CppClassType Volume::volume_class_; // initialize static member

GType Volume::get_type()
{
  return volume_class_.init().get_type();
}


GType Volume::get_base_type()
{
  return g_drive_get_type();
}


std::string Volume::get_name() const
{
  return Glib::convert_return_gchar_ptr_to_stdstring(g_volume_get_name(const_cast<GVolume*>(gobj())));
}

std::string Volume::get_uuid() const
{
  return Glib::convert_return_gchar_ptr_to_stdstring(g_volume_get_uuid(const_cast<GVolume*>(gobj())));
}

Glib::RefPtr<Icon> Volume::get_icon()
{
  Glib::RefPtr<Icon> retvalue = Glib::wrap(g_volume_get_icon(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Icon> Volume::get_icon() const
{
  return const_cast<Volume*>(this)->get_icon();
}

Glib::RefPtr<Icon> Volume::get_symbolic_icon()
{
  Glib::RefPtr<Icon> retvalue = Glib::wrap(g_volume_get_symbolic_icon(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Icon> Volume::get_symbolic_icon() const
{
  return const_cast<Volume*>(this)->get_symbolic_icon();
}

Glib::RefPtr<Drive> Volume::get_drive()
{
  Glib::RefPtr<Drive> retvalue = Glib::wrap(g_volume_get_drive(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Drive> Volume::get_drive() const
{
  return const_cast<Volume*>(this)->get_drive();
}

Glib::RefPtr<Mount> Volume::get_mount()
{
  Glib::RefPtr<Mount> retvalue = Glib::wrap(g_volume_get_mount(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Mount> Volume::get_mount() const
{
  return const_cast<Volume*>(this)->get_mount();
}

bool Volume::can_mount() const
{
  return g_volume_can_mount(const_cast<GVolume*>(gobj()));
}

bool Volume::can_eject() const
{
  return g_volume_can_eject(const_cast<GVolume*>(gobj()));
}

bool Volume::should_automount() const
{
  return g_volume_should_automount(const_cast<GVolume*>(gobj()));
}

bool Volume::mount_finish(const Glib::RefPtr<AsyncResult>& result)
{
  GError* gerror = 0;
  bool retvalue = g_volume_mount_finish(gobj(), Glib::unwrap(result), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool Volume::eject_finish(const Glib::RefPtr<AsyncResult>& result)
{
  GError* gerror = 0;
  bool retvalue = g_volume_eject_with_operation_finish(gobj(), Glib::unwrap(result), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

std::string Volume::get_identifier(const std::string& kind) const
{
  return Glib::convert_return_gchar_ptr_to_stdstring(g_volume_get_identifier(const_cast<GVolume*>(gobj()), kind.c_str()));
}

Glib::StringArrayHandle Volume::enumerate_identifiers() const
{
  return Glib::StringArrayHandle(g_volume_enumerate_identifiers(const_cast<GVolume*>(gobj())), Glib::OWNERSHIP_DEEP);
}

Glib::RefPtr<File> Volume::get_activation_root()
{
  return Glib::wrap(g_volume_get_activation_root(gobj()));
}

Glib::RefPtr<const File> Volume::get_activation_root() const
{
  return Glib::wrap(g_volume_get_activation_root(const_cast<GVolume*>(gobj())));
}

Glib::ustring Volume::sort_key()
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_volume_get_sort_key(gobj()));
}


Glib::SignalProxy0< void > Volume::signal_changed()
{
  return Glib::SignalProxy0< void >(this, &Volume_signal_changed_info);
}


Glib::SignalProxy0< void > Volume::signal_removed()
{
  return Glib::SignalProxy0< void >(this, &Volume_signal_removed_info);
}


void Gio::Volume::on_changed()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->changed)
    (*base->changed)(gobj());
}
void Gio::Volume::on_removed()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->removed)
    (*base->removed)(gobj());
}


} // namespace Gio


