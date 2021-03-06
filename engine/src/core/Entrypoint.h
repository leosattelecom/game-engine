#ifndef ENGINE_SRC_CORE_ENTRYPOINT_H_
#define ENGINE_SRC_CORE_ENTRYPOINT_H_

#include "core/Application.h"
#include "core/Log.h"

#ifdef ENGINE_PLATFORM_LINUX

extern engine::Application* engine::CreateApplication();

int main() {
  engine::logging::Log::Init();
  ENGINE_CORE_WARN("Initialized core log");
  ENGINE_CLIENT_INFO("Initialized client log");

  auto app = engine::CreateApplication();
  app->Run();
  delete app;

  return 0;
}

#endif  // ENGINE_PLATFORM_LINUX

#endif  // ENGINE_SRC_CORE_ENTRYPOINT_H_
