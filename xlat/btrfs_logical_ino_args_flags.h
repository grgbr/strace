/* Generated by ./xlat/gen.sh from ./xlat/btrfs_logical_ino_args_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BTRFS_LOGICAL_INO_ARGS_IGNORE_OFFSET) || (defined(HAVE_DECL_BTRFS_LOGICAL_INO_ARGS_IGNORE_OFFSET) && HAVE_DECL_BTRFS_LOGICAL_INO_ARGS_IGNORE_OFFSET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_LOGICAL_INO_ARGS_IGNORE_OFFSET) == ((1ULL << 0)), "BTRFS_LOGICAL_INO_ARGS_IGNORE_OFFSET != (1ULL << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_LOGICAL_INO_ARGS_IGNORE_OFFSET (1ULL << 0)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat btrfs_logical_ino_args_flags[];

# else

static const struct xlat_data btrfs_logical_ino_args_flags_xdata[] = {
 XLAT(BTRFS_LOGICAL_INO_ARGS_IGNORE_OFFSET),
 #define XLAT_VAL_0 ((unsigned) (BTRFS_LOGICAL_INO_ARGS_IGNORE_OFFSET))
 #define XLAT_STR_0 STRINGIFY(BTRFS_LOGICAL_INO_ARGS_IGNORE_OFFSET)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat btrfs_logical_ino_args_flags[1] = { {
 .data = btrfs_logical_ino_args_flags_xdata,
 .size = ARRAY_SIZE(btrfs_logical_ino_args_flags_xdata),
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
