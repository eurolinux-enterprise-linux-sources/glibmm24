// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/simpleaction.h>
#include <giomm/private/simpleaction_p.h>


/* Copyright (C) 2011 The giomm Development Team
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
#include <glibmm/variant.h>

namespace Gio
{

SimpleAction::SimpleAction(const Glib::ustring& name) : // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(simpleaction_class_.init(), "name",name.c_str(), nullptr))
{
}

SimpleAction::SimpleAction(const Glib::ustring& name, const Glib::VariantBase& state)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(simpleaction_class_.init(), "name",name.c_str(),"state",const_cast<GVariant*>((state).gobj()), nullptr))
{
}

Glib::RefPtr<SimpleAction>
SimpleAction::create_bool(const Glib::ustring& name, bool state)
{
  // We must provide some initial state, as a way to specify the type of the state.
  return create(name, Glib::Variant<bool>::create(state));
}

Glib::RefPtr<SimpleAction>
SimpleAction::create_radio_string(const Glib::ustring& name, const Glib::ustring& initial_state)
{
  // See
  // https://developer.gnome.org/glib/stable/gvariant-format-strings.html#gvariant-format-strings-strings
  return create(
    name, Glib::VARIANT_TYPE_STRING, Glib::Variant<Glib::ustring>::create(initial_state));
}

Glib::RefPtr<SimpleAction>
SimpleAction::create_radio_integer(const Glib::ustring& name, gint32 initial_state)
{
  // See
  // https://developer.gnome.org/glib/stable/gvariant-format-strings.html#gvariant-format-strings-numeric-types
  return create(name, Glib::VARIANT_TYPE_INT32, Glib::Variant<gint32>::create(initial_state));
}

} // namespace Gio

namespace
{


static void SimpleAction_signal_activate_callback(GSimpleAction* self, GVariant* p0,void* data)
{
  using namespace Gio;
  using SlotType = sigc::slot< void,const Glib::VariantBase& >;

  auto obj = dynamic_cast<SimpleAction*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo SimpleAction_signal_activate_info =
{
  "activate",
  (GCallback) &SimpleAction_signal_activate_callback,
  (GCallback) &SimpleAction_signal_activate_callback
};


static void SimpleAction_signal_change_state_callback(GSimpleAction* self, GVariant* p0,void* data)
{
  using namespace Gio;
  using SlotType = sigc::slot< void,const Glib::VariantBase& >;

  auto obj = dynamic_cast<SimpleAction*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo SimpleAction_signal_change_state_info =
{
  "change-state",
  (GCallback) &SimpleAction_signal_change_state_callback,
  (GCallback) &SimpleAction_signal_change_state_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::SimpleAction> wrap(GSimpleAction* object, bool take_copy)
{
  return Glib::RefPtr<Gio::SimpleAction>( dynamic_cast<Gio::SimpleAction*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& SimpleAction_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &SimpleAction_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_simple_action_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Action::add_interface(get_type());

  }

  return *this;
}


void SimpleAction_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* SimpleAction_Class::wrap_new(GObject* object)
{
  return new SimpleAction((GSimpleAction*)object);
}


/* The implementation: */

GSimpleAction* SimpleAction::gobj_copy()
{
  reference();
  return gobj();
}

SimpleAction::SimpleAction(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

SimpleAction::SimpleAction(GSimpleAction* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


SimpleAction::SimpleAction(SimpleAction&& src) noexcept
: Glib::Object(std::move(src))
  , Action(std::move(src))
{}

SimpleAction& SimpleAction::operator=(SimpleAction&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  Action::operator=(std::move(src));
  return *this;
}


SimpleAction::~SimpleAction() noexcept
{}


SimpleAction::CppClassType SimpleAction::simpleaction_class_; // initialize static member

GType SimpleAction::get_type()
{
  return simpleaction_class_.init().get_type();
}


GType SimpleAction::get_base_type()
{
  return g_simple_action_get_type();
}


SimpleAction::SimpleAction(const Glib::ustring& name, const Glib::VariantType& parameter_type)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(simpleaction_class_.init(), "name", name.c_str(), "parameter_type", parameter_type.gobj(), nullptr))
{
  

}

SimpleAction::SimpleAction(const Glib::ustring& name, const Glib::VariantType& parameter_type, const Glib::VariantBase& state)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(simpleaction_class_.init(), "name", name.c_str(), "parameter_type", parameter_type.gobj(), "state", const_cast<GVariant*>((state).gobj()), nullptr))
{
  

}

Glib::RefPtr<SimpleAction> SimpleAction::create(const Glib::ustring& name)
{
  return Glib::RefPtr<SimpleAction>( new SimpleAction(name) );
}

Glib::RefPtr<SimpleAction> SimpleAction::create(const Glib::ustring& name, const Glib::VariantType& parameter_type)
{
  return Glib::RefPtr<SimpleAction>( new SimpleAction(name, parameter_type) );
}

Glib::RefPtr<SimpleAction> SimpleAction::create(const Glib::ustring& name, const Glib::VariantType& parameter_type, const Glib::VariantBase& state)
{
  return Glib::RefPtr<SimpleAction>( new SimpleAction(name, parameter_type, state) );
}

Glib::RefPtr<SimpleAction> SimpleAction::create(const Glib::ustring& name, const Glib::VariantBase& state)
{
  return Glib::RefPtr<SimpleAction>( new SimpleAction(name, state) );
}

void SimpleAction::set_enabled(bool enabled)
{
  g_simple_action_set_enabled(gobj(), static_cast<int>(enabled));
}

void SimpleAction::set_state_hint(const Glib::VariantBase& state_hint)
{
  g_simple_action_set_state_hint(gobj(), const_cast<GVariant*>((state_hint).gobj()));
}

void SimpleAction::set_state(const Glib::VariantBase& value)
{
  g_simple_action_set_state(gobj(), const_cast<GVariant*>((value).gobj()));
}


Glib::SignalProxy< void,const Glib::VariantBase& > SimpleAction::signal_activate()
{
  return Glib::SignalProxy< void,const Glib::VariantBase& >(this, &SimpleAction_signal_activate_info);
}


Glib::SignalProxy< void,const Glib::VariantBase& > SimpleAction::signal_change_state()
{
  return Glib::SignalProxy< void,const Glib::VariantBase& >(this, &SimpleAction_signal_change_state_info);
}


Glib::PropertyProxy< bool > SimpleAction::property_enabled() 
{
  return Glib::PropertyProxy< bool >(this, "enabled");
}

Glib::PropertyProxy_ReadOnly< bool > SimpleAction::property_enabled() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "enabled");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > SimpleAction::property_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "name");
}

Glib::PropertyProxy_ReadOnly< Glib::VariantType > SimpleAction::property_parameter_type() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::VariantType >(this, "parameter-type");
}

Glib::PropertyProxy< Glib::VariantBase > SimpleAction::property_state() 
{
  return Glib::PropertyProxy< Glib::VariantBase >(this, "state");
}

Glib::PropertyProxy_ReadOnly< Glib::VariantBase > SimpleAction::property_state() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::VariantBase >(this, "state");
}

Glib::PropertyProxy_ReadOnly< Glib::VariantType > SimpleAction::property_state_type() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::VariantType >(this, "state-type");
}


} // namespace Gio


