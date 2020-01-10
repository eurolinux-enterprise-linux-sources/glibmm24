// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/menumodel.h>
#include <giomm/private/menumodel_p.h>


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
#include <giomm/menuattributeiter.h>
#include <giomm/menulinkiter.h>

namespace Gio
{

// Make sure the order here is the same order as in Gio::MenuAttribute.
static const char* const _attribute_strings[] = { G_MENU_ATTRIBUTE_ACTION, G_MENU_ATTRIBUTE_LABEL,
  G_MENU_ATTRIBUTE_TARGET };

const char*
giomm_get_menu_attribute(MenuAttribute attribute)
{
  return _attribute_strings[attribute];
}

// Make sure the order here is the same order as in Gio::MenuLink.
static const char* const _link_strings[] = { G_MENU_LINK_SECTION, G_MENU_LINK_SUBMENU };

const char*
giomm_get_menu_link(MenuLink link)
{
  return _link_strings[link];
}

} // namespace Gio

namespace
{


static void MenuModel_signal_items_changed_callback(GMenuModel* self, gint p0,gint p1,gint p2,void* data)
{
  using namespace Gio;
  using SlotType = sigc::slot< void,int,int,int >;

  auto obj = dynamic_cast<MenuModel*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
, p1
, p2
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo MenuModel_signal_items_changed_info =
{
  "items-changed",
  (GCallback) &MenuModel_signal_items_changed_callback,
  (GCallback) &MenuModel_signal_items_changed_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::MenuModel> wrap(GMenuModel* object, bool take_copy)
{
  return Glib::RefPtr<Gio::MenuModel>( dynamic_cast<Gio::MenuModel*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
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
    register_derived_type(g_menu_model_get_type());

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
  return new MenuModel((GMenuModel*)object);
}


/* The implementation: */

GMenuModel* MenuModel::gobj_copy()
{
  reference();
  return gobj();
}

MenuModel::MenuModel(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

MenuModel::MenuModel(GMenuModel* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


MenuModel::MenuModel(MenuModel&& src) noexcept
: Glib::Object(std::move(src))
{}

MenuModel& MenuModel::operator=(MenuModel&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
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
  return g_menu_model_get_type();
}


MenuModel::MenuModel()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(menumodel_class_.init()))
{
  

}

Glib::VariantBase MenuModel::get_item_attribute(int item_index, MenuAttribute attribute, const Glib::VariantType& expected_type)
{
  return Glib::wrap(g_menu_model_get_item_attribute_value(gobj(), item_index, giomm_get_menu_attribute(attribute), (expected_type).gobj()), false);
}

const Glib::VariantBase MenuModel::get_item_attribute(int item_index, MenuAttribute attribute, const Glib::VariantType& expected_type) const
{
  return const_cast<MenuModel*>(this)->get_item_attribute(item_index, attribute, expected_type);
}

Glib::RefPtr<MenuModel> MenuModel::get_item_link(int item_index, MenuLink link)
{
  return Glib::wrap(g_menu_model_get_item_link(gobj(), item_index, giomm_get_menu_link(link)));
}

Glib::RefPtr<const MenuModel> MenuModel::get_item_link(int item_index, MenuLink link) const
{
  return const_cast<MenuModel*>(this)->get_item_link(item_index, link);
}

bool MenuModel::is_mutable() const
{
  return g_menu_model_is_mutable(const_cast<GMenuModel*>(gobj()));
}

int MenuModel::get_n_items() const
{
  return g_menu_model_get_n_items(const_cast<GMenuModel*>(gobj()));
}

Glib::RefPtr<MenuAttributeIter> MenuModel::iterate_item_attributes(int item_index)
{
  return Glib::wrap(g_menu_model_iterate_item_attributes(gobj(), item_index));
}

Glib::RefPtr<const MenuAttributeIter> MenuModel::iterate_item_attributes(int item_index) const
{
  return const_cast<MenuModel*>(this)->iterate_item_attributes(item_index);
}

Glib::RefPtr<MenuLinkIter> MenuModel::iterate_item_links(int item_index)
{
  return Glib::wrap(g_menu_model_iterate_item_links(gobj(), item_index));
}

Glib::RefPtr<const MenuLinkIter> MenuModel::iterate_item_links(int item_index) const
{
  return const_cast<MenuModel*>(this)->iterate_item_links(item_index);
}

void MenuModel::items_changed(int position, int removed, int added)
{
  g_menu_model_items_changed(gobj(), position, removed, added);
}


Glib::SignalProxy< void,int,int,int > MenuModel::signal_items_changed()
{
  return Glib::SignalProxy< void,int,int,int >(this, &MenuModel_signal_items_changed_info);
}


} // namespace Gio


