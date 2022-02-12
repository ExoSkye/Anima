#pragma once
#include <Engine/pch.hpp>

namespace Anima::Backend {
    namespace Defines {
        enum class VideoBackendType {
            G1,
            G15,
            G2,
            G3,
            G4,
            G5,
            GX
        };
    }

    namespace Interfaces {
        class VideoBackend {
          public:
            virtual nall::vector<Defines::VideoBackendType> get_supported_standards() {
                return {
                    Defines::VideoBackendType::G1
                };
            }

        };
    }
}