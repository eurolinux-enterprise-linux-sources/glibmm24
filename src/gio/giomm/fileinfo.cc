// Generated by gmmproc 2.54.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/fileinfo.h>
#include <giomm/private/fileinfo_p.h>


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
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <gio/gio.h>

namespace Gio
{

// FileAttributeMatcher

Glib::RefPtr<FileAttributeMatcher>
FileAttributeMatcher::create(const std::string& attributes)
{
  return Glib::wrap(g_file_attribute_matcher_new(attributes.c_str()));
}

Glib::TimeVal
FileInfo::modification_time() const
{
  Glib::TimeVal result;
  g_file_info_get_modification_time(const_cast<GFileInfo*>(gobj()), (GTimeVal*)(&result));
  return result;
}

} // namespace Gio

namespace
{
} // anonymous namespace


/* Why reinterpret_cast<FileAttributeMatcher*>(gobject) is needed:
 *
 * A FileAttributeMatcher instance is in fact always a GFileAttributeMatcher instance.
 * Unfortunately, GFileAttributeMatcher cannot be a member of FileAttributeMatcher,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because FileAttributeMatcher does not have any member data, and
 * it is impossible to derive from it.  This is ensured by using final on the
 * class and by using = delete on the default constructor.
 */

namespace Glib
{

Glib::RefPtr<Gio::FileAttributeMatcher> wrap(GFileAttributeMatcher* object, bool take_copy)
{
  if(take_copy && object)
    g_file_attribute_matcher_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gio::FileAttributeMatcher>(reinterpret_cast<Gio::FileAttributeMatcher*>(object));
}

} // namespace Glib


namespace Gio
{


void FileAttributeMatcher::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_file_attribute_matcher_ref(reinterpret_cast<GFileAttributeMatcher*>(const_cast<FileAttributeMatcher*>(this)));
}

void FileAttributeMatcher::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_file_attribute_matcher_unref(reinterpret_cast<GFileAttributeMatcher*>(const_cast<FileAttributeMatcher*>(this)));
}

GFileAttributeMatcher* FileAttributeMatcher::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GFileAttributeMatcher*>(this);
}

const GFileAttributeMatcher* FileAttributeMatcher::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GFileAttributeMatcher*>(this);
}

GFileAttributeMatcher* FileAttributeMatcher::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  const auto gobject = reinterpret_cast<GFileAttributeMatcher*>(const_cast<FileAttributeMatcher*>(this));
  g_file_attribute_matcher_ref(gobject);
  return gobject;
}


Glib::RefPtr<FileAttributeMatcher> FileAttributeMatcher::create_difference(const Glib::RefPtr<const FileAttributeMatcher>& subtract) const
{
  return Glib::wrap(g_file_attribute_matcher_subtract(const_cast<GFileAttributeMatcher*>(gobj()), const_cast<GFileAttributeMatcher*>(Glib::unwrap(subtract))));
}

bool FileAttributeMatcher::matches(const std::string& attribute) const
{
  return g_file_attribute_matcher_matches(const_cast<GFileAttributeMatcher*>(gobj()), attribute.c_str());
}

bool FileAttributeMatcher::matches_only(const std::string& attribute) const
{
  return g_file_attribute_matcher_matches_only(const_cast<GFileAttributeMatcher*>(gobj()), attribute.c_str());
}

bool FileAttributeMatcher::enumerate_namespace(const std::string& ns)
{
  return g_file_attribute_matcher_enumerate_namespace(gobj(), ns.c_str());
}

std::string FileAttributeMatcher::enumerate_next()
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_file_attribute_matcher_enumerate_next(gobj()));
}

std::string FileAttributeMatcher::to_string() const
{
  return Glib::convert_return_gchar_ptr_to_stdstring(g_file_attribute_matcher_to_string(const_cast<GFileAttributeMatcher*>(gobj())));
}


} // namespace Gio


