/* Generated by ./xlat/gen.sh from ./xlat/v4l2_input_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(V4L2_INPUT_TYPE_TUNER) || (defined(HAVE_DECL_V4L2_INPUT_TYPE_TUNER) && HAVE_DECL_V4L2_INPUT_TYPE_TUNER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_INPUT_TYPE_TUNER) == (1), "V4L2_INPUT_TYPE_TUNER != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_INPUT_TYPE_TUNER 1
#endif
#if defined(V4L2_INPUT_TYPE_CAMERA) || (defined(HAVE_DECL_V4L2_INPUT_TYPE_CAMERA) && HAVE_DECL_V4L2_INPUT_TYPE_CAMERA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_INPUT_TYPE_CAMERA) == (2), "V4L2_INPUT_TYPE_CAMERA != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_INPUT_TYPE_CAMERA 2
#endif
#if defined(V4L2_INPUT_TYPE_TOUCH) || (defined(HAVE_DECL_V4L2_INPUT_TYPE_TOUCH) && HAVE_DECL_V4L2_INPUT_TYPE_TOUCH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_INPUT_TYPE_TOUCH) == (3), "V4L2_INPUT_TYPE_TOUCH != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_INPUT_TYPE_TOUCH 3
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_input_types[];

# else

static const struct xlat_data v4l2_input_types_xdata[] = {
 [V4L2_INPUT_TYPE_TUNER] = XLAT(V4L2_INPUT_TYPE_TUNER),
 #define XLAT_VAL_0 ((unsigned) (V4L2_INPUT_TYPE_TUNER))
 #define XLAT_STR_0 STRINGIFY(V4L2_INPUT_TYPE_TUNER)
 [V4L2_INPUT_TYPE_CAMERA] = XLAT(V4L2_INPUT_TYPE_CAMERA),
 #define XLAT_VAL_1 ((unsigned) (V4L2_INPUT_TYPE_CAMERA))
 #define XLAT_STR_1 STRINGIFY(V4L2_INPUT_TYPE_CAMERA)
 [V4L2_INPUT_TYPE_TOUCH] = XLAT(V4L2_INPUT_TYPE_TOUCH),
 #define XLAT_VAL_2 ((unsigned) (V4L2_INPUT_TYPE_TOUCH))
 #define XLAT_STR_2 STRINGIFY(V4L2_INPUT_TYPE_TOUCH)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_input_types[1] = { {
 .data = v4l2_input_types_xdata,
 .size = ARRAY_SIZE(v4l2_input_types_xdata),
 .type = XT_INDEXED,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
#  ifdef XLAT_VAL_2
  | XLAT_VAL_2
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
#  ifdef XLAT_STR_2
  + sizeof(XLAT_STR_2)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
