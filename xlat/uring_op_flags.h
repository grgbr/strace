/* Generated by ./xlat/gen.sh from ./xlat/uring_op_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IO_URING_OP_SUPPORTED) || (defined(HAVE_DECL_IO_URING_OP_SUPPORTED) && HAVE_DECL_IO_URING_OP_SUPPORTED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IO_URING_OP_SUPPORTED) == ((1U << 0)), "IO_URING_OP_SUPPORTED != (1U << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IO_URING_OP_SUPPORTED (1U << 0)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat uring_op_flags in mpers mode

# else

static const struct xlat_data uring_op_flags_xdata[] = {
 XLAT(IO_URING_OP_SUPPORTED),
 #define XLAT_VAL_0 ((unsigned) (IO_URING_OP_SUPPORTED))
 #define XLAT_STR_0 STRINGIFY(IO_URING_OP_SUPPORTED)
};
static
const struct xlat uring_op_flags[1] = { {
 .data = uring_op_flags_xdata,
 .size = ARRAY_SIZE(uring_op_flags_xdata),
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