namespace Glib
{

Glib::RefPtr<Gio::FileInfo> wrap(GFileInfo* object, bool take_copy)
{
  return Glib::RefPtr<Gio::FileInfo>( dynamic_cast<Gio::FileInfo*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& FileInfo_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &FileInfo_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_file_info_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void FileInfo_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* FileInfo_Class::wrap_new(GObject* object)
{
  return new FileInfo((GFileInfo*)object);
}


/* The implementation: */

GFileInfo* FileInfo::gobj_copy()
{
  reference();
  return gobj();
}

FileInfo::FileInfo(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

FileInfo::FileInfo(GFileInfo* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


FileInfo::FileInfo(FileInfo&& src) noexcept
: Glib::Object(std::move(src))
{}

FileInfo& FileInfo::operator=(FileInfo&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


FileInfo::~FileInfo() noexcept
{}


FileInfo::CppClassType FileInfo::fileinfo_class_; // initialize static member

GType FileInfo::get_type()
{
  return fileinfo_class_.init().get_type();
}


GType FileInfo::get_base_type()
{
  return g_file_info_get_type();
}

FileInfo::FileInfo()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(fileinfo_class_.init()))
{
  

}

Glib::RefPtr<FileInfo> FileInfo::dup() const
{
  return Glib::wrap(g_file_info_dup(const_cast<GFileInfo*>(gobj())));
}

void FileInfo::copy_into(Glib::RefPtr<FileInfo>& dest_info) const
{
  g_file_info_copy_into(const_cast<GFileInfo*>(gobj()), Glib::unwrap(dest_info));
}

bool FileInfo::has_attribute(const std::string& attribute) const
{
  return g_file_info_has_attribute(const_cast<GFileInfo*>(gobj()), attribute.c_str());
}

bool FileInfo::has_namespace(const std::string& name_space) const
{
  return g_file_info_has_namespace(const_cast<GFileInfo*>(gobj()), name_space.c_str());
}

Glib::StringArrayHandle FileInfo::list_attributes(const std::string& name_space) const
{
  return Glib::StringArrayHandle(g_file_info_list_attributes(const_cast<GFileInfo*>(gobj()), name_space.empty() ? nullptr : name_space.c_str()), Glib::OWNERSHIP_DEEP);
}

Glib::StringArrayHandle FileInfo::list_attributes() const
{
  return Glib::StringArrayHandle(g_file_info_list_attributes(const_cast<GFileInfo*>(gobj()), nullptr), Glib::OWNERSHIP_DEEP);
}

FileAttributeType FileInfo::get_attribute_type(const std::string& attribute) const
{
  return ((FileAttributeType)(g_file_info_get_attribute_type(const_cast<GFileInfo*>(gobj()), attribute.c_str())));
}

void FileInfo::remove_attribute(const std::string& attribute)
{
  g_file_info_remove_attribute(gobj(), attribute.c_str());
}

FileAttributeStatus FileInfo::get_attribute_status(const std::string& attribute) const
{
  return ((FileAttributeStatus)(g_file_info_get_attribute_status(const_cast<GFileInfo*>(gobj()), attribute.c_str())));
}

std::string FileInfo::get_attribute_string(const std::string& attribute) const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_file_info_get_attribute_string(const_cast<GFileInfo*>(gobj()), attribute.c_str()));
}

std::vector<Glib::ustring> FileInfo::get_attribute_strings(const std::string& attribute) const
{
  return Glib::ArrayHandler<Glib::ustring>::array_to_vector(g_file_info_get_attribute_stringv(const_cast<GFileInfo*>(gobj()), attribute.c_str()), Glib::OWNERSHIP_NONE);
}

Glib::ustring FileInfo::get_attribute_as_string(const std::string& attribute) const
{
  return Glib::convert_return_gchar_ptr_to_ustring(g_file_info_get_attribute_as_string(const_cast<GFileInfo*>(gobj()), attribute.c_str()));
}

std::string FileInfo::get_attribute_byte_string(const std::string& attribute) const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_file_info_get_attribute_byte_string(const_cast<GFileInfo*>(gobj()), attribute.c_str()));
}

bool FileInfo::get_attribute_boolean(const std::string& attribute) const
{
  return g_file_info_get_attribute_boolean(const_cast<GFileInfo*>(gobj()), attribute.c_str());
}

guint32 FileInfo::get_attribute_uint32(const std::string& attribute) const
{
  return g_file_info_get_attribute_uint32(const_cast<GFileInfo*>(gobj()), attribute.c_str());
}

gint32 FileInfo::get_attribute_int32(const std::string& attribute) const
{
  return g_file_info_get_attribute_int32(const_cast<GFileInfo*>(gobj()), attribute.c_str());
}

guint64 FileInfo::get_attribute_uint64(const std::string& attribute) const
{
  return g_file_info_get_attribute_uint64(const_cast<GFileInfo*>(gobj()), attribute.c_str());
}

gint64 FileInfo::get_attribute_int64(const std::string& attribute) const
{
  return g_file_info_get_attribute_int64(const_cast<GFileInfo*>(gobj()), attribute.c_str());
}

Glib::RefPtr<Glib::Object> FileInfo::get_attribute_object(const std::string& attribute) const
{
  return Glib::wrap(g_file_info_get_attribute_object(const_cast<GFileInfo*>(gobj()), attribute.c_str()));
}

bool FileInfo::set_attribute_status(const std::string& attribute, FileAttributeStatus status)
{
  return g_file_info_set_attribute_status(gobj(), attribute.c_str(), ((GFileAttributeStatus)(status)));
}

void FileInfo::set_attribute_string(const std::string& attribute, const std::string& attr_value)
{
  g_file_info_set_attribute_string(gobj(), attribute.c_str(), attr_value.c_str());
}

void FileInfo::set_attribute_strings(const std::string& attribute, const std::vector<Glib::ustring>& attr_value)
{
  g_file_info_set_attribute_stringv(gobj(), attribute.c_str(), const_cast<char**>(Glib::ArrayHandler<Glib::ustring>::vector_to_array(attr_value).data()));
}

void FileInfo::set_attribute_byte_string(const std::string& attribute, const std::string& attr_value)
{
  g_file_info_set_attribute_byte_string(gobj(), attribute.c_str(), attr_value.c_str());
}

void FileInfo::set_attribute_boolean(const std::string& attribute, bool attr_value)
{
  g_file_info_set_attribute_boolean(gobj(), attribute.c_str(), static_cast<int>(attr_value));
}

void FileInfo::set_attribute_uint32(const std::string& attribute, guint32 attr_value)
{
  g_file_info_set_attribute_uint32(gobj(), attribute.c_str(), attr_value);
}

void FileInfo::set_attribute_int32(const std::string& attribute, gint32 attr_value)
{
  g_file_info_set_attribute_int32(gobj(), attribute.c_str(), attr_value);
}

void FileInfo::set_attribute_uint64(const std::string& attribute, guint64 attr_value)
{
  g_file_info_set_attribute_uint64(gobj(), attribute.c_str(), attr_value);
}

void FileInfo::set_attribute_int64(const std::string& attribute, gint64 attr_value)
{
  g_file_info_set_attribute_int64(gobj(), attribute.c_str(), attr_value);
}

void FileInfo::set_attribute_object(const std::string& attribute, const Glib::RefPtr<Glib::Object>& attr_value)
{
  g_file_info_set_attribute_object(gobj(), attribute.c_str(), Glib::unwrap(attr_value));
}

void FileInfo::clear_status()
{
  g_file_info_clear_status(gobj());
}

Glib::DateTime FileInfo::get_deletion_date() const
{
  return Glib::wrap(g_file_info_get_deletion_date(const_cast<GFileInfo*>(gobj())));
}

FileType FileInfo::get_file_type() const
{
  return ((FileType)(g_file_info_get_file_type(const_cast<GFileInfo*>(gobj()))));
}

bool FileInfo::is_hidden() const
{
  return g_file_info_get_is_hidden(const_cast<GFileInfo*>(gobj()));
}

bool FileInfo::is_backup() const
{
  return g_file_info_get_is_backup(const_cast<GFileInfo*>(gobj()));
}

bool FileInfo::is_symlink() const
{
  return g_file_info_get_is_symlink(const_cast<GFileInfo*>(gobj()));
}

std::string FileInfo::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_file_info_get_name(const_cast<GFileInfo*>(gobj())));
}

