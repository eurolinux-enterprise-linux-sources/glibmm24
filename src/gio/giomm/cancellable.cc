// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/cancellable.h>
#include <giomm/private/cancellable_p.h>


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

#include <gio/gio.h>
#include <glibmm/exceptionhandler.h>

namespace Gio
{

extern "C" {

void
delete_slot(gpointer data)
{
  Cancellable::SlotCancelledCallback* callback =
    reinterpret_cast<Cancellable::SlotCancelledCallback*>(data);
  delete callback;
}

void
slot_cancelled_proxy(GCancellable* /*cancellable*/, gpointer data)
{
  Cancellable::SlotCancelledCallback* callback =
    reinterpret_cast<Cancellable::SlotCancelledCallback*>(data);
  (*callback)();
}

} // extern "C"

gulong
Cancellable::connect(const SlotCancelledCallback& slot)
{
  auto slot_copy = new SlotCancelledCallback(slot);
  return g_cancellable_connect(gobj(), G_CALLBACK(slot_cancelled_proxy), slot_copy, &delete_slot);
}

} // namespace Gio

namespace
{


static const Glib::SignalProxyInfo Cancellable_signal_cancelled_info =
{
  "cancelled",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::Cancellable> wrap(GCancellable* object, bool take_copy)
{
  return Glib::RefPtr<Gio::Cancellable>( dynamic_cast<Gio::Cancellable*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& Cancellable_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Cancellable_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_cancellable_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Cancellable_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->cancelled = &cancelled_callback;
}


void Cancellable_Class::cancelled_callback(GCancellable* self)
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
        obj->on_cancelled();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->cancelled)
    (*base->cancelled)(self);
}


Glib::ObjectBase* Cancellable_Class::wrap_new(GObject* object)
{
  return new Cancellable((GCancellable*)object);
}


/* The implementation: */

GCancellable* Cancellable::gobj_copy()
{
  reference();
  return gobj();
}

Cancellable::Cancellable(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Cancellable::Cancellable(GCancellable* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Cancellable::Cancellable(Cancellable&& src) noexcept
: Glib::Object(std::move(src))
{}

Cancellable& Cancellable::operator=(Cancellable&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


Cancellable::~Cancellable() noexcept
{}


Cancellable::CppClassType Cancellable::cancellable_class_; // initialize static member

GType Cancellable::get_type()
{
  return cancellable_class_.init().get_type();
}


GType Cancellable::get_base_type()
{
  return g_cancellable_get_type();
}


Cancellable::Cancellable()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(cancellable_class_.init()))
{
  

}

Glib::RefPtr<Cancellable> Cancellable::create()
{
  return Glib::RefPtr<Cancellable>( new Cancellable() );
}

bool Cancellable::is_cancelled() const
{
  return g_cancellable_is_cancelled(const_cast<GCancellable*>(gobj()));
}

int Cancellable::get_fd() const
{
  return g_cancellable_get_fd(const_cast<GCancellable*>(gobj()));
}

bool Cancellable::make_pollfd(GPollFD* pollfd)
{
  return g_cancellable_make_pollfd(gobj(), pollfd);
}

void Cancellable::release_fd()
{
  g_cancellable_release_fd(gobj());
}

void Cancellable::cancel()
{
  g_cancellable_cancel(gobj());
}

Glib::RefPtr<Cancellable> Cancellable::get_current()
{

  Glib::RefPtr<Cancellable> retvalue = Glib::wrap(g_cancellable_get_current());
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us
  return retvalue;
}

void Cancellable::push_current()
{
  g_cancellable_push_current(gobj());
}

void Cancellable::pop_current()
{
  g_cancellable_pop_current(gobj());
}

void Cancellable::reset()
{
  g_cancellable_reset(gobj());
}

void Cancellable::disconnect(gulong handler_id)
{
  g_cancellable_disconnect(gobj(), handler_id);
}


Glib::SignalProxy< void > Cancellable::signal_cancelled()
{
  return Glib::SignalProxy< void >(this, &Cancellable_signal_cancelled_info);
}


void Gio::Cancellable::on_cancelled()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->cancelled)
    (*base->cancelled)(gobj());
}


} // namespace Gio


