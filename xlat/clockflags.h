/* Generated by ./xlat/gen.sh from ./xlat/clockflags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat clockflags in mpers mode

# else

static const struct xlat_data clockflags_xdata[] = {
#if defined(TIMER_ABSTIME) || (defined(HAVE_DECL_TIMER_ABSTIME) && HAVE_DECL_TIMER_ABSTIME)
  XLAT(TIMER_ABSTIME),
 #define XLAT_VAL_0 ((unsigned) (TIMER_ABSTIME))
 #define XLAT_STR_0 STRINGIFY(TIMER_ABSTIME)
#endif
};
static
const struct xlat clockflags[1] = { {
 .data = clockflags_xdata,
 .size = ARRAY_SIZE(clockflags_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */