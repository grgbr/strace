/* Generated by ./xlat/gen.sh from ./xlat/rtnl_ifla_af_spec_inet6_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IFLA_INET6_UNSPEC) || (defined(HAVE_DECL_IFLA_INET6_UNSPEC) && HAVE_DECL_IFLA_INET6_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_INET6_UNSPEC) == (0), "IFLA_INET6_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_INET6_UNSPEC 0
#endif
#if defined(IFLA_INET6_FLAGS) || (defined(HAVE_DECL_IFLA_INET6_FLAGS) && HAVE_DECL_IFLA_INET6_FLAGS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_INET6_FLAGS) == (1), "IFLA_INET6_FLAGS != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_INET6_FLAGS 1
#endif
#if defined(IFLA_INET6_CONF) || (defined(HAVE_DECL_IFLA_INET6_CONF) && HAVE_DECL_IFLA_INET6_CONF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_INET6_CONF) == (2), "IFLA_INET6_CONF != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_INET6_CONF 2
#endif
#if defined(IFLA_INET6_STATS) || (defined(HAVE_DECL_IFLA_INET6_STATS) && HAVE_DECL_IFLA_INET6_STATS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_INET6_STATS) == (3), "IFLA_INET6_STATS != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_INET6_STATS 3
#endif
#if defined(IFLA_INET6_MCAST) || (defined(HAVE_DECL_IFLA_INET6_MCAST) && HAVE_DECL_IFLA_INET6_MCAST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_INET6_MCAST) == (4), "IFLA_INET6_MCAST != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_INET6_MCAST 4
#endif
#if defined(IFLA_INET6_CACHEINFO) || (defined(HAVE_DECL_IFLA_INET6_CACHEINFO) && HAVE_DECL_IFLA_INET6_CACHEINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_INET6_CACHEINFO) == (5), "IFLA_INET6_CACHEINFO != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_INET6_CACHEINFO 5
#endif
#if defined(IFLA_INET6_ICMP6STATS) || (defined(HAVE_DECL_IFLA_INET6_ICMP6STATS) && HAVE_DECL_IFLA_INET6_ICMP6STATS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_INET6_ICMP6STATS) == (6), "IFLA_INET6_ICMP6STATS != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_INET6_ICMP6STATS 6
#endif
#if defined(IFLA_INET6_TOKEN) || (defined(HAVE_DECL_IFLA_INET6_TOKEN) && HAVE_DECL_IFLA_INET6_TOKEN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_INET6_TOKEN) == (7), "IFLA_INET6_TOKEN != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_INET6_TOKEN 7
#endif
#if defined(IFLA_INET6_ADDR_GEN_MODE) || (defined(HAVE_DECL_IFLA_INET6_ADDR_GEN_MODE) && HAVE_DECL_IFLA_INET6_ADDR_GEN_MODE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IFLA_INET6_ADDR_GEN_MODE) == (8), "IFLA_INET6_ADDR_GEN_MODE != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IFLA_INET6_ADDR_GEN_MODE 8
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_ifla_af_spec_inet6_attrs in mpers mode

# else

static const struct xlat_data rtnl_ifla_af_spec_inet6_attrs_xdata[] = {
 [IFLA_INET6_UNSPEC] = XLAT(IFLA_INET6_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (IFLA_INET6_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(IFLA_INET6_UNSPEC)
 [IFLA_INET6_FLAGS] = XLAT(IFLA_INET6_FLAGS),
 #define XLAT_VAL_1 ((unsigned) (IFLA_INET6_FLAGS))
 #define XLAT_STR_1 STRINGIFY(IFLA_INET6_FLAGS)
 [IFLA_INET6_CONF] = XLAT(IFLA_INET6_CONF),
 #define XLAT_VAL_2 ((unsigned) (IFLA_INET6_CONF))
 #define XLAT_STR_2 STRINGIFY(IFLA_INET6_CONF)
 [IFLA_INET6_STATS] = XLAT(IFLA_INET6_STATS),
 #define XLAT_VAL_3 ((unsigned) (IFLA_INET6_STATS))
 #define XLAT_STR_3 STRINGIFY(IFLA_INET6_STATS)
 [IFLA_INET6_MCAST] = XLAT(IFLA_INET6_MCAST),
 #define XLAT_VAL_4 ((unsigned) (IFLA_INET6_MCAST))
 #define XLAT_STR_4 STRINGIFY(IFLA_INET6_MCAST)
 [IFLA_INET6_CACHEINFO] = XLAT(IFLA_INET6_CACHEINFO),
 #define XLAT_VAL_5 ((unsigned) (IFLA_INET6_CACHEINFO))
 #define XLAT_STR_5 STRINGIFY(IFLA_INET6_CACHEINFO)
 [IFLA_INET6_ICMP6STATS] = XLAT(IFLA_INET6_ICMP6STATS),
 #define XLAT_VAL_6 ((unsigned) (IFLA_INET6_ICMP6STATS))
 #define XLAT_STR_6 STRINGIFY(IFLA_INET6_ICMP6STATS)
 [IFLA_INET6_TOKEN] = XLAT(IFLA_INET6_TOKEN),
 #define XLAT_VAL_7 ((unsigned) (IFLA_INET6_TOKEN))
 #define XLAT_STR_7 STRINGIFY(IFLA_INET6_TOKEN)
 [IFLA_INET6_ADDR_GEN_MODE] = XLAT(IFLA_INET6_ADDR_GEN_MODE),
 #define XLAT_VAL_8 ((unsigned) (IFLA_INET6_ADDR_GEN_MODE))
 #define XLAT_STR_8 STRINGIFY(IFLA_INET6_ADDR_GEN_MODE)
};
static
const struct xlat rtnl_ifla_af_spec_inet6_attrs[1] = { {
 .data = rtnl_ifla_af_spec_inet6_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_ifla_af_spec_inet6_attrs_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */