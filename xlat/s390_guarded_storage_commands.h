/* Generated by ./xlat/gen.sh from ./xlat/s390_guarded_storage_commands.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(GS_ENABLE) || (defined(HAVE_DECL_GS_ENABLE) && HAVE_DECL_GS_ENABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((GS_ENABLE) == (0), "GS_ENABLE != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define GS_ENABLE 0
#endif
#if defined(GS_DISABLE) || (defined(HAVE_DECL_GS_DISABLE) && HAVE_DECL_GS_DISABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((GS_DISABLE) == (1), "GS_DISABLE != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define GS_DISABLE 1
#endif
#if defined(GS_SET_BC_CB) || (defined(HAVE_DECL_GS_SET_BC_CB) && HAVE_DECL_GS_SET_BC_CB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((GS_SET_BC_CB) == (2), "GS_SET_BC_CB != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define GS_SET_BC_CB 2
#endif
#if defined(GS_CLEAR_BC_CB) || (defined(HAVE_DECL_GS_CLEAR_BC_CB) && HAVE_DECL_GS_CLEAR_BC_CB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((GS_CLEAR_BC_CB) == (3), "GS_CLEAR_BC_CB != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define GS_CLEAR_BC_CB 3
#endif
#if defined(GS_BROADCAST) || (defined(HAVE_DECL_GS_BROADCAST) && HAVE_DECL_GS_BROADCAST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((GS_BROADCAST) == (4), "GS_BROADCAST != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define GS_BROADCAST 4
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat s390_guarded_storage_commands in mpers mode

# else

static const struct xlat_data s390_guarded_storage_commands_xdata[] = {
 [GS_ENABLE] = XLAT(GS_ENABLE),
 #define XLAT_VAL_0 ((unsigned) (GS_ENABLE))
 #define XLAT_STR_0 STRINGIFY(GS_ENABLE)
 [GS_DISABLE] = XLAT(GS_DISABLE),
 #define XLAT_VAL_1 ((unsigned) (GS_DISABLE))
 #define XLAT_STR_1 STRINGIFY(GS_DISABLE)
 [GS_SET_BC_CB] = XLAT(GS_SET_BC_CB),
 #define XLAT_VAL_2 ((unsigned) (GS_SET_BC_CB))
 #define XLAT_STR_2 STRINGIFY(GS_SET_BC_CB)
 [GS_CLEAR_BC_CB] = XLAT(GS_CLEAR_BC_CB),
 #define XLAT_VAL_3 ((unsigned) (GS_CLEAR_BC_CB))
 #define XLAT_STR_3 STRINGIFY(GS_CLEAR_BC_CB)
 [GS_BROADCAST] = XLAT(GS_BROADCAST),
 #define XLAT_VAL_4 ((unsigned) (GS_BROADCAST))
 #define XLAT_STR_4 STRINGIFY(GS_BROADCAST)
};
static
const struct xlat s390_guarded_storage_commands[1] = { {
 .data = s390_guarded_storage_commands_xdata,
 .size = ARRAY_SIZE(s390_guarded_storage_commands_xdata),
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
#  ifdef XLAT_VAL_3
  | XLAT_VAL_3
#  endif
#  ifdef XLAT_VAL_4
  | XLAT_VAL_4
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
#  ifdef XLAT_STR_3
  + sizeof(XLAT_STR_3)
#  endif
#  ifdef XLAT_STR_4
  + sizeof(XLAT_STR_4)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
#  undef XLAT_STR_3
#  undef XLAT_VAL_3
#  undef XLAT_STR_4
#  undef XLAT_VAL_4
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */