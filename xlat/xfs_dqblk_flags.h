/* Generated by ./xlat/gen.sh from ./xlat/xfs_dqblk_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(XFS_USER_QUOTA) || (defined(HAVE_DECL_XFS_USER_QUOTA) && HAVE_DECL_XFS_USER_QUOTA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFS_USER_QUOTA) == ((1<<0)), "XFS_USER_QUOTA != (1<<0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFS_USER_QUOTA (1<<0)
#endif
#if defined(XFS_PROJ_QUOTA) || (defined(HAVE_DECL_XFS_PROJ_QUOTA) && HAVE_DECL_XFS_PROJ_QUOTA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFS_PROJ_QUOTA) == ((1<<1)), "XFS_PROJ_QUOTA != (1<<1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFS_PROJ_QUOTA (1<<1)
#endif
#if defined(XFS_GROUP_QUOTA) || (defined(HAVE_DECL_XFS_GROUP_QUOTA) && HAVE_DECL_XFS_GROUP_QUOTA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFS_GROUP_QUOTA) == ((1<<2)), "XFS_GROUP_QUOTA != (1<<2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFS_GROUP_QUOTA (1<<2)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat xfs_dqblk_flags in mpers mode

# else

static const struct xlat_data xfs_dqblk_flags_xdata[] = {
 XLAT(XFS_USER_QUOTA),
 #define XLAT_VAL_0 ((unsigned) (XFS_USER_QUOTA))
 #define XLAT_STR_0 STRINGIFY(XFS_USER_QUOTA)
 XLAT(XFS_PROJ_QUOTA),
 #define XLAT_VAL_1 ((unsigned) (XFS_PROJ_QUOTA))
 #define XLAT_STR_1 STRINGIFY(XFS_PROJ_QUOTA)
 XLAT(XFS_GROUP_QUOTA),
 #define XLAT_VAL_2 ((unsigned) (XFS_GROUP_QUOTA))
 #define XLAT_STR_2 STRINGIFY(XFS_GROUP_QUOTA)
};
static
const struct xlat xfs_dqblk_flags[1] = { {
 .data = xfs_dqblk_flags_xdata,
 .size = ARRAY_SIZE(xfs_dqblk_flags_xdata),
 .type = XT_NORMAL,
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