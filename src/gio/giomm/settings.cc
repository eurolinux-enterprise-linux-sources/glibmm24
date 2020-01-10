// Generated by gmmproc 2.42.0 -- DO NOT MODIFY!

#undef G_DISABLE_DEPRECATED
#define GLIB_DISABLE_DEPRECATION_WARNINGS 1
 

#include <glibmm.h>

#include <giomm/settings.h>
#include <giomm/private/settings_p.h>


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
#include <glibmm/exceptionhandler.h>
#include <glibmm/vectorutils.h>

namespace Gio
{

void Settings::get_value(const Glib::ustring& key, Glib::VariantBase& value) const
{
  GVariant* const g_value = g_settings_get_value(const_cast<GSettings*>(gobj()), key.c_str());
  if(!g_value)
    return;

  value.init(g_value, false /* don't take a reference */);
}

bool Settings::get_user_value(const Glib::ustring& key, Glib::VariantBase& value) const
{
  GVariant* const g_value = g_settings_get_user_value(const_cast<GSettings*>(gobj()), key.c_str());
  if(!g_value)
    return false;

  value.init(g_value, false /* don't take a reference */);
  return true;
}

void Settings::get_default_value(const Glib::ustring& key, Glib::VariantBase& value) const
{
  GVariant* const g_value = g_settings_get_default_value(const_cast<GSettings*>(gobj()), key.c_str());
  if(!g_value)
    return;

  value.init(g_value, false /* don't take a reference */);
}
void Settings::bind(const Glib::ustring& key,
                    const Glib::PropertyProxy_Base& property_proxy,
                    SettingsBindFlags flags)
{
    bind(key, property_proxy.get_object(), property_proxy.get_name(), flags);
}

void Settings::bind_writable(const Glib::ustring& key,
                             const Glib::PropertyProxy_Base& property_proxy,
                             bool inverted)
{
    bind_writable(key, property_proxy.get_object(), property_proxy.get_name(), inverted);
}

#ifndef GIOMM_DISABLE_DEPRECATED

std::vector<Glib::ustring> Settings::list_schemas()
{
  return Glib::ArrayHandler<Glib::ustring>::array_to_vector(g_settings_list_schemas(), Glib::OWNERSHIP_NONE);
}
#endif // GIOMM_DISABLE_DEPRECATED


}

namespace
{


static void Settings_signal_changed_callback(GSettings* self, const gchar* p0,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::ustring& > SlotType;

  Settings* obj = dynamic_cast<Settings*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
);
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }
}

static const Glib::SignalProxyInfo Settings_signal_changed_info =
{
  "changed",
  (GCallback) &Settings_signal_changed_callback,
  (GCallback) &Settings_signal_changed_callback
};


static gboolean Settings_signal_writable_change_event_callback(GSettings* self, guint p0,void* data)
{
  using namespace Gio;
  typedef sigc::slot< bool,guint > SlotType;

  Settings* obj = dynamic_cast<Settings*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(p0));
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }

  typedef gboolean RType;
  return RType();
}

static gboolean Settings_signal_writable_change_event_notify_callback(GSettings* self, guint p0, void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,guint > SlotType;

  Settings* obj = dynamic_cast<Settings*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0);
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }

  typedef gboolean RType;
  return RType();
}

static const Glib::SignalProxyInfo Settings_signal_writable_change_event_info =
{
  "writable-change-event",
  (GCallback) &Settings_signal_writable_change_event_callback,
  (GCallback) &Settings_signal_writable_change_event_notify_callback
};


static void Settings_signal_writable_changed_callback(GSettings* self, const gchar* p0,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::ustring& > SlotType;

  Settings* obj = dynamic_cast<Settings*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
);
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }
}

static const Glib::SignalProxyInfo Settings_signal_writable_changed_info =
{
  "writable_changed",
  (GCallback) &Settings_signal_writable_changed_callback,
  (GCallback) &Settings_signal_writable_changed_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gio::SettingsBindFlags>::value_type()
{
  return g_settings_bind_flags_get_type();
}


namespace Glib
{

Glib::RefPtr<Gio::Settings> wrap(GSettings* object, bool take_copy)
{
  return Glib::RefPtr<Gio::Settings>( dynamic_cast<Gio::Settings*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& Settings_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Settings_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_settings_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Settings_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->changed = &changed_callback;
  klass->writable_change_event = &writable_change_event_callback;
  klass->writable_changed = &writable_changed_callback;
}


void Settings_Class::changed_callback(GSettings* self, const gchar* p0)
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
        obj->on_changed(Glib::convert_const_gchar_ptr_to_ustring(p0)
);
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
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->changed)
    (*base->changed)(self, p0);
}
gboolean Settings_Class::writable_change_event_callback(GSettings* self, guint p0)
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
        return static_cast<int>(obj->on_writable_change_event(p0));
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
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->writable_change_event)
    return (*base->writable_change_event)(self, p0);

  typedef gboolean RType;
  return RType();
}
void Settings_Class::writable_changed_callback(GSettings* self, const gchar* p0)
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
        obj->on_writable_changed(Glib::convert_const_gchar_ptr_to_ustring(p0)
);
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
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->writable_changed)
    (*base->writable_changed)(self, p0);
}


Glib::ObjectBase* Settings_Class::wrap_new(GObject* object)
{
  return new Settings((GSettings*)object);
}


/* The implementation: */

GSettings* Settings::gobj_copy()
{
  reference();
  return gobj();
}

Settings::Settings(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Settings::Settings(GSettings* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Settings::~Settings()
{}


Settings::CppClassType Settings::settings_class_; // initialize static member

GType Settings::get_type()
{
  return settings_class_.init().get_type();
}


GType Settings::get_base_type()
{
  return g_settings_get_type();
}


Settings::Settings(const Glib::ustring& schema)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(settings_class_.init(), "schema", schema.c_str(), static_cast<char*>(0)))
{
  

}

Settings::Settings(const Glib::ustring& schema, const Glib::ustring& path)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(settings_class_.init(), "schema", schema.c_str(), "path", path.c_str(), static_cast<char*>(0)))
{
  

}

Glib::RefPtr<Settings> Settings::create(const Glib::ustring& schema)
{
  return Glib::RefPtr<Settings>( new Settings(schema) );
}

Glib::RefPtr<Settings> Settings::create(const Glib::ustring& schema, const Glib::ustring& path)
{
  return Glib::RefPtr<Settings>( new Settings(schema, path) );
}

bool Settings::set_value(const Glib::ustring& key, const Glib::VariantBase& value)
{
  return g_settings_set_value(gobj(), key.c_str(), const_cast<GVariant*>((value).gobj()));
}

int Settings::get_int(const Glib::ustring& key) const
{
  return g_settings_get_int(const_cast<GSettings*>(gobj()), key.c_str());
}

void Settings::set_int(const Glib::ustring& key, int value)
{
  g_settings_set_int(gobj(), key.c_str(), value);
}

guint Settings::get_uint(const Glib::ustring& key) const
{
  return g_settings_get_uint(const_cast<GSettings*>(gobj()), key.c_str());
}

void Settings::set_uiint(const Glib::ustring& key, guint value)
{
  g_settings_set_uint(gobj(), key.c_str(), value);
}

bool Settings::get_boolean(const Glib::ustring& key) const
{
  return g_settings_get_boolean(const_cast<GSettings*>(gobj()), key.c_str());
}

void Settings::set_boolean(const Glib::ustring& key, bool value)
{
  g_settings_set_boolean(gobj(), key.c_str(), static_cast<int>(value));
}

Glib::ustring Settings::get_string(const Glib::ustring& key) const
{
  return Glib::convert_return_gchar_ptr_to_ustring(g_settings_get_string(const_cast<GSettings*>(gobj()), key.c_str()));
}

void Settings::set_string(const Glib::ustring& key, const Glib::ustring& value)
{
  g_settings_set_string(gobj(), key.c_str(), value.c_str());
}

double Settings::get_double(const Glib::ustring& key) const
{
  return g_settings_get_double(const_cast<GSettings*>(gobj()), key.c_str());
}

void Settings::set_double(const Glib::ustring& key, double value)
{
  g_settings_set_double(gobj(), key.c_str(), value);
}

Glib::StringArrayHandle Settings::get_string_array(const Glib::ustring& key) const
{
  return Glib::StringArrayHandle(g_settings_get_strv(const_cast<GSettings*>(gobj()), key.c_str()), Glib::OWNERSHIP_DEEP);
}

bool Settings::set_string_array(const Glib::ustring& key, const Glib::StringArrayHandle& value)
{
  return g_settings_set_strv(gobj(), key.c_str(), (value).data());
}

int Settings::get_enum(const Glib::ustring& key) const
{
  return g_settings_get_enum(const_cast<GSettings*>(gobj()), key.c_str());
}

bool Settings::get_enum(const Glib::ustring& key, int value)
{
  return g_settings_set_enum(gobj(), key.c_str(), value);
}

