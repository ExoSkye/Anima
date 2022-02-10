#pragma once
#include "Scene.hpp"

namespace Anima::Engine {
    class Instance {
      public:
        Instance();
        Instance(nall::string  name, u32 version);
        void load_scene(Scene& scene);
      private:
        const nall::string m_Name;
        const u32 m_Version;
    };
}