// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!
#ifndef _GIOMM_VOLUME_H
#define _GIOMM_VOLUME_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

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

#include <giomm/file.h>
#include <giomm/mountoperation.h>
#include <giomm/mount.h>
//#include <giomm/drive.h>
//#include <giomm/icon.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GVolumeIface GGVolumeIface;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GVolume = struct _GVolume;
using GVolumeClass = struct _GVolumeClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class Volume_Class; } // namespace Gio
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

// Making a forward declaration here to avoid circular dependency.
// file.hg already includes volume.h.
class File;
class Drive;

/** The Volume interface represents user-visible objects that can be mounted.
 *
 * Mounting a Volume instance is an asynchronous operation. For more information about asynchronous operations, see AsyncReady and SimpleAsyncReady. To
 * mount a GVolume, first call mount(), optionally providing a MountOperation object and a SlotAsyncReady callback.
 *
 * Typically, you will not want to provide a MountOperation if automounting all volumes when a desktop session starts since it's not desirable to
 * put up a lot of dialogs asking for credentials.
 *
 * The callback will be fired when the operation has resolved (either with success or failure), and a AsyncReady structure will be passed to the callback.
 * That callback should then call g_volume_mount_finish() with the GVolume instance and the GAsyncReady data to see if the operation was completed
 * successfully. If an error is present when finish() is called, then it will be filled with any error information.
 *
 * @newin{2,16}
 */

class Volume : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = Volume;
  using CppClassType = Volume_Class;
  using BaseObjectType = GVolume;
  using BaseClassType = GVolumeIface;

  // noncopyable
  Volume(const Volume&) = delete;
  Volume& operator=(const Volume&) = delete;

private:
  friend class Volume_Class;
  static CppClassType volume_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  Volume();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of
   * the Class init() function to ensure that it is properly
   * initialized.
   *
   * @param interface_class The Class object for the derived type.
   */
  explicit Volume(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface.
  explicit Volume(GVolume* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Volume(Volume&& src) noexcept;
  Volume& operator=(Volume&& src) noexcept;

  ~Volume() noexcept override;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GVolume*       gobj()       { return reinterpret_cast<GVolume*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GVolume* gobj() const { return reinterpret_cast<GVolume*>(gobject_); }

private:

public:
  
  /** Gets the name of @a volume.
   * 
   * @return The name for the given @a volume.
   */
  std::string get_name() const;
  
  /** Gets the UUID for the @a volume. The reference is typically based on
   * the file system UUID for the volume in question and should be
   * considered an opaque string. Returns <tt>nullptr</tt> if there is no UUID
   * available.
   * 
   * @return The UUID for @a volume or <tt>nullptr</tt> if no UUID can be computed.
   */
  std::string get_uuid() const;

  
  /** Gets the icon for @a volume.
   * 
   * @return A Icon.
   * The returned object should be unreffed with Glib::object_unref()
   * when no longer needed.
   */
  Glib::RefPtr<Icon> get_icon();
  
  /** Gets the icon for @a volume.
   * 
   * @return A Icon.
   * The returned object should be unreffed with Glib::object_unref()
   * when no longer needed.
   */
  Glib::RefPtr<const Icon> get_icon() const;

  
  /** Gets the symbolic icon for @a volume.
   * 
   * @newin{2,34}
   * 
   * @return A Icon.
   * The returned object should be unreffed with Glib::object_unref()
   * when no longer needed.
   */
  Glib::RefPtr<Icon> get_symbolic_icon();
  
  /** Gets the symbolic icon for @a volume.
   * 
   * @newin{2,34}
   * 
   * @return A Icon.
   * The returned object should be unreffed with Glib::object_unref()
   * when no longer needed.
   */
  Glib::RefPtr<const Icon> get_symbolic_icon() const;

  
  /** Gets the drive for the @a volume.
   * 
   * @return A Drive or <tt>nullptr</tt> if @a volume is not
   * associated with a drive. The returned object should be unreffed
   * with Glib::object_unref() when no longer needed.
   */
  Glib::RefPtr<Drive> get_drive();
  
  /** Gets the drive for the @a volume.
   * 
   * @return A Drive or <tt>nullptr</tt> if @a volume is not
   * associated with a drive. The returned object should be unreffed
   * with Glib::object_unref() when no longer needed.
   */
  Glib::RefPtr<const Drive> get_drive() const;

 
  /** Gets the mount for the @a volume.
   * 
   * @return A Mount or <tt>nullptr</tt> if @a volume isn't mounted.
   * The returned object should be unreffed with Glib::object_unref()
   * when no longer needed.
   */
  Glib::RefPtr<Mount> get_mount();
  
  /** Gets the mount for the @a volume.
   * 
   * @return A Mount or <tt>nullptr</tt> if @a volume isn't mounted.
   * The returned object should be unreffed with Glib::object_unref()
   * when no longer needed.
   */
  Glib::RefPtr<const Mount> get_mount() const;

  
  /** Checks if a volume can be mounted.
   * 
   * @return <tt>true</tt> if the @a volume can be mounted. <tt>false</tt> otherwise.
   */
  bool can_mount() const;
  
  /** Checks if a volume can be ejected.
   * 
   * @return <tt>true</tt> if the @a volume can be ejected. <tt>false</tt> otherwise.
   */
  bool can_eject() const;
  
  /** Returns whether the volume should be automatically mounted.
   * 
   * @return <tt>true</tt> if the volume should be automatically mounted.
   */
  bool should_automount() const;

  /** Mounts a volume.
   * This is an asynchronous operation, and is finished by calling mount_finish() with the AsyncResult data returned in the callback slot.
   *
   * @param mount_operation A mount operation.
   * @param slot A callback which will be called when the operation is completed or canceled.
   * @param cancellable A cancellable object which can be used to cancel the operation.
   * @param flags Flags affecting the operation.
   */
  void mount(const Glib::RefPtr<MountOperation>& mount_operation, const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, MountMountFlags flags = MOUNT_MOUNT_NONE);

  /** Mounts a volume.
   * This is an asynchronous operation, and is finished by calling mount_finish() with the AsyncResult data returned in the callback slot.
   *
   * @param mount_operation A mount operation.
   * @param slot A callback which will be called when the operation is completed or canceled.
   * @param flags Flags affecting the operation.
   */
  void mount(const Glib::RefPtr<MountOperation>& mount_operation, const SlotAsyncReady& slot, MountMountFlags flags = MOUNT_MOUNT_NONE);

  /** Mounts a volume.
   *
   * @param mount_operation A mount operation.
   * @param flags Flags affecting the operation.
   */
  void mount(const Glib::RefPtr<MountOperation>& mount_operation, MountMountFlags flags = MOUNT_MOUNT_NONE);

  /** Mounts a volume.
   *
   * @param flags Flags affecting the operation.
   */
  void mount(MountMountFlags flags = MOUNT_MOUNT_NONE);

  
  /** Finishes mounting a volume. If any errors occurred during the operation,
   *  @a error will be set to contain the errors and <tt>false</tt> will be returned.
   * 
   * If the mount operation succeeded, g_volume_get_mount() on @a volume
   * is guaranteed to return the mount right after calling this
   * function; there's no need to listen for the 'mount-added' signal on
   * VolumeMonitor.
   * 
   * @param result A AsyncResult.
   * @return <tt>true</tt>, <tt>false</tt> if operation failed.
   */
  bool mount_finish(const Glib::RefPtr<AsyncResult>& result);

  void eject(const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, MountUnmountFlags flags = MOUNT_UNMOUNT_NONE);
  void eject(const SlotAsyncReady& slot, MountUnmountFlags flags = MOUNT_UNMOUNT_NONE);
  void eject(MountUnmountFlags flags = MOUNT_UNMOUNT_NONE);
  void eject(const Glib::RefPtr<MountOperation>& mount_operation, const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, MountUnmountFlags flags = MOUNT_UNMOUNT_NONE);
  void eject(const Glib::RefPtr<MountOperation>& mount_operation, const SlotAsyncReady& slot, MountUnmountFlags flags = MOUNT_UNMOUNT_NONE);
  void eject(const Glib::RefPtr<MountOperation>& mount_operation, MountUnmountFlags flags = MOUNT_UNMOUNT_NONE);
  
  
  /** Finishes ejecting a volume. If any errors occurred during the operation,
   *  @a error will be set to contain the errors and <tt>false</tt> will be returned.
   * 
   * @newin{2,22}
   * 
   * @param result A AsyncResult.
   * @return <tt>true</tt> if the volume was successfully ejected. <tt>false</tt> otherwise.
   */
  bool eject_finish(const Glib::RefPtr<AsyncResult>& result);
  

  /** Gets the identifier of the given kind for @a volume. 
   * See the [introduction][volume-identifier] for more
   * information about volume identifiers.
   * 
   * @param kind The kind of identifier to return.
   * @return A newly allocated string containing the
   * requested identfier, or <tt>nullptr</tt> if the Volume
   * doesn't have this kind of identifier.
   */
  std::string get_identifier(const std::string& kind) const;

   
  /** Gets the kinds of [identifiers][volume-identifier] that @a volume has.
   * Use g_volume_get_identifier() to obtain the identifiers themselves.
   * 
   * @return A <tt>nullptr</tt>-terminated array
   * of strings containing kinds of identifiers.
   */
  Glib::StringArrayHandle enumerate_identifiers() const;

  
  /** Gets the activation root for a Volume if it is known ahead of
   * mount time. Returns <tt>nullptr</tt> otherwise. If not <tt>nullptr</tt> and if @a volume
   * is mounted, then the result of g_mount_get_root() on the
   * Mount object obtained from g_volume_get_mount() will always
   * either be equal or a prefix of what this function returns. In
   * other words, in code
   * 
   * 
   * [C example ellipted]
   * then the expression
   * 
   * [C example ellipted]
   * will always be <tt>true</tt>.
   * 
   * Activation roots are typically used in VolumeMonitor
   * implementations to find the underlying mount to shadow, see
   * g_mount_is_shadowed() for more details.
   * 
   * @newin{2,18}
   * 
   * @return The activation root of @a volume
   * or <tt>nullptr</tt>. Use Glib::object_unref() to free.
   */
  Glib::RefPtr<File> get_activation_root();
  
  /** Gets the activation root for a Volume if it is known ahead of
   * mount time. Returns <tt>nullptr</tt> otherwise. If not <tt>nullptr</tt> and if @a volume
   * is mounted, then the result of g_mount_get_root() on the
   * Mount object obtained from g_volume_get_mount() will always
   * either be equal or a prefix of what this function returns. In
   * other words, in code
   * 
   * 
   * [C example ellipted]
   * then the expression
   * 
   * [C example ellipted]
   * will always be <tt>true</tt>.
   * 
   * Activation roots are typically used in VolumeMonitor
   * implementations to find the underlying mount to shadow, see
   * g_mount_is_shadowed() for more details.
   * 
   * @newin{2,18}
   * 
   * @return The activation root of @a volume
   * or <tt>nullptr</tt>. Use Glib::object_unref() to free.
   */
  Glib::RefPtr<const File> get_activation_root() const;

  
  /** Gets the sort key for @a volume, if any.
   * 
   * @newin{2,32}
   * 
   * @return Sorting key for @a volume or <tt>nullptr</tt> if no such key is available.
   */
  Glib::ustring sort_key();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%changed()</tt>
   *
   * Emitted when the volume has been changed.
   */

  Glib::SignalProxy< void > signal_changed();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%removed()</tt>
   *
   * This signal is emitted when the Volume have been removed. If
   * the recipient is holding references to the object they should
   * release them so the object can be finalized.
   */

  Glib::SignalProxy< void > signal_removed();


  //_WRAP_VFUNC(std::string get_name(), get_name)
  //_WRAP_VFUNC(Glib::RefPtr<Icon> get_icon(), get_icon)
  //_WRAP_VFUNC(std::string get_uuid(), get_uuid)

 
  //_WRAP_VFUNC(Glib::RefPtr<Drive> get_drive(), get_drive)

 
  //_WRAP_VFUNC(Glib::RefPtr<Mount> get_mount(), get_mount)

  //_WRAP_VFUNC(bool can_mount(), can_mount)
  //_WRAP_VFUNC(bool can_eject(), can_eject)
  //_WRAP_VFUNC(void mount_fn(GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data), mount_fn) //TODO: Rename to mount()?
  //_WRAP_VFUNC(bool mount_finish(GAsyncResult* result, GError** error), mount_finish)
  //_WRAP_VFUNC(void eject(GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data), eject)
  //_WRAP_VFUNC(bool eject_finish(GAsyncResult* result, GError** error), eject_finish)

  //_WRAP_VFUNC(std::string get_identifier(const std::string& kind), get_identifier)

  //TODO: Use an ArrayHandle.
  //_WRAP_VFUNC(char** enumerate_identifiers(), enumerate_identifiers)

  //_WRAP_VFUNC(bool should_automount(), should_automount)


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_changed().
  virtual void on_changed();
  /// This is a default handler for the signal signal_removed().
  virtual void on_removed();


};

} // namespace Gio

namespace Glib
{

//Pre-declare this so we can use it in TypeTrait:
Glib::RefPtr<Gio::Volume> wrap(GVolume* object, bool take_copy);

namespace Container_Helpers
{

/** This specialization of TypeTraits exists
 * because the default use of Glib::wrap(GObject*),
 * instead of a specific Glib::wrap(GSomeInterface*),
 * would not return a wrapper for an interface.
 */
template <>
struct TypeTraits< Glib::RefPtr<Gio::Volume> >
{
  using CppType = Glib::RefPtr<Gio::Volume>;
  using CType = GVolume*;
  using CTypeNonConst = GVolume*;

  static CType   to_c_type      (const CppType& item)
  { return Glib::unwrap (item); }

  static CppType to_cpp_type    (const CType& item)
  {
    //Use a specific Glib::wrap() function,
    //because CType has the specific type (not just GObject):
    return Glib::wrap(item, true /* take_copy */);
  }

  static void    release_c_type (CType item)
  {
    GLIBMM_DEBUG_UNREFERENCE(nullptr, item);
    g_object_unref(item);
  }
};

} // Container_Helpers
} // Glib


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::Volume
   */
  Glib::RefPtr<Gio::Volume> wrap(GVolume* object, bool take_copy = false);

} // namespace Glib


#endif /* _GIOMM_VOLUME_H */