std::string FileInfo::get_display_name() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_file_info_get_display_name(const_cast<GFileInfo*>(gobj())));
}

std::string FileInfo::get_edit_name() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_file_info_get_edit_name(const_cast<GFileInfo*>(gobj())));
}

Glib::RefPtr<Icon> FileInfo::get_icon()
{
  Glib::RefPtr<Icon> retvalue = Glib::wrap(g_file_info_get_icon(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Icon> FileInfo::get_icon() const
{
  return const_cast<FileInfo*>(this)->get_icon();
}

Glib::RefPtr<Icon> FileInfo::get_symbolic_icon()
{
  Glib::RefPtr<Icon> retvalue = Glib::wrap(g_file_info_get_symbolic_icon(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Icon> FileInfo::get_symbolic_icon() const
{
  return const_cast<FileInfo*>(this)->get_symbolic_icon();
}

std::string FileInfo::get_content_type() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_file_info_get_content_type(const_cast<GFileInfo*>(gobj())));
}

goffset FileInfo::get_size() const
{
  return g_file_info_get_size(const_cast<GFileInfo*>(gobj()));
}

std::string FileInfo::get_symlink_target() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_file_info_get_symlink_target(const_cast<GFileInfo*>(gobj())));
}

std::string FileInfo::get_etag() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_file_info_get_etag(const_cast<GFileInfo*>(gobj())));
}

