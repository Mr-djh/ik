#ifndef IK_RETCODES_H
#define IK_RETCODES_H

/* Don't use C_BEGIN because config.h includes retcodes.h */
#ifdef __cplusplus
extern "C" {
#endif

typedef enum ikret_t
{
    IK_NODE_NOT_FOUND = 4,
    IK_HASH_NOT_FOUND = 3,
    IK_HASH_EXISTS = 2,
    IK_RESULT_CONVERGED = 1,
    IK_OK = 0,
    IK_ERR_OUT_OF_MEMORY = -1,
    IK_ERR_ALREADY_HAS_ATTACHMENT = -2,
    IK_ERR_UNIT_TESTS_FAILED = -6,
    IK_ERR_BUILT_WITHOUT_TESTS = -7,
    IK_ERR_WRONG_FUNCTION_FOR_CUSTOM_CONSTRAINT = -8,
    IK_ERR_NO_ALGORITHMS_FOUND = -9,
    IK_ERR_NO_EFFECTORS_FOUND = -10,
    IK_ERR_GENERIC = -11,
    IK_ERR_DUPLICATE_NODE = -12
} ikret_t;

#ifdef __cplusplus
}
#endif

#endif