guint Settings::get_flags(const Glib::ustring& key) const
{
  return g_settings_get_flags(const_cast<GSettings*>(gobj()), key.c_str());
}

bool Settings::get_flags(const Glib::ustring& key, guint value)
{
  return g_settings_set_flags(gobj(), key.c_str(), value);
}

Glib::RefPtr<Settings> Settings::get_child(const Glib::ustring& name)
{
  return Glib::wrap(g_settings_get_child(gobj(), name.c_str()));
}

Glib::RefPtr<const Settings> Settings::get_child(const Glib::ustring& name) const
{
  return const_cast<Settings*>(this)->get_child(name);
}

bool Settings::is_writable(const Glib::ustring& name) const
{
  return g_settings_is_writable(const_cast<GSettings*>(gobj()), name.c_str());
}

void Settings::delay()
{
  g_settings_delay(gobj());
}

void Settings::apply()
{
  g_settings_apply(gobj());
}

void Settings::revert()
{
  g_settings_revert(gobj());
}

bool Settings::get_has_unapplied() const
{
  return g_settings_get_has_unapplied(const_cast<GSettings*>(gobj()));
}

void Settings::reset(const Glib::ustring& key)
{
  g_settings_reset(gobj(), key.c_str());
}

std::vector<Glib::ustring> Settings::list_children() const
{
  return Glib::ArrayHandler<Glib::ustring>::array_to_vector(g_settings_list_children(const_cast<GSettings*>(gobj())), Glib::OWNERSHIP_DEEP);
}

std::vector<Glib::ustring> Settings::list_keys() const
{
  return Glib::ArrayHandler<Glib::ustring>::array_to_vector(g_settings_list_keys(const_cast<GSettings*>(gobj())), Glib::OWNERSHIP_DEEP);
}

#ifndef GIOMM_DISABLE_DEPRECATED

bool Settings::range_check(const Glib::ustring& key, const Glib::VariantBase& value) const
{
  return g_settings_range_check(const_cast<GSettings*>(gobj()), key.c_str(), const_cast<GVariant*>((value).gobj()));
}

#endif // GIOMM_DISABLE_DEPRECATED

void Settings::bind(const Glib::ustring& key, Glib::ObjectBase* object, const Glib::ustring& property, SettingsBindFlags flags)
{
  g_settings_bind(gobj(), key.c_str(), (gpointer)object->gobj(), property.c_str(), ((GSettingsBindFlags)(flags)));
}

void Settings::bind_writable(const Glib::ustring& key, Glib::ObjectBase* object, const Glib::ustring& property, bool inverted)
{
  g_settings_bind_writable(gobj(), key.c_str(), (gpointer)object->gobj(), property.c_str(), static_cast<int>(inverted));
}

Glib::RefPtr<Action> Settings::create_action(const Glib::ustring& key)
{
  return Glib::wrap(g_settings_create_action(gobj(), key.c_str()));
}


Glib::SignalProxy1< void,const Glib::ustring& > Settings::signal_changed()
{
  return Glib::SignalProxy1< void,const Glib::ustring& >(this, &Settings_signal_changed_info);
}


Glib::SignalProxy1< bool,guint > Settings::signal_writable_change_event()
{
  return Glib::SignalProxy1< bool,guint >(this, &Settings_signal_writable_change_event_info);
}


Glib::SignalProxy1< void,const Glib::ustring& > Settings::signal_writable_changed()
{
  return Glib::SignalProxy1< void,const Glib::ustring& >(this, &Settings_signal_writable_changed_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_delay_apply() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "delay-apply");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_has_unapplied() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "has-unapplied");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< std::string > Settings::property_path() const
{
  return Glib::PropertyProxy_ReadOnly< std::string >(this, "path");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifndef GIOMM_DISABLE_DEPRECATED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_schema() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "schema");
}
#endif //GLIBMM_PROPERTIES_ENABLED
#endif // GIOMM_DISABLE_DEPRECATED


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_schema_id() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "schema-id");
}
#endif //GLIBMM_PROPERTIES_ENABLED


void Gio::Settings::on_changed(const Glib::ustring& key)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->changed)
    (*base->changed)(gobj(),key.c_str());
}
bool Gio::Settings::on_writable_change_event(guint key)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->writable_change_event)
    return (*base->writable_change_event)(gobj(),key);

  typedef bool RType;
  return RType();
}
void Gio::Settings::on_writable_changed(const Glib::ustring& key)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->writable_changed)
    (*base->writable_changed)(gobj(),key.c_str());
}


} // namespace Gio


