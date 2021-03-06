/* Generated by ./xlat/gen.sh from ./xlat/open_resolve_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(RESOLVE_NO_XDEV) || (defined(HAVE_DECL_RESOLVE_NO_XDEV) && HAVE_DECL_RESOLVE_NO_XDEV)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RESOLVE_NO_XDEV) == (0x01), "RESOLVE_NO_XDEV != 0x01");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RESOLVE_NO_XDEV 0x01
#endif
#if defined(RESOLVE_NO_MAGICLINKS) || (defined(HAVE_DECL_RESOLVE_NO_MAGICLINKS) && HAVE_DECL_RESOLVE_NO_MAGICLINKS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RESOLVE_NO_MAGICLINKS) == (0x02), "RESOLVE_NO_MAGICLINKS != 0x02");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RESOLVE_NO_MAGICLINKS 0x02
#endif
#if defined(RESOLVE_NO_SYMLINKS) || (defined(HAVE_DECL_RESOLVE_NO_SYMLINKS) && HAVE_DECL_RESOLVE_NO_SYMLINKS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RESOLVE_NO_SYMLINKS) == (0x04), "RESOLVE_NO_SYMLINKS != 0x04");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RESOLVE_NO_SYMLINKS 0x04
#endif
#if defined(RESOLVE_BENEATH) || (defined(HAVE_DECL_RESOLVE_BENEATH) && HAVE_DECL_RESOLVE_BENEATH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RESOLVE_BENEATH) == (0x08), "RESOLVE_BENEATH != 0x08");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RESOLVE_BENEATH 0x08
#endif
#if defined(RESOLVE_IN_ROOT) || (defined(HAVE_DECL_RESOLVE_IN_ROOT) && HAVE_DECL_RESOLVE_IN_ROOT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RESOLVE_IN_ROOT) == (0x10), "RESOLVE_IN_ROOT != 0x10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RESOLVE_IN_ROOT 0x10
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat open_resolve_flags in mpers mode

# else

static const struct xlat_data open_resolve_flags_xdata[] = {
 XLAT(RESOLVE_NO_XDEV),
 #define XLAT_VAL_0 ((unsigned) (RESOLVE_NO_XDEV))
 #define XLAT_STR_0 STRINGIFY(RESOLVE_NO_XDEV)
 XLAT(RESOLVE_NO_MAGICLINKS),
 #define XLAT_VAL_1 ((unsigned) (RESOLVE_NO_MAGICLINKS))
 #define XLAT_STR_1 STRINGIFY(RESOLVE_NO_MAGICLINKS)
 XLAT(RESOLVE_NO_SYMLINKS),
 #define XLAT_VAL_2 ((unsigned) (RESOLVE_NO_SYMLINKS))
 #define XLAT_STR_2 STRINGIFY(RESOLVE_NO_SYMLINKS)
 XLAT(RESOLVE_BENEATH),
 #define XLAT_VAL_3 ((unsigned) (RESOLVE_BENEATH))
 #define XLAT_STR_3 STRINGIFY(RESOLVE_BENEATH)
 XLAT(RESOLVE_IN_ROOT),
 #define XLAT_VAL_4 ((unsigned) (RESOLVE_IN_ROOT))
 #define XLAT_STR_4 STRINGIFY(RESOLVE_IN_ROOT)
};
static
const struct xlat open_resolve_flags[1] = { {
 .data = open_resolve_flags_xdata,
 .size = ARRAY_SIZE(open_resolve_flags_xdata),
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