gint32 FileInfo::get_sort_order() const
{
  return g_file_info_get_sort_order(const_cast<GFileInfo*>(gobj()));
}

void FileInfo::set_attribute_mask(const Glib::RefPtr<FileAttributeMatcher>& mask)
{
  g_file_info_set_attribute_mask(gobj(), const_cast<GFileAttributeMatcher*>(Glib::unwrap(mask)));
}

void FileInfo::unset_attribute_mask()
{
  g_file_info_unset_attribute_mask(gobj());
}

void FileInfo::set_file_type(FileType type)
{
  g_file_info_set_file_type(gobj(), ((GFileType)(type)));
}

void FileInfo::set_is_hidden(bool hidden)
{
  g_file_info_set_is_hidden(gobj(), static_cast<int>(hidden));
}

void FileInfo::set_is_symlink(bool symlink)
{
  g_file_info_set_is_symlink(gobj(), static_cast<int>(symlink));
}

void FileInfo::set_name(const std::string& name)
{
  g_file_info_set_name(gobj(), name.c_str());
}

void FileInfo::set_display_name(const std::string& display_name)
{
  g_file_info_set_display_name(gobj(), display_name.c_str());
}

void FileInfo::set_edit_name(const std::string& edit_name)
{
  g_file_info_set_edit_name(gobj(), edit_name.c_str());
}

void FileInfo::set_icon(const Glib::RefPtr<Icon>& icon)
{
  g_file_info_set_icon(gobj(), const_cast<GIcon*>(Glib::unwrap(icon)));
}

void FileInfo::set_symbolic_icon(const Glib::RefPtr<Icon>& icon)
{
  g_file_info_set_symbolic_icon(gobj(), const_cast<GIcon*>(Glib::unwrap(icon)));
}

void FileInfo::set_content_type(const std::string& content_type)
{
  g_file_info_set_content_type(gobj(), content_type.c_str());
}

void FileInfo::set_size(goffset size)
{
  g_file_info_set_size(gobj(), size);
}

void FileInfo::set_modification_time(const Glib::TimeVal& mtime)
{
  g_file_info_set_modification_time(gobj(), const_cast<GTimeVal*>(static_cast<const GTimeVal*>(&mtime)));
}

void FileInfo::set_symlink_target(const std::string& symlink_target)
{
  g_file_info_set_symlink_target(gobj(), symlink_target.c_str());
}

void FileInfo::set_sort_order(gint32 sort_order)
{
  g_file_info_set_sort_order(gobj(), sort_order);
}


} // namespace Gio


