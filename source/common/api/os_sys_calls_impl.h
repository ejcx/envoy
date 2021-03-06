#pragma once

#include "envoy/api/os_sys_calls.h"

namespace Envoy {
namespace Api {

class OsSysCallsImpl : public OsSysCalls {
public:
  // Api::OsSysCalls
  int open(const std::string& full_path, int flags, int mode) override;
  ssize_t write(int fd, const void* buffer, size_t num_bytes) override;
  int close(int fd) override;
  int shmOpen(const char* name, int oflag, mode_t mode) override;
  int shmUnlink(const char* name) override;
  int ftruncate(int fd, off_t length) override;
  void* mmap(void* addr, size_t length, int prot, int flags, int fd, off_t offset) override;
};

} // namespace Api
} // namespace Envoy
