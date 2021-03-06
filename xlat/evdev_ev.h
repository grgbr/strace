/* Generated by ./xlat/gen.sh from ./xlat/evdev_ev.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(EV_SYN) || (defined(HAVE_DECL_EV_SYN) && HAVE_DECL_EV_SYN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EV_SYN) == (0x00), "EV_SYN != 0x00");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EV_SYN 0x00
#endif
#if defined(EV_KEY) || (defined(HAVE_DECL_EV_KEY) && HAVE_DECL_EV_KEY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EV_KEY) == (0x01), "EV_KEY != 0x01");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EV_KEY 0x01
#endif
#if defined(EV_REL) || (defined(HAVE_DECL_EV_REL) && HAVE_DECL_EV_REL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EV_REL) == (0x02), "EV_REL != 0x02");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EV_REL 0x02
#endif
#if defined(EV_ABS) || (defined(HAVE_DECL_EV_ABS) && HAVE_DECL_EV_ABS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EV_ABS) == (0x03), "EV_ABS != 0x03");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EV_ABS 0x03
#endif
#if defined(EV_MSC) || (defined(HAVE_DECL_EV_MSC) && HAVE_DECL_EV_MSC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EV_MSC) == (0x04), "EV_MSC != 0x04");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EV_MSC 0x04
#endif
#if defined(EV_SW) || (defined(HAVE_DECL_EV_SW) && HAVE_DECL_EV_SW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EV_SW) == (0x05), "EV_SW != 0x05");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EV_SW 0x05
#endif
#if defined(EV_LED) || (defined(HAVE_DECL_EV_LED) && HAVE_DECL_EV_LED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EV_LED) == (0x11), "EV_LED != 0x11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EV_LED 0x11
#endif
#if defined(EV_SND) || (defined(HAVE_DECL_EV_SND) && HAVE_DECL_EV_SND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EV_SND) == (0x12), "EV_SND != 0x12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EV_SND 0x12
#endif
#if defined(EV_REP) || (defined(HAVE_DECL_EV_REP) && HAVE_DECL_EV_REP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EV_REP) == (0x14), "EV_REP != 0x14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EV_REP 0x14
#endif
#if defined(EV_FF) || (defined(HAVE_DECL_EV_FF) && HAVE_DECL_EV_FF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EV_FF) == (0x15), "EV_FF != 0x15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EV_FF 0x15
#endif
#if defined(EV_PWR) || (defined(HAVE_DECL_EV_PWR) && HAVE_DECL_EV_PWR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EV_PWR) == (0x16), "EV_PWR != 0x16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EV_PWR 0x16
#endif
#if defined(EV_FF_STATUS) || (defined(HAVE_DECL_EV_FF_STATUS) && HAVE_DECL_EV_FF_STATUS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EV_FF_STATUS) == (0x17), "EV_FF_STATUS != 0x17");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EV_FF_STATUS 0x17
#endif

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

static const struct xlat_data evdev_ev_xdata[] = {
 XLAT(EV_SYN),
 #define XLAT_VAL_0 ((unsigned) (EV_SYN))
 #define XLAT_STR_0 STRINGIFY(EV_SYN)
 XLAT(EV_KEY),
 #define XLAT_VAL_1 ((unsigned) (EV_KEY))
 #define XLAT_STR_1 STRINGIFY(EV_KEY)
 XLAT(EV_REL),
 #define XLAT_VAL_2 ((unsigned) (EV_REL))
 #define XLAT_STR_2 STRINGIFY(EV_REL)
 XLAT(EV_ABS),
 #define XLAT_VAL_3 ((unsigned) (EV_ABS))
 #define XLAT_STR_3 STRINGIFY(EV_ABS)
 XLAT(EV_MSC),
 #define XLAT_VAL_4 ((unsigned) (EV_MSC))
 #define XLAT_STR_4 STRINGIFY(EV_MSC)
 XLAT(EV_SW),
 #define XLAT_VAL_5 ((unsigned) (EV_SW))
 #define XLAT_STR_5 STRINGIFY(EV_SW)
 XLAT(EV_LED),
 #define XLAT_VAL_6 ((unsigned) (EV_LED))
 #define XLAT_STR_6 STRINGIFY(EV_LED)
 XLAT(EV_SND),
 #define XLAT_VAL_7 ((unsigned) (EV_SND))
 #define XLAT_STR_7 STRINGIFY(EV_SND)
 XLAT(EV_REP),
 #define XLAT_VAL_8 ((unsigned) (EV_REP))
 #define XLAT_STR_8 STRINGIFY(EV_REP)
 XLAT(EV_FF),
 #define XLAT_VAL_9 ((unsigned) (EV_FF))
 #define XLAT_STR_9 STRINGIFY(EV_FF)
 XLAT(EV_PWR),
 #define XLAT_VAL_10 ((unsigned) (EV_PWR))
 #define XLAT_STR_10 STRINGIFY(EV_PWR)
 XLAT(EV_FF_STATUS),
 #define XLAT_VAL_11 ((unsigned) (EV_FF_STATUS))
 #define XLAT_STR_11 STRINGIFY(EV_FF_STATUS)
};
const struct xlat evdev_ev[1] = { {
 .data = evdev_ev_xdata,
 .size = ARRAY_SIZE(evdev_ev_xdata),
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
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
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
#  ifdef XLAT_STR_11
  + sizeof(XLAT_STR_11)
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
#  undef XLAT_STR_11
#  undef XLAT_VAL_11
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
