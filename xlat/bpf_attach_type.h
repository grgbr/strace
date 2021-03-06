/* Generated by ./xlat/gen.sh from ./xlat/bpf_attach_type.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_CGROUP_INET_INGRESS) || (defined(HAVE_DECL_BPF_CGROUP_INET_INGRESS) && HAVE_DECL_BPF_CGROUP_INET_INGRESS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_INET_INGRESS) == (0), "BPF_CGROUP_INET_INGRESS != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_INET_INGRESS 0
#endif
#if defined(BPF_CGROUP_INET_EGRESS) || (defined(HAVE_DECL_BPF_CGROUP_INET_EGRESS) && HAVE_DECL_BPF_CGROUP_INET_EGRESS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_INET_EGRESS) == (1), "BPF_CGROUP_INET_EGRESS != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_INET_EGRESS 1
#endif
#if defined(BPF_CGROUP_INET_SOCK_CREATE) || (defined(HAVE_DECL_BPF_CGROUP_INET_SOCK_CREATE) && HAVE_DECL_BPF_CGROUP_INET_SOCK_CREATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_INET_SOCK_CREATE) == (2), "BPF_CGROUP_INET_SOCK_CREATE != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_INET_SOCK_CREATE 2
#endif
#if defined(BPF_CGROUP_SOCK_OPS) || (defined(HAVE_DECL_BPF_CGROUP_SOCK_OPS) && HAVE_DECL_BPF_CGROUP_SOCK_OPS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_SOCK_OPS) == (3), "BPF_CGROUP_SOCK_OPS != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_SOCK_OPS 3
#endif
#if defined(BPF_SK_SKB_STREAM_PARSER) || (defined(HAVE_DECL_BPF_SK_SKB_STREAM_PARSER) && HAVE_DECL_BPF_SK_SKB_STREAM_PARSER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_SK_SKB_STREAM_PARSER) == (4), "BPF_SK_SKB_STREAM_PARSER != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_SK_SKB_STREAM_PARSER 4
#endif
#if defined(BPF_SK_SKB_STREAM_VERDICT) || (defined(HAVE_DECL_BPF_SK_SKB_STREAM_VERDICT) && HAVE_DECL_BPF_SK_SKB_STREAM_VERDICT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_SK_SKB_STREAM_VERDICT) == (5), "BPF_SK_SKB_STREAM_VERDICT != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_SK_SKB_STREAM_VERDICT 5
#endif
#if defined(BPF_CGROUP_DEVICE) || (defined(HAVE_DECL_BPF_CGROUP_DEVICE) && HAVE_DECL_BPF_CGROUP_DEVICE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_DEVICE) == (6), "BPF_CGROUP_DEVICE != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_DEVICE 6
#endif
#if defined(BPF_SK_MSG_VERDICT) || (defined(HAVE_DECL_BPF_SK_MSG_VERDICT) && HAVE_DECL_BPF_SK_MSG_VERDICT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_SK_MSG_VERDICT) == (7), "BPF_SK_MSG_VERDICT != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_SK_MSG_VERDICT 7
#endif
#if defined(BPF_CGROUP_INET4_BIND) || (defined(HAVE_DECL_BPF_CGROUP_INET4_BIND) && HAVE_DECL_BPF_CGROUP_INET4_BIND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_INET4_BIND) == (8), "BPF_CGROUP_INET4_BIND != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_INET4_BIND 8
#endif
#if defined(BPF_CGROUP_INET6_BIND) || (defined(HAVE_DECL_BPF_CGROUP_INET6_BIND) && HAVE_DECL_BPF_CGROUP_INET6_BIND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_INET6_BIND) == (9), "BPF_CGROUP_INET6_BIND != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_INET6_BIND 9
#endif
#if defined(BPF_CGROUP_INET4_CONNECT) || (defined(HAVE_DECL_BPF_CGROUP_INET4_CONNECT) && HAVE_DECL_BPF_CGROUP_INET4_CONNECT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_INET4_CONNECT) == (10), "BPF_CGROUP_INET4_CONNECT != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_INET4_CONNECT 10
#endif
#if defined(BPF_CGROUP_INET6_CONNECT) || (defined(HAVE_DECL_BPF_CGROUP_INET6_CONNECT) && HAVE_DECL_BPF_CGROUP_INET6_CONNECT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_INET6_CONNECT) == (11), "BPF_CGROUP_INET6_CONNECT != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_INET6_CONNECT 11
#endif
#if defined(BPF_CGROUP_INET4_POST_BIND) || (defined(HAVE_DECL_BPF_CGROUP_INET4_POST_BIND) && HAVE_DECL_BPF_CGROUP_INET4_POST_BIND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_INET4_POST_BIND) == (12), "BPF_CGROUP_INET4_POST_BIND != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_INET4_POST_BIND 12
#endif
#if defined(BPF_CGROUP_INET6_POST_BIND) || (defined(HAVE_DECL_BPF_CGROUP_INET6_POST_BIND) && HAVE_DECL_BPF_CGROUP_INET6_POST_BIND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_INET6_POST_BIND) == (13), "BPF_CGROUP_INET6_POST_BIND != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_INET6_POST_BIND 13
#endif
#if defined(BPF_CGROUP_UDP4_SENDMSG) || (defined(HAVE_DECL_BPF_CGROUP_UDP4_SENDMSG) && HAVE_DECL_BPF_CGROUP_UDP4_SENDMSG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_UDP4_SENDMSG) == (14), "BPF_CGROUP_UDP4_SENDMSG != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_UDP4_SENDMSG 14
#endif
#if defined(BPF_CGROUP_UDP6_SENDMSG) || (defined(HAVE_DECL_BPF_CGROUP_UDP6_SENDMSG) && HAVE_DECL_BPF_CGROUP_UDP6_SENDMSG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_UDP6_SENDMSG) == (15), "BPF_CGROUP_UDP6_SENDMSG != 15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_UDP6_SENDMSG 15
#endif
#if defined(BPF_LIRC_MODE2) || (defined(HAVE_DECL_BPF_LIRC_MODE2) && HAVE_DECL_BPF_LIRC_MODE2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_LIRC_MODE2) == (16), "BPF_LIRC_MODE2 != 16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_LIRC_MODE2 16
#endif
#if defined(BPF_FLOW_DISSECTOR) || (defined(HAVE_DECL_BPF_FLOW_DISSECTOR) && HAVE_DECL_BPF_FLOW_DISSECTOR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_FLOW_DISSECTOR) == (17), "BPF_FLOW_DISSECTOR != 17");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_FLOW_DISSECTOR 17
#endif
#if defined(BPF_CGROUP_SYSCTL) || (defined(HAVE_DECL_BPF_CGROUP_SYSCTL) && HAVE_DECL_BPF_CGROUP_SYSCTL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_SYSCTL) == (18), "BPF_CGROUP_SYSCTL != 18");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_SYSCTL 18
#endif
#if defined(BPF_CGROUP_UDP4_RECVMSG) || (defined(HAVE_DECL_BPF_CGROUP_UDP4_RECVMSG) && HAVE_DECL_BPF_CGROUP_UDP4_RECVMSG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_UDP4_RECVMSG) == (19), "BPF_CGROUP_UDP4_RECVMSG != 19");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_UDP4_RECVMSG 19
#endif
#if defined(BPF_CGROUP_UDP6_RECVMSG) || (defined(HAVE_DECL_BPF_CGROUP_UDP6_RECVMSG) && HAVE_DECL_BPF_CGROUP_UDP6_RECVMSG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_UDP6_RECVMSG) == (20), "BPF_CGROUP_UDP6_RECVMSG != 20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_UDP6_RECVMSG 20
#endif
#if defined(BPF_CGROUP_GETSOCKOPT) || (defined(HAVE_DECL_BPF_CGROUP_GETSOCKOPT) && HAVE_DECL_BPF_CGROUP_GETSOCKOPT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_GETSOCKOPT) == (21), "BPF_CGROUP_GETSOCKOPT != 21");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_GETSOCKOPT 21
#endif
#if defined(BPF_CGROUP_SETSOCKOPT) || (defined(HAVE_DECL_BPF_CGROUP_SETSOCKOPT) && HAVE_DECL_BPF_CGROUP_SETSOCKOPT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CGROUP_SETSOCKOPT) == (22), "BPF_CGROUP_SETSOCKOPT != 22");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CGROUP_SETSOCKOPT 22
#endif
#if defined(BPF_TRACE_RAW_TP) || (defined(HAVE_DECL_BPF_TRACE_RAW_TP) && HAVE_DECL_BPF_TRACE_RAW_TP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_TRACE_RAW_TP) == (23), "BPF_TRACE_RAW_TP != 23");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_TRACE_RAW_TP 23
#endif
#if defined(BPF_TRACE_FENTRY) || (defined(HAVE_DECL_BPF_TRACE_FENTRY) && HAVE_DECL_BPF_TRACE_FENTRY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_TRACE_FENTRY) == (24), "BPF_TRACE_FENTRY != 24");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_TRACE_FENTRY 24
#endif
#if defined(BPF_TRACE_FEXIT) || (defined(HAVE_DECL_BPF_TRACE_FEXIT) && HAVE_DECL_BPF_TRACE_FEXIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_TRACE_FEXIT) == (25), "BPF_TRACE_FEXIT != 25");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_TRACE_FEXIT 25
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_attach_type in mpers mode

# else

static const struct xlat_data bpf_attach_type_xdata[] = {
 [BPF_CGROUP_INET_INGRESS] = XLAT(BPF_CGROUP_INET_INGRESS),
 #define XLAT_VAL_0 ((unsigned) (BPF_CGROUP_INET_INGRESS))
 #define XLAT_STR_0 STRINGIFY(BPF_CGROUP_INET_INGRESS)
 [BPF_CGROUP_INET_EGRESS] = XLAT(BPF_CGROUP_INET_EGRESS),
 #define XLAT_VAL_1 ((unsigned) (BPF_CGROUP_INET_EGRESS))
 #define XLAT_STR_1 STRINGIFY(BPF_CGROUP_INET_EGRESS)
 [BPF_CGROUP_INET_SOCK_CREATE] = XLAT(BPF_CGROUP_INET_SOCK_CREATE),
 #define XLAT_VAL_2 ((unsigned) (BPF_CGROUP_INET_SOCK_CREATE))
 #define XLAT_STR_2 STRINGIFY(BPF_CGROUP_INET_SOCK_CREATE)
 [BPF_CGROUP_SOCK_OPS] = XLAT(BPF_CGROUP_SOCK_OPS),
 #define XLAT_VAL_3 ((unsigned) (BPF_CGROUP_SOCK_OPS))
 #define XLAT_STR_3 STRINGIFY(BPF_CGROUP_SOCK_OPS)
 [BPF_SK_SKB_STREAM_PARSER] = XLAT(BPF_SK_SKB_STREAM_PARSER),
 #define XLAT_VAL_4 ((unsigned) (BPF_SK_SKB_STREAM_PARSER))
 #define XLAT_STR_4 STRINGIFY(BPF_SK_SKB_STREAM_PARSER)
 [BPF_SK_SKB_STREAM_VERDICT] = XLAT(BPF_SK_SKB_STREAM_VERDICT),
 #define XLAT_VAL_5 ((unsigned) (BPF_SK_SKB_STREAM_VERDICT))
 #define XLAT_STR_5 STRINGIFY(BPF_SK_SKB_STREAM_VERDICT)
 [BPF_CGROUP_DEVICE] = XLAT(BPF_CGROUP_DEVICE),
 #define XLAT_VAL_6 ((unsigned) (BPF_CGROUP_DEVICE))
 #define XLAT_STR_6 STRINGIFY(BPF_CGROUP_DEVICE)
 [BPF_SK_MSG_VERDICT] = XLAT(BPF_SK_MSG_VERDICT),
 #define XLAT_VAL_7 ((unsigned) (BPF_SK_MSG_VERDICT))
 #define XLAT_STR_7 STRINGIFY(BPF_SK_MSG_VERDICT)
 [BPF_CGROUP_INET4_BIND] = XLAT(BPF_CGROUP_INET4_BIND),
 #define XLAT_VAL_8 ((unsigned) (BPF_CGROUP_INET4_BIND))
 #define XLAT_STR_8 STRINGIFY(BPF_CGROUP_INET4_BIND)
 [BPF_CGROUP_INET6_BIND] = XLAT(BPF_CGROUP_INET6_BIND),
 #define XLAT_VAL_9 ((unsigned) (BPF_CGROUP_INET6_BIND))
 #define XLAT_STR_9 STRINGIFY(BPF_CGROUP_INET6_BIND)
 [BPF_CGROUP_INET4_CONNECT] = XLAT(BPF_CGROUP_INET4_CONNECT),
 #define XLAT_VAL_10 ((unsigned) (BPF_CGROUP_INET4_CONNECT))
 #define XLAT_STR_10 STRINGIFY(BPF_CGROUP_INET4_CONNECT)
 [BPF_CGROUP_INET6_CONNECT] = XLAT(BPF_CGROUP_INET6_CONNECT),
 #define XLAT_VAL_11 ((unsigned) (BPF_CGROUP_INET6_CONNECT))
 #define XLAT_STR_11 STRINGIFY(BPF_CGROUP_INET6_CONNECT)
 [BPF_CGROUP_INET4_POST_BIND] = XLAT(BPF_CGROUP_INET4_POST_BIND),
 #define XLAT_VAL_12 ((unsigned) (BPF_CGROUP_INET4_POST_BIND))
 #define XLAT_STR_12 STRINGIFY(BPF_CGROUP_INET4_POST_BIND)
 [BPF_CGROUP_INET6_POST_BIND] = XLAT(BPF_CGROUP_INET6_POST_BIND),
 #define XLAT_VAL_13 ((unsigned) (BPF_CGROUP_INET6_POST_BIND))
 #define XLAT_STR_13 STRINGIFY(BPF_CGROUP_INET6_POST_BIND)
 [BPF_CGROUP_UDP4_SENDMSG] = XLAT(BPF_CGROUP_UDP4_SENDMSG),
 #define XLAT_VAL_14 ((unsigned) (BPF_CGROUP_UDP4_SENDMSG))
 #define XLAT_STR_14 STRINGIFY(BPF_CGROUP_UDP4_SENDMSG)
 [BPF_CGROUP_UDP6_SENDMSG] = XLAT(BPF_CGROUP_UDP6_SENDMSG),
 #define XLAT_VAL_15 ((unsigned) (BPF_CGROUP_UDP6_SENDMSG))
 #define XLAT_STR_15 STRINGIFY(BPF_CGROUP_UDP6_SENDMSG)
 [BPF_LIRC_MODE2] = XLAT(BPF_LIRC_MODE2),
 #define XLAT_VAL_16 ((unsigned) (BPF_LIRC_MODE2))
 #define XLAT_STR_16 STRINGIFY(BPF_LIRC_MODE2)
 [BPF_FLOW_DISSECTOR] = XLAT(BPF_FLOW_DISSECTOR),
 #define XLAT_VAL_17 ((unsigned) (BPF_FLOW_DISSECTOR))
 #define XLAT_STR_17 STRINGIFY(BPF_FLOW_DISSECTOR)
 [BPF_CGROUP_SYSCTL] = XLAT(BPF_CGROUP_SYSCTL),
 #define XLAT_VAL_18 ((unsigned) (BPF_CGROUP_SYSCTL))
 #define XLAT_STR_18 STRINGIFY(BPF_CGROUP_SYSCTL)
 [BPF_CGROUP_UDP4_RECVMSG] = XLAT(BPF_CGROUP_UDP4_RECVMSG),
 #define XLAT_VAL_19 ((unsigned) (BPF_CGROUP_UDP4_RECVMSG))
 #define XLAT_STR_19 STRINGIFY(BPF_CGROUP_UDP4_RECVMSG)
 [BPF_CGROUP_UDP6_RECVMSG] = XLAT(BPF_CGROUP_UDP6_RECVMSG),
 #define XLAT_VAL_20 ((unsigned) (BPF_CGROUP_UDP6_RECVMSG))
 #define XLAT_STR_20 STRINGIFY(BPF_CGROUP_UDP6_RECVMSG)
 [BPF_CGROUP_GETSOCKOPT] = XLAT(BPF_CGROUP_GETSOCKOPT),
 #define XLAT_VAL_21 ((unsigned) (BPF_CGROUP_GETSOCKOPT))
 #define XLAT_STR_21 STRINGIFY(BPF_CGROUP_GETSOCKOPT)
 [BPF_CGROUP_SETSOCKOPT] = XLAT(BPF_CGROUP_SETSOCKOPT),
 #define XLAT_VAL_22 ((unsigned) (BPF_CGROUP_SETSOCKOPT))
 #define XLAT_STR_22 STRINGIFY(BPF_CGROUP_SETSOCKOPT)
 [BPF_TRACE_RAW_TP] = XLAT(BPF_TRACE_RAW_TP),
 #define XLAT_VAL_23 ((unsigned) (BPF_TRACE_RAW_TP))
 #define XLAT_STR_23 STRINGIFY(BPF_TRACE_RAW_TP)
 [BPF_TRACE_FENTRY] = XLAT(BPF_TRACE_FENTRY),
 #define XLAT_VAL_24 ((unsigned) (BPF_TRACE_FENTRY))
 #define XLAT_STR_24 STRINGIFY(BPF_TRACE_FENTRY)
 [BPF_TRACE_FEXIT] = XLAT(BPF_TRACE_FEXIT),
 #define XLAT_VAL_25 ((unsigned) (BPF_TRACE_FEXIT))
 #define XLAT_STR_25 STRINGIFY(BPF_TRACE_FEXIT)
};
static
const struct xlat bpf_attach_type[1] = { {
 .data = bpf_attach_type_xdata,
 .size = ARRAY_SIZE(bpf_attach_type_xdata),
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
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
#  endif
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
#  endif
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
#  endif
#  ifdef XLAT_VAL_15
  | XLAT_VAL_15
#  endif
#  ifdef XLAT_VAL_16
  | XLAT_VAL_16
#  endif
#  ifdef XLAT_VAL_17
  | XLAT_VAL_17
#  endif
#  ifdef XLAT_VAL_18
  | XLAT_VAL_18
#  endif
#  ifdef XLAT_VAL_19
  | XLAT_VAL_19
#  endif
#  ifdef XLAT_VAL_20
  | XLAT_VAL_20
#  endif
#  ifdef XLAT_VAL_21
  | XLAT_VAL_21
#  endif
#  ifdef XLAT_VAL_22
  | XLAT_VAL_22
#  endif
#  ifdef XLAT_VAL_23
  | XLAT_VAL_23
#  endif
#  ifdef XLAT_VAL_24
  | XLAT_VAL_24
#  endif
#  ifdef XLAT_VAL_25
  | XLAT_VAL_25
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
#  ifdef XLAT_STR_12
  + sizeof(XLAT_STR_12)
#  endif
#  ifdef XLAT_STR_13
  + sizeof(XLAT_STR_13)
#  endif
#  ifdef XLAT_STR_14
  + sizeof(XLAT_STR_14)
#  endif
#  ifdef XLAT_STR_15
  + sizeof(XLAT_STR_15)
#  endif
#  ifdef XLAT_STR_16
  + sizeof(XLAT_STR_16)
#  endif
#  ifdef XLAT_STR_17
  + sizeof(XLAT_STR_17)
#  endif
#  ifdef XLAT_STR_18
  + sizeof(XLAT_STR_18)
#  endif
#  ifdef XLAT_STR_19
  + sizeof(XLAT_STR_19)
#  endif
#  ifdef XLAT_STR_20
  + sizeof(XLAT_STR_20)
#  endif
#  ifdef XLAT_STR_21
  + sizeof(XLAT_STR_21)
#  endif
#  ifdef XLAT_STR_22
  + sizeof(XLAT_STR_22)
#  endif
#  ifdef XLAT_STR_23
  + sizeof(XLAT_STR_23)
#  endif
#  ifdef XLAT_STR_24
  + sizeof(XLAT_STR_24)
#  endif
#  ifdef XLAT_STR_25
  + sizeof(XLAT_STR_25)
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
#  undef XLAT_STR_12
#  undef XLAT_VAL_12
#  undef XLAT_STR_13
#  undef XLAT_VAL_13
#  undef XLAT_STR_14
#  undef XLAT_VAL_14
#  undef XLAT_STR_15
#  undef XLAT_VAL_15
#  undef XLAT_STR_16
#  undef XLAT_VAL_16
#  undef XLAT_STR_17
#  undef XLAT_VAL_17
#  undef XLAT_STR_18
#  undef XLAT_VAL_18
#  undef XLAT_STR_19
#  undef XLAT_VAL_19
#  undef XLAT_STR_20
#  undef XLAT_VAL_20
#  undef XLAT_STR_21
#  undef XLAT_VAL_21
#  undef XLAT_STR_22
#  undef XLAT_VAL_22
#  undef XLAT_STR_23
#  undef XLAT_VAL_23
#  undef XLAT_STR_24
#  undef XLAT_VAL_24
#  undef XLAT_STR_25
#  undef XLAT_VAL_25
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
