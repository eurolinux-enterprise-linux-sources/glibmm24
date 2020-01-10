// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <glibmm/spawn.h>
#include <glibmm/private/spawn_p.h>


/* Copyright (C) 2002 The gtkmm Development Team
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

#include <glib.h>
#include <glibmm/exceptionhandler.h>
#include <glibmm/utility.h>


namespace
{

extern "C"
{

/* Helper callback to invoke the actual sigc++ slot.
 * We don't need to worry about (un)referencing, since the
 * child process gets its own copy of the parent's memory anyway.
 */
static void child_setup_callback(void* user_data)
{
  try
  {
    (*reinterpret_cast<sigc::slot<void>*>(user_data))();
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }
}

static void copy_output_buf(std::string* dest, const char* buf)
{
  if(dest)
  {
    if(buf)
      *dest = buf;
    else
      dest->erase();
  }
}

} //extern "C"

} //anonymous namespace


namespace Glib
{

/**** process spawning functions *******************************************/

void spawn_async_with_pipes(const std::string& working_directory,
                            const Glib::ArrayHandle<std::string>& argv,
                            const Glib::ArrayHandle<std::string>& envp,
                            SpawnFlags flags,
                            const sigc::slot<void>& child_setup,
                            Pid* child_pid,
                            int* standard_input,
                            int* standard_output,
                            int* standard_error)
{
  const bool setup_slot = !child_setup.empty();
  sigc::slot<void> child_setup_ = child_setup;
  GError* gerror = 0;

  g_spawn_async_with_pipes(
      (working_directory.empty()) ? 0 : working_directory.c_str(),
      const_cast<char**>(argv.data()),
      const_cast<char**>(envp.data()),
      static_cast<GSpawnFlags>(unsigned(flags)),
      (setup_slot) ? &child_setup_callback : 0,
      (setup_slot) ? &child_setup_         : 0,
      child_pid,
      standard_input, standard_output, standard_error,
      &gerror);

  if(gerror)
    Glib::Error::throw_exception(gerror);
}

void spawn_async_with_pipes(const std::string& working_directory,
                            const Glib::ArrayHandle<std::string>& argv,
                            SpawnFlags flags,
                            const sigc::slot<void>& child_setup,
                            Pid* child_pid,
                            int* standard_input,
                            int* standard_output,
                            int* standard_error)
{
  const bool setup_slot = !child_setup.empty();
  sigc::slot<void> child_setup_ = child_setup;
  GError* gerror = 0;

  g_spawn_async_with_pipes(
      (working_directory.empty()) ? 0 : working_directory.c_str(),
      const_cast<char**>(argv.data()), 0,
      static_cast<GSpawnFlags>(unsigned(flags)),
      (setup_slot) ? &child_setup_callback : 0,
      (setup_slot) ? &child_setup_         : 0,
      child_pid,
      standard_input, standard_output, standard_error,
      &gerror);

  if(gerror)
    Glib::Error::throw_exception(gerror);
}

void spawn_async(const std::string& working_directory,
                 const Glib::ArrayHandle<std::string>& argv,
                 const Glib::ArrayHandle<std::string>& envp,
                 SpawnFlags flags,
                 const sigc::slot<void>& child_setup,
                 Pid* child_pid)
{
  const bool setup_slot = !child_setup.empty();
  sigc::slot<void> child_setup_ = child_setup;
  GError* gerror = 0;

  g_spawn_async(
      (working_directory.empty()) ? 0 : working_directory.c_str(),
      const_cast<char**>(argv.data()),
      const_cast<char**>(envp.data()),
      static_cast<GSpawnFlags>(unsigned(flags)),
      (setup_slot) ? &child_setup_callback : 0,
      (setup_slot) ? &child_setup_         : 0,
      child_pid,
      &gerror);

  if(gerror)
    Glib::Error::throw_exception(gerror);
}

void spawn_async(const std::string& working_directory,
                 const Glib::ArrayHandle<std::string>& argv,
                 SpawnFlags flags,
                 const sigc::slot<void>& child_setup,
                 Pid* child_pid)
{
  const bool setup_slot = !child_setup.empty();
  sigc::slot<void> child_setup_ = child_setup;
  GError* gerror = 0;

  g_spawn_async(
      (working_directory.empty()) ? 0 : working_directory.c_str(),
      const_cast<char**>(argv.data()), 0,
      static_cast<GSpawnFlags>(unsigned(flags)),
      (setup_slot) ? &child_setup_callback : 0,
      (setup_slot) ? &child_setup_         : 0,
      child_pid,
      &gerror);

  if(gerror)
    Glib::Error::throw_exception(gerror);
}

void spawn_sync(const std::string& working_directory,
                const Glib::ArrayHandle<std::string>& argv,
                const Glib::ArrayHandle<std::string>& envp,
                SpawnFlags flags,
                const sigc::slot<void>& child_setup,
                std::string* standard_output,
                std::string* standard_error,
                int* exit_status)
{
  const bool setup_slot = !child_setup.empty();
  sigc::slot<void> child_setup_ = child_setup;

  Glib::ScopedPtr<char> buf_standard_output;
  Glib::ScopedPtr<char> buf_standard_error;
  GError* gerror = 0;

  g_spawn_sync(
      (working_directory.empty()) ? 0 : working_directory.c_str(),
      const_cast<char**>(argv.data()),
      const_cast<char**>(envp.data()),
      static_cast<GSpawnFlags>(unsigned(flags)),
      (setup_slot) ? &child_setup_callback : 0,
      (setup_slot) ? &child_setup_         : 0,
      (standard_output) ? buf_standard_output.addr() : 0,
      (standard_error)  ? buf_standard_error.addr()  : 0,
      exit_status,
      &gerror);

  if(gerror)
    Glib::Error::throw_exception(gerror);

  copy_output_buf(standard_output, buf_standard_output.get());
  copy_output_buf(standard_error, buf_standard_error.get());
}

void spawn_sync(const std::string& working_directory,
                const Glib::ArrayHandle<std::string>& argv,
                SpawnFlags flags,
                const sigc::slot<void>& child_setup,
                std::string* standard_output,
                std::string* standard_error,
                int* exit_status)
{
  const bool setup_slot = !child_setup.empty();
  sigc::slot<void> child_setup_ = child_setup;

  Glib::ScopedPtr<char> buf_standard_output;
  Glib::ScopedPtr<char> buf_standard_error;
  GError* gerror = 0;

  g_spawn_sync(
      (working_directory.empty()) ? 0 : working_directory.c_str(),
      const_cast<char**>(argv.data()), 0,
      static_cast<GSpawnFlags>(unsigned(flags)),
      (setup_slot) ? &child_setup_callback : 0,
      (setup_slot) ? &child_setup_         : 0,
      (standard_output) ? buf_standard_output.addr() : 0,
      (standard_error)  ? buf_standard_error.addr()  : 0,
      exit_status,
      &gerror);

  if(gerror)
    Glib::Error::throw_exception(gerror);

  copy_output_buf(standard_output, buf_standard_output.get());
  copy_output_buf(standard_error, buf_standard_error.get());
}

void spawn_command_line_async(const std::string& command_line)
{
  GError* gerror = 0;
  g_spawn_command_line_async(command_line.c_str(), &gerror);

  if(gerror)
    Glib::Error::throw_exception(gerror);
}

void spawn_command_line_sync(const std::string& command_line,
                             std::string* standard_output,
                             std::string* standard_error,
                             int* exit_status)
{
  Glib::ScopedPtr<char> buf_standard_output;
  Glib::ScopedPtr<char> buf_standard_error;
  GError* gerror = 0;

  g_spawn_command_line_sync(
      command_line.c_str(),
      (standard_output) ? buf_standard_output.addr() : 0,
      (standard_error)  ? buf_standard_error.addr()  : 0,
      exit_status,
      &gerror);

  if(gerror)
    Glib::Error::throw_exception(gerror);

  copy_output_buf(standard_output, buf_standard_output.get());
  copy_output_buf(standard_error, buf_standard_error.get());
}

void spawn_close_pid(Pid pid)
{
  g_spawn_close_pid(pid);
}

} // namespace Glib


namespace
{
} // anonymous namespace


Glib::SpawnError::SpawnError(Glib::SpawnError::Code error_code, const Glib::ustring& error_message)
:
  Glib::Error (G_SPAWN_ERROR, error_code, error_message)
{}

Glib::SpawnError::SpawnError(GError* gobject)
:
  Glib::Error (gobject)
{}

Glib::SpawnError::Code Glib::SpawnError::code() const
{
  return static_cast<Code>(Glib::Error::code());
}

void Glib::SpawnError::throw_func(GError* gobject)
{
  throw Glib::SpawnError(gobject);
}


