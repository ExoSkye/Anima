#pragma once
#include <Engine/pch.hpp>
#include <Engine/Voxel.hpp>

namespace Anima::Engine {
    class Mesh {
      private:
        nall::vector<Voxel> m_Voxels;
    };
}