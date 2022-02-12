#pragma once
#include <Engine/pch.hpp>

namespace Anima::Engine {
    class Scene {
      public:
        /**
         * @brief Creates an empty scene
         * @details This can be used to create a scene that you can then manually edit.
         */
        Scene();

        /**
         * @brief Loads a scene from a file on disk.
         * @param filename The file name of the scene.
         */
        explicit Scene(const nall::string& filename);

        /**
         * @brief Used for serialization via the nall library.
         * @param s The nall serializer
         */
        void serialize(nall::serializer& s);

        /**
         * @brief Used for deserialization via the nall library.
         * @param s The nall serializer object
         */
        void deserialize(nall::serializer& d);

        /**
         * @brief Loads a scene from a file or disk.
         * @details Similar in function to @ref Scene(const nall::string&)
         * @param filename The file name of the scene.
         */
        void load(const nall::string& filename);

        /**
         * @brief Saves the scene to the disk.
         * @details Useful for an editor application.
         * @param filename The file name to save to.
         */
        void save(const nall::string& filename);
    };
}