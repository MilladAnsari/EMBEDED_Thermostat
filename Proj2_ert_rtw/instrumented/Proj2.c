#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned long* __mw_instrum_Proj2_phits;

#define __MW_EXTRA_OPEN_MP_SHARED_CLAUSE shared(__mw_instrum_Proj2_phits)

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void)((++__mw_instrum_Proj2_phits[id - 1u]) || ((__mw_instrum_Proj2_phits[id - 1u] = (~0u))!=0)))
#define __MW_INSTRUM_RECORD_HIT(id) (__mw_instrum_Proj2_phits ? __MW_INSTRUM_RECORD_HIT_NO_TEST(id) : (void) 0)

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_2() \
  __MW_INSTRUM_RECORD_HIT(588U + __mw_instrum_Proj2_curr_combination_idx_2)

#define __MW_INSTRUM_NODE_4(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(4U), (__mw_instrum_Proj2_curr_combination_idx_2 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(5U), (__mw_instrum_Proj2_curr_combination_idx_2 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_8(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(8U), (__mw_instrum_Proj2_curr_combination_idx_2 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(9U), (0 == 1)))
#define __MW_INSTRUM_NODE_2(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(2U), __MW_INSTRUM_RECORD_COMBINATION_HIT_2(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(3U), __MW_INSTRUM_RECORD_COMBINATION_HIT_2(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_12() \
  __MW_INSTRUM_RECORD_HIT(591U + __mw_instrum_Proj2_curr_combination_idx_12)

#define __MW_INSTRUM_NODE_14(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(14U), (__mw_instrum_Proj2_curr_combination_idx_12 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(15U), (__mw_instrum_Proj2_curr_combination_idx_12 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_18(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(18U), (__mw_instrum_Proj2_curr_combination_idx_12 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(19U), (0 == 1)))
#define __MW_INSTRUM_NODE_12(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(12U), __MW_INSTRUM_RECORD_COMBINATION_HIT_12(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(13U), __MW_INSTRUM_RECORD_COMBINATION_HIT_12(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_22() \
  __MW_INSTRUM_RECORD_HIT(594U + __mw_instrum_Proj2_curr_combination_idx_22)

#define __MW_INSTRUM_NODE_24(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(24U), (__mw_instrum_Proj2_curr_combination_idx_22 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(25U), (__mw_instrum_Proj2_curr_combination_idx_22 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_28(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(28U), (__mw_instrum_Proj2_curr_combination_idx_22 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(29U), (0 == 1)))
#define __MW_INSTRUM_NODE_22(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(22U), __MW_INSTRUM_RECORD_COMBINATION_HIT_22(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(23U), __MW_INSTRUM_RECORD_COMBINATION_HIT_22(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_32() \
  __MW_INSTRUM_RECORD_HIT(597U + __mw_instrum_Proj2_curr_combination_idx_32)

#define __MW_INSTRUM_NODE_34(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(34U), (__mw_instrum_Proj2_curr_combination_idx_32 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(35U), (__mw_instrum_Proj2_curr_combination_idx_32 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_38(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(38U), (__mw_instrum_Proj2_curr_combination_idx_32 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(39U), (0 == 1)))
#define __MW_INSTRUM_NODE_32(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(32U), __MW_INSTRUM_RECORD_COMBINATION_HIT_32(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(33U), __MW_INSTRUM_RECORD_COMBINATION_HIT_32(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_42() \
  __MW_INSTRUM_RECORD_HIT(600U + __mw_instrum_Proj2_curr_combination_idx_42)

#define __MW_INSTRUM_NODE_44(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(44U), (__mw_instrum_Proj2_curr_combination_idx_42 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(45U), (__mw_instrum_Proj2_curr_combination_idx_42 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_48(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(48U), (__mw_instrum_Proj2_curr_combination_idx_42 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(49U), (0 == 1)))
#define __MW_INSTRUM_NODE_42(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(42U), __MW_INSTRUM_RECORD_COMBINATION_HIT_42(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(43U), __MW_INSTRUM_RECORD_COMBINATION_HIT_42(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_52() \
  __MW_INSTRUM_RECORD_HIT(603U + __mw_instrum_Proj2_curr_combination_idx_52)

#define __MW_INSTRUM_NODE_54(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(54U), (__mw_instrum_Proj2_curr_combination_idx_52 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(55U), (__mw_instrum_Proj2_curr_combination_idx_52 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_58(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(58U), (__mw_instrum_Proj2_curr_combination_idx_52 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(59U), (0 == 1)))
#define __MW_INSTRUM_NODE_52(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(52U), __MW_INSTRUM_RECORD_COMBINATION_HIT_52(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(53U), __MW_INSTRUM_RECORD_COMBINATION_HIT_52(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_62() \
  __MW_INSTRUM_RECORD_HIT(606U + __mw_instrum_Proj2_curr_combination_idx_62)

#define __MW_INSTRUM_NODE_64(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(64U), (__mw_instrum_Proj2_curr_combination_idx_62 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(65U), (__mw_instrum_Proj2_curr_combination_idx_62 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_68(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(68U), (__mw_instrum_Proj2_curr_combination_idx_62 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(69U), (0 == 1)))
#define __MW_INSTRUM_NODE_62(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(62U), __MW_INSTRUM_RECORD_COMBINATION_HIT_62(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(63U), __MW_INSTRUM_RECORD_COMBINATION_HIT_62(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_72() \
  __MW_INSTRUM_RECORD_HIT(609U + __mw_instrum_Proj2_curr_combination_idx_72)

#define __MW_INSTRUM_NODE_74(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(74U), (__mw_instrum_Proj2_curr_combination_idx_72 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(75U), (__mw_instrum_Proj2_curr_combination_idx_72 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_78(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(78U), (__mw_instrum_Proj2_curr_combination_idx_72 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(79U), (0 == 1)))
#define __MW_INSTRUM_NODE_72(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(72U), __MW_INSTRUM_RECORD_COMBINATION_HIT_72(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(73U), __MW_INSTRUM_RECORD_COMBINATION_HIT_72(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_84() \
  __MW_INSTRUM_RECORD_HIT(612U + __mw_instrum_Proj2_curr_combination_idx_84)

#define __MW_INSTRUM_NODE_86(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(86U), (__mw_instrum_Proj2_curr_combination_idx_84 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(87U), (__mw_instrum_Proj2_curr_combination_idx_84 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_90(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(90U), (__mw_instrum_Proj2_curr_combination_idx_84 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(91U), (0 == 1)))
#define __MW_INSTRUM_NODE_84(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(84U), __MW_INSTRUM_RECORD_COMBINATION_HIT_84(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(85U), __MW_INSTRUM_RECORD_COMBINATION_HIT_84(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_94() \
  __MW_INSTRUM_RECORD_HIT(615U + __mw_instrum_Proj2_curr_combination_idx_94)

#define __MW_INSTRUM_NODE_96(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(96U), (__mw_instrum_Proj2_curr_combination_idx_94 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(97U), (__mw_instrum_Proj2_curr_combination_idx_94 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_100(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(100U), (__mw_instrum_Proj2_curr_combination_idx_94 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(101U), (0 == 1)))
#define __MW_INSTRUM_NODE_94(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(94U), __MW_INSTRUM_RECORD_COMBINATION_HIT_94(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(95U), __MW_INSTRUM_RECORD_COMBINATION_HIT_94(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_104() \
  __MW_INSTRUM_RECORD_HIT(618U + __mw_instrum_Proj2_curr_combination_idx_104)

#define __MW_INSTRUM_NODE_106(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(106U), (__mw_instrum_Proj2_curr_combination_idx_104 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(107U), (__mw_instrum_Proj2_curr_combination_idx_104 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_110(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(110U), (__mw_instrum_Proj2_curr_combination_idx_104 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(111U), (0 == 1)))
#define __MW_INSTRUM_NODE_104(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(104U), __MW_INSTRUM_RECORD_COMBINATION_HIT_104(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(105U), __MW_INSTRUM_RECORD_COMBINATION_HIT_104(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_114() \
  __MW_INSTRUM_RECORD_HIT(621U + __mw_instrum_Proj2_curr_combination_idx_114)

#define __MW_INSTRUM_NODE_116(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(116U), (__mw_instrum_Proj2_curr_combination_idx_114 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(117U), (__mw_instrum_Proj2_curr_combination_idx_114 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_120(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(120U), (__mw_instrum_Proj2_curr_combination_idx_114 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(121U), (0 == 1)))
#define __MW_INSTRUM_NODE_114(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(114U), __MW_INSTRUM_RECORD_COMBINATION_HIT_114(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(115U), __MW_INSTRUM_RECORD_COMBINATION_HIT_114(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_124() \
  __MW_INSTRUM_RECORD_HIT(624U + __mw_instrum_Proj2_curr_combination_idx_124)

#define __MW_INSTRUM_NODE_126(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(126U), (__mw_instrum_Proj2_curr_combination_idx_124 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(127U), (__mw_instrum_Proj2_curr_combination_idx_124 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_130(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(130U), (__mw_instrum_Proj2_curr_combination_idx_124 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(131U), (0 == 1)))
#define __MW_INSTRUM_NODE_124(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(124U), __MW_INSTRUM_RECORD_COMBINATION_HIT_124(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(125U), __MW_INSTRUM_RECORD_COMBINATION_HIT_124(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_134() \
  __MW_INSTRUM_RECORD_HIT(627U + __mw_instrum_Proj2_curr_combination_idx_134)

#define __MW_INSTRUM_NODE_136(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(136U), (__mw_instrum_Proj2_curr_combination_idx_134 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(137U), (__mw_instrum_Proj2_curr_combination_idx_134 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_140(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(140U), (__mw_instrum_Proj2_curr_combination_idx_134 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(141U), (0 == 1)))
#define __MW_INSTRUM_NODE_134(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(134U), __MW_INSTRUM_RECORD_COMBINATION_HIT_134(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(135U), __MW_INSTRUM_RECORD_COMBINATION_HIT_134(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_144() \
  __MW_INSTRUM_RECORD_HIT(630U + __mw_instrum_Proj2_curr_combination_idx_144)

#define __MW_INSTRUM_NODE_146(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(146U), (__mw_instrum_Proj2_curr_combination_idx_144 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(147U), (__mw_instrum_Proj2_curr_combination_idx_144 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_150(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(150U), (__mw_instrum_Proj2_curr_combination_idx_144 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(151U), (0 == 1)))
#define __MW_INSTRUM_NODE_144(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(144U), __MW_INSTRUM_RECORD_COMBINATION_HIT_144(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(145U), __MW_INSTRUM_RECORD_COMBINATION_HIT_144(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_154() \
  __MW_INSTRUM_RECORD_HIT(633U + __mw_instrum_Proj2_curr_combination_idx_154)

#define __MW_INSTRUM_NODE_156(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(156U), (__mw_instrum_Proj2_curr_combination_idx_154 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(157U), (__mw_instrum_Proj2_curr_combination_idx_154 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_160(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(160U), (__mw_instrum_Proj2_curr_combination_idx_154 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(161U), (0 == 1)))
#define __MW_INSTRUM_NODE_154(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(154U), __MW_INSTRUM_RECORD_COMBINATION_HIT_154(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(155U), __MW_INSTRUM_RECORD_COMBINATION_HIT_154(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_166() \
  __MW_INSTRUM_RECORD_HIT(636U + __mw_instrum_Proj2_curr_combination_idx_166)

#define __MW_INSTRUM_NODE_168(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(168U), (__mw_instrum_Proj2_curr_combination_idx_166 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(169U), (__mw_instrum_Proj2_curr_combination_idx_166 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_172(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(172U), (__mw_instrum_Proj2_curr_combination_idx_166 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(173U), (0 == 1)))
#define __MW_INSTRUM_NODE_166(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(166U), __MW_INSTRUM_RECORD_COMBINATION_HIT_166(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(167U), __MW_INSTRUM_RECORD_COMBINATION_HIT_166(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_176() \
  __MW_INSTRUM_RECORD_HIT(639U + __mw_instrum_Proj2_curr_combination_idx_176)

#define __MW_INSTRUM_NODE_178(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(178U), (__mw_instrum_Proj2_curr_combination_idx_176 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(179U), (__mw_instrum_Proj2_curr_combination_idx_176 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_182(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(182U), (__mw_instrum_Proj2_curr_combination_idx_176 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(183U), (0 == 1)))
#define __MW_INSTRUM_NODE_176(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(176U), __MW_INSTRUM_RECORD_COMBINATION_HIT_176(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(177U), __MW_INSTRUM_RECORD_COMBINATION_HIT_176(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_186() \
  __MW_INSTRUM_RECORD_HIT(642U + __mw_instrum_Proj2_curr_combination_idx_186)

#define __MW_INSTRUM_NODE_188(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(188U), (__mw_instrum_Proj2_curr_combination_idx_186 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(189U), (__mw_instrum_Proj2_curr_combination_idx_186 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_192(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(192U), (__mw_instrum_Proj2_curr_combination_idx_186 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(193U), (0 == 1)))
#define __MW_INSTRUM_NODE_186(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(186U), __MW_INSTRUM_RECORD_COMBINATION_HIT_186(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(187U), __MW_INSTRUM_RECORD_COMBINATION_HIT_186(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_196() \
  __MW_INSTRUM_RECORD_HIT(645U + __mw_instrum_Proj2_curr_combination_idx_196)

#define __MW_INSTRUM_NODE_198(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(198U), (__mw_instrum_Proj2_curr_combination_idx_196 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(199U), (__mw_instrum_Proj2_curr_combination_idx_196 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_202(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(202U), (__mw_instrum_Proj2_curr_combination_idx_196 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(203U), (0 == 1)))
#define __MW_INSTRUM_NODE_196(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(196U), __MW_INSTRUM_RECORD_COMBINATION_HIT_196(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(197U), __MW_INSTRUM_RECORD_COMBINATION_HIT_196(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_206() \
  __MW_INSTRUM_RECORD_HIT(648U + __mw_instrum_Proj2_curr_combination_idx_206)

#define __MW_INSTRUM_NODE_208(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(208U), (__mw_instrum_Proj2_curr_combination_idx_206 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(209U), (__mw_instrum_Proj2_curr_combination_idx_206 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_212(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(212U), (__mw_instrum_Proj2_curr_combination_idx_206 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(213U), (0 == 1)))
#define __MW_INSTRUM_NODE_206(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(206U), __MW_INSTRUM_RECORD_COMBINATION_HIT_206(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(207U), __MW_INSTRUM_RECORD_COMBINATION_HIT_206(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_216() \
  __MW_INSTRUM_RECORD_HIT(651U + __mw_instrum_Proj2_curr_combination_idx_216)

#define __MW_INSTRUM_NODE_218(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(218U), (__mw_instrum_Proj2_curr_combination_idx_216 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(219U), (__mw_instrum_Proj2_curr_combination_idx_216 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_222(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(222U), (__mw_instrum_Proj2_curr_combination_idx_216 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(223U), (0 == 1)))
#define __MW_INSTRUM_NODE_216(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(216U), __MW_INSTRUM_RECORD_COMBINATION_HIT_216(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(217U), __MW_INSTRUM_RECORD_COMBINATION_HIT_216(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_226() \
  __MW_INSTRUM_RECORD_HIT(654U + __mw_instrum_Proj2_curr_combination_idx_226)

#define __MW_INSTRUM_NODE_228(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(228U), (__mw_instrum_Proj2_curr_combination_idx_226 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(229U), (__mw_instrum_Proj2_curr_combination_idx_226 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_232(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(232U), (__mw_instrum_Proj2_curr_combination_idx_226 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(233U), (0 == 1)))
#define __MW_INSTRUM_NODE_226(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(226U), __MW_INSTRUM_RECORD_COMBINATION_HIT_226(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(227U), __MW_INSTRUM_RECORD_COMBINATION_HIT_226(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_236() \
  __MW_INSTRUM_RECORD_HIT(657U + __mw_instrum_Proj2_curr_combination_idx_236)

#define __MW_INSTRUM_NODE_238(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(238U), (__mw_instrum_Proj2_curr_combination_idx_236 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(239U), (__mw_instrum_Proj2_curr_combination_idx_236 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_242(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(242U), (__mw_instrum_Proj2_curr_combination_idx_236 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(243U), (0 == 1)))
#define __MW_INSTRUM_NODE_236(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(236U), __MW_INSTRUM_RECORD_COMBINATION_HIT_236(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(237U), __MW_INSTRUM_RECORD_COMBINATION_HIT_236(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_248() \
  __MW_INSTRUM_RECORD_HIT(660U + __mw_instrum_Proj2_curr_combination_idx_248)

#define __MW_INSTRUM_NODE_250(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(250U), (__mw_instrum_Proj2_curr_combination_idx_248 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(251U), (__mw_instrum_Proj2_curr_combination_idx_248 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_254(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(254U), (__mw_instrum_Proj2_curr_combination_idx_248 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(255U), (0 == 1)))
#define __MW_INSTRUM_NODE_248(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(248U), __MW_INSTRUM_RECORD_COMBINATION_HIT_248(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(249U), __MW_INSTRUM_RECORD_COMBINATION_HIT_248(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_258() \
  __MW_INSTRUM_RECORD_HIT(663U + __mw_instrum_Proj2_curr_combination_idx_258)

#define __MW_INSTRUM_NODE_260(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(260U), (__mw_instrum_Proj2_curr_combination_idx_258 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(261U), (__mw_instrum_Proj2_curr_combination_idx_258 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_264(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(264U), (__mw_instrum_Proj2_curr_combination_idx_258 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(265U), (0 == 1)))
#define __MW_INSTRUM_NODE_258(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(258U), __MW_INSTRUM_RECORD_COMBINATION_HIT_258(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(259U), __MW_INSTRUM_RECORD_COMBINATION_HIT_258(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_268() \
  __MW_INSTRUM_RECORD_HIT(666U + __mw_instrum_Proj2_curr_combination_idx_268)

#define __MW_INSTRUM_NODE_270(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(270U), (__mw_instrum_Proj2_curr_combination_idx_268 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(271U), (__mw_instrum_Proj2_curr_combination_idx_268 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_274(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(274U), (__mw_instrum_Proj2_curr_combination_idx_268 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(275U), (0 == 1)))
#define __MW_INSTRUM_NODE_268(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(268U), __MW_INSTRUM_RECORD_COMBINATION_HIT_268(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(269U), __MW_INSTRUM_RECORD_COMBINATION_HIT_268(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_278() \
  __MW_INSTRUM_RECORD_HIT(669U + __mw_instrum_Proj2_curr_combination_idx_278)

#define __MW_INSTRUM_NODE_280(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(280U), (__mw_instrum_Proj2_curr_combination_idx_278 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(281U), (__mw_instrum_Proj2_curr_combination_idx_278 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_284(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(284U), (__mw_instrum_Proj2_curr_combination_idx_278 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(285U), (0 == 1)))
#define __MW_INSTRUM_NODE_278(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(278U), __MW_INSTRUM_RECORD_COMBINATION_HIT_278(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(279U), __MW_INSTRUM_RECORD_COMBINATION_HIT_278(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_288() \
  __MW_INSTRUM_RECORD_HIT(672U + __mw_instrum_Proj2_curr_combination_idx_288)

#define __MW_INSTRUM_NODE_290(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(290U), (__mw_instrum_Proj2_curr_combination_idx_288 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(291U), (__mw_instrum_Proj2_curr_combination_idx_288 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_294(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(294U), (__mw_instrum_Proj2_curr_combination_idx_288 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(295U), (0 == 1)))
#define __MW_INSTRUM_NODE_288(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(288U), __MW_INSTRUM_RECORD_COMBINATION_HIT_288(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(289U), __MW_INSTRUM_RECORD_COMBINATION_HIT_288(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_298() \
  __MW_INSTRUM_RECORD_HIT(675U + __mw_instrum_Proj2_curr_combination_idx_298)

