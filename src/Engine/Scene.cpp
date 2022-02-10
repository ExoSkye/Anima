#include <Engine/Scene.hpp>

namespace Anima::Engine {
    Scene::Scene() {

    }

    Scene::Scene(const nall::string& filename) {
        if (auto data = nall::file::read(filename)) {
            nall::serializer s{data.data(), (u32)data.size()};

        }
    }

    void Scene::serialize(nall::serializer& s) {

    }

    void Scene::deserialize(nall::serializer& d) {

    }

    void Scene::load(const nall::string& filename) {

    }

    void Scene::save(const nall::string& filename) {

    }
}

