// Generated by gmmproc 2.54.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/notification.h>
#include <giomm/private/notification_p.h>


/* Copyright (C) 2014 The giomm Development Team
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
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#include <gio/gio.h>
#include <giomm/icon.h>
#include <glibmm/variant.h>

namespace Gio
{

Notification::Notification(const Glib::ustring& title) : // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(notification_class_.init()))
{
  // The title is compulsory. Don't skip it, if it's empty.
  set_title(title);
}

} // namespace Gio

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gio::NotificationPriority>::value_type()
{
  return g_notification_priority_get_type();
}


namespace Glib
{

Glib::RefPtr<Gio::Notification> wrap(GNotification* object, bool take_copy)
{
  return Glib::RefPtr<Gio::Notification>( dynamic_cast<Gio::Notification*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& Notification_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Notification_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_notification_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Notification_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Notification_Class::wrap_new(GObject* object)
{
  return new Notification((GNotification*)object);
}


/* The implementation: */

GNotification* Notification::gobj_copy()
{
  reference();
  return gobj();
}

Notification::Notification(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Notification::Notification(GNotification* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Notification::Notification(Notification&& src) noexcept
: Glib::Object(std::move(src))
{}

Notification& Notification::operator=(Notification&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


Notification::~Notification() noexcept
{}


Notification::CppClassType Notification::notification_class_; // initialize static member

GType Notification::get_type()
{
  return notification_class_.init().get_type();
}


GType Notification::get_base_type()
{
  return g_notification_get_type();
}


Glib::RefPtr<Notification> Notification::create(const Glib::ustring& title)
{
  return Glib::RefPtr<Notification>( new Notification(title) );
}

void Notification::set_title(const Glib::ustring& title)
{
  g_notification_set_title(gobj(), title.c_str());
}

void Notification::set_body(const Glib::ustring& body)
{
  g_notification_set_body(gobj(), body.c_str());
}

void Notification::set_icon(const Glib::RefPtr<Icon>& icon)
{
  g_notification_set_icon(gobj(), const_cast<GIcon*>(Glib::unwrap(icon)));
}

#ifndef GIOMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Notification::set_urgent(bool urgent)
{
  g_notification_set_urgent(gobj(), static_cast<int>(urgent));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GIOMM_DISABLE_DEPRECATED

void Notification::set_priority(NotificationPriority priority)
{
  g_notification_set_priority(gobj(), ((GNotificationPriority)(priority)));
}

void Notification::add_button(const Glib::ustring& label, const Glib::ustring& detailed_action)
{
  g_notification_add_button(gobj(), label.c_str(), detailed_action.c_str());
}

void Notification::add_button_variant(const Glib::ustring& label, const Glib::ustring& action, const Glib::VariantBase& target)
{
  g_notification_add_button_with_target_value(gobj(), label.c_str(), action.c_str(), const_cast<GVariant*>((target).gobj()));
}

void Notification::set_default_action(const Glib::ustring& detailed_action)
{
  g_notification_set_default_action(gobj(), detailed_action.c_str());
}

void Notification::set_default_action_variant(const Glib::ustring& action, const Glib::VariantBase& target)
{
  g_notification_set_default_action_and_target_value(gobj(), action.c_str(), const_cast<GVariant*>((target).gobj()));
}


} // namespace Gio