#define __MW_INSTRUM_NODE_300(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(300U), (__mw_instrum_Proj2_curr_combination_idx_298 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(301U), (__mw_instrum_Proj2_curr_combination_idx_298 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_304(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(304U), (__mw_instrum_Proj2_curr_combination_idx_298 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(305U), (0 == 1)))
#define __MW_INSTRUM_NODE_298(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(298U), __MW_INSTRUM_RECORD_COMBINATION_HIT_298(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(299U), __MW_INSTRUM_RECORD_COMBINATION_HIT_298(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_308() \
  __MW_INSTRUM_RECORD_HIT(678U + __mw_instrum_Proj2_curr_combination_idx_308)

#define __MW_INSTRUM_NODE_310(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(310U), (__mw_instrum_Proj2_curr_combination_idx_308 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(311U), (__mw_instrum_Proj2_curr_combination_idx_308 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_314(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(314U), (__mw_instrum_Proj2_curr_combination_idx_308 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(315U), (0 == 1)))
#define __MW_INSTRUM_NODE_308(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(308U), __MW_INSTRUM_RECORD_COMBINATION_HIT_308(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(309U), __MW_INSTRUM_RECORD_COMBINATION_HIT_308(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_318() \
  __MW_INSTRUM_RECORD_HIT(681U + __mw_instrum_Proj2_curr_combination_idx_318)

#define __MW_INSTRUM_NODE_320(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(320U), (__mw_instrum_Proj2_curr_combination_idx_318 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(321U), (__mw_instrum_Proj2_curr_combination_idx_318 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_324(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(324U), (__mw_instrum_Proj2_curr_combination_idx_318 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(325U), (0 == 1)))
#define __MW_INSTRUM_NODE_318(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(318U), __MW_INSTRUM_RECORD_COMBINATION_HIT_318(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(319U), __MW_INSTRUM_RECORD_COMBINATION_HIT_318(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_336() \
  __MW_INSTRUM_RECORD_HIT(684U + __mw_instrum_Proj2_curr_combination_idx_336)

#define __MW_INSTRUM_NODE_338(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(338U), (__mw_instrum_Proj2_curr_combination_idx_336 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(339U), (__mw_instrum_Proj2_curr_combination_idx_336 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_342(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(342U), (__mw_instrum_Proj2_curr_combination_idx_336 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(343U), (0 == 1)))
#define __MW_INSTRUM_NODE_336(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(336U), __MW_INSTRUM_RECORD_COMBINATION_HIT_336(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(337U), __MW_INSTRUM_RECORD_COMBINATION_HIT_336(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_346() \
  __MW_INSTRUM_RECORD_HIT(687U + __mw_instrum_Proj2_curr_combination_idx_346)

#define __MW_INSTRUM_NODE_348(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(348U), (__mw_instrum_Proj2_curr_combination_idx_346 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(349U), (__mw_instrum_Proj2_curr_combination_idx_346 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_352(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(352U), (__mw_instrum_Proj2_curr_combination_idx_346 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(353U), (0 == 1)))
#define __MW_INSTRUM_NODE_346(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(346U), __MW_INSTRUM_RECORD_COMBINATION_HIT_346(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(347U), __MW_INSTRUM_RECORD_COMBINATION_HIT_346(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_356() \
  __MW_INSTRUM_RECORD_HIT(690U + __mw_instrum_Proj2_curr_combination_idx_356)

#define __MW_INSTRUM_NODE_358(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(358U), (__mw_instrum_Proj2_curr_combination_idx_356 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(359U), (__mw_instrum_Proj2_curr_combination_idx_356 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_362(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(362U), (__mw_instrum_Proj2_curr_combination_idx_356 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(363U), (0 == 1)))
#define __MW_INSTRUM_NODE_356(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(356U), __MW_INSTRUM_RECORD_COMBINATION_HIT_356(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(357U), __MW_INSTRUM_RECORD_COMBINATION_HIT_356(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_366() \
  __MW_INSTRUM_RECORD_HIT(693U + __mw_instrum_Proj2_curr_combination_idx_366)

#define __MW_INSTRUM_NODE_368(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(368U), (__mw_instrum_Proj2_curr_combination_idx_366 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(369U), (__mw_instrum_Proj2_curr_combination_idx_366 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_372(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(372U), (__mw_instrum_Proj2_curr_combination_idx_366 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(373U), (0 == 1)))
#define __MW_INSTRUM_NODE_366(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(366U), __MW_INSTRUM_RECORD_COMBINATION_HIT_366(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(367U), __MW_INSTRUM_RECORD_COMBINATION_HIT_366(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_376() \
  __MW_INSTRUM_RECORD_HIT(696U + __mw_instrum_Proj2_curr_combination_idx_376)

#define __MW_INSTRUM_NODE_378(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(378U), (__mw_instrum_Proj2_curr_combination_idx_376 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(379U), (__mw_instrum_Proj2_curr_combination_idx_376 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_382(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(382U), (__mw_instrum_Proj2_curr_combination_idx_376 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(383U), (0 == 1)))
#define __MW_INSTRUM_NODE_376(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(376U), __MW_INSTRUM_RECORD_COMBINATION_HIT_376(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(377U), __MW_INSTRUM_RECORD_COMBINATION_HIT_376(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_386() \
  __MW_INSTRUM_RECORD_HIT(699U + __mw_instrum_Proj2_curr_combination_idx_386)

#define __MW_INSTRUM_NODE_388(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(388U), (__mw_instrum_Proj2_curr_combination_idx_386 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(389U), (__mw_instrum_Proj2_curr_combination_idx_386 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_392(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(392U), (__mw_instrum_Proj2_curr_combination_idx_386 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(393U), (0 == 1)))
#define __MW_INSTRUM_NODE_386(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(386U), __MW_INSTRUM_RECORD_COMBINATION_HIT_386(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(387U), __MW_INSTRUM_RECORD_COMBINATION_HIT_386(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_396() \
  __MW_INSTRUM_RECORD_HIT(702U + __mw_instrum_Proj2_curr_combination_idx_396)

#define __MW_INSTRUM_NODE_398(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(398U), (__mw_instrum_Proj2_curr_combination_idx_396 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(399U), (__mw_instrum_Proj2_curr_combination_idx_396 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_402(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(402U), (__mw_instrum_Proj2_curr_combination_idx_396 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(403U), (0 == 1)))
#define __MW_INSTRUM_NODE_396(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(396U), __MW_INSTRUM_RECORD_COMBINATION_HIT_396(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(397U), __MW_INSTRUM_RECORD_COMBINATION_HIT_396(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_406() \
  __MW_INSTRUM_RECORD_HIT(705U + __mw_instrum_Proj2_curr_combination_idx_406)

#define __MW_INSTRUM_NODE_408(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(408U), (__mw_instrum_Proj2_curr_combination_idx_406 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(409U), (__mw_instrum_Proj2_curr_combination_idx_406 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_412(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(412U), (__mw_instrum_Proj2_curr_combination_idx_406 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(413U), (0 == 1)))
#define __MW_INSTRUM_NODE_406(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(406U), __MW_INSTRUM_RECORD_COMBINATION_HIT_406(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(407U), __MW_INSTRUM_RECORD_COMBINATION_HIT_406(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_417() \
  __MW_INSTRUM_RECORD_HIT(708U + __mw_instrum_Proj2_curr_combination_idx_417)

#define __MW_INSTRUM_NODE_419(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(419U), (__mw_instrum_Proj2_curr_combination_idx_417 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(420U), (__mw_instrum_Proj2_curr_combination_idx_417 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_423(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(423U), (__mw_instrum_Proj2_curr_combination_idx_417 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(424U), (0 == 1)))
#define __MW_INSTRUM_NODE_417(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(417U), __MW_INSTRUM_RECORD_COMBINATION_HIT_417(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(418U), __MW_INSTRUM_RECORD_COMBINATION_HIT_417(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_427() \
  __MW_INSTRUM_RECORD_HIT(711U + __mw_instrum_Proj2_curr_combination_idx_427)

#define __MW_INSTRUM_NODE_429(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(429U), (__mw_instrum_Proj2_curr_combination_idx_427 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(430U), (__mw_instrum_Proj2_curr_combination_idx_427 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_433(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(433U), (__mw_instrum_Proj2_curr_combination_idx_427 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(434U), (0 == 1)))
#define __MW_INSTRUM_NODE_427(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(427U), __MW_INSTRUM_RECORD_COMBINATION_HIT_427(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(428U), __MW_INSTRUM_RECORD_COMBINATION_HIT_427(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_437() \
  __MW_INSTRUM_RECORD_HIT(714U + __mw_instrum_Proj2_curr_combination_idx_437)

#define __MW_INSTRUM_NODE_439(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(439U), (__mw_instrum_Proj2_curr_combination_idx_437 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(440U), (__mw_instrum_Proj2_curr_combination_idx_437 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_443(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(443U), (__mw_instrum_Proj2_curr_combination_idx_437 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(444U), (0 == 1)))
#define __MW_INSTRUM_NODE_437(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(437U), __MW_INSTRUM_RECORD_COMBINATION_HIT_437(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(438U), __MW_INSTRUM_RECORD_COMBINATION_HIT_437(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_447() \
  __MW_INSTRUM_RECORD_HIT(717U + __mw_instrum_Proj2_curr_combination_idx_447)

#define __MW_INSTRUM_NODE_449(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(449U), (__mw_instrum_Proj2_curr_combination_idx_447 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(450U), (__mw_instrum_Proj2_curr_combination_idx_447 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_453(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(453U), (__mw_instrum_Proj2_curr_combination_idx_447 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(454U), (0 == 1)))
#define __MW_INSTRUM_NODE_447(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(447U), __MW_INSTRUM_RECORD_COMBINATION_HIT_447(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(448U), __MW_INSTRUM_RECORD_COMBINATION_HIT_447(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_457() \
  __MW_INSTRUM_RECORD_HIT(720U + __mw_instrum_Proj2_curr_combination_idx_457)

#define __MW_INSTRUM_NODE_459(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(459U), (__mw_instrum_Proj2_curr_combination_idx_457 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(460U), (__mw_instrum_Proj2_curr_combination_idx_457 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_463(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(463U), (__mw_instrum_Proj2_curr_combination_idx_457 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(464U), (0 == 1)))
#define __MW_INSTRUM_NODE_457(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(457U), __MW_INSTRUM_RECORD_COMBINATION_HIT_457(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(458U), __MW_INSTRUM_RECORD_COMBINATION_HIT_457(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_467() \
  __MW_INSTRUM_RECORD_HIT(723U + __mw_instrum_Proj2_curr_combination_idx_467)

#define __MW_INSTRUM_NODE_469(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(469U), (__mw_instrum_Proj2_curr_combination_idx_467 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(470U), (__mw_instrum_Proj2_curr_combination_idx_467 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_473(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(473U), (__mw_instrum_Proj2_curr_combination_idx_467 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(474U), (0 == 1)))
#define __MW_INSTRUM_NODE_467(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(467U), __MW_INSTRUM_RECORD_COMBINATION_HIT_467(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(468U), __MW_INSTRUM_RECORD_COMBINATION_HIT_467(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_477() \
  __MW_INSTRUM_RECORD_HIT(726U + __mw_instrum_Proj2_curr_combination_idx_477)

#define __MW_INSTRUM_NODE_479(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(479U), (__mw_instrum_Proj2_curr_combination_idx_477 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(480U), (__mw_instrum_Proj2_curr_combination_idx_477 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_483(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(483U), (__mw_instrum_Proj2_curr_combination_idx_477 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(484U), (0 == 1)))
#define __MW_INSTRUM_NODE_477(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(477U), __MW_INSTRUM_RECORD_COMBINATION_HIT_477(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(478U), __MW_INSTRUM_RECORD_COMBINATION_HIT_477(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_487() \
  __MW_INSTRUM_RECORD_HIT(729U + __mw_instrum_Proj2_curr_combination_idx_487)

#define __MW_INSTRUM_NODE_489(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(489U), (__mw_instrum_Proj2_curr_combination_idx_487 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(490U), (__mw_instrum_Proj2_curr_combination_idx_487 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_493(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(493U), (__mw_instrum_Proj2_curr_combination_idx_487 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(494U), (0 == 1)))
#define __MW_INSTRUM_NODE_487(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(487U), __MW_INSTRUM_RECORD_COMBINATION_HIT_487(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(488U), __MW_INSTRUM_RECORD_COMBINATION_HIT_487(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_523() \
  __MW_INSTRUM_RECORD_HIT(732U + __mw_instrum_Proj2_curr_combination_idx_523)

#define __MW_INSTRUM_NODE_527(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(527U), (__mw_instrum_Proj2_curr_combination_idx_523 = 2U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(528U), (__mw_instrum_Proj2_curr_combination_idx_523 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_529(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(529U), (__mw_instrum_Proj2_curr_combination_idx_523 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(530U), (0 == 1)))
#define __MW_INSTRUM_NODE_523(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(523U), __MW_INSTRUM_RECORD_COMBINATION_HIT_523(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(524U), __MW_INSTRUM_RECORD_COMBINATION_HIT_523(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_534() \
  __MW_INSTRUM_RECORD_HIT(735U + __mw_instrum_Proj2_curr_combination_idx_534)

#define __MW_INSTRUM_NODE_538(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(538U), (__mw_instrum_Proj2_curr_combination_idx_534 = 3U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(539U), (__mw_instrum_Proj2_curr_combination_idx_534 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_542(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(542U), (__mw_instrum_Proj2_curr_combination_idx_534 += 3U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(543U), (0 == 1)))
#define __MW_INSTRUM_NODE_548(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(548U), (__mw_instrum_Proj2_curr_combination_idx_534 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(549U), (0 == 1)))
#define __MW_INSTRUM_NODE_552(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(552U), (__mw_instrum_Proj2_curr_combination_idx_534 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(553U), (0 == 1)))
#define __MW_INSTRUM_NODE_534(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(534U), __MW_INSTRUM_RECORD_COMBINATION_HIT_534(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(535U), __MW_INSTRUM_RECORD_COMBINATION_HIT_534(), (0 == 1)))

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_562() \
  __MW_INSTRUM_RECORD_HIT(742U + __mw_instrum_Proj2_curr_combination_idx_562)

#define __MW_INSTRUM_NODE_564(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(564U), (__mw_instrum_Proj2_curr_combination_idx_562 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(565U), (__mw_instrum_Proj2_curr_combination_idx_562 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_568(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(568U), (__mw_instrum_Proj2_curr_combination_idx_562 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(569U), (0 == 1)))
#define __MW_INSTRUM_NODE_562(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(562U), __MW_INSTRUM_RECORD_COMBINATION_HIT_562(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(563U), __MW_INSTRUM_RECORD_COMBINATION_HIT_562(), (0 == 1)))


#define __MW_INSTRUM_FCN_ENTER_1() \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_2 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_12 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_22 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_32 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_42 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_52 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_62 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_72 = 0U; 
#define __MW_INSTRUM_FCN_ENTER_2() \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_84 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_94 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_104 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_114 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_124 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_134 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_144 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_154 = 0U; 
#define __MW_INSTRUM_FCN_ENTER_3() \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_166 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_176 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_186 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_196 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_206 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_216 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_226 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_236 = 0U; 
#define __MW_INSTRUM_FCN_ENTER_4() \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_248 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_258 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_268 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_278 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_288 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_298 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_308 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_318 = 0U; 
#define __MW_INSTRUM_FCN_ENTER_5() \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_336 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_346 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_356 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_366 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_376 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_386 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_396 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_406 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_417 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_427 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_437 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_447 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_457 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_467 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_477 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_487 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_523 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_534 = 0U; \
  unsigned long __mw_instrum_Proj2_curr_combination_idx_562 = 0U; 
#define __MW_INSTRUM_FCN_ENTER_6() 
#define __MW_INSTRUM_FCN_ENTER_7() 

