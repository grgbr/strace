/* Generated by ./xlat/gen.sh from ./xlat/uffd_register_ioctl_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat uffd_register_ioctl_flags in mpers mode

# else

static const struct xlat_data uffd_register_ioctl_flags_xdata[] = {
#if defined(_UFFDIO_WAKE) || (defined(HAVE_DECL__UFFDIO_WAKE) && HAVE_DECL__UFFDIO_WAKE)
  XLAT_TYPE_PAIR(uint64_t, 1ULL<<_UFFDIO_WAKE, "1<<_UFFDIO_WAKE"),
 #define XLAT_VAL_0 ((uint64_t) (1ULL<<_UFFDIO_WAKE))
 #define XLAT_STR_0 "1<<_UFFDIO_WAKE"
#endif
#if defined(_UFFDIO_COPY) || (defined(HAVE_DECL__UFFDIO_COPY) && HAVE_DECL__UFFDIO_COPY)
  XLAT_TYPE_PAIR(uint64_t, 1ULL<<_UFFDIO_COPY, "1<<_UFFDIO_COPY"),
 #define XLAT_VAL_1 ((uint64_t) (1ULL<<_UFFDIO_COPY))
 #define XLAT_STR_1 "1<<_UFFDIO_COPY"
#endif
#if defined(_UFFDIO_ZEROPAGE) || (defined(HAVE_DECL__UFFDIO_ZEROPAGE) && HAVE_DECL__UFFDIO_ZEROPAGE)
  XLAT_TYPE_PAIR(uint64_t, 1ULL<<_UFFDIO_ZEROPAGE, "1<<_UFFDIO_ZEROPAGE"),
 #define XLAT_VAL_2 ((uint64_t) (1ULL<<_UFFDIO_ZEROPAGE))
 #define XLAT_STR_2 "1<<_UFFDIO_ZEROPAGE"
#endif
};
static
const struct xlat uffd_register_ioctl_flags[1] = { {
 .data = uffd_register_ioctl_flags_xdata,
 .size = ARRAY_SIZE(uffd_register_ioctl_flags_xdata),
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