#ifndef COLLISION_UTILS_HPP
#define COLLISION_UTILS_HPP

#include "sbpt_generated_includes.hpp"

#include <glm/glm.hpp>
#include <vector>

namespace collision_utils {

enum class Symbol { a, b };

struct CollisionManifold {
    Symbol object_that_normal_exists_on;
    glm::vec3 normal_generating_least_overlap;
    // if this is positive then there is a collision
    float penetration;
    std::vector<glm::vec3> contact_points; // optional for now
};

CollisionManifold detect_convex_collision(const draw_info::IndexedVertexPositions &a, const glm::vec3 &posA,
                                          const draw_info::IndexedVertexPositions &b, const glm::vec3 &posB);

} // namespace collision_utils

#endif // COLLISION_UTILS_HPP