#define __MW_INSTRUM_NODE_1() (__MW_INSTRUM_RECORD_HIT(1U))
#define __MW_INSTRUM_NODE_6(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_10(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_3() (__MW_INSTRUM_RECORD_HIT(3U))
#define __MW_INSTRUM_NODE_16(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_20(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_13() (__MW_INSTRUM_RECORD_HIT(13U))
#define __MW_INSTRUM_NODE_26(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_30(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_23() (__MW_INSTRUM_RECORD_HIT(23U))
#define __MW_INSTRUM_NODE_36(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_40(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_33() (__MW_INSTRUM_RECORD_HIT(33U))
#define __MW_INSTRUM_NODE_46(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_50(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_43() (__MW_INSTRUM_RECORD_HIT(43U))
#define __MW_INSTRUM_NODE_56(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_60(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_53() (__MW_INSTRUM_RECORD_HIT(53U))
#define __MW_INSTRUM_NODE_66(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_70(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_63() (__MW_INSTRUM_RECORD_HIT(63U))
#define __MW_INSTRUM_NODE_76(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_80(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_82() (__MW_INSTRUM_RECORD_HIT(82U))
#define __MW_INSTRUM_NODE_83() (__MW_INSTRUM_RECORD_HIT(83U))
#define __MW_INSTRUM_NODE_88(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_92(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_85() (__MW_INSTRUM_RECORD_HIT(85U))
#define __MW_INSTRUM_NODE_98(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_102(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_95() (__MW_INSTRUM_RECORD_HIT(95U))
#define __MW_INSTRUM_NODE_108(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_112(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_105() (__MW_INSTRUM_RECORD_HIT(105U))
#define __MW_INSTRUM_NODE_118(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_122(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_115() (__MW_INSTRUM_RECORD_HIT(115U))
#define __MW_INSTRUM_NODE_128(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_132(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_125() (__MW_INSTRUM_RECORD_HIT(125U))
#define __MW_INSTRUM_NODE_138(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_142(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_135() (__MW_INSTRUM_RECORD_HIT(135U))
#define __MW_INSTRUM_NODE_148(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_152(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_145() (__MW_INSTRUM_RECORD_HIT(145U))
#define __MW_INSTRUM_NODE_158(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_162(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_164() (__MW_INSTRUM_RECORD_HIT(164U))
#define __MW_INSTRUM_NODE_165() (__MW_INSTRUM_RECORD_HIT(165U))
#define __MW_INSTRUM_NODE_170(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_174(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_167() (__MW_INSTRUM_RECORD_HIT(167U))
#define __MW_INSTRUM_NODE_180(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_184(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_177() (__MW_INSTRUM_RECORD_HIT(177U))
#define __MW_INSTRUM_NODE_190(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_194(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_187() (__MW_INSTRUM_RECORD_HIT(187U))
#define __MW_INSTRUM_NODE_200(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_204(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_197() (__MW_INSTRUM_RECORD_HIT(197U))
#define __MW_INSTRUM_NODE_210(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_214(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_207() (__MW_INSTRUM_RECORD_HIT(207U))
#define __MW_INSTRUM_NODE_220(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_224(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_217() (__MW_INSTRUM_RECORD_HIT(217U))
#define __MW_INSTRUM_NODE_230(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_234(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_227() (__MW_INSTRUM_RECORD_HIT(227U))
#define __MW_INSTRUM_NODE_240(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_244(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_246() (__MW_INSTRUM_RECORD_HIT(246U))
#define __MW_INSTRUM_NODE_247() (__MW_INSTRUM_RECORD_HIT(247U))
#define __MW_INSTRUM_NODE_252(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_256(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_249() (__MW_INSTRUM_RECORD_HIT(249U))
#define __MW_INSTRUM_NODE_262(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_266(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_259() (__MW_INSTRUM_RECORD_HIT(259U))
#define __MW_INSTRUM_NODE_272(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_276(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_269() (__MW_INSTRUM_RECORD_HIT(269U))
#define __MW_INSTRUM_NODE_282(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_286(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_279() (__MW_INSTRUM_RECORD_HIT(279U))
#define __MW_INSTRUM_NODE_292(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_296(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_289() (__MW_INSTRUM_RECORD_HIT(289U))
#define __MW_INSTRUM_NODE_302(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_306(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_299() (__MW_INSTRUM_RECORD_HIT(299U))
#define __MW_INSTRUM_NODE_312(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_316(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_309() (__MW_INSTRUM_RECORD_HIT(309U))
#define __MW_INSTRUM_NODE_322(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_326(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_328() (__MW_INSTRUM_RECORD_HIT(328U))
#define __MW_INSTRUM_NODE_329() (__MW_INSTRUM_RECORD_HIT(329U))
#define __MW_INSTRUM_NODE_330(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(330U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(331U), (0 == 1)))
#define __MW_INSTRUM_NODE_332(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_331() (__MW_INSTRUM_RECORD_HIT(331U))
#define __MW_INSTRUM_NODE_335() (__MW_INSTRUM_RECORD_HIT(335U))
#define __MW_INSTRUM_NODE_340(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_344(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_337() (__MW_INSTRUM_RECORD_HIT(337U))
#define __MW_INSTRUM_NODE_350(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_354(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_347() (__MW_INSTRUM_RECORD_HIT(347U))
#define __MW_INSTRUM_NODE_360(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_364(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_357() (__MW_INSTRUM_RECORD_HIT(357U))
#define __MW_INSTRUM_NODE_370(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_374(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_367() (__MW_INSTRUM_RECORD_HIT(367U))
#define __MW_INSTRUM_NODE_380(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_384(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_377() (__MW_INSTRUM_RECORD_HIT(377U))
#define __MW_INSTRUM_NODE_390(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_394(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_387() (__MW_INSTRUM_RECORD_HIT(387U))
#define __MW_INSTRUM_NODE_400(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_404(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_397() (__MW_INSTRUM_RECORD_HIT(397U))
#define __MW_INSTRUM_NODE_410(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_414(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_416() (__MW_INSTRUM_RECORD_HIT(416U))
#define __MW_INSTRUM_NODE_421(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_425(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_418() (__MW_INSTRUM_RECORD_HIT(418U))
#define __MW_INSTRUM_NODE_431(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_435(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_428() (__MW_INSTRUM_RECORD_HIT(428U))
#define __MW_INSTRUM_NODE_441(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_445(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_438() (__MW_INSTRUM_RECORD_HIT(438U))
#define __MW_INSTRUM_NODE_451(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_455(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_448() (__MW_INSTRUM_RECORD_HIT(448U))
#define __MW_INSTRUM_NODE_461(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_465(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_458() (__MW_INSTRUM_RECORD_HIT(458U))
#define __MW_INSTRUM_NODE_471(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_475(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_468() (__MW_INSTRUM_RECORD_HIT(468U))
#define __MW_INSTRUM_NODE_481(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_485(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_478() (__MW_INSTRUM_RECORD_HIT(478U))
#define __MW_INSTRUM_NODE_491(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_495(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_497() (__MW_INSTRUM_RECORD_HIT(497U))
#define __MW_INSTRUM_NODE_498() (__MW_INSTRUM_RECORD_HIT(498U))
#define __MW_INSTRUM_NODE_499() (__MW_INSTRUM_RECORD_HIT(499U))
#define __MW_INSTRUM_NODE_500() (__MW_INSTRUM_RECORD_HIT(500U))
#define __MW_INSTRUM_NODE_501() (__MW_INSTRUM_RECORD_HIT(501U))
#define __MW_INSTRUM_NODE_502() (__MW_INSTRUM_RECORD_HIT(502U))
#define __MW_INSTRUM_NODE_503() (__MW_INSTRUM_RECORD_HIT(503U))
#define __MW_INSTRUM_NODE_504() (__MW_INSTRUM_RECORD_HIT(504U))
#define __MW_INSTRUM_NODE_505(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(505U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(506U), (0 == 1)))
#define __MW_INSTRUM_NODE_507(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_506() (__MW_INSTRUM_RECORD_HIT(506U))
#define __MW_INSTRUM_NODE_510(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(510U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(511U), (0 == 1)))
#define __MW_INSTRUM_NODE_512(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_515(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(515U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(516U), (0 == 1)))
#define __MW_INSTRUM_NODE_517(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_511() (__MW_INSTRUM_RECORD_HIT(511U))
#define __MW_INSTRUM_NODE_519(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(519U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(520U), (0 == 1)))
#define __MW_INSTRUM_NODE_521(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_520() (__MW_INSTRUM_RECORD_HIT(520U))
#define __MW_INSTRUM_NODE_525(expr) (expr)
#define __MW_INSTRUM_NODE_531(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_536(expr) (expr)
#define __MW_INSTRUM_NODE_540(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_544(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_546(expr) (expr)
#define __MW_INSTRUM_NODE_550(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_554(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_535() (__MW_INSTRUM_RECORD_HIT(535U))
#define __MW_INSTRUM_NODE_556(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(556U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(557U), (0 == 1)))
#define __MW_INSTRUM_NODE_557() (__MW_INSTRUM_RECORD_HIT(557U))
#define __MW_INSTRUM_NODE_558(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(558U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(559U), (0 == 1)))
#define __MW_INSTRUM_NODE_560(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_566(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_570(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_573(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(573U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(574U), (0 == 1)))
#define __MW_INSTRUM_NODE_575(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_574() (__MW_INSTRUM_RECORD_HIT(574U))
#define __MW_INSTRUM_NODE_577(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(577U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(578U), (0 == 1)))
#define __MW_INSTRUM_NODE_579(lhs, rhs) ((void)0)
#define __MW_INSTRUM_NODE_581(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(581U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(582U), (0 == 1)))
#define __MW_INSTRUM_NODE_583() (__MW_INSTRUM_RECORD_HIT(583U))
#define __MW_INSTRUM_NODE_584() (__MW_INSTRUM_RECORD_HIT(584U))
#define __MW_INSTRUM_NODE_585() (__MW_INSTRUM_RECORD_HIT(585U))
#define __MW_INSTRUM_NODE_586() (__MW_INSTRUM_RECORD_HIT(586U))
#define __MW_INSTRUM_NODE_587() (__MW_INSTRUM_RECORD_HIT(587U))
#ifdef __cplusplus
template<typename T>
static T *__mw_instrum_address_of(T& arg)
{
  return reinterpret_cast<T*>(
               &const_cast<char&>(
                   reinterpret_cast<const volatile char&>(arg)));
}
#else
#define __mw_instrum_address_of(X) &(X)
#endif

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#define __mw_instrum_address_of(x) &(x)

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_4CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_4(exp) (__MW_INSTRUM_RECORD_HIT_4CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_4CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_4(exp) (__MW_INSTRUM_RECORD_HIT_4CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_8CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_8(exp) (__MW_INSTRUM_RECORD_HIT_8CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_8CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_8(exp) (__MW_INSTRUM_RECORD_HIT_8CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_2DA_4_8Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_2(exp) (__MW_INSTRUM_RECORD_HIT_2DA_4_8Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_2DA_4_8Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_2(exp) (__MW_INSTRUM_RECORD_HIT_2DA_4_8Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_14CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_14(exp) (__MW_INSTRUM_RECORD_HIT_14CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_14CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_14(exp) (__MW_INSTRUM_RECORD_HIT_14CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_18CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_18(exp) (__MW_INSTRUM_RECORD_HIT_18CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_18CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_18(exp) (__MW_INSTRUM_RECORD_HIT_18CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_12DA_14_18Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_12(exp) (__MW_INSTRUM_RECORD_HIT_12DA_14_18Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_12DA_14_18Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_12(exp) (__MW_INSTRUM_RECORD_HIT_12DA_14_18Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_24CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_24(exp) (__MW_INSTRUM_RECORD_HIT_24CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_24CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_24(exp) (__MW_INSTRUM_RECORD_HIT_24CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_28CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_28(exp) (__MW_INSTRUM_RECORD_HIT_28CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_28CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_28(exp) (__MW_INSTRUM_RECORD_HIT_28CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_22DA_24_28Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_22(exp) (__MW_INSTRUM_RECORD_HIT_22DA_24_28Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_22DA_24_28Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_22(exp) (__MW_INSTRUM_RECORD_HIT_22DA_24_28Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_34CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_34(exp) (__MW_INSTRUM_RECORD_HIT_34CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_34CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_34(exp) (__MW_INSTRUM_RECORD_HIT_34CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_38CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_38(exp) (__MW_INSTRUM_RECORD_HIT_38CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_38CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_38(exp) (__MW_INSTRUM_RECORD_HIT_38CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_32DA_34_38Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_32(exp) (__MW_INSTRUM_RECORD_HIT_32DA_34_38Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_32DA_34_38Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_32(exp) (__MW_INSTRUM_RECORD_HIT_32DA_34_38Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_44CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_44(exp) (__MW_INSTRUM_RECORD_HIT_44CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_44CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_44(exp) (__MW_INSTRUM_RECORD_HIT_44CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_48CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_48(exp) (__MW_INSTRUM_RECORD_HIT_48CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_48CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_48(exp) (__MW_INSTRUM_RECORD_HIT_48CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_42DA_44_48Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_42(exp) (__MW_INSTRUM_RECORD_HIT_42DA_44_48Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_42DA_44_48Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_42(exp) (__MW_INSTRUM_RECORD_HIT_42DA_44_48Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_54CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_54(exp) (__MW_INSTRUM_RECORD_HIT_54CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_54CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_54(exp) (__MW_INSTRUM_RECORD_HIT_54CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_58CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_58(exp) (__MW_INSTRUM_RECORD_HIT_58CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_58CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_58(exp) (__MW_INSTRUM_RECORD_HIT_58CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_52DA_54_58Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_52(exp) (__MW_INSTRUM_RECORD_HIT_52DA_54_58Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_52DA_54_58Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_52(exp) (__MW_INSTRUM_RECORD_HIT_52DA_54_58Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_64CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_64(exp) (__MW_INSTRUM_RECORD_HIT_64CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_64CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_64(exp) (__MW_INSTRUM_RECORD_HIT_64CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_68CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_68(exp) (__MW_INSTRUM_RECORD_HIT_68CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_68CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_68(exp) (__MW_INSTRUM_RECORD_HIT_68CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_62DA_64_68Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_62(exp) (__MW_INSTRUM_RECORD_HIT_62DA_64_68Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_62DA_64_68Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_62(exp) (__MW_INSTRUM_RECORD_HIT_62DA_64_68Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_74CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_74(exp) (__MW_INSTRUM_RECORD_HIT_74CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_74CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_74(exp) (__MW_INSTRUM_RECORD_HIT_74CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_78CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_78(exp) (__MW_INSTRUM_RECORD_HIT_78CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_78CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_78(exp) (__MW_INSTRUM_RECORD_HIT_78CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_72DA_74_78Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_72(exp) (__MW_INSTRUM_RECORD_HIT_72DA_74_78Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_72DA_74_78Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_72(exp) (__MW_INSTRUM_RECORD_HIT_72DA_74_78Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_86CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_86(exp) (__MW_INSTRUM_RECORD_HIT_86CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_86CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_86(exp) (__MW_INSTRUM_RECORD_HIT_86CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_90CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_90(exp) (__MW_INSTRUM_RECORD_HIT_90CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_90CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_90(exp) (__MW_INSTRUM_RECORD_HIT_90CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_84DA_86_90Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_84(exp) (__MW_INSTRUM_RECORD_HIT_84DA_86_90Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_84DA_86_90Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_84(exp) (__MW_INSTRUM_RECORD_HIT_84DA_86_90Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_96CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_96(exp) (__MW_INSTRUM_RECORD_HIT_96CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_96CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_96(exp) (__MW_INSTRUM_RECORD_HIT_96CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_100CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_100(exp) (__MW_INSTRUM_RECORD_HIT_100CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_100CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_100(exp) (__MW_INSTRUM_RECORD_HIT_100CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_94DA_96_100Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_94(exp) (__MW_INSTRUM_RECORD_HIT_94DA_96_100Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_94DA_96_100Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_94(exp) (__MW_INSTRUM_RECORD_HIT_94DA_96_100Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_106CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_106(exp) (__MW_INSTRUM_RECORD_HIT_106CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_106CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_106(exp) (__MW_INSTRUM_RECORD_HIT_106CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_110CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_110(exp) (__MW_INSTRUM_RECORD_HIT_110CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_110CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_110(exp) (__MW_INSTRUM_RECORD_HIT_110CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_104DA_106_110Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_104(exp) (__MW_INSTRUM_RECORD_HIT_104DA_106_110Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_104DA_106_110Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_104(exp) (__MW_INSTRUM_RECORD_HIT_104DA_106_110Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_116CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_116(exp) (__MW_INSTRUM_RECORD_HIT_116CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_116CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_116(exp) (__MW_INSTRUM_RECORD_HIT_116CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_120CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_120(exp) (__MW_INSTRUM_RECORD_HIT_120CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_120CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_120(exp) (__MW_INSTRUM_RECORD_HIT_120CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_114DA_116_120Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_114(exp) (__MW_INSTRUM_RECORD_HIT_114DA_116_120Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_114DA_116_120Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_114(exp) (__MW_INSTRUM_RECORD_HIT_114DA_116_120Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_126CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_126(exp) (__MW_INSTRUM_RECORD_HIT_126CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_126CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_126(exp) (__MW_INSTRUM_RECORD_HIT_126CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_130CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_130(exp) (__MW_INSTRUM_RECORD_HIT_130CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_130CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_130(exp) (__MW_INSTRUM_RECORD_HIT_130CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_124DA_126_130Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_124(exp) (__MW_INSTRUM_RECORD_HIT_124DA_126_130Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_124DA_126_130Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_124(exp) (__MW_INSTRUM_RECORD_HIT_124DA_126_130Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_136CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_136(exp) (__MW_INSTRUM_RECORD_HIT_136CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_136CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_136(exp) (__MW_INSTRUM_RECORD_HIT_136CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_140CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_140(exp) (__MW_INSTRUM_RECORD_HIT_140CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_140CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_140(exp) (__MW_INSTRUM_RECORD_HIT_140CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_134DA_136_140Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_134(exp) (__MW_INSTRUM_RECORD_HIT_134DA_136_140Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_134DA_136_140Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_134(exp) (__MW_INSTRUM_RECORD_HIT_134DA_136_140Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_146CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_146(exp) (__MW_INSTRUM_RECORD_HIT_146CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_146CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_146(exp) (__MW_INSTRUM_RECORD_HIT_146CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_150CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_150(exp) (__MW_INSTRUM_RECORD_HIT_150CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_150CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_150(exp) (__MW_INSTRUM_RECORD_HIT_150CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_144DA_146_150Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_144(exp) (__MW_INSTRUM_RECORD_HIT_144DA_146_150Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_144DA_146_150Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_144(exp) (__MW_INSTRUM_RECORD_HIT_144DA_146_150Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_156CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_156(exp) (__MW_INSTRUM_RECORD_HIT_156CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_156CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_156(exp) (__MW_INSTRUM_RECORD_HIT_156CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_160CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_160(exp) (__MW_INSTRUM_RECORD_HIT_160CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_160CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_160(exp) (__MW_INSTRUM_RECORD_HIT_160CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_154DA_156_160Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_154(exp) (__MW_INSTRUM_RECORD_HIT_154DA_156_160Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_154DA_156_160Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_154(exp) (__MW_INSTRUM_RECORD_HIT_154DA_156_160Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_168CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_168(exp) (__MW_INSTRUM_RECORD_HIT_168CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_168CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_168(exp) (__MW_INSTRUM_RECORD_HIT_168CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_172CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_172(exp) (__MW_INSTRUM_RECORD_HIT_172CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_172CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_172(exp) (__MW_INSTRUM_RECORD_HIT_172CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_166DA_168_172Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_166(exp) (__MW_INSTRUM_RECORD_HIT_166DA_168_172Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_166DA_168_172Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_166(exp) (__MW_INSTRUM_RECORD_HIT_166DA_168_172Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_178CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_178(exp) (__MW_INSTRUM_RECORD_HIT_178CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_178CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_178(exp) (__MW_INSTRUM_RECORD_HIT_178CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_182CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_182(exp) (__MW_INSTRUM_RECORD_HIT_182CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_182CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_182(exp) (__MW_INSTRUM_RECORD_HIT_182CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_176DA_178_182Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_176(exp) (__MW_INSTRUM_RECORD_HIT_176DA_178_182Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_176DA_178_182Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_176(exp) (__MW_INSTRUM_RECORD_HIT_176DA_178_182Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_188CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_188(exp) (__MW_INSTRUM_RECORD_HIT_188CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_188CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_188(exp) (__MW_INSTRUM_RECORD_HIT_188CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_192CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_192(exp) (__MW_INSTRUM_RECORD_HIT_192CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_192CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_192(exp) (__MW_INSTRUM_RECORD_HIT_192CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_186DA_188_192Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_186(exp) (__MW_INSTRUM_RECORD_HIT_186DA_188_192Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_186DA_188_192Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_186(exp) (__MW_INSTRUM_RECORD_HIT_186DA_188_192Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_198CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_198(exp) (__MW_INSTRUM_RECORD_HIT_198CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_198CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_198(exp) (__MW_INSTRUM_RECORD_HIT_198CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_202CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_202(exp) (__MW_INSTRUM_RECORD_HIT_202CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_202CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_202(exp) (__MW_INSTRUM_RECORD_HIT_202CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_196DA_198_202Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_196(exp) (__MW_INSTRUM_RECORD_HIT_196DA_198_202Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_196DA_198_202Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_196(exp) (__MW_INSTRUM_RECORD_HIT_196DA_198_202Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_208CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_208(exp) (__MW_INSTRUM_RECORD_HIT_208CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_208CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_208(exp) (__MW_INSTRUM_RECORD_HIT_208CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_212CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_212(exp) (__MW_INSTRUM_RECORD_HIT_212CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_212CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_212(exp) (__MW_INSTRUM_RECORD_HIT_212CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_206DA_208_212Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_206(exp) (__MW_INSTRUM_RECORD_HIT_206DA_208_212Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_206DA_208_212Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_206(exp) (__MW_INSTRUM_RECORD_HIT_206DA_208_212Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_218CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_218(exp) (__MW_INSTRUM_RECORD_HIT_218CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_218CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_218(exp) (__MW_INSTRUM_RECORD_HIT_218CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_222CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_222(exp) (__MW_INSTRUM_RECORD_HIT_222CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_222CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_222(exp) (__MW_INSTRUM_RECORD_HIT_222CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_216DA_218_222Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_216(exp) (__MW_INSTRUM_RECORD_HIT_216DA_218_222Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_216DA_218_222Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_216(exp) (__MW_INSTRUM_RECORD_HIT_216DA_218_222Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_228CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_228(exp) (__MW_INSTRUM_RECORD_HIT_228CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_228CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_228(exp) (__MW_INSTRUM_RECORD_HIT_228CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_232CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_232(exp) (__MW_INSTRUM_RECORD_HIT_232CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_232CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_232(exp) (__MW_INSTRUM_RECORD_HIT_232CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_226DA_228_232Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_226(exp) (__MW_INSTRUM_RECORD_HIT_226DA_228_232Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_226DA_228_232Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_226(exp) (__MW_INSTRUM_RECORD_HIT_226DA_228_232Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_238CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_238(exp) (__MW_INSTRUM_RECORD_HIT_238CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_238CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_238(exp) (__MW_INSTRUM_RECORD_HIT_238CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_242CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_242(exp) (__MW_INSTRUM_RECORD_HIT_242CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_242CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_242(exp) (__MW_INSTRUM_RECORD_HIT_242CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_236DA_238_242Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_236(exp) (__MW_INSTRUM_RECORD_HIT_236DA_238_242Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_236DA_238_242Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_236(exp) (__MW_INSTRUM_RECORD_HIT_236DA_238_242Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_250CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_250(exp) (__MW_INSTRUM_RECORD_HIT_250CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_250CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_250(exp) (__MW_INSTRUM_RECORD_HIT_250CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_254CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_254(exp) (__MW_INSTRUM_RECORD_HIT_254CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_254CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_254(exp) (__MW_INSTRUM_RECORD_HIT_254CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_248DA_250_254Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_248(exp) (__MW_INSTRUM_RECORD_HIT_248DA_250_254Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_248DA_250_254Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_248(exp) (__MW_INSTRUM_RECORD_HIT_248DA_250_254Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_260CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_260(exp) (__MW_INSTRUM_RECORD_HIT_260CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_260CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_260(exp) (__MW_INSTRUM_RECORD_HIT_260CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_264CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_264(exp) (__MW_INSTRUM_RECORD_HIT_264CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_264CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_264(exp) (__MW_INSTRUM_RECORD_HIT_264CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_258DA_260_264Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_258(exp) (__MW_INSTRUM_RECORD_HIT_258DA_260_264Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_258DA_260_264Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_258(exp) (__MW_INSTRUM_RECORD_HIT_258DA_260_264Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_270CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_270(exp) (__MW_INSTRUM_RECORD_HIT_270CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_270CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_270(exp) (__MW_INSTRUM_RECORD_HIT_270CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_274CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_274(exp) (__MW_INSTRUM_RECORD_HIT_274CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_274CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_274(exp) (__MW_INSTRUM_RECORD_HIT_274CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_268DA_270_274Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_268(exp) (__MW_INSTRUM_RECORD_HIT_268DA_270_274Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_268DA_270_274Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_268(exp) (__MW_INSTRUM_RECORD_HIT_268DA_270_274Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_280CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_280(exp) (__MW_INSTRUM_RECORD_HIT_280CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_280CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_280(exp) (__MW_INSTRUM_RECORD_HIT_280CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_284CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_284(exp) (__MW_INSTRUM_RECORD_HIT_284CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_284CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_284(exp) (__MW_INSTRUM_RECORD_HIT_284CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_278DA_280_284Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_278(exp) (__MW_INSTRUM_RECORD_HIT_278DA_280_284Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_278DA_280_284Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_278(exp) (__MW_INSTRUM_RECORD_HIT_278DA_280_284Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_290CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_290(exp) (__MW_INSTRUM_RECORD_HIT_290CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_290CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_290(exp) (__MW_INSTRUM_RECORD_HIT_290CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_294CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_294(exp) (__MW_INSTRUM_RECORD_HIT_294CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_294CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_294(exp) (__MW_INSTRUM_RECORD_HIT_294CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_288DA_290_294Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_288(exp) (__MW_INSTRUM_RECORD_HIT_288DA_290_294Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_288DA_290_294Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_288(exp) (__MW_INSTRUM_RECORD_HIT_288DA_290_294Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_300CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_300(exp) (__MW_INSTRUM_RECORD_HIT_300CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_300CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_300(exp) (__MW_INSTRUM_RECORD_HIT_300CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_304CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_304(exp) (__MW_INSTRUM_RECORD_HIT_304CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_304CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_304(exp) (__MW_INSTRUM_RECORD_HIT_304CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_298DA_300_304Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_298(exp) (__MW_INSTRUM_RECORD_HIT_298DA_300_304Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_298DA_300_304Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_298(exp) (__MW_INSTRUM_RECORD_HIT_298DA_300_304Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_310CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_310(exp) (__MW_INSTRUM_RECORD_HIT_310CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_310CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_310(exp) (__MW_INSTRUM_RECORD_HIT_310CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_314CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_314(exp) (__MW_INSTRUM_RECORD_HIT_314CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_314CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_314(exp) (__MW_INSTRUM_RECORD_HIT_314CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_308DA_310_314Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_308(exp) (__MW_INSTRUM_RECORD_HIT_308DA_310_314Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_308DA_310_314Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_308(exp) (__MW_INSTRUM_RECORD_HIT_308DA_310_314Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_320CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_320(exp) (__MW_INSTRUM_RECORD_HIT_320CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_320CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_320(exp) (__MW_INSTRUM_RECORD_HIT_320CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_324CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_324(exp) (__MW_INSTRUM_RECORD_HIT_324CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_324CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_324(exp) (__MW_INSTRUM_RECORD_HIT_324CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_318DA_320_324Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_318(exp) (__MW_INSTRUM_RECORD_HIT_318DA_320_324Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_318DA_320_324Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_318(exp) (__MW_INSTRUM_RECORD_HIT_318DA_320_324Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_338CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_338(exp) (__MW_INSTRUM_RECORD_HIT_338CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_338CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_338(exp) (__MW_INSTRUM_RECORD_HIT_338CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_342CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_342(exp) (__MW_INSTRUM_RECORD_HIT_342CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_342CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_342(exp) (__MW_INSTRUM_RECORD_HIT_342CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_336DA_338_342Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_336(exp) (__MW_INSTRUM_RECORD_HIT_336DA_338_342Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_336DA_338_342Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_336(exp) (__MW_INSTRUM_RECORD_HIT_336DA_338_342Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_348CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_348(exp) (__MW_INSTRUM_RECORD_HIT_348CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_348CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_348(exp) (__MW_INSTRUM_RECORD_HIT_348CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_352CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_352(exp) (__MW_INSTRUM_RECORD_HIT_352CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_352CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_352(exp) (__MW_INSTRUM_RECORD_HIT_352CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_346DA_348_352Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_346(exp) (__MW_INSTRUM_RECORD_HIT_346DA_348_352Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_346DA_348_352Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_346(exp) (__MW_INSTRUM_RECORD_HIT_346DA_348_352Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_358CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_358(exp) (__MW_INSTRUM_RECORD_HIT_358CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_358CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_358(exp) (__MW_INSTRUM_RECORD_HIT_358CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_362CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_362(exp) (__MW_INSTRUM_RECORD_HIT_362CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_362CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_362(exp) (__MW_INSTRUM_RECORD_HIT_362CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_356DA_358_362Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_356(exp) (__MW_INSTRUM_RECORD_HIT_356DA_358_362Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_356DA_358_362Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_356(exp) (__MW_INSTRUM_RECORD_HIT_356DA_358_362Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_368CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_368(exp) (__MW_INSTRUM_RECORD_HIT_368CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_368CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_368(exp) (__MW_INSTRUM_RECORD_HIT_368CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_372CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_372(exp) (__MW_INSTRUM_RECORD_HIT_372CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_372CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_372(exp) (__MW_INSTRUM_RECORD_HIT_372CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_366DA_368_372Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_366(exp) (__MW_INSTRUM_RECORD_HIT_366DA_368_372Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_366DA_368_372Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_366(exp) (__MW_INSTRUM_RECORD_HIT_366DA_368_372Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_378CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_378(exp) (__MW_INSTRUM_RECORD_HIT_378CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_378CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_378(exp) (__MW_INSTRUM_RECORD_HIT_378CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_382CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_382(exp) (__MW_INSTRUM_RECORD_HIT_382CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_382CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_382(exp) (__MW_INSTRUM_RECORD_HIT_382CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_376DA_378_382Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_376(exp) (__MW_INSTRUM_RECORD_HIT_376DA_378_382Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_376DA_378_382Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_376(exp) (__MW_INSTRUM_RECORD_HIT_376DA_378_382Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_388CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_388(exp) (__MW_INSTRUM_RECORD_HIT_388CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_388CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_388(exp) (__MW_INSTRUM_RECORD_HIT_388CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_392CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_392(exp) (__MW_INSTRUM_RECORD_HIT_392CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_392CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_392(exp) (__MW_INSTRUM_RECORD_HIT_392CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_386DA_388_392Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_386(exp) (__MW_INSTRUM_RECORD_HIT_386DA_388_392Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_386DA_388_392Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_386(exp) (__MW_INSTRUM_RECORD_HIT_386DA_388_392Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_398CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_398(exp) (__MW_INSTRUM_RECORD_HIT_398CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_398CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_398(exp) (__MW_INSTRUM_RECORD_HIT_398CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_402CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_402(exp) (__MW_INSTRUM_RECORD_HIT_402CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_402CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_402(exp) (__MW_INSTRUM_RECORD_HIT_402CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_396DA_398_402Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_396(exp) (__MW_INSTRUM_RECORD_HIT_396DA_398_402Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_396DA_398_402Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_396(exp) (__MW_INSTRUM_RECORD_HIT_396DA_398_402Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_408CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_408(exp) (__MW_INSTRUM_RECORD_HIT_408CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_408CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_408(exp) (__MW_INSTRUM_RECORD_HIT_408CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_412CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_412(exp) (__MW_INSTRUM_RECORD_HIT_412CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_412CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_412(exp) (__MW_INSTRUM_RECORD_HIT_412CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_406DA_408_412Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_406(exp) (__MW_INSTRUM_RECORD_HIT_406DA_408_412Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_406DA_408_412Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_406(exp) (__MW_INSTRUM_RECORD_HIT_406DA_408_412Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_419CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_419(exp) (__MW_INSTRUM_RECORD_HIT_419CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_419CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_419(exp) (__MW_INSTRUM_RECORD_HIT_419CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_423CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_423(exp) (__MW_INSTRUM_RECORD_HIT_423CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_423CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_423(exp) (__MW_INSTRUM_RECORD_HIT_423CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_417DA_419_423Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_417(exp) (__MW_INSTRUM_RECORD_HIT_417DA_419_423Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_417DA_419_423Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_417(exp) (__MW_INSTRUM_RECORD_HIT_417DA_419_423Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_429CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_429(exp) (__MW_INSTRUM_RECORD_HIT_429CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_429CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_429(exp) (__MW_INSTRUM_RECORD_HIT_429CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_433CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_433(exp) (__MW_INSTRUM_RECORD_HIT_433CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_433CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_433(exp) (__MW_INSTRUM_RECORD_HIT_433CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_427DA_429_433Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_427(exp) (__MW_INSTRUM_RECORD_HIT_427DA_429_433Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_427DA_429_433Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_427(exp) (__MW_INSTRUM_RECORD_HIT_427DA_429_433Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_439CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_439(exp) (__MW_INSTRUM_RECORD_HIT_439CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_439CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_439(exp) (__MW_INSTRUM_RECORD_HIT_439CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_443CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_443(exp) (__MW_INSTRUM_RECORD_HIT_443CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_443CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_443(exp) (__MW_INSTRUM_RECORD_HIT_443CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_437DA_439_443Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_437(exp) (__MW_INSTRUM_RECORD_HIT_437DA_439_443Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_437DA_439_443Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_437(exp) (__MW_INSTRUM_RECORD_HIT_437DA_439_443Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_449CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_449(exp) (__MW_INSTRUM_RECORD_HIT_449CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_449CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_449(exp) (__MW_INSTRUM_RECORD_HIT_449CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_453CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_453(exp) (__MW_INSTRUM_RECORD_HIT_453CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_453CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_453(exp) (__MW_INSTRUM_RECORD_HIT_453CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_447DA_449_453Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_447(exp) (__MW_INSTRUM_RECORD_HIT_447DA_449_453Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_447DA_449_453Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_447(exp) (__MW_INSTRUM_RECORD_HIT_447DA_449_453Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_459CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_459(exp) (__MW_INSTRUM_RECORD_HIT_459CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_459CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_459(exp) (__MW_INSTRUM_RECORD_HIT_459CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_463CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_463(exp) (__MW_INSTRUM_RECORD_HIT_463CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_463CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_463(exp) (__MW_INSTRUM_RECORD_HIT_463CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_457DA_459_463Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_457(exp) (__MW_INSTRUM_RECORD_HIT_457DA_459_463Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_457DA_459_463Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_457(exp) (__MW_INSTRUM_RECORD_HIT_457DA_459_463Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_469CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_469(exp) (__MW_INSTRUM_RECORD_HIT_469CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_469CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_469(exp) (__MW_INSTRUM_RECORD_HIT_469CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_473CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_473(exp) (__MW_INSTRUM_RECORD_HIT_473CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_473CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_473(exp) (__MW_INSTRUM_RECORD_HIT_473CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_467DA_469_473Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_467(exp) (__MW_INSTRUM_RECORD_HIT_467DA_469_473Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_467DA_469_473Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_467(exp) (__MW_INSTRUM_RECORD_HIT_467DA_469_473Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_479CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_479(exp) (__MW_INSTRUM_RECORD_HIT_479CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_479CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_479(exp) (__MW_INSTRUM_RECORD_HIT_479CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_483CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_483(exp) (__MW_INSTRUM_RECORD_HIT_483CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_483CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_483(exp) (__MW_INSTRUM_RECORD_HIT_483CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_477DA_479_483Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_477(exp) (__MW_INSTRUM_RECORD_HIT_477DA_479_483Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_477DA_479_483Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_477(exp) (__MW_INSTRUM_RECORD_HIT_477DA_479_483Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_489CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_489(exp) (__MW_INSTRUM_RECORD_HIT_489CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_489CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_489(exp) (__MW_INSTRUM_RECORD_HIT_489CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_493CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_493(exp) (__MW_INSTRUM_RECORD_HIT_493CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_493CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_493(exp) (__MW_INSTRUM_RECORD_HIT_493CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_487DA_489_493Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_487(exp) (__MW_INSTRUM_RECORD_HIT_487DA_489_493Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_487DA_489_493Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_487(exp) (__MW_INSTRUM_RECORD_HIT_487DA_489_493Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_527CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_527(exp) (__MW_INSTRUM_RECORD_HIT_527CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_527CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_527(exp) (__MW_INSTRUM_RECORD_HIT_527CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_529CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_529(exp) (__MW_INSTRUM_RECORD_HIT_529CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_529CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_529(exp) (__MW_INSTRUM_RECORD_HIT_529CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_523DAN_527_529Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_523(exp) (__MW_INSTRUM_RECORD_HIT_523DAN_527_529Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_523DAN_527_529Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_523(exp) (__MW_INSTRUM_RECORD_HIT_523DAN_527_529Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_538CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_538(exp) (__MW_INSTRUM_RECORD_HIT_538CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_538CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_538(exp) (__MW_INSTRUM_RECORD_HIT_538CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_542CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_542(exp) (__MW_INSTRUM_RECORD_HIT_542CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_542CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_542(exp) (__MW_INSTRUM_RECORD_HIT_542CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_548CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_548(exp) (__MW_INSTRUM_RECORD_HIT_548CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_548CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_548(exp) (__MW_INSTRUM_RECORD_HIT_548CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_552CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_552(exp) (__MW_INSTRUM_RECORD_HIT_552CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_552CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_552(exp) (__MW_INSTRUM_RECORD_HIT_552CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_534DOA_538_542A_548_552Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_534(exp) (__MW_INSTRUM_RECORD_HIT_534DOA_538_542A_548_552Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_534DOA_538_542A_548_552Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_534(exp) (__MW_INSTRUM_RECORD_HIT_534DOA_538_542A_548_552Z_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_564CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_564(exp) (__MW_INSTRUM_RECORD_HIT_564CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_564CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_564(exp) (__MW_INSTRUM_RECORD_HIT_564CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_568CZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_568(exp) (__MW_INSTRUM_RECORD_HIT_568CZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_568CZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_568(exp) (__MW_INSTRUM_RECORD_HIT_568CZ_Proj2_0020_0028PIL_0029(exp))

#endif
#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_562DA_564_568Z_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_562(exp) (__MW_INSTRUM_RECORD_HIT_562DA_564_568Z_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_562DA_564_568Z_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_562(exp) (__MW_INSTRUM_RECORD_HIT_562DA_564_568Z_Proj2_0020_0028PIL_0029(exp))

#endif


#define __MW_INSTRUM_FCN_ENTER_1() 

#define __MW_INSTRUM_FCN_ENTER_2() 

#define __MW_INSTRUM_FCN_ENTER_3() 

#define __MW_INSTRUM_FCN_ENTER_4() 

#define __MW_INSTRUM_FCN_ENTER_5() 

#define __MW_INSTRUM_FCN_ENTER_6() 

#define __MW_INSTRUM_FCN_ENTER_7() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_1EZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_1() __MW_INSTRUM_RECORD_HIT_1EZ_Proj2_0020_0028PIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_6FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_6(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_6FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_10FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_10(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_10FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_3() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_16FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_16(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_16FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_20FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_20(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_20FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_13() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_26FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_26(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_26FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_30FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_30(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_30FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_23() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_36FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_36(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_36FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_40FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_40(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_40FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_33() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_46FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_46(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_46FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_50FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_50(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_50FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_43() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_56FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_56(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_56FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_60FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_60(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_60FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_53() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_66FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_66(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_66FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_70FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_70(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_70FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_63() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_76FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_76(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_76FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_80FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_80(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_80FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_82XZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_82() __MW_INSTRUM_RECORD_HIT_82XZ_Proj2_0020_0028PIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_83EZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_83() __MW_INSTRUM_RECORD_HIT_83EZ_Proj2_0020_0028PIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_88FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_88(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_88FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_92FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_92(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_92FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_85() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_98FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_98(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_98FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_102FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_102(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_102FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_95() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_108FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_108(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_108FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_112FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_112(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_112FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_105() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_118FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_118(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_118FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_122FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_122(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_122FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_115() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_128FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_128(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_128FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_132FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_132(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_132FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_125() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_138FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_138(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_138FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_142FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_142(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_142FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_135() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_148FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_148(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_148FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_152FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_152(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_152FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_145() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_158FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_158(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_158FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_162FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_162(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_162FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_164XZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_164() __MW_INSTRUM_RECORD_HIT_164XZ_Proj2_0020_0028PIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_165EZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_165() __MW_INSTRUM_RECORD_HIT_165EZ_Proj2_0020_0028PIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_170FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_170(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_170FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_174FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_174(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_174FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_167() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_180FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_180(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_180FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_184FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_184(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_184FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_177() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_190FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_190(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_190FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_194FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_194(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_194FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_187() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_200FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_200(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_200FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_204FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_204(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_204FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_197() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_210FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_210(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_210FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_214FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_214(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_214FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_207() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_220FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_220(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_220FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_224FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_224(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_224FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_217() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_230FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_230(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_230FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_234FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_234(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_234FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_227() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_240FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_240(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_240FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_244FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_244(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_244FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_246XZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_246() __MW_INSTRUM_RECORD_HIT_246XZ_Proj2_0020_0028PIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_247EZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_247() __MW_INSTRUM_RECORD_HIT_247EZ_Proj2_0020_0028PIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_252FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_252(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_252FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_256FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_256(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_256FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_249() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_262FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_262(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_262FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_266FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_266(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_266FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_259() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_272FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_272(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_272FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_276FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_276(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_276FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_269() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_282FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_282(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_282FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_286FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_286(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_286FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_279() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_292FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_292(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_292FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_296FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_296(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_296FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_289() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_302FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_302(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_302FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_306FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_306(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_306FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_299() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_312FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_312(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_312FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_316FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_316(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_316FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_309() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_322FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_322(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_322FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_326FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_326(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_326FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_328XZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_328() __MW_INSTRUM_RECORD_HIT_328XZ_Proj2_0020_0028PIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_329EZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_329() __MW_INSTRUM_RECORD_HIT_329EZ_Proj2_0020_0028PIL_0029()

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_330DZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_330(exp) (__MW_INSTRUM_RECORD_HIT_330DZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_330DZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_330(exp) (__MW_INSTRUM_RECORD_HIT_330DZ_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_332IEZ_Proj2_0020_0028PIL_0029(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_332(lhs, rhs)(void)0

#define __MW_INSTRUM_NODE_331() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_335DZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_335() __MW_INSTRUM_RECORD_HIT_335DZ_Proj2_0020_0028PIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_340FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_340(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_340FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_344FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_344(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_344FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_337() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_350FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_350(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_350FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_354FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_354(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_354FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_347() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_360FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_360(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_360FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_364FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_364(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_364FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_357() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_370FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_370(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_370FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_374FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_374(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_374FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_367() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_380FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_380(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_380FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_384FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_384(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_384FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_377() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_390FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_390(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_390FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_394FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_394(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_394FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_387() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_400FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_400(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_400FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_404FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_404(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_404FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_397() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_410FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_410(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_410FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_414FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_414(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_414FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_416DZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_416() __MW_INSTRUM_RECORD_HIT_416DZ_Proj2_0020_0028PIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_421FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_421(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_421FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_425FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_425(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_425FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_418() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_431FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_431(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_431FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_435FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_435(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_435FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_428() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_441FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_441(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_441FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_445FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_445(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_445FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_438() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_451FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_451(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_451FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_455FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_455(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_455FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_448() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_461FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_461(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_461FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_465FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_465(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_465FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_458() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_471FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_471(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_471FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_475FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_475(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_475FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_468() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_481FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_481(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_481FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_485FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_485(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_485FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_478() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_491FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_491(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_491FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_495FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_495(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_495FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_497DZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_497() __MW_INSTRUM_RECORD_HIT_497DZ_Proj2_0020_0028PIL_0029()

#define __MW_INSTRUM_NODE_498() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_499DZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_499() __MW_INSTRUM_RECORD_HIT_499DZ_Proj2_0020_0028PIL_0029()

#define __MW_INSTRUM_NODE_500() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_501DZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_501() __MW_INSTRUM_RECORD_HIT_501DZ_Proj2_0020_0028PIL_0029()

#define __MW_INSTRUM_NODE_502() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_503DZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_503() __MW_INSTRUM_RECORD_HIT_503DZ_Proj2_0020_0028PIL_0029()

#define __MW_INSTRUM_NODE_504() ((void)0)


#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_505DZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_505(exp) (__MW_INSTRUM_RECORD_HIT_505DZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_505DZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_505(exp) (__MW_INSTRUM_RECORD_HIT_505DZ_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_507IEZ_Proj2_0020_0028PIL_0029(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_507(lhs, rhs)(void)0

#define __MW_INSTRUM_NODE_506() ((void)0)


#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_510DZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_510(exp) (__MW_INSTRUM_RECORD_HIT_510DZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_510DZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_510(exp) (__MW_INSTRUM_RECORD_HIT_510DZ_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_512IEZ_Proj2_0020_0028PIL_0029(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_512(lhs, rhs)(void)0

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_515DZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_515(exp) (__MW_INSTRUM_RECORD_HIT_515DZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_515DZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_515(exp) (__MW_INSTRUM_RECORD_HIT_515DZ_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_517FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_517(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_517FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_511() ((void)0)


#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_519DZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_519(exp) (__MW_INSTRUM_RECORD_HIT_519DZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_519DZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_519(exp) (__MW_INSTRUM_RECORD_HIT_519DZ_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_521FGTZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_521(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_521FGTZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_520() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_525(...) (__VA_ARGS__) 
#else
#define __MW_INSTRUM_NODE_525(exp) (exp)
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_531ILTZ_Proj2_0020_0028PIL_0029(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_531(lhs, rhs)(void)0

#ifdef __cplusplus
extern "C"
#else
extern
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_536(...) (__VA_ARGS__) 
#else
#define __MW_INSTRUM_NODE_536(exp) (exp)
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_540FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_540(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_540FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_544FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_544(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_544FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_546(...) (__VA_ARGS__) 
#else
#define __MW_INSTRUM_NODE_546(exp) (exp)
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_550FEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_550(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_550FEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_554FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_554(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_554FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_535() ((void)0)


#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_556DZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_556(exp) (__MW_INSTRUM_RECORD_HIT_556DZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_556DZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_556(exp) (__MW_INSTRUM_RECORD_HIT_556DZ_Proj2_0020_0028PIL_0029(exp))

#endif

#define __MW_INSTRUM_NODE_557() ((void)0)


#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_558DZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_558(exp) (__MW_INSTRUM_RECORD_HIT_558DZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_558DZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_558(exp) (__MW_INSTRUM_RECORD_HIT_558DZ_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_560FLEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_560(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_560FLEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_566FLTZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_566(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_566FLTZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_570IGEZ_Proj2_0020_0028PIL_0029(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_570(lhs, rhs)(void)0

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_573DZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_573(exp) (__MW_INSTRUM_RECORD_HIT_573DZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_573DZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_573(exp) (__MW_INSTRUM_RECORD_HIT_573DZ_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_575FGEZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_575(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_575FGEZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#define __MW_INSTRUM_NODE_574() ((void)0)


#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_577DZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_577(exp) (__MW_INSTRUM_RECORD_HIT_577DZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_577DZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_577(exp) (__MW_INSTRUM_RECORD_HIT_577DZ_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_579FGTZ_Proj2_0020_0028PIL_0029(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_579(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_579FGTZ_Proj2_0020_0028PIL_0029(lhs, rhs))

#ifdef __cplusplus
extern "C" bool __MW_INSTRUM_RECORD_HIT_581DZ_Proj2_0020_0028PIL_0029(bool condValue) { return condValue; }
#define __MW_INSTRUM_NODE_581(exp) (__MW_INSTRUM_RECORD_HIT_581DZ_Proj2_0020_0028PIL_0029((bool)(exp)))

#else

extern int __MW_INSTRUM_RECORD_HIT_581DZ_Proj2_0020_0028PIL_0029(int condValue) { return condValue; }
#define __MW_INSTRUM_NODE_581(exp) (__MW_INSTRUM_RECORD_HIT_581DZ_Proj2_0020_0028PIL_0029(exp))

#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_583XZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_583() __MW_INSTRUM_RECORD_HIT_583XZ_Proj2_0020_0028PIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_584EZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_584() __MW_INSTRUM_RECORD_HIT_584EZ_Proj2_0020_0028PIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_585XZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_585() __MW_INSTRUM_RECORD_HIT_585XZ_Proj2_0020_0028PIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_586EZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_586() __MW_INSTRUM_RECORD_HIT_586EZ_Proj2_0020_0028PIL_0029()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_587XZ_Proj2_0020_0028PIL_0029(void) { }
#define __MW_INSTRUM_NODE_587() __MW_INSTRUM_RECORD_HIT_587XZ_Proj2_0020_0028PIL_0029()


#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

# 1 "C:\\Users\\Sina\\Desktop\\embedded\\final project\\main\\Proj2_ert_rtw\\Proj2.c"
# 5 "C:\\Program Files\\MATLAB\\R2025b\\polyspace\\verifier\\extensions\\tmw_builtins\\tmw_builtins.h" 3
#ifndef _TMW_BUILTINS_H_
#define _TMW_BUILTINS_H_
# 71
# 76


#endif /* _TMW_BUILTINS_H_ */
# 16 "C:\\Users\\Sina\\Desktop\\embedded\\final project\\main\\Proj2_ert_rtw\\Proj2.h"
#ifndef Proj2_h_
#define Proj2_h_
#ifndef Proj2_COMMON_INCLUDES_
#define Proj2_COMMON_INCLUDES_
# 16 "C:\\Users\\Sina\\Desktop\\embedded\\final project\\main\\Proj2_ert_rtw\\rtwtypes.h"
#ifndef RTWTYPES_H
#define RTWTYPES_H



#ifndef false
#define false (0U)
#endif /* false */

#ifndef true
#define true (1U)
#endif /* true */
# 47
typedef signed char int8_T; 
typedef unsigned char uint8_T; 
typedef int int16_T; 
typedef unsigned uint16_T; 
typedef long int32_T; 
typedef unsigned long uint32_T; 
typedef float real32_T; 
typedef double real64_T; 
# 60
typedef double real_T; 
typedef double time_T; 
typedef unsigned char boolean_T; 
typedef int int_T; 
typedef unsigned uint_T; 
typedef unsigned long ulong_T; 
typedef char char_T; 
typedef unsigned char uchar_T; 
typedef char_T byte_T; 
# 78
typedef 
# 75
struct { 
real32_T re; 
real32_T im; 
} creal32_T; 




typedef 
# 80
struct { 
real64_T re; 
real64_T im; 
} creal64_T; 




typedef 
# 85
struct { 
real_T re; 
real_T im; 
} creal_T; 
# 95
typedef 
# 92
struct { 
int8_T re; 
int8_T im; 
} cint8_T; 
# 102
typedef 
# 99
struct { 
uint8_T re; 
uint8_T im; 
} cuint8_T; 
# 109
typedef 
# 106
struct { 
int16_T re; 
int16_T im; 
} cint16_T; 
# 116
typedef 
# 113
struct { 
uint16_T re; 
uint16_T im; 
} cuint16_T; 
# 123
typedef 
# 120
struct { 
int32_T re; 
int32_T im; 
} cint32_T; 
# 130
typedef 
# 127
struct { 
uint32_T re; 
uint32_T im; 
} cuint32_T; 
# 148
typedef void *pointer_T; 

#endif /* RTWTYPES_H */
# 11 "C:\\PROGRA~1\\MATLAB\\R2025b\\simulink\\include\\rtw_continuous.h"
#ifndef RTW_CONTINUOUS_H__
#define RTW_CONTINUOUS_H__
# 26
typedef 
# 21
enum { 
SS_MATRIX_NONE, 
SS_MATRIX_CONSTANT, 
SS_MATRIX_TIMEDEP, 
SS_MATRIX_STATEDEP
} ssMatrixType; 
# 33
typedef 
# 28
enum { 
SOLVER_MODE_AUTO, 

SOLVER_MODE_SINGLETASKING, 
SOLVER_MODE_MULTITASKING
} SolverMode; 

typedef enum { MINOR_TIME_STEP, MAJOR_TIME_STEP} SimTimeStep; 
# 41
typedef void (*rtMdlInitializeSizesFcn)(void * rtModel); 
typedef void (*rtMdlInitializeSampleTimesFcn)(void * rtModel); 
typedef void (*rtMdlStartFcn)(void * rtModel); 
typedef void (*rtMdlOutputsFcn)(void * rtModel, int_T tid); 
typedef void (*rtMdlUpdateFcn)(void * rtModel, int_T tid); 
typedef void (*rtMdlDerivativesFcn)(void * rtModel); 
typedef void (*rtMdlProjectionFcn)(void * rtModel); 
typedef void (*rtMdlMassMatrixFcn)(void * rtModel); 
typedef void (*rtMdlForcingFunctionFcn)(void * rtModel); 
typedef void (*rtMdlTerminateFcn)(void * rtModel); 
# 74
typedef 
# 59
struct _RTWRTModelMethodsInfo_tag { 
void *rtModelPtr; 
rtMdlInitializeSizesFcn rtmInitSizesFcn; 
rtMdlInitializeSampleTimesFcn rtmInitSampTimesFcn; 
rtMdlStartFcn rtmStartFcn; 
rtMdlOutputsFcn rtmOutputsFcn; 
rtMdlUpdateFcn rtmUpdateFcn; 
rtMdlDerivativesFcn rtmDervisFcn; 
rtMdlProjectionFcn rtmProjectionFcn; 
rtMdlMassMatrixFcn rtmMassMatrixFcn; 
rtMdlForcingFunctionFcn rtmForcingFunctionFcn; 
rtMdlTerminateFcn rtmTerminateFcn; 



} RTWRTModelMethodsInfo; 
# 109
#endif /* RTW_CONTINUOUS_H__ */
# 11 "C:\\PROGRA~1\\MATLAB\\R2025b\\simulink\\include\\rtw_solver.h"
#ifndef RTW_SOLVER_H__
#define RTW_SOLVER_H__
# 29
typedef 
# 24
enum { 
SL_SOLVER_TOLERANCE_AUTO, 
SL_SOLVER_TOLERANCE_LOCAL, 
SL_SOLVER_TOLERANCE_GLOBAL, 
SL_SOLVER_TOLERANCE_UNDEFINED = 255
} SL_SolverToleranceControlFlag_T; 
# 41
typedef 
# 35
enum { 
SL_JM_BD_AUTO, 
SL_JM_BD_SPARSE_PERTURBATION, 
SL_JM_BD_FULL_PERTURBATION, 
SL_JM_BD_SPARSE_ANALYTICAL, 
SL_JM_BD_FULL_ANALYTICAL
} slJmBdControl; 
# 126
typedef 
# 44
struct _ssSolverInfo_tag { 
void *rtModelPtr; 

SimTimeStep *simTimeStepPtr; 
void *solverData; 
const char_T *solverName; 
boolean_T isVariableStepSolver; 
boolean_T solverNeedsReset; 
SolverMode solverMode; 

time_T solverStopTime; 
time_T *stepSizePtr; 
time_T minStepSize; 
time_T maxStepSize; 
time_T fixedStepSize; 

int_T solverShapePreserveControl; 
int_T solverMaxConsecutiveMinStep; 
int_T maxNumMinSteps; 
int_T solverMaxOrder; 
real_T solverConsecutiveZCsStepRelTol; 
int_T solverMaxConsecutiveZCs; 

int_T solverExtrapolationOrder; 
int_T solverNumberNewtonIterations; 

int_T solverRefineFactor; 
real_T solverRelTol; 
real_T unused_real_T_1; 

real_T **dXPtr; 
time_T **tPtr; 

int_T *numContStatesPtr; 
real_T **contStatesPtr; 

int_T *numPeriodicContStatesPtr; 
int_T **periodicContStateIndicesPtr; 
real_T **periodicContStateRangesPtr; 

real_T *zcSignalVector; 
uint8_T *zcEventsVector; 
uint8_T *zcSignalAttrib; 
int_T zcSignalVectorLength; 
uint8_T *reserved; 

boolean_T foundContZcEvents; 
boolean_T isAtLeftPostOfContZcEvent; 
boolean_T isAtRightPostOfContZcEvent; 
boolean_T adaptiveZcDetection; 

int_T numZcSignals; 

boolean_T stateProjection; 
boolean_T robustResetMethod; 
boolean_T updateJacobianAtReset; 
boolean_T consistencyChecking; 

ssMatrixType massMatrixType; 
int_T massMatrixNzMax; 
int_T *massMatrixIr; 
int_T *massMatrixJc; 
real_T *massMatrixPr; 

const char_T **errStatusPtr; 

RTWRTModelMethodsInfo *modelMethodsPtr; 
real_T zcThreshold; 
int_T reserved_1; 
int_T consecutiveZCsError; 
boolean_T CTOutputIncnstWithState; 
boolean_T isComputingJacobian; 
slJmBdControl solverJacobianMethodControl; 
int_T ignoredZcDiagnostic; 
int_T maskedZcDiagnostic; 
boolean_T isOutputMethodComputed; 
int_T maxZcBracketingIterations; 
boolean_T isMinorTimeStepWithModeChange; 
int_T maxZcPerStep; 
real_T **zcSignalPtr; 
boolean_T **contStateDisabledPtr; 
boolean_T isContModeFrozen; 
} ssSolverInfo; 


typedef ssSolverInfo RTWSolverInfo; 
# 301
#endif /* RTW_SOLVER_H__ */
# 23 "C:\\Users\\Sina\\Desktop\\embedded\\final project\\main\\Proj2_ert_rtw\\Proj2.h"
#endif /* Proj2_COMMON_INCLUDES_ */
# 16 "C:\\Users\\Sina\\Desktop\\embedded\\final project\\main\\Proj2_ert_rtw\\Proj2_types.h"
#ifndef Proj2_types_h_
#define Proj2_types_h_


typedef struct P_Proj2_T_ P_Proj2_T; 


typedef struct tag_RTM_Proj2_T RT_MODEL_Proj2_T; 

#endif /* Proj2_types_h_ */
# 149 "c:\\programdata\\matlab\\supportpackages\\r2025b\\acli\\data\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3
typedef int ptrdiff_t; 
# 216
typedef unsigned size_t; 
# 293
#ifdef _BSD_WCHAR_T_
#undef _BSD_WCHAR_T_
#endif /* _BSD_WCHAR_T_ */
# 328
typedef int wchar_t; 
# 421
#ifndef _GCC_MAX_ALIGN_T
#define _GCC_MAX_ALIGN_T
# 437
typedef 
# 426
struct { 
long long __max_align_ll __attribute((__aligned__(__alignof__(long long)))); 
long double __max_align_ld __attribute((__aligned__(__alignof__(long double)))); 
# 437
} max_align_t; 
#endif /* _GCC_MAX_ALIGN_T */
# 29 "C:\\Users\\Sina\\Desktop\\embedded\\final project\\main\\Proj2_ert_rtw\\Proj2.h"
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm) ((rtm)->errorStatus)
#endif /* rtmGetErrorStatus */

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm,val) ((rtm)->errorStatus = (val))
#endif /* rtmSetErrorStatus */





typedef 
# 38
struct { 
real_T h[4]; 
real_T h_safe[4]; 
} B_Proj2_T; 
# 54
typedef 
# 44
struct { 
real_T UnitDelay_DSTATE[4]; 
real_T UnitDelay1_DSTATE[4]; 
real_T UnitDelay2_DSTATE[4]; 
real_T DiscreteTimeIntegrator_DSTATE[4]; 
int32_T clockTickCounter; 
uint8_T is_active_c3_Proj2; 
uint8_T is_c3_Proj2; 
uint8_T is_active_c1_Proj2; 
uint8_T is_c1_Proj2; 
} DW_Proj2_T; 


struct P_Proj2_T_ { 
real_T A_total[16]; 


real_T T_dif[4]; 


real_T T_get[4]; 


real_T T_off[4]; 




real_T T_on[4]; 




real_T b[4]; 


real_T c[4]; 


real_T u; 


real_T x0[4]; 


real_T x_Y0; 


real_T DiscreteTimeIntegrator_gainval; 



real_T UnitDelay_InitialCondition; 


real_T UnitDelay1_InitialCondition; 


real_T UnitDelay2_InitialCondition; 


real_T DiscretePulseGenerator_Amp; 


real_T DiscretePulseGenerator_Period; 



real_T DiscretePulseGenerator_Duty; 



real_T DiscretePulseGenerator_PhaseDel; 


}; 


struct tag_RTM_Proj2_T { 
const char_T *volatile errorStatus; 
}; 


extern P_Proj2_T Proj2_P; 


extern B_Proj2_T Proj2_B; 


extern DW_Proj2_T Proj2_DW; 


extern void Proj2_initialize(void); 
extern void Proj2_step(void); 
extern void Proj2_terminate(void); 


extern RT_MODEL_Proj2_T *const Proj2_M; 
extern volatile boolean_T stopRequested; 
extern volatile boolean_T runModel; 
# 175
#endif /* Proj2_h_ */
# 32 "C:\\Users\\Sina\\Desktop\\embedded\\final project\\main\\Proj2_ert_rtw\\Proj2.c"
B_Proj2_T Proj2_B; 


DW_Proj2_T Proj2_DW; 


static RT_MODEL_Proj2_T Proj2_M_; 
RT_MODEL_Proj2_T *const Proj2_M = (&Proj2_M_); 


static void Proj2_S1100(void); 
static void Proj2_S0110(void); 
static void Proj2_S1001(void); 
static void Proj2_S1010(void); 


static void Proj2_S1100(void) 
{ double __mw_tmp_for_expr_28; double __mw_tmp_for_expr_27; double __mw_tmp_for_expr_26; double __mw_tmp_for_expr_25; double __mw_tmp_for_expr_24; double __mw_tmp_for_expr_23; double __mw_tmp_for_expr_22; double __mw_tmp_for_expr_21; double __mw_tmp_for_expr_20; double __mw_tmp_for_expr_19; double __mw_tmp_for_expr_18; double __mw_tmp_for_expr_17; double __mw_tmp_for_expr_16; double __mw_tmp_for_expr_15; double __mw_tmp_for_expr_14; double __mw_tmp_for_expr_13; double __mw_tmp_for_expr_12; double __mw_tmp_for_expr_11; double __mw_tmp_for_expr_10; double __mw_tmp_for_expr_9; double __mw_tmp_for_expr_8; double __mw_tmp_for_expr_7; double __mw_tmp_for_expr_6; double __mw_tmp_for_expr_5; double __mw_tmp_for_expr_4; double __mw_tmp_for_expr_3; double __mw_tmp_for_expr_2; double __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_1(); __MW_INSTRUM_NODE_1(); { 

if (__MW_INSTRUM_NODE_2(__MW_INSTRUM_NODE_4(((__mw_tmp_for_expr_1 = Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_2 = Proj2_P.T_get[2]), (__MW_INSTRUM_NODE_6(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 <= __mw_tmp_for_expr_2))))) && __MW_INSTRUM_NODE_8(((__mw_tmp_for_expr_3 = Proj2_DW.UnitDelay_DSTATE[0] - Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_4 = Proj2_P.T_dif[2]), (__MW_INSTRUM_NODE_10(__mw_tmp_for_expr_3, __mw_tmp_for_expr_4), (__mw_tmp_for_expr_3 >= __mw_tmp_for_expr_4))))))) 

{ 
Proj2_B.h[0] = (0.0); 
Proj2_B.h[2] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)3U; 
} else { { if (__MW_INSTRUM_NODE_12(__MW_INSTRUM_NODE_14(((__mw_tmp_for_expr_5 = Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_6 = Proj2_P.T_get[3]), (__MW_INSTRUM_NODE_16(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 <= __mw_tmp_for_expr_6))))) && __MW_INSTRUM_NODE_18(((__mw_tmp_for_expr_7 = Proj2_DW.UnitDelay_DSTATE[0] - Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_8 = Proj2_P.T_dif[3]), (__MW_INSTRUM_NODE_20(__mw_tmp_for_expr_7, __mw_tmp_for_expr_8), (__mw_tmp_for_expr_7 >= __mw_tmp_for_expr_8))))))) 

{ 
Proj2_B.h[0] = (0.0); 
Proj2_B.h[3] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)2U; 
} else { { if (__MW_INSTRUM_NODE_22(__MW_INSTRUM_NODE_24(((__mw_tmp_for_expr_9 = Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_10 = Proj2_P.T_get[2]), (__MW_INSTRUM_NODE_26(__mw_tmp_for_expr_9, __mw_tmp_for_expr_10), (__mw_tmp_for_expr_9 <= __mw_tmp_for_expr_10))))) && __MW_INSTRUM_NODE_28(((__mw_tmp_for_expr_11 = Proj2_DW.UnitDelay_DSTATE[1] - Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_12 = Proj2_P.T_dif[2]), (__MW_INSTRUM_NODE_30(__mw_tmp_for_expr_11, __mw_tmp_for_expr_12), (__mw_tmp_for_expr_11 >= __mw_tmp_for_expr_12))))))) 

{ 
Proj2_B.h[1] = (0.0); 
Proj2_B.h[2] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)5U; 
} else { { if (__MW_INSTRUM_NODE_32(__MW_INSTRUM_NODE_34(((__mw_tmp_for_expr_13 = Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_14 = Proj2_P.T_get[3]), (__MW_INSTRUM_NODE_36(__mw_tmp_for_expr_13, __mw_tmp_for_expr_14), (__mw_tmp_for_expr_13 <= __mw_tmp_for_expr_14))))) && __MW_INSTRUM_NODE_38(((__mw_tmp_for_expr_15 = Proj2_DW.UnitDelay_DSTATE[1] - Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_16 = Proj2_P.T_dif[3]), (__MW_INSTRUM_NODE_40(__mw_tmp_for_expr_15, __mw_tmp_for_expr_16), (__mw_tmp_for_expr_15 >= __mw_tmp_for_expr_16))))))) 

{ 
Proj2_B.h[1] = (0.0); 
Proj2_B.h[3] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)4U; 
} else { { if (__MW_INSTRUM_NODE_42(__MW_INSTRUM_NODE_44(((__mw_tmp_for_expr_17 = Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_18 = Proj2_P.T_off[0]), (__MW_INSTRUM_NODE_46(__mw_tmp_for_expr_17, __mw_tmp_for_expr_18), (__mw_tmp_for_expr_17 >= __mw_tmp_for_expr_18))))) && __MW_INSTRUM_NODE_48(((__mw_tmp_for_expr_19 = Proj2_B.h[0]), (__MW_INSTRUM_NODE_50(__mw_tmp_for_expr_19, (1.0)), (__mw_tmp_for_expr_19 == (1.0))))))) 
{ 
Proj2_B.h[0] = (0.0); 
} else { { if (__MW_INSTRUM_NODE_52(__MW_INSTRUM_NODE_54(((__mw_tmp_for_expr_20 = Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_21 = Proj2_P.T_on[0]), (__MW_INSTRUM_NODE_56(__mw_tmp_for_expr_20, __mw_tmp_for_expr_21), (__mw_tmp_for_expr_20 <= __mw_tmp_for_expr_21))))) && __MW_INSTRUM_NODE_58(((__mw_tmp_for_expr_22 = Proj2_B.h[0]), (__MW_INSTRUM_NODE_60(__mw_tmp_for_expr_22, (0.0)), (__mw_tmp_for_expr_22 == (0.0))))))) 
{ 
Proj2_B.h[0] = (1.0); 
} else { { if (__MW_INSTRUM_NODE_62(__MW_INSTRUM_NODE_64(((__mw_tmp_for_expr_23 = Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_24 = Proj2_P.T_on[1]), (__MW_INSTRUM_NODE_66(__mw_tmp_for_expr_23, __mw_tmp_for_expr_24), (__mw_tmp_for_expr_23 <= __mw_tmp_for_expr_24))))) && __MW_INSTRUM_NODE_68(((__mw_tmp_for_expr_25 = Proj2_B.h[1]), (__MW_INSTRUM_NODE_70(__mw_tmp_for_expr_25, (0.0)), (__mw_tmp_for_expr_25 == (0.0))))))) 
{ 
Proj2_B.h[1] = (1.0); 
} else { { if (__MW_INSTRUM_NODE_72(__MW_INSTRUM_NODE_74(((__mw_tmp_for_expr_26 = Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_27 = Proj2_P.T_off[1]), (__MW_INSTRUM_NODE_76(__mw_tmp_for_expr_26, __mw_tmp_for_expr_27), (__mw_tmp_for_expr_26 >= __mw_tmp_for_expr_27))))) && __MW_INSTRUM_NODE_78(((__mw_tmp_for_expr_28 = Proj2_B.h[1]), (__MW_INSTRUM_NODE_80(__mw_tmp_for_expr_28, (1.0)), (__mw_tmp_for_expr_28 == (1.0))))))) 
{ 
Proj2_B.h[1] = (0.0); 
}  } }  } }  } }  } }  } }  } }  } }  } __MW_INSTRUM_NODE_82(); 


} 


static void Proj2_S0110(void) 
{ double __mw_tmp_for_expr_28; double __mw_tmp_for_expr_27; double __mw_tmp_for_expr_26; double __mw_tmp_for_expr_25; double __mw_tmp_for_expr_24; double __mw_tmp_for_expr_23; double __mw_tmp_for_expr_22; double __mw_tmp_for_expr_21; double __mw_tmp_for_expr_20; double __mw_tmp_for_expr_19; double __mw_tmp_for_expr_18; double __mw_tmp_for_expr_17; double __mw_tmp_for_expr_16; double __mw_tmp_for_expr_15; double __mw_tmp_for_expr_14; double __mw_tmp_for_expr_13; double __mw_tmp_for_expr_12; double __mw_tmp_for_expr_11; double __mw_tmp_for_expr_10; double __mw_tmp_for_expr_9; double __mw_tmp_for_expr_8; double __mw_tmp_for_expr_7; double __mw_tmp_for_expr_6; double __mw_tmp_for_expr_5; double __mw_tmp_for_expr_4; double __mw_tmp_for_expr_3; double __mw_tmp_for_expr_2; double __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_2(); __MW_INSTRUM_NODE_83(); { 

if (__MW_INSTRUM_NODE_84(__MW_INSTRUM_NODE_86(((__mw_tmp_for_expr_1 = Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_2 = Proj2_P.T_get[0]), (__MW_INSTRUM_NODE_88(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 <= __mw_tmp_for_expr_2))))) && __MW_INSTRUM_NODE_90(((__mw_tmp_for_expr_3 = Proj2_DW.UnitDelay_DSTATE[2] - Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_4 = Proj2_P.T_dif[0]), (__MW_INSTRUM_NODE_92(__mw_tmp_for_expr_3, __mw_tmp_for_expr_4), (__mw_tmp_for_expr_3 >= __mw_tmp_for_expr_4))))))) 

{ 
Proj2_B.h[2] = (0.0); 
Proj2_B.h[0] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)6U; 
} else { { if (__MW_INSTRUM_NODE_94(__MW_INSTRUM_NODE_96(((__mw_tmp_for_expr_5 = Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_6 = Proj2_P.T_get[3]), (__MW_INSTRUM_NODE_98(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 <= __mw_tmp_for_expr_6))))) && __MW_INSTRUM_NODE_100(((__mw_tmp_for_expr_7 = Proj2_DW.UnitDelay_DSTATE[2] - Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_8 = Proj2_P.T_dif[3]), (__MW_INSTRUM_NODE_102(__mw_tmp_for_expr_7, __mw_tmp_for_expr_8), (__mw_tmp_for_expr_7 >= __mw_tmp_for_expr_8))))))) 

{ 
Proj2_B.h[2] = (0.0); 
Proj2_B.h[3] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)2U; 
} else { { if (__MW_INSTRUM_NODE_104(__MW_INSTRUM_NODE_106(((__mw_tmp_for_expr_9 = Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_10 = Proj2_P.T_get[0]), (__MW_INSTRUM_NODE_108(__mw_tmp_for_expr_9, __mw_tmp_for_expr_10), (__mw_tmp_for_expr_9 <= __mw_tmp_for_expr_10))))) && __MW_INSTRUM_NODE_110(((__mw_tmp_for_expr_11 = Proj2_DW.UnitDelay_DSTATE[1] - Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_12 = Proj2_P.T_dif[0]), (__MW_INSTRUM_NODE_112(__mw_tmp_for_expr_11, __mw_tmp_for_expr_12), (__mw_tmp_for_expr_11 >= __mw_tmp_for_expr_12))))))) 

{ 
Proj2_B.h[1] = (0.0); 
Proj2_B.h[0] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)5U; 
} else { { if (__MW_INSTRUM_NODE_114(__MW_INSTRUM_NODE_116(((__mw_tmp_for_expr_13 = Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_14 = Proj2_P.T_get[3]), (__MW_INSTRUM_NODE_118(__mw_tmp_for_expr_13, __mw_tmp_for_expr_14), (__mw_tmp_for_expr_13 <= __mw_tmp_for_expr_14))))) && __MW_INSTRUM_NODE_120(((__mw_tmp_for_expr_15 = Proj2_DW.UnitDelay_DSTATE[1] - Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_16 = Proj2_P.T_dif[3]), (__MW_INSTRUM_NODE_122(__mw_tmp_for_expr_15, __mw_tmp_for_expr_16), (__mw_tmp_for_expr_15 >= __mw_tmp_for_expr_16))))))) 

{ 
Proj2_B.h[1] = (0.0); 
Proj2_B.h[3] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)1U; 
} else { { if (__MW_INSTRUM_NODE_124(__MW_INSTRUM_NODE_126(((__mw_tmp_for_expr_17 = Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_18 = Proj2_P.T_off[2]), (__MW_INSTRUM_NODE_128(__mw_tmp_for_expr_17, __mw_tmp_for_expr_18), (__mw_tmp_for_expr_17 >= __mw_tmp_for_expr_18))))) && __MW_INSTRUM_NODE_130(((__mw_tmp_for_expr_19 = Proj2_B.h[2]), (__MW_INSTRUM_NODE_132(__mw_tmp_for_expr_19, (1.0)), (__mw_tmp_for_expr_19 == (1.0))))))) 
{ 
Proj2_B.h[2] = (0.0); 
} else { { if (__MW_INSTRUM_NODE_134(__MW_INSTRUM_NODE_136(((__mw_tmp_for_expr_20 = Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_21 = Proj2_P.T_on[2]), (__MW_INSTRUM_NODE_138(__mw_tmp_for_expr_20, __mw_tmp_for_expr_21), (__mw_tmp_for_expr_20 <= __mw_tmp_for_expr_21))))) && __MW_INSTRUM_NODE_140(((__mw_tmp_for_expr_22 = Proj2_B.h[2]), (__MW_INSTRUM_NODE_142(__mw_tmp_for_expr_22, (0.0)), (__mw_tmp_for_expr_22 == (0.0))))))) 
{ 
Proj2_B.h[2] = (1.0); 
} else { { if (__MW_INSTRUM_NODE_144(__MW_INSTRUM_NODE_146(((__mw_tmp_for_expr_23 = Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_24 = Proj2_P.T_on[1]), (__MW_INSTRUM_NODE_148(__mw_tmp_for_expr_23, __mw_tmp_for_expr_24), (__mw_tmp_for_expr_23 <= __mw_tmp_for_expr_24))))) && __MW_INSTRUM_NODE_150(((__mw_tmp_for_expr_25 = Proj2_B.h[1]), (__MW_INSTRUM_NODE_152(__mw_tmp_for_expr_25, (0.0)), (__mw_tmp_for_expr_25 == (0.0))))))) 
{ 
Proj2_B.h[1] = (1.0); 
} else { { if (__MW_INSTRUM_NODE_154(__MW_INSTRUM_NODE_156(((__mw_tmp_for_expr_26 = Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_27 = Proj2_P.T_off[1]), (__MW_INSTRUM_NODE_158(__mw_tmp_for_expr_26, __mw_tmp_for_expr_27), (__mw_tmp_for_expr_26 >= __mw_tmp_for_expr_27))))) && __MW_INSTRUM_NODE_160(((__mw_tmp_for_expr_28 = Proj2_B.h[1]), (__MW_INSTRUM_NODE_162(__mw_tmp_for_expr_28, (1.0)), (__mw_tmp_for_expr_28 == (1.0))))))) 
{ 
Proj2_B.h[1] = (0.0); 
}  } }  } }  } }  } }  } }  } }  } }  } __MW_INSTRUM_NODE_164(); 


} 


static void Proj2_S1001(void) 
{ double __mw_tmp_for_expr_28; double __mw_tmp_for_expr_27; double __mw_tmp_for_expr_26; double __mw_tmp_for_expr_25; double __mw_tmp_for_expr_24; double __mw_tmp_for_expr_23; double __mw_tmp_for_expr_22; double __mw_tmp_for_expr_21; double __mw_tmp_for_expr_20; double __mw_tmp_for_expr_19; double __mw_tmp_for_expr_18; double __mw_tmp_for_expr_17; double __mw_tmp_for_expr_16; double __mw_tmp_for_expr_15; double __mw_tmp_for_expr_14; double __mw_tmp_for_expr_13; double __mw_tmp_for_expr_12; double __mw_tmp_for_expr_11; double __mw_tmp_for_expr_10; double __mw_tmp_for_expr_9; double __mw_tmp_for_expr_8; double __mw_tmp_for_expr_7; double __mw_tmp_for_expr_6; double __mw_tmp_for_expr_5; double __mw_tmp_for_expr_4; double __mw_tmp_for_expr_3; double __mw_tmp_for_expr_2; double __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_3(); __MW_INSTRUM_NODE_165(); { 

if (__MW_INSTRUM_NODE_166(__MW_INSTRUM_NODE_168(((__mw_tmp_for_expr_1 = Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_2 = Proj2_P.T_get[1]), (__MW_INSTRUM_NODE_170(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 <= __mw_tmp_for_expr_2))))) && __MW_INSTRUM_NODE_172(((__mw_tmp_for_expr_3 = Proj2_DW.UnitDelay_DSTATE[0] - Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_4 = Proj2_P.T_dif[1]), (__MW_INSTRUM_NODE_174(__mw_tmp_for_expr_3, __mw_tmp_for_expr_4), (__mw_tmp_for_expr_3 >= __mw_tmp_for_expr_4))))))) 

{ 
Proj2_B.h[0] = (0.0); 
Proj2_B.h[1] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)2U; 
} else { { if (__MW_INSTRUM_NODE_176(__MW_INSTRUM_NODE_178(((__mw_tmp_for_expr_5 = Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_6 = Proj2_P.T_get[2]), (__MW_INSTRUM_NODE_180(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 <= __mw_tmp_for_expr_6))))) && __MW_INSTRUM_NODE_182(((__mw_tmp_for_expr_7 = Proj2_DW.UnitDelay_DSTATE[3] - Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_8 = Proj2_P.T_dif[2]), (__MW_INSTRUM_NODE_184(__mw_tmp_for_expr_7, __mw_tmp_for_expr_8), (__mw_tmp_for_expr_7 >= __mw_tmp_for_expr_8))))))) 

{ 
Proj2_B.h[3] = (0.0); 
Proj2_B.h[2] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)5U; 
} else { { if (__MW_INSTRUM_NODE_186(__MW_INSTRUM_NODE_188(((__mw_tmp_for_expr_9 = Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_10 = Proj2_P.T_get[1]), (__MW_INSTRUM_NODE_190(__mw_tmp_for_expr_9, __mw_tmp_for_expr_10), (__mw_tmp_for_expr_9 <= __mw_tmp_for_expr_10))))) && __MW_INSTRUM_NODE_192(((__mw_tmp_for_expr_11 = Proj2_DW.UnitDelay_DSTATE[3] - Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_12 = Proj2_P.T_dif[1]), (__MW_INSTRUM_NODE_194(__mw_tmp_for_expr_11, __mw_tmp_for_expr_12), (__mw_tmp_for_expr_11 >= __mw_tmp_for_expr_12))))))) 

{ 
Proj2_B.h[3] = (0.0); 
Proj2_B.h[1] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)6U; 
} else { { if (__MW_INSTRUM_NODE_196(__MW_INSTRUM_NODE_198(((__mw_tmp_for_expr_13 = Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_14 = Proj2_P.T_get[2]), (__MW_INSTRUM_NODE_200(__mw_tmp_for_expr_13, __mw_tmp_for_expr_14), (__mw_tmp_for_expr_13 <= __mw_tmp_for_expr_14))))) && __MW_INSTRUM_NODE_202(((__mw_tmp_for_expr_15 = Proj2_DW.UnitDelay_DSTATE[0] - Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_16 = Proj2_P.T_dif[2]), (__MW_INSTRUM_NODE_204(__mw_tmp_for_expr_15, __mw_tmp_for_expr_16), (__mw_tmp_for_expr_15 >= __mw_tmp_for_expr_16))))))) 

{ 
Proj2_B.h[0] = (0.0); 
Proj2_B.h[2] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)1U; 
} else { { if (__MW_INSTRUM_NODE_206(__MW_INSTRUM_NODE_208(((__mw_tmp_for_expr_17 = Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_18 = Proj2_P.T_on[3]), (__MW_INSTRUM_NODE_210(__mw_tmp_for_expr_17, __mw_tmp_for_expr_18), (__mw_tmp_for_expr_17 <= __mw_tmp_for_expr_18))))) && __MW_INSTRUM_NODE_212(((__mw_tmp_for_expr_19 = Proj2_B.h[3]), (__MW_INSTRUM_NODE_214(__mw_tmp_for_expr_19, (0.0)), (__mw_tmp_for_expr_19 == (0.0))))))) 
{ 
Proj2_B.h[3] = (1.0); 
} else { { if (__MW_INSTRUM_NODE_216(__MW_INSTRUM_NODE_218(((__mw_tmp_for_expr_20 = Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_21 = Proj2_P.T_off[3]), (__MW_INSTRUM_NODE_220(__mw_tmp_for_expr_20, __mw_tmp_for_expr_21), (__mw_tmp_for_expr_20 >= __mw_tmp_for_expr_21))))) && __MW_INSTRUM_NODE_222(((__mw_tmp_for_expr_22 = Proj2_B.h[3]), (__MW_INSTRUM_NODE_224(__mw_tmp_for_expr_22, (1.0)), (__mw_tmp_for_expr_22 == (1.0))))))) 
{ 
Proj2_B.h[3] = (0.0); 
} else { { if (__MW_INSTRUM_NODE_226(__MW_INSTRUM_NODE_228(((__mw_tmp_for_expr_23 = Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_24 = Proj2_P.T_off[0]), (__MW_INSTRUM_NODE_230(__mw_tmp_for_expr_23, __mw_tmp_for_expr_24), (__mw_tmp_for_expr_23 >= __mw_tmp_for_expr_24))))) && __MW_INSTRUM_NODE_232(((__mw_tmp_for_expr_25 = Proj2_B.h[0]), (__MW_INSTRUM_NODE_234(__mw_tmp_for_expr_25, (1.0)), (__mw_tmp_for_expr_25 == (1.0))))))) 
{ 
Proj2_B.h[0] = (0.0); 
} else { { if (__MW_INSTRUM_NODE_236(__MW_INSTRUM_NODE_238(((__mw_tmp_for_expr_26 = Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_27 = Proj2_P.T_on[0]), (__MW_INSTRUM_NODE_240(__mw_tmp_for_expr_26, __mw_tmp_for_expr_27), (__mw_tmp_for_expr_26 <= __mw_tmp_for_expr_27))))) && __MW_INSTRUM_NODE_242(((__mw_tmp_for_expr_28 = Proj2_B.h[0]), (__MW_INSTRUM_NODE_244(__mw_tmp_for_expr_28, (0.0)), (__mw_tmp_for_expr_28 == (0.0))))))) 
{ 
Proj2_B.h[0] = (1.0); 
}  } }  } }  } }  } }  } }  } }  } }  } __MW_INSTRUM_NODE_246(); 


} 


static void Proj2_S1010(void) 
{ double __mw_tmp_for_expr_28; double __mw_tmp_for_expr_27; double __mw_tmp_for_expr_26; double __mw_tmp_for_expr_25; double __mw_tmp_for_expr_24; double __mw_tmp_for_expr_23; double __mw_tmp_for_expr_22; double __mw_tmp_for_expr_21; double __mw_tmp_for_expr_20; double __mw_tmp_for_expr_19; double __mw_tmp_for_expr_18; double __mw_tmp_for_expr_17; double __mw_tmp_for_expr_16; double __mw_tmp_for_expr_15; double __mw_tmp_for_expr_14; double __mw_tmp_for_expr_13; double __mw_tmp_for_expr_12; double __mw_tmp_for_expr_11; double __mw_tmp_for_expr_10; double __mw_tmp_for_expr_9; double __mw_tmp_for_expr_8; double __mw_tmp_for_expr_7; double __mw_tmp_for_expr_6; double __mw_tmp_for_expr_5; double __mw_tmp_for_expr_4; double __mw_tmp_for_expr_3; double __mw_tmp_for_expr_2; double __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_4(); __MW_INSTRUM_NODE_247(); { 

if (__MW_INSTRUM_NODE_248(__MW_INSTRUM_NODE_250(((__mw_tmp_for_expr_1 = Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_2 = Proj2_P.T_get[1]), (__MW_INSTRUM_NODE_252(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 <= __mw_tmp_for_expr_2))))) && __MW_INSTRUM_NODE_254(((__mw_tmp_for_expr_3 = Proj2_DW.UnitDelay_DSTATE[0] - Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_4 = Proj2_P.T_dif[1]), (__MW_INSTRUM_NODE_256(__mw_tmp_for_expr_3, __mw_tmp_for_expr_4), (__mw_tmp_for_expr_3 >= __mw_tmp_for_expr_4))))))) 

{ 
Proj2_B.h[0] = (0.0); 
Proj2_B.h[1] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)3U; 
} else { { if (__MW_INSTRUM_NODE_258(__MW_INSTRUM_NODE_260(((__mw_tmp_for_expr_5 = Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_6 = Proj2_P.T_get[3]), (__MW_INSTRUM_NODE_262(__mw_tmp_for_expr_5, __mw_tmp_for_expr_6), (__mw_tmp_for_expr_5 <= __mw_tmp_for_expr_6))))) && __MW_INSTRUM_NODE_264(((__mw_tmp_for_expr_7 = Proj2_DW.UnitDelay_DSTATE[0] - Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_8 = Proj2_P.T_dif[3]), (__MW_INSTRUM_NODE_266(__mw_tmp_for_expr_7, __mw_tmp_for_expr_8), (__mw_tmp_for_expr_7 >= __mw_tmp_for_expr_8))))))) 

{ 
Proj2_B.h[0] = (0.0); 
Proj2_B.h[3] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)1U; 
} else { { if (__MW_INSTRUM_NODE_268(__MW_INSTRUM_NODE_270(((__mw_tmp_for_expr_9 = Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_10 = Proj2_P.T_get[3]), (__MW_INSTRUM_NODE_272(__mw_tmp_for_expr_9, __mw_tmp_for_expr_10), (__mw_tmp_for_expr_9 <= __mw_tmp_for_expr_10))))) && __MW_INSTRUM_NODE_274(((__mw_tmp_for_expr_11 = Proj2_DW.UnitDelay_DSTATE[2] - Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_12 = Proj2_P.T_dif[3]), (__MW_INSTRUM_NODE_276(__mw_tmp_for_expr_11, __mw_tmp_for_expr_12), (__mw_tmp_for_expr_11 >= __mw_tmp_for_expr_12))))))) 

{ 
Proj2_B.h[2] = (0.0); 
Proj2_B.h[3] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)4U; 
} else { { if (__MW_INSTRUM_NODE_278(__MW_INSTRUM_NODE_280(((__mw_tmp_for_expr_13 = Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_14 = Proj2_P.T_get[1]), (__MW_INSTRUM_NODE_282(__mw_tmp_for_expr_13, __mw_tmp_for_expr_14), (__mw_tmp_for_expr_13 <= __mw_tmp_for_expr_14))))) && __MW_INSTRUM_NODE_284(((__mw_tmp_for_expr_15 = Proj2_DW.UnitDelay_DSTATE[2] - Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_16 = Proj2_P.T_dif[1]), (__MW_INSTRUM_NODE_286(__mw_tmp_for_expr_15, __mw_tmp_for_expr_16), (__mw_tmp_for_expr_15 >= __mw_tmp_for_expr_16))))))) 

{ 
Proj2_B.h[2] = (0.0); 
Proj2_B.h[1] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)6U; 
} else { { if (__MW_INSTRUM_NODE_288(__MW_INSTRUM_NODE_290(((__mw_tmp_for_expr_17 = Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_18 = Proj2_P.T_off[0]), (__MW_INSTRUM_NODE_292(__mw_tmp_for_expr_17, __mw_tmp_for_expr_18), (__mw_tmp_for_expr_17 >= __mw_tmp_for_expr_18))))) && __MW_INSTRUM_NODE_294(((__mw_tmp_for_expr_19 = Proj2_B.h[0]), (__MW_INSTRUM_NODE_296(__mw_tmp_for_expr_19, (1.0)), (__mw_tmp_for_expr_19 == (1.0))))))) 
{ 
Proj2_B.h[0] = (0.0); 
} else { { if (__MW_INSTRUM_NODE_298(__MW_INSTRUM_NODE_300(((__mw_tmp_for_expr_20 = Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_21 = Proj2_P.T_on[0]), (__MW_INSTRUM_NODE_302(__mw_tmp_for_expr_20, __mw_tmp_for_expr_21), (__mw_tmp_for_expr_20 <= __mw_tmp_for_expr_21))))) && __MW_INSTRUM_NODE_304(((__mw_tmp_for_expr_22 = Proj2_B.h[0]), (__MW_INSTRUM_NODE_306(__mw_tmp_for_expr_22, (0.0)), (__mw_tmp_for_expr_22 == (0.0))))))) 
{ 
Proj2_B.h[0] = (1.0); 
} else { { if (__MW_INSTRUM_NODE_308(__MW_INSTRUM_NODE_310(((__mw_tmp_for_expr_23 = Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_24 = Proj2_P.T_on[2]), (__MW_INSTRUM_NODE_312(__mw_tmp_for_expr_23, __mw_tmp_for_expr_24), (__mw_tmp_for_expr_23 <= __mw_tmp_for_expr_24))))) && __MW_INSTRUM_NODE_314(((__mw_tmp_for_expr_25 = Proj2_B.h[2]), (__MW_INSTRUM_NODE_316(__mw_tmp_for_expr_25, (0.0)), (__mw_tmp_for_expr_25 == (0.0))))))) 
{ 
Proj2_B.h[2] = (1.0); 
} else { { if (__MW_INSTRUM_NODE_318(__MW_INSTRUM_NODE_320(((__mw_tmp_for_expr_26 = Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_27 = Proj2_P.T_off[2]), (__MW_INSTRUM_NODE_322(__mw_tmp_for_expr_26, __mw_tmp_for_expr_27), (__mw_tmp_for_expr_26 >= __mw_tmp_for_expr_27))))) && __MW_INSTRUM_NODE_324(((__mw_tmp_for_expr_28 = Proj2_B.h[2]), (__MW_INSTRUM_NODE_326(__mw_tmp_for_expr_28, (1.0)), (__mw_tmp_for_expr_28 == (1.0))))))) 
{ 
Proj2_B.h[2] = (0.0); 
}  } }  } }  } }  } }  } }  } }  } }  } __MW_INSTRUM_NODE_328(); 


} 


void Proj2_step(void) 
{ double __mw_tmp_for_expr_72; double __mw_tmp_for_expr_71; long __mw_tmp_for_expr_70; double __mw_tmp_for_expr_69; double __mw_tmp_for_expr_68; double __mw_tmp_for_expr_67; double __mw_tmp_for_expr_66; double __mw_tmp_for_expr_65; double __mw_tmp_for_expr_64; double __mw_tmp_for_expr_63; double __mw_tmp_for_expr_62; double __mw_tmp_for_expr_61; int __mw_tmp_for_expr_60; int __mw_tmp_for_expr_59; int __mw_tmp_for_expr_58; double __mw_tmp_for_expr_57; double __mw_tmp_for_expr_56; double __mw_tmp_for_expr_55; double __mw_tmp_for_expr_54; double __mw_tmp_for_expr_53; double __mw_tmp_for_expr_52; double __mw_tmp_for_expr_51; double __mw_tmp_for_expr_50; double __mw_tmp_for_expr_49; double __mw_tmp_for_expr_48; double __mw_tmp_for_expr_47; double __mw_tmp_for_expr_46; double __mw_tmp_for_expr_45; double __mw_tmp_for_expr_44; double __mw_tmp_for_expr_43; double __mw_tmp_for_expr_42; double __mw_tmp_for_expr_41; double __mw_tmp_for_expr_40; double __mw_tmp_for_expr_39; double __mw_tmp_for_expr_38; double __mw_tmp_for_expr_37; double __mw_tmp_for_expr_36; double __mw_tmp_for_expr_35; double __mw_tmp_for_expr_34; double __mw_tmp_for_expr_33; double __mw_tmp_for_expr_32; double __mw_tmp_for_expr_31; double __mw_tmp_for_expr_30; double __mw_tmp_for_expr_29; double __mw_tmp_for_expr_28; double __mw_tmp_for_expr_27; double __mw_tmp_for_expr_26; double __mw_tmp_for_expr_25; double __mw_tmp_for_expr_24; double __mw_tmp_for_expr_23; double __mw_tmp_for_expr_22; double __mw_tmp_for_expr_21; double __mw_tmp_for_expr_20; double __mw_tmp_for_expr_19; double __mw_tmp_for_expr_18; double __mw_tmp_for_expr_17; double __mw_tmp_for_expr_16; double __mw_tmp_for_expr_15; double __mw_tmp_for_expr_14; double __mw_tmp_for_expr_13; double __mw_tmp_for_expr_12; double __mw_tmp_for_expr_11; double __mw_tmp_for_expr_10; double __mw_tmp_for_expr_9; double __mw_tmp_for_expr_8; double __mw_tmp_for_expr_7; double __mw_tmp_for_expr_6; double __mw_tmp_for_expr_5; double __mw_tmp_for_expr_4; double __mw_tmp_for_expr_3; double __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_5(); __MW_INSTRUM_NODE_329(); { 
real_T rtb_DiscretePulseGenerator; 
int16_T k; 
boolean_T b_out; 
boolean_T exitg1; { 




if (__MW_INSTRUM_NODE_330(((__mw_tmp_for_expr_1 = Proj2_DW.is_active_c3_Proj2), (__MW_INSTRUM_NODE_332(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 == 0))))) { 
Proj2_DW.is_active_c3_Proj2 = (1U); 
Proj2_DW.is_c3_Proj2 = (uint8_T)3U; 
} else { { 
switch (Proj2_DW.is_c3_Proj2) { 
case (uint8_T)1U:  __MW_INSTRUM_NODE_335(); { 
if (__MW_INSTRUM_NODE_336(__MW_INSTRUM_NODE_338(((__mw_tmp_for_expr_2 = Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_3 = Proj2_P.T_get[1]), (__MW_INSTRUM_NODE_340(__mw_tmp_for_expr_2, __mw_tmp_for_expr_3), (__mw_tmp_for_expr_2 <= __mw_tmp_for_expr_3))))) && __MW_INSTRUM_NODE_342(((__mw_tmp_for_expr_4 = Proj2_DW.UnitDelay_DSTATE[3] - Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_5 = Proj2_P.T_dif[1]), (__MW_INSTRUM_NODE_344(__mw_tmp_for_expr_4, __mw_tmp_for_expr_5), (__mw_tmp_for_expr_4 >= __mw_tmp_for_expr_5))))))) 

{ 
Proj2_B.h[3] = (0.0); 
Proj2_B.h[1] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)3U; 
} else { { if (__MW_INSTRUM_NODE_346(__MW_INSTRUM_NODE_348(((__mw_tmp_for_expr_6 = Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_7 = Proj2_P.T_get[0]), (__MW_INSTRUM_NODE_350(__mw_tmp_for_expr_6, __mw_tmp_for_expr_7), (__mw_tmp_for_expr_6 <= __mw_tmp_for_expr_7))))) && __MW_INSTRUM_NODE_352(((__mw_tmp_for_expr_8 = Proj2_DW.UnitDelay_DSTATE[3] - Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_9 = Proj2_P.T_dif[0]), (__MW_INSTRUM_NODE_354(__mw_tmp_for_expr_8, __mw_tmp_for_expr_9), (__mw_tmp_for_expr_8 >= __mw_tmp_for_expr_9))))))) 

{ 
Proj2_B.h[3] = (0.0); 
Proj2_B.h[0] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)5U; 
} else { { if (__MW_INSTRUM_NODE_356(__MW_INSTRUM_NODE_358(((__mw_tmp_for_expr_10 = Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_11 = Proj2_P.T_get[1]), (__MW_INSTRUM_NODE_360(__mw_tmp_for_expr_10, __mw_tmp_for_expr_11), (__mw_tmp_for_expr_10 <= __mw_tmp_for_expr_11))))) && __MW_INSTRUM_NODE_362(((__mw_tmp_for_expr_12 = Proj2_DW.UnitDelay_DSTATE[2] - Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_13 = Proj2_P.T_dif[1]), (__MW_INSTRUM_NODE_364(__mw_tmp_for_expr_12, __mw_tmp_for_expr_13), (__mw_tmp_for_expr_12 >= __mw_tmp_for_expr_13))))))) 

{ 
Proj2_B.h[2] = (0.0); 
Proj2_B.h[1] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)2U; 
} else { { if (__MW_INSTRUM_NODE_366(__MW_INSTRUM_NODE_368(((__mw_tmp_for_expr_14 = Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_15 = Proj2_P.T_get[0]), (__MW_INSTRUM_NODE_370(__mw_tmp_for_expr_14, __mw_tmp_for_expr_15), (__mw_tmp_for_expr_14 <= __mw_tmp_for_expr_15))))) && __MW_INSTRUM_NODE_372(((__mw_tmp_for_expr_16 = Proj2_DW.UnitDelay_DSTATE[2] - Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_17 = Proj2_P.T_dif[0]), (__MW_INSTRUM_NODE_374(__mw_tmp_for_expr_16, __mw_tmp_for_expr_17), (__mw_tmp_for_expr_16 >= __mw_tmp_for_expr_17))))))) 

{ 
Proj2_B.h[2] = (0.0); 
Proj2_B.h[0] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)4U; 
} else { { if (__MW_INSTRUM_NODE_376(__MW_INSTRUM_NODE_378(((__mw_tmp_for_expr_18 = Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_19 = Proj2_P.T_off[2]), (__MW_INSTRUM_NODE_380(__mw_tmp_for_expr_18, __mw_tmp_for_expr_19), (__mw_tmp_for_expr_18 >= __mw_tmp_for_expr_19))))) && __MW_INSTRUM_NODE_382(((__mw_tmp_for_expr_20 = Proj2_B.h[2]), (__MW_INSTRUM_NODE_384(__mw_tmp_for_expr_20, (1.0)), (__mw_tmp_for_expr_20 == (1.0))))))) 
{ 
Proj2_B.h[2] = (0.0); 
} else { { if (__MW_INSTRUM_NODE_386(__MW_INSTRUM_NODE_388(((__mw_tmp_for_expr_21 = Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_22 = Proj2_P.T_on[2]), (__MW_INSTRUM_NODE_390(__mw_tmp_for_expr_21, __mw_tmp_for_expr_22), (__mw_tmp_for_expr_21 <= __mw_tmp_for_expr_22))))) && __MW_INSTRUM_NODE_392(((__mw_tmp_for_expr_23 = Proj2_B.h[2]), (__MW_INSTRUM_NODE_394(__mw_tmp_for_expr_23, (0.0)), (__mw_tmp_for_expr_23 == (0.0))))))) 
{ 
Proj2_B.h[2] = (1.0); 
} else { { if (__MW_INSTRUM_NODE_396(__MW_INSTRUM_NODE_398(((__mw_tmp_for_expr_24 = Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_25 = Proj2_P.T_on[3]), (__MW_INSTRUM_NODE_400(__mw_tmp_for_expr_24, __mw_tmp_for_expr_25), (__mw_tmp_for_expr_24 <= __mw_tmp_for_expr_25))))) && __MW_INSTRUM_NODE_402(((__mw_tmp_for_expr_26 = Proj2_B.h[3]), (__MW_INSTRUM_NODE_404(__mw_tmp_for_expr_26, (0.0)), (__mw_tmp_for_expr_26 == (0.0))))))) 
{ 
Proj2_B.h[3] = (1.0); 
} else { { if (__MW_INSTRUM_NODE_406(__MW_INSTRUM_NODE_408(((__mw_tmp_for_expr_27 = Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_28 = Proj2_P.T_off[3]), (__MW_INSTRUM_NODE_410(__mw_tmp_for_expr_27, __mw_tmp_for_expr_28), (__mw_tmp_for_expr_27 >= __mw_tmp_for_expr_28))))) && __MW_INSTRUM_NODE_412(((__mw_tmp_for_expr_29 = Proj2_B.h[3]), (__MW_INSTRUM_NODE_414(__mw_tmp_for_expr_29, (1.0)), (__mw_tmp_for_expr_29 == (1.0))))))) 
{ 
Proj2_B.h[3] = (0.0); 
}  } }  } }  } }  } }  } }  } }  } }  } 
break; 

case (uint8_T)2U:  __MW_INSTRUM_NODE_416(); { 
if (__MW_INSTRUM_NODE_417(__MW_INSTRUM_NODE_419(((__mw_tmp_for_expr_30 = Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_31 = Proj2_P.T_get[2]), (__MW_INSTRUM_NODE_421(__mw_tmp_for_expr_30, __mw_tmp_for_expr_31), (__mw_tmp_for_expr_30 <= __mw_tmp_for_expr_31))))) && __MW_INSTRUM_NODE_423(((__mw_tmp_for_expr_32 = Proj2_DW.UnitDelay_DSTATE[3] - Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_33 = Proj2_P.T_dif[2]), (__MW_INSTRUM_NODE_425(__mw_tmp_for_expr_32, __mw_tmp_for_expr_33), (__mw_tmp_for_expr_32 >= __mw_tmp_for_expr_33))))))) 

{ 
Proj2_B.h[3] = (0.0); 
Proj2_B.h[2] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)3U; 
} else { { if (__MW_INSTRUM_NODE_427(__MW_INSTRUM_NODE_429(((__mw_tmp_for_expr_34 = Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_35 = Proj2_P.T_get[0]), (__MW_INSTRUM_NODE_431(__mw_tmp_for_expr_34, __mw_tmp_for_expr_35), (__mw_tmp_for_expr_34 <= __mw_tmp_for_expr_35))))) && __MW_INSTRUM_NODE_433(((__mw_tmp_for_expr_36 = Proj2_DW.UnitDelay_DSTATE[3] - Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_37 = Proj2_P.T_dif[0]), (__MW_INSTRUM_NODE_435(__mw_tmp_for_expr_36, __mw_tmp_for_expr_37), (__mw_tmp_for_expr_36 >= __mw_tmp_for_expr_37))))))) 

{ 
Proj2_B.h[3] = (0.0); 
Proj2_B.h[0] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)6U; 
} else { { if (__MW_INSTRUM_NODE_437(__MW_INSTRUM_NODE_439(((__mw_tmp_for_expr_38 = Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_39 = Proj2_P.T_get[0]), (__MW_INSTRUM_NODE_441(__mw_tmp_for_expr_38, __mw_tmp_for_expr_39), (__mw_tmp_for_expr_38 <= __mw_tmp_for_expr_39))))) && __MW_INSTRUM_NODE_443(((__mw_tmp_for_expr_40 = Proj2_DW.UnitDelay_DSTATE[1] - Proj2_DW.UnitDelay_DSTATE[0]), ((__mw_tmp_for_expr_41 = Proj2_P.T_dif[0]), (__MW_INSTRUM_NODE_445(__mw_tmp_for_expr_40, __mw_tmp_for_expr_41), (__mw_tmp_for_expr_40 >= __mw_tmp_for_expr_41))))))) 

{ 
Proj2_B.h[1] = (0.0); 
Proj2_B.h[0] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)4U; 
} else { { if (__MW_INSTRUM_NODE_447(__MW_INSTRUM_NODE_449(((__mw_tmp_for_expr_42 = Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_43 = Proj2_P.T_get[2]), (__MW_INSTRUM_NODE_451(__mw_tmp_for_expr_42, __mw_tmp_for_expr_43), (__mw_tmp_for_expr_42 <= __mw_tmp_for_expr_43))))) && __MW_INSTRUM_NODE_453(((__mw_tmp_for_expr_44 = Proj2_DW.UnitDelay_DSTATE[1] - Proj2_DW.UnitDelay_DSTATE[2]), ((__mw_tmp_for_expr_45 = Proj2_P.T_dif[2]), (__MW_INSTRUM_NODE_455(__mw_tmp_for_expr_44, __mw_tmp_for_expr_45), (__mw_tmp_for_expr_44 >= __mw_tmp_for_expr_45))))))) 

{ 
Proj2_B.h[1] = (0.0); 
Proj2_B.h[2] = (1.0); 
Proj2_DW.is_c3_Proj2 = (uint8_T)1U; 
} else { { if (__MW_INSTRUM_NODE_457(__MW_INSTRUM_NODE_459(((__mw_tmp_for_expr_46 = Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_47 = Proj2_P.T_off[3]), (__MW_INSTRUM_NODE_461(__mw_tmp_for_expr_46, __mw_tmp_for_expr_47), (__mw_tmp_for_expr_46 >= __mw_tmp_for_expr_47))))) && __MW_INSTRUM_NODE_463(((__mw_tmp_for_expr_48 = Proj2_B.h[3]), (__MW_INSTRUM_NODE_465(__mw_tmp_for_expr_48, (1.0)), (__mw_tmp_for_expr_48 == (1.0))))))) 
{ 
Proj2_B.h[3] = (0.0); 
} else { { if (__MW_INSTRUM_NODE_467(__MW_INSTRUM_NODE_469(((__mw_tmp_for_expr_49 = Proj2_DW.UnitDelay_DSTATE[3]), ((__mw_tmp_for_expr_50 = Proj2_P.T_on[3]), (__MW_INSTRUM_NODE_471(__mw_tmp_for_expr_49, __mw_tmp_for_expr_50), (__mw_tmp_for_expr_49 <= __mw_tmp_for_expr_50))))) && __MW_INSTRUM_NODE_473(((__mw_tmp_for_expr_51 = Proj2_B.h[3]), (__MW_INSTRUM_NODE_475(__mw_tmp_for_expr_51, (0.0)), (__mw_tmp_for_expr_51 == (0.0))))))) 
{ 
Proj2_B.h[3] = (1.0); 
} else { { if (__MW_INSTRUM_NODE_477(__MW_INSTRUM_NODE_479(((__mw_tmp_for_expr_52 = Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_53 = Proj2_P.T_on[1]), (__MW_INSTRUM_NODE_481(__mw_tmp_for_expr_52, __mw_tmp_for_expr_53), (__mw_tmp_for_expr_52 <= __mw_tmp_for_expr_53))))) && __MW_INSTRUM_NODE_483(((__mw_tmp_for_expr_54 = Proj2_B.h[1]), (__MW_INSTRUM_NODE_485(__mw_tmp_for_expr_54, (0.0)), (__mw_tmp_for_expr_54 == (0.0))))))) 
{ 
Proj2_B.h[1] = (1.0); 
} else { { if (__MW_INSTRUM_NODE_487(__MW_INSTRUM_NODE_489(((__mw_tmp_for_expr_55 = Proj2_DW.UnitDelay_DSTATE[1]), ((__mw_tmp_for_expr_56 = Proj2_P.T_off[1]), (__MW_INSTRUM_NODE_491(__mw_tmp_for_expr_55, __mw_tmp_for_expr_56), (__mw_tmp_for_expr_55 >= __mw_tmp_for_expr_56))))) && __MW_INSTRUM_NODE_493(((__mw_tmp_for_expr_57 = Proj2_B.h[1]), (__MW_INSTRUM_NODE_495(__mw_tmp_for_expr_57, (1.0)), (__mw_tmp_for_expr_57 == (1.0))))))) 
{ 
Proj2_B.h[1] = (0.0); 
}  } }  } }  } }  } }  } }  } }  } }  } 
break; 

case (uint8_T)3U:  __MW_INSTRUM_NODE_497(); 
__MW_INSTRUM_NODE_498(), Proj2_S0110(); 
break; 

case (uint8_T)4U:  __MW_INSTRUM_NODE_499(); 
__MW_INSTRUM_NODE_500(), Proj2_S1001(); 
break; 

case (uint8_T)5U:  __MW_INSTRUM_NODE_501(); 
__MW_INSTRUM_NODE_502(), Proj2_S1010(); 
break; 

default:  __MW_INSTRUM_NODE_503(); 

__MW_INSTRUM_NODE_504(), Proj2_S1100(); 
break; 
}  } 
}  } { 




if (__MW_INSTRUM_NODE_505(((__mw_tmp_for_expr_58 = Proj2_DW.is_active_c1_Proj2), (__MW_INSTRUM_NODE_507(__mw_tmp_for_expr_58, 0), (__mw_tmp_for_expr_58 == 0))))) { 
Proj2_DW.is_active_c1_Proj2 = (1U); 
Proj2_DW.is_c1_Proj2 = (uint8_T)1U; 
} else { { if (__MW_INSTRUM_NODE_510(((__mw_tmp_for_expr_59 = Proj2_DW.is_c1_Proj2), ((__mw_tmp_for_expr_60 = (uint8_T)1U), (__MW_INSTRUM_NODE_512(__mw_tmp_for_expr_59, __mw_tmp_for_expr_60), (__mw_tmp_for_expr_59 == __mw_tmp_for_expr_60)))))) { { 
if (__MW_INSTRUM_NODE_515(((__mw_tmp_for_expr_61 = ((Proj2_B.h[0] + Proj2_B.h[1]) + Proj2_B.h[2]) + Proj2_B.h[3]), (__MW_INSTRUM_NODE_517(__mw_tmp_for_expr_61, (2.0)), (__mw_tmp_for_expr_61 <= (2.0)))))) { 
Proj2_B.h_safe[0] = Proj2_B.h[0]; 
Proj2_B.h_safe[1] = Proj2_B.h[1]; 
Proj2_B.h_safe[2] = Proj2_B.h[2]; 
Proj2_B.h_safe[3] = Proj2_B.h[3]; 
Proj2_DW.is_c1_Proj2 = (uint8_T)2U; 
}  } 
} else { 

rtb_DiscretePulseGenerator = ((Proj2_B.h[0] + Proj2_B.h[1]) + Proj2_B.h[2]) + Proj2_B.h[3]; { 

if (__MW_INSTRUM_NODE_519((__MW_INSTRUM_NODE_521(rtb_DiscretePulseGenerator, (2.0)), (rtb_DiscretePulseGenerator > (2.0))))) { 
b_out = (1U); 
} else { 
b_out = (0U); 
k = 0; 
exitg1 = (0U); { 
while (__MW_INSTRUM_NODE_523(__MW_INSTRUM_NODE_525(!__MW_INSTRUM_NODE_527(exitg1)) && __MW_INSTRUM_NODE_529((__MW_INSTRUM_NODE_531(k, 4), (k < 4))))) { { 
if (__MW_INSTRUM_NODE_534(__MW_INSTRUM_NODE_536(__MW_INSTRUM_NODE_538(((__mw_tmp_for_expr_62 = Proj2_B.h[k]), (__MW_INSTRUM_NODE_540(__mw_tmp_for_expr_62, (1.0)), (__mw_tmp_for_expr_62 == (1.0))))) && __MW_INSTRUM_NODE_542(((__mw_tmp_for_expr_63 = Proj2_DW.UnitDelay1_DSTATE[k]), ((__mw_tmp_for_expr_64 = Proj2_P.T_off[k]), (__MW_INSTRUM_NODE_544(__mw_tmp_for_expr_63, __mw_tmp_for_expr_64), (__mw_tmp_for_expr_63 >= __mw_tmp_for_expr_64)))))) || __MW_INSTRUM_NODE_546(__MW_INSTRUM_NODE_548(((__mw_tmp_for_expr_65 = Proj2_B.h[k]), (__MW_INSTRUM_NODE_550(__mw_tmp_for_expr_65, (0.0)), (__mw_tmp_for_expr_65 == (0.0))))) && __MW_INSTRUM_NODE_552(((__mw_tmp_for_expr_66 = Proj2_DW.UnitDelay1_DSTATE[k]), ((__mw_tmp_for_expr_67 = Proj2_P.T_on[k]), (__MW_INSTRUM_NODE_554(__mw_tmp_for_expr_66, __mw_tmp_for_expr_67), (__mw_tmp_for_expr_66 <= __mw_tmp_for_expr_67)))))))) 

{ 
b_out = (1U); 
exitg1 = (1U); 
} else { 
k++; 
}  } 
}  } 
}  } { 

if (__MW_INSTRUM_NODE_556(b_out)) { 
Proj2_DW.is_c1_Proj2 = (uint8_T)1U; 
} else { { if (__MW_INSTRUM_NODE_558((__MW_INSTRUM_NODE_560(rtb_DiscretePulseGenerator, (2.0)), (rtb_DiscretePulseGenerator <= (2.0))))) { 
Proj2_B.h_safe[0] = Proj2_B.h[0]; 
Proj2_B.h_safe[1] = Proj2_B.h[1]; 
Proj2_B.h_safe[2] = Proj2_B.h[2]; 
Proj2_B.h_safe[3] = Proj2_B.h[3]; 
Proj2_DW.is_c1_Proj2 = (uint8_T)2U; 
}  } }  } 
}  } }  } 




rtb_DiscretePulseGenerator = __MW_INSTRUM_NODE_562(__MW_INSTRUM_NODE_564(((__mw_tmp_for_expr_68 = Proj2_DW.clockTickCounter), ((__mw_tmp_for_expr_69 = Proj2_P.DiscretePulseGenerator_Duty), (__MW_INSTRUM_NODE_566(__mw_tmp_for_expr_68, __mw_tmp_for_expr_69), (__mw_tmp_for_expr_68 < __mw_tmp_for_expr_69))))) && __MW_INSTRUM_NODE_568(((__mw_tmp_for_expr_70 = Proj2_DW.clockTickCounter), (__MW_INSTRUM_NODE_570(__mw_tmp_for_expr_70, 0L), (__mw_tmp_for_expr_70 >= 0L))))) ? (Proj2_P.DiscretePulseGenerator_Amp) : (0.0); { 


if (__MW_INSTRUM_NODE_573(((__mw_tmp_for_expr_71 = Proj2_DW.clockTickCounter), ((__mw_tmp_for_expr_72 = Proj2_P.DiscretePulseGenerator_Period - (1.0)), (__MW_INSTRUM_NODE_575(__mw_tmp_for_expr_71, __mw_tmp_for_expr_72), (__mw_tmp_for_expr_71 >= __mw_tmp_for_expr_72)))))) 
{ 
Proj2_DW.clockTickCounter = 0L; 
} else { 
(Proj2_DW.clockTickCounter)++; 
}  } { 
# 407
if (__MW_INSTRUM_NODE_577((__MW_INSTRUM_NODE_579(rtb_DiscretePulseGenerator, (0.0)), (rtb_DiscretePulseGenerator > (0.0))))) { 



Proj2_DW.UnitDelay1_DSTATE[0] = Proj2_DW.DiscreteTimeIntegrator_DSTATE[0]; 
Proj2_DW.UnitDelay1_DSTATE[1] = Proj2_DW.DiscreteTimeIntegrator_DSTATE[1]; 
Proj2_DW.UnitDelay1_DSTATE[2] = Proj2_DW.DiscreteTimeIntegrator_DSTATE[2]; 
Proj2_DW.UnitDelay1_DSTATE[3] = Proj2_DW.DiscreteTimeIntegrator_DSTATE[3]; { 
for (k = 0; __MW_INSTRUM_NODE_581(k < 4); k++) { 
# 426
Proj2_DW.DiscreteTimeIntegrator_DSTATE[k] += (((((Proj2_P.A_total[k + 4] * Proj2_DW.UnitDelay1_DSTATE[1] + Proj2_P.A_total[k] * Proj2_DW.UnitDelay1_DSTATE[0]) + Proj2_P.A_total[k + 8] * Proj2_DW.UnitDelay1_DSTATE[2]) + Proj2_P.A_total[k + 12] * Proj2_DW.UnitDelay1_DSTATE[3]) + Proj2_P.c[k] * Proj2_DW.UnitDelay2_DSTATE[k]) + (Proj2_P.u - Proj2_DW.UnitDelay1_DSTATE[k]) * Proj2_P.b[k]) * Proj2_P.DiscreteTimeIntegrator_gainval; 
# 434
}  } 
}  } 
# 443
Proj2_DW.UnitDelay_DSTATE[0] = Proj2_DW.UnitDelay1_DSTATE[0]; 


Proj2_DW.UnitDelay2_DSTATE[0] = Proj2_B.h_safe[0]; 
# 452
Proj2_DW.UnitDelay_DSTATE[1] = Proj2_DW.UnitDelay1_DSTATE[1]; 


Proj2_DW.UnitDelay2_DSTATE[1] = Proj2_B.h_safe[1]; 
# 461
Proj2_DW.UnitDelay_DSTATE[2] = Proj2_DW.UnitDelay1_DSTATE[2]; 


Proj2_DW.UnitDelay2_DSTATE[2] = Proj2_B.h_safe[2]; 
# 470
Proj2_DW.UnitDelay_DSTATE[3] = Proj2_DW.UnitDelay1_DSTATE[3]; 


Proj2_DW.UnitDelay2_DSTATE[3] = Proj2_B.h_safe[3]; } __MW_INSTRUM_NODE_583(); 
} 


void Proj2_initialize(void) 
{ __MW_INSTRUM_FCN_ENTER_6(); __MW_INSTRUM_NODE_584(); 

Proj2_DW.UnitDelay_DSTATE[0] = Proj2_P.UnitDelay_InitialCondition; 


Proj2_DW.UnitDelay2_DSTATE[0] = Proj2_P.UnitDelay2_InitialCondition; 


Proj2_B.h[0] = (0.0); 



Proj2_DW.DiscreteTimeIntegrator_DSTATE[0] = Proj2_P.x0[0]; 
# 496
Proj2_DW.UnitDelay1_DSTATE[0] = Proj2_P.x_Y0; 




Proj2_DW.UnitDelay_DSTATE[1] = Proj2_P.UnitDelay_InitialCondition; 


Proj2_DW.UnitDelay2_DSTATE[1] = Proj2_P.UnitDelay2_InitialCondition; 


Proj2_B.h[1] = (1.0); 



Proj2_DW.DiscreteTimeIntegrator_DSTATE[1] = Proj2_P.x0[1]; 
# 517
Proj2_DW.UnitDelay1_DSTATE[1] = Proj2_P.x_Y0; 




Proj2_DW.UnitDelay_DSTATE[2] = Proj2_P.UnitDelay_InitialCondition; 


Proj2_DW.UnitDelay2_DSTATE[2] = Proj2_P.UnitDelay2_InitialCondition; 


Proj2_B.h[2] = (1.0); 



Proj2_DW.DiscreteTimeIntegrator_DSTATE[2] = Proj2_P.x0[2]; 
# 538
Proj2_DW.UnitDelay1_DSTATE[2] = Proj2_P.x_Y0; 




Proj2_DW.UnitDelay_DSTATE[3] = Proj2_P.UnitDelay_InitialCondition; 


Proj2_DW.UnitDelay2_DSTATE[3] = Proj2_P.UnitDelay2_InitialCondition; 


Proj2_B.h[3] = (0.0); 



Proj2_DW.DiscreteTimeIntegrator_DSTATE[3] = Proj2_P.x0[3]; 
# 559
Proj2_DW.UnitDelay1_DSTATE[3] = Proj2_P.x_Y0; __MW_INSTRUM_NODE_585(); 


} 


void Proj2_terminate(void) 
{ __MW_INSTRUM_FCN_ENTER_7(); __MW_INSTRUM_NODE_586(); __MW_INSTRUM_NODE_587(); 

} 
