export module Base;

#include "stdafx.h"

export namespace base {
class Shader {
public:
  Shader() = default;

  void Init() { std::cout << "Init()\n"; }
};
} // namespace base
