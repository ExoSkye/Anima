#include <Engine/Instance.hpp>
#include <utility>

namespace Anima::Engine {
    Anima::Engine::Instance::Instance() : Instance(nall::string("Anima Game"), 1) {}
    Anima::Engine::Instance::Instance(nall::string name, u32 version) : m_Name(std::move(name)), m_Version(version) {}

    void Instance::load_scene(Scene& scene) {

    }
}


