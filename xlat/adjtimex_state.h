/* Generated by ./xlat/gen.sh from ./xlat/adjtimex_state.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(TIME_OK) || (defined(HAVE_DECL_TIME_OK) && HAVE_DECL_TIME_OK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TIME_OK) == (0), "TIME_OK != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TIME_OK 0
#endif
#if defined(TIME_INS) || (defined(HAVE_DECL_TIME_INS) && HAVE_DECL_TIME_INS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TIME_INS) == (1), "TIME_INS != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TIME_INS 1
#endif
#if defined(TIME_DEL) || (defined(HAVE_DECL_TIME_DEL) && HAVE_DECL_TIME_DEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TIME_DEL) == (2), "TIME_DEL != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TIME_DEL 2
#endif
#if defined(TIME_OOP) || (defined(HAVE_DECL_TIME_OOP) && HAVE_DECL_TIME_OOP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TIME_OOP) == (3), "TIME_OOP != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TIME_OOP 3
#endif
#if defined(TIME_WAIT) || (defined(HAVE_DECL_TIME_WAIT) && HAVE_DECL_TIME_WAIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TIME_WAIT) == (4), "TIME_WAIT != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TIME_WAIT 4
#endif
#if defined(TIME_ERROR) || (defined(HAVE_DECL_TIME_ERROR) && HAVE_DECL_TIME_ERROR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TIME_ERROR) == (5), "TIME_ERROR != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TIME_ERROR 5
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat adjtimex_state in mpers mode

# else

static const struct xlat_data adjtimex_state_xdata[] = {
 [TIME_OK] = XLAT(TIME_OK),
 #define XLAT_VAL_0 ((unsigned) (TIME_OK))
 #define XLAT_STR_0 STRINGIFY(TIME_OK)
 [TIME_INS] = XLAT(TIME_INS),
 #define XLAT_VAL_1 ((unsigned) (TIME_INS))
 #define XLAT_STR_1 STRINGIFY(TIME_INS)
 [TIME_DEL] = XLAT(TIME_DEL),
 #define XLAT_VAL_2 ((unsigned) (TIME_DEL))
 #define XLAT_STR_2 STRINGIFY(TIME_DEL)
 [TIME_OOP] = XLAT(TIME_OOP),
 #define XLAT_VAL_3 ((unsigned) (TIME_OOP))
 #define XLAT_STR_3 STRINGIFY(TIME_OOP)
 [TIME_WAIT] = XLAT(TIME_WAIT),
 #define XLAT_VAL_4 ((unsigned) (TIME_WAIT))
 #define XLAT_STR_4 STRINGIFY(TIME_WAIT)
 [TIME_ERROR] = XLAT(TIME_ERROR),
 #define XLAT_VAL_5 ((unsigned) (TIME_ERROR))
 #define XLAT_STR_5 STRINGIFY(TIME_ERROR)
};
static
const struct xlat adjtimex_state[1] = { {
 .data = adjtimex_state_xdata,
 .size = ARRAY_SIZE(adjtimex_state_xdata),
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
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
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
#  ifdef XLAT_STR_5
  + sizeof(XLAT_STR_5)
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
#  undef XLAT_STR_5
#  undef XLAT_VAL_5
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */