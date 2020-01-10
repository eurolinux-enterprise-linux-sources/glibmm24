// Generated by gmmproc 2.54.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/asyncresult.h>
#include <giomm/private/asyncresult_p.h>


/* Copyright (C) 2007 The giomm Development Team
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

//#include <gio/gasyncresult.h> //We are not allowed to include individual headers.
#include <gio/gio.h>
#include <glibmm/exceptionhandler.h>

namespace Gio
{

static GObject*
unwrap_objectbase_custom(const Glib::RefPtr<Glib::ObjectBase>& cpp_instance)
{
  return (cpp_instance ? cpp_instance->gobj() : nullptr);
}

Glib::RefPtr<Glib::ObjectBase>
AsyncResult::get_source_object_base()
{
  auto cobj = g_async_result_get_source_object(gobj());
  auto cppobj = Glib::wrap_auto(cobj); // ObjectBase::_get_current_wrapper(cobj);
  return Glib::RefPtr<Glib::ObjectBase>(
    cppobj); // g_async_result_get_source_object() gives us a ref, unusually.
  // TODO: For some reason this fails: Glib::wrap(cobj);
}

Glib::RefPtr<const Glib::ObjectBase>
AsyncResult::get_source_object_base() const
{
  return const_cast<AsyncResult*>(this)->get_source_object_base();
}

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::AsyncResult> wrap(GAsyncResult* object, bool take_copy)
{
  return Glib::RefPtr<Gio::AsyncResult>( dynamic_cast<Gio::AsyncResult*> (Glib::wrap_auto_interface<Gio::AsyncResult> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gio
{


/* The *_Class implementation: */

const Glib::Interface_Class& AsyncResult_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &AsyncResult_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = g_async_result_get_type();
  }

  return *this;
}

void AsyncResult_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr);

  klass->get_source_object = &get_source_object_vfunc_callback;

}

GObject* AsyncResult_Class::get_source_object_vfunc_callback(GAsyncResult* self)
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
        return unwrap_objectbase_custom(obj->get_source_object_vfunc());
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
  if(base && base->get_source_object)
    return (*base->get_source_object)(self);

  using RType = GObject*;
  return RType();
}


Glib::ObjectBase* AsyncResult_Class::wrap_new(GObject* object)
{
  return new AsyncResult((GAsyncResult*)(object));
}


/* The implementation: */

AsyncResult::AsyncResult()
:
  Glib::Interface(asyncresult_class_.init())
{}

AsyncResult::AsyncResult(GAsyncResult* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

AsyncResult::AsyncResult(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

AsyncResult::AsyncResult(AsyncResult&& src) noexcept
: Glib::Interface(std::move(src))
{}

AsyncResult& AsyncResult::operator=(AsyncResult&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

AsyncResult::~AsyncResult() noexcept
{}

// static
void AsyncResult::add_interface(GType gtype_implementer)
{
  asyncresult_class_.init().add_interface(gtype_implementer);
}

AsyncResult::CppClassType AsyncResult::asyncresult_class_; // initialize static member

GType AsyncResult::get_type()
{
  return asyncresult_class_.init().get_type();
}


GType AsyncResult::get_base_type()
{
  return g_async_result_get_type();
}


#ifndef GIOMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::RefPtr<Glib::Object> AsyncResult::get_source_object()
{
  return Glib::wrap(g_async_result_get_source_object(gobj()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GIOMM_DISABLE_DEPRECATED

#ifndef GIOMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::RefPtr<const Glib::Object> AsyncResult::get_source_object() const
{
  return const_cast<AsyncResult*>(this)->get_source_object();
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GIOMM_DISABLE_DEPRECATED

bool AsyncResult::is_tagged(gpointer source_tag) const
{
  return g_async_result_is_tagged(const_cast<GAsyncResult*>(gobj()), source_tag);
}


Glib::RefPtr<Glib::ObjectBase> Gio::AsyncResult::get_source_object_vfunc() 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_source_object)
  {
    Glib::RefPtr<Glib::ObjectBase> retval(Glib::wrap((*base->get_source_object)(gobj())));
    return retval;
  }

  using RType = Glib::RefPtr<Glib::ObjectBase>;
  return RType();
}


} // namespace Gio


