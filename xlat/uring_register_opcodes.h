/* Generated by ./xlat/gen.sh from ./xlat/uring_register_opcodes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IORING_REGISTER_BUFFERS) || (defined(HAVE_DECL_IORING_REGISTER_BUFFERS) && HAVE_DECL_IORING_REGISTER_BUFFERS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_REGISTER_BUFFERS) == (0U), "IORING_REGISTER_BUFFERS != 0U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_REGISTER_BUFFERS 0U
#endif
#if defined(IORING_UNREGISTER_BUFFERS) || (defined(HAVE_DECL_IORING_UNREGISTER_BUFFERS) && HAVE_DECL_IORING_UNREGISTER_BUFFERS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_UNREGISTER_BUFFERS) == (1U), "IORING_UNREGISTER_BUFFERS != 1U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_UNREGISTER_BUFFERS 1U
#endif
#if defined(IORING_REGISTER_FILES) || (defined(HAVE_DECL_IORING_REGISTER_FILES) && HAVE_DECL_IORING_REGISTER_FILES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_REGISTER_FILES) == (2U), "IORING_REGISTER_FILES != 2U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_REGISTER_FILES 2U
#endif
#if defined(IORING_UNREGISTER_FILES) || (defined(HAVE_DECL_IORING_UNREGISTER_FILES) && HAVE_DECL_IORING_UNREGISTER_FILES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_UNREGISTER_FILES) == (3U), "IORING_UNREGISTER_FILES != 3U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_UNREGISTER_FILES 3U
#endif
#if defined(IORING_REGISTER_EVENTFD) || (defined(HAVE_DECL_IORING_REGISTER_EVENTFD) && HAVE_DECL_IORING_REGISTER_EVENTFD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_REGISTER_EVENTFD) == (4U), "IORING_REGISTER_EVENTFD != 4U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_REGISTER_EVENTFD 4U
#endif
#if defined(IORING_UNREGISTER_EVENTFD) || (defined(HAVE_DECL_IORING_UNREGISTER_EVENTFD) && HAVE_DECL_IORING_UNREGISTER_EVENTFD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_UNREGISTER_EVENTFD) == (5U), "IORING_UNREGISTER_EVENTFD != 5U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_UNREGISTER_EVENTFD 5U
#endif
#if defined(IORING_REGISTER_FILES_UPDATE) || (defined(HAVE_DECL_IORING_REGISTER_FILES_UPDATE) && HAVE_DECL_IORING_REGISTER_FILES_UPDATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_REGISTER_FILES_UPDATE) == (6U), "IORING_REGISTER_FILES_UPDATE != 6U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_REGISTER_FILES_UPDATE 6U
#endif
#if defined(IORING_REGISTER_EVENTFD_ASYNC) || (defined(HAVE_DECL_IORING_REGISTER_EVENTFD_ASYNC) && HAVE_DECL_IORING_REGISTER_EVENTFD_ASYNC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_REGISTER_EVENTFD_ASYNC) == (7U), "IORING_REGISTER_EVENTFD_ASYNC != 7U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_REGISTER_EVENTFD_ASYNC 7U
#endif
#if defined(IORING_REGISTER_PROBE) || (defined(HAVE_DECL_IORING_REGISTER_PROBE) && HAVE_DECL_IORING_REGISTER_PROBE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_REGISTER_PROBE) == (8U), "IORING_REGISTER_PROBE != 8U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_REGISTER_PROBE 8U
#endif
#if defined(IORING_REGISTER_PERSONALITY) || (defined(HAVE_DECL_IORING_REGISTER_PERSONALITY) && HAVE_DECL_IORING_REGISTER_PERSONALITY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_REGISTER_PERSONALITY) == (9U), "IORING_REGISTER_PERSONALITY != 9U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_REGISTER_PERSONALITY 9U
#endif
#if defined(IORING_UNREGISTER_PERSONALITY) || (defined(HAVE_DECL_IORING_UNREGISTER_PERSONALITY) && HAVE_DECL_IORING_UNREGISTER_PERSONALITY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IORING_UNREGISTER_PERSONALITY) == (10U), "IORING_UNREGISTER_PERSONALITY != 10U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IORING_UNREGISTER_PERSONALITY 10U
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat uring_register_opcodes in mpers mode

# else

static const struct xlat_data uring_register_opcodes_xdata[] = {
 [IORING_REGISTER_BUFFERS] = XLAT(IORING_REGISTER_BUFFERS),
 #define XLAT_VAL_0 ((unsigned) (IORING_REGISTER_BUFFERS))
 #define XLAT_STR_0 STRINGIFY(IORING_REGISTER_BUFFERS)
 [IORING_UNREGISTER_BUFFERS] = XLAT(IORING_UNREGISTER_BUFFERS),
 #define XLAT_VAL_1 ((unsigned) (IORING_UNREGISTER_BUFFERS))
 #define XLAT_STR_1 STRINGIFY(IORING_UNREGISTER_BUFFERS)
 [IORING_REGISTER_FILES] = XLAT(IORING_REGISTER_FILES),
 #define XLAT_VAL_2 ((unsigned) (IORING_REGISTER_FILES))
 #define XLAT_STR_2 STRINGIFY(IORING_REGISTER_FILES)
 [IORING_UNREGISTER_FILES] = XLAT(IORING_UNREGISTER_FILES),
 #define XLAT_VAL_3 ((unsigned) (IORING_UNREGISTER_FILES))
 #define XLAT_STR_3 STRINGIFY(IORING_UNREGISTER_FILES)
 [IORING_REGISTER_EVENTFD] = XLAT(IORING_REGISTER_EVENTFD),
 #define XLAT_VAL_4 ((unsigned) (IORING_REGISTER_EVENTFD))
 #define XLAT_STR_4 STRINGIFY(IORING_REGISTER_EVENTFD)
 [IORING_UNREGISTER_EVENTFD] = XLAT(IORING_UNREGISTER_EVENTFD),
 #define XLAT_VAL_5 ((unsigned) (IORING_UNREGISTER_EVENTFD))
 #define XLAT_STR_5 STRINGIFY(IORING_UNREGISTER_EVENTFD)
 [IORING_REGISTER_FILES_UPDATE] = XLAT(IORING_REGISTER_FILES_UPDATE),
 #define XLAT_VAL_6 ((unsigned) (IORING_REGISTER_FILES_UPDATE))
 #define XLAT_STR_6 STRINGIFY(IORING_REGISTER_FILES_UPDATE)
 [IORING_REGISTER_EVENTFD_ASYNC] = XLAT(IORING_REGISTER_EVENTFD_ASYNC),
 #define XLAT_VAL_7 ((unsigned) (IORING_REGISTER_EVENTFD_ASYNC))
 #define XLAT_STR_7 STRINGIFY(IORING_REGISTER_EVENTFD_ASYNC)
 [IORING_REGISTER_PROBE] = XLAT(IORING_REGISTER_PROBE),
 #define XLAT_VAL_8 ((unsigned) (IORING_REGISTER_PROBE))
 #define XLAT_STR_8 STRINGIFY(IORING_REGISTER_PROBE)
 [IORING_REGISTER_PERSONALITY] = XLAT(IORING_REGISTER_PERSONALITY),
 #define XLAT_VAL_9 ((unsigned) (IORING_REGISTER_PERSONALITY))
 #define XLAT_STR_9 STRINGIFY(IORING_REGISTER_PERSONALITY)
 [IORING_UNREGISTER_PERSONALITY] = XLAT(IORING_UNREGISTER_PERSONALITY),
 #define XLAT_VAL_10 ((unsigned) (IORING_UNREGISTER_PERSONALITY))
 #define XLAT_STR_10 STRINGIFY(IORING_UNREGISTER_PERSONALITY)
};
static
const struct xlat uring_register_opcodes[1] = { {
 .data = uring_register_opcodes_xdata,
 .size = ARRAY_SIZE(uring_register_opcodes_xdata),
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
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
#  endif
#  ifdef XLAT_VAL_7
  | XLAT_VAL_7
#  endif
#  ifdef XLAT_VAL_8
  | XLAT_VAL_8
#  endif
#  ifdef XLAT_VAL_9
  | XLAT_VAL_9
#  endif
#  ifdef XLAT_VAL_10
  | XLAT_VAL_10
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
#  ifdef XLAT_STR_6
  + sizeof(XLAT_STR_6)
#  endif
#  ifdef XLAT_STR_7
  + sizeof(XLAT_STR_7)
#  endif
#  ifdef XLAT_STR_8
  + sizeof(XLAT_STR_8)
#  endif
#  ifdef XLAT_STR_9
  + sizeof(XLAT_STR_9)
#  endif
#  ifdef XLAT_STR_10
  + sizeof(XLAT_STR_10)
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
#  undef XLAT_STR_6
#  undef XLAT_VAL_6
#  undef XLAT_STR_7
#  undef XLAT_VAL_7
#  undef XLAT_STR_8
#  undef XLAT_VAL_8
#  undef XLAT_STR_9
#  undef XLAT_VAL_9
#  undef XLAT_STR_10
#  undef XLAT_VAL_10
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */