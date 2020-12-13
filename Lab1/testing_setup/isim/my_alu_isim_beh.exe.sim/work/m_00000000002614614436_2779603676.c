/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/UCR/2019 Spring/CS161L/Lab1/testing_setup/my_alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static int ng10[] = {1, 0};



static void Always_37_0(char *t0)
{
    char t7[16];
    char t8[16];
    char t11[16];
    char t14[8];
    char t15[8];
    char t16[8];
    char t26[8];
    char t27[8];
    char t35[8];
    char t66[8];
    char t83[8];
    char t84[8];
    char t92[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;

LAB0:    t1 = (t0 + 4104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4672);
    *((int *)t2) = 1;
    t3 = (t0 + 4136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(43, ng0);

LAB24:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 33, 33, 2U, t4, 1, t5, 32);
    t9 = (t0 + 1664U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng1)));
    xsi_vlogtype_concat(t8, 33, 33, 2U, t9, 1, t10, 32);
    xsi_vlog_unsigned_add(t11, 33, t7, 33, t8, 33);
    t12 = (t0 + 2864);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    t13 = (t0 + 3024);
    xsi_vlogvar_assign_value(t13, t11, 32, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3184);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB23;

LAB9:    xsi_set_current_line(49, ng0);

LAB25:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t9 = *((char **)t4);
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t5, 32, t9, 32);
    t4 = (t0 + 2864);
    xsi_vlogvar_assign_value(t4, t16, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_signed_greatereq(t15, 32, t4, 32, t2, 32);
    memset(t16, 0, 8);
    t5 = (t15 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t5) != 0)
        goto LAB28;

LAB29:    t10 = (t16 + 4);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t10);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB30;

LAB31:    memcpy(t35, t16, 8);

LAB32:    memset(t66, 0, 8);
    t67 = (t35 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t35);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t67) != 0)
        goto LAB42;

LAB43:    t74 = (t66 + 4);
    t75 = *((unsigned int *)t66);
    t76 = *((unsigned int *)t74);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB44;

LAB45:    memcpy(t92, t66, 8);

LAB46:    t124 = (t92 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t92);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_signed_less(t15, 32, t4, 32, t2, 32);
    memset(t16, 0, 8);
    t5 = (t15 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t5) != 0)
        goto LAB60;

LAB61:    t10 = (t16 + 4);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t10);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB62;

LAB63:    memcpy(t35, t16, 8);

LAB64:    memset(t66, 0, 8);
    t67 = (t35 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t35);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t67) != 0)
        goto LAB74;

LAB75:    t74 = (t66 + 4);
    t75 = *((unsigned int *)t66);
    t76 = *((unsigned int *)t74);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB76;

LAB77:    memcpy(t92, t66, 8);

LAB78:    t124 = (t92 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t92);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(62, ng0);

LAB90:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3184);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB88:
LAB56:    goto LAB23;

LAB11:    xsi_set_current_line(67, ng0);

LAB91:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t9 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t5, 32, t9, 32);
    t4 = (t0 + 2864);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 33, 33, 2U, t2, 1, t4, 32);
    t5 = (t0 + 1664U);
    t9 = *((char **)t5);
    t5 = ((char*)((ng1)));
    xsi_vlogtype_concat(t8, 33, 33, 2U, t5, 1, t9, 32);
    xsi_vlog_unsigned_minus(t11, 33, t7, 33, t8, 33);
    t10 = (t0 + 2864);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 32);
    t12 = (t0 + 3024);
    xsi_vlogvar_assign_value(t12, t11, 32, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3184);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB23;

LAB13:    xsi_set_current_line(73, ng0);

LAB92:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t9 = *((char **)t4);
    memset(t16, 0, 8);
    xsi_vlog_signed_minus(t16, 32, t5, 32, t9, 32);
    t4 = (t0 + 2864);
    xsi_vlogvar_assign_value(t4, t16, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_signed_greatereq(t15, 32, t4, 32, t2, 32);
    memset(t16, 0, 8);
    t5 = (t15 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t5) != 0)
        goto LAB95;

LAB96:    t10 = (t16 + 4);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t10);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB97;

LAB98:    memcpy(t35, t16, 8);

LAB99:    memset(t66, 0, 8);
    t67 = (t35 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t35);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t67) != 0)
        goto LAB109;

LAB110:    t74 = (t66 + 4);
    t75 = *((unsigned int *)t66);
    t76 = *((unsigned int *)t74);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB111;

LAB112:    memcpy(t92, t66, 8);

LAB113:    t124 = (t92 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t92);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB121;

LAB122:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_signed_less(t15, 32, t4, 32, t2, 32);
    memset(t16, 0, 8);
    t5 = (t15 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t5) != 0)
        goto LAB127;

LAB128:    t10 = (t16 + 4);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t10);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB129;

LAB130:    memcpy(t35, t16, 8);

LAB131:    memset(t66, 0, 8);
    t67 = (t35 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t35);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB139;

LAB140:    if (*((unsigned int *)t67) != 0)
        goto LAB141;

LAB142:    t74 = (t66 + 4);
    t75 = *((unsigned int *)t66);
    t76 = *((unsigned int *)t74);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB143;

LAB144:    memcpy(t92, t66, 8);

LAB145:    t124 = (t92 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t92);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB153;

LAB154:    xsi_set_current_line(87, ng0);

LAB157:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3184);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB155:
LAB123:    goto LAB23;

LAB15:    xsi_set_current_line(92, ng0);

LAB158:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t9 = *((char **)t4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t9);
    t19 = (t17 & t18);
    *((unsigned int *)t14) = t19;
    t4 = (t5 + 4);
    t10 = (t9 + 4);
    t12 = (t14 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    *((unsigned int *)t12) = t22;
    t23 = *((unsigned int *)t12);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB159;

LAB160:
LAB161:    t34 = (t0 + 2864);
    xsi_vlogvar_assign_value(t34, t14, 0, 0, 32);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3184);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB23;

LAB17:    xsi_set_current_line(98, ng0);

LAB162:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t9 = *((char **)t4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    *((unsigned int *)t14) = t19;
    t4 = (t5 + 4);
    t10 = (t9 + 4);
    t12 = (t14 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    *((unsigned int *)t12) = t22;
    t23 = *((unsigned int *)t12);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB163;

LAB164:
LAB165:    t34 = (t0 + 2864);
    xsi_vlogvar_assign_value(t34, t14, 0, 0, 32);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3184);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB23;

LAB19:    xsi_set_current_line(104, ng0);

LAB166:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t9 = *((char **)t4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    *((unsigned int *)t14) = t19;
    t4 = (t5 + 4);
    t10 = (t9 + 4);
    t12 = (t14 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    *((unsigned int *)t12) = t22;
    t23 = *((unsigned int *)t12);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB167;

LAB168:
LAB169:    t13 = (t0 + 2864);
    xsi_vlogvar_assign_value(t13, t14, 0, 0, 32);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3184);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB23;

LAB21:    xsi_set_current_line(110, ng0);

LAB170:    xsi_set_current_line(111, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng10)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_rshift(t14, 32, t5, 32, t4, 32);
    t9 = (t0 + 2864);
    xsi_vlogvar_assign_value(t9, t14, 0, 0, 32);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3184);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB23;

LAB26:    *((unsigned int *)t16) = 1;
    goto LAB29;

LAB28:    t9 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB29;

LAB30:    t12 = (t0 + 1664U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng3)));
    memset(t26, 0, 8);
    xsi_vlog_signed_greatereq(t26, 32, t13, 32, t12, 32);
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t28) != 0)
        goto LAB35;

LAB36:    t36 = *((unsigned int *)t16);
    t37 = *((unsigned int *)t27);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t39 = (t16 + 4);
    t40 = (t27 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB32;

LAB33:    *((unsigned int *)t27) = 1;
    goto LAB36;

LAB35:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB36;

LAB37:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t16 + 4);
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t16);
    t52 = (~(t51));
    t53 = *((unsigned int *)t49);
    t54 = (~(t53));
    t55 = *((unsigned int *)t27);
    t56 = (~(t55));
    t57 = *((unsigned int *)t50);
    t58 = (~(t57));
    t6 = (t52 & t54);
    t59 = (t56 & t58);
    t60 = (~(t6));
    t61 = (~(t59));
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    t63 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t63 & t61);
    t64 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t64 & t60);
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    goto LAB39;

LAB40:    *((unsigned int *)t66) = 1;
    goto LAB43;

LAB42:    t73 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB43;

LAB44:    t79 = (t0 + 2864);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng3)));
    memset(t83, 0, 8);
    xsi_vlog_signed_less(t83, 32, t81, 32, t82, 32);
    memset(t84, 0, 8);
    t85 = (t83 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t83);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t85) != 0)
        goto LAB49;

LAB50:    t93 = *((unsigned int *)t66);
    t94 = *((unsigned int *)t84);
    t95 = (t93 & t94);
    *((unsigned int *)t92) = t95;
    t96 = (t66 + 4);
    t97 = (t84 + 4);
    t98 = (t92 + 4);
    t99 = *((unsigned int *)t96);
    t100 = *((unsigned int *)t97);
    t101 = (t99 | t100);
    *((unsigned int *)t98) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB46;

LAB47:    *((unsigned int *)t84) = 1;
    goto LAB50;

LAB49:    t91 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB50;

LAB51:    t104 = *((unsigned int *)t92);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t92) = (t104 | t105);
    t106 = (t66 + 4);
    t107 = (t84 + 4);
    t108 = *((unsigned int *)t66);
    t109 = (~(t108));
    t110 = *((unsigned int *)t106);
    t111 = (~(t110));
    t112 = *((unsigned int *)t84);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (~(t114));
    t116 = (t109 & t111);
    t117 = (t113 & t115);
    t118 = (~(t116));
    t119 = (~(t117));
    t120 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t120 & t118);
    t121 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t121 & t119);
    t122 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t122 & t118);
    t123 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t123 & t119);
    goto LAB53;

LAB54:    xsi_set_current_line(54, ng0);

LAB57:    xsi_set_current_line(55, ng0);
    t130 = ((char*)((ng2)));
    t131 = (t0 + 3184);
    xsi_vlogvar_assign_value(t131, t130, 0, 0, 1);
    goto LAB56;

LAB58:    *((unsigned int *)t16) = 1;
    goto LAB61;

LAB60:    t9 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB61;

LAB62:    t12 = (t0 + 1664U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng3)));
    memset(t26, 0, 8);
    xsi_vlog_signed_less(t26, 32, t13, 32, t12, 32);
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t28) != 0)
        goto LAB67;

LAB68:    t36 = *((unsigned int *)t16);
    t37 = *((unsigned int *)t27);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t39 = (t16 + 4);
    t40 = (t27 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB64;

LAB65:    *((unsigned int *)t27) = 1;
    goto LAB68;

LAB67:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB68;

LAB69:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t16 + 4);
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t16);
    t52 = (~(t51));
    t53 = *((unsigned int *)t49);
    t54 = (~(t53));
    t55 = *((unsigned int *)t27);
    t56 = (~(t55));
    t57 = *((unsigned int *)t50);
    t58 = (~(t57));
    t6 = (t52 & t54);
    t59 = (t56 & t58);
    t60 = (~(t6));
    t61 = (~(t59));
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    t63 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t63 & t61);
    t64 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t64 & t60);
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    goto LAB71;

LAB72:    *((unsigned int *)t66) = 1;
    goto LAB75;

LAB74:    t73 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB75;

LAB76:    t79 = (t0 + 2864);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng3)));
    memset(t83, 0, 8);
    xsi_vlog_signed_greatereq(t83, 32, t81, 32, t82, 32);
    memset(t84, 0, 8);
    t85 = (t83 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t83);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t85) != 0)
        goto LAB81;

LAB82:    t93 = *((unsigned int *)t66);
    t94 = *((unsigned int *)t84);
    t95 = (t93 & t94);
    *((unsigned int *)t92) = t95;
    t96 = (t66 + 4);
    t97 = (t84 + 4);
    t98 = (t92 + 4);
    t99 = *((unsigned int *)t96);
    t100 = *((unsigned int *)t97);
    t101 = (t99 | t100);
    *((unsigned int *)t98) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB78;

LAB79:    *((unsigned int *)t84) = 1;
    goto LAB82;

LAB81:    t91 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB82;

LAB83:    t104 = *((unsigned int *)t92);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t92) = (t104 | t105);
    t106 = (t66 + 4);
    t107 = (t84 + 4);
    t108 = *((unsigned int *)t66);
    t109 = (~(t108));
    t110 = *((unsigned int *)t106);
    t111 = (~(t110));
    t112 = *((unsigned int *)t84);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (~(t114));
    t116 = (t109 & t111);
    t117 = (t113 & t115);
    t118 = (~(t116));
    t119 = (~(t117));
    t120 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t120 & t118);
    t121 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t121 & t119);
    t122 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t122 & t118);
    t123 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t123 & t119);
    goto LAB85;

LAB86:    xsi_set_current_line(58, ng0);

LAB89:    xsi_set_current_line(59, ng0);
    t130 = ((char*)((ng2)));
    t131 = (t0 + 3184);
    xsi_vlogvar_assign_value(t131, t130, 0, 0, 1);
    goto LAB88;

LAB93:    *((unsigned int *)t16) = 1;
    goto LAB96;

LAB95:    t9 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB96;

LAB97:    t12 = (t0 + 1664U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng3)));
    memset(t26, 0, 8);
    xsi_vlog_signed_less(t26, 32, t13, 32, t12, 32);
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t28) != 0)
        goto LAB102;

LAB103:    t36 = *((unsigned int *)t16);
    t37 = *((unsigned int *)t27);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t39 = (t16 + 4);
    t40 = (t27 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB104;

LAB105:
LAB106:    goto LAB99;

LAB100:    *((unsigned int *)t27) = 1;
    goto LAB103;

LAB102:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB103;

LAB104:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t16 + 4);
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t16);
    t52 = (~(t51));
    t53 = *((unsigned int *)t49);
    t54 = (~(t53));
    t55 = *((unsigned int *)t27);
    t56 = (~(t55));
    t57 = *((unsigned int *)t50);
    t58 = (~(t57));
    t6 = (t52 & t54);
    t59 = (t56 & t58);
    t60 = (~(t6));
    t61 = (~(t59));
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    t63 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t63 & t61);
    t64 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t64 & t60);
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    goto LAB106;

LAB107:    *((unsigned int *)t66) = 1;
    goto LAB110;

LAB109:    t73 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB110;

LAB111:    t79 = (t0 + 2864);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng3)));
    memset(t83, 0, 8);
    xsi_vlog_signed_less(t83, 32, t81, 32, t82, 32);
    memset(t84, 0, 8);
    t85 = (t83 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t83);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t85) != 0)
        goto LAB116;

LAB117:    t93 = *((unsigned int *)t66);
    t94 = *((unsigned int *)t84);
    t95 = (t93 & t94);
    *((unsigned int *)t92) = t95;
    t96 = (t66 + 4);
    t97 = (t84 + 4);
    t98 = (t92 + 4);
    t99 = *((unsigned int *)t96);
    t100 = *((unsigned int *)t97);
    t101 = (t99 | t100);
    *((unsigned int *)t98) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB118;

LAB119:
LAB120:    goto LAB113;

LAB114:    *((unsigned int *)t84) = 1;
    goto LAB117;

LAB116:    t91 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB117;

LAB118:    t104 = *((unsigned int *)t92);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t92) = (t104 | t105);
    t106 = (t66 + 4);
    t107 = (t84 + 4);
    t108 = *((unsigned int *)t66);
    t109 = (~(t108));
    t110 = *((unsigned int *)t106);
    t111 = (~(t110));
    t112 = *((unsigned int *)t84);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (~(t114));
    t116 = (t109 & t111);
    t117 = (t113 & t115);
    t118 = (~(t116));
    t119 = (~(t117));
    t120 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t120 & t118);
    t121 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t121 & t119);
    t122 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t122 & t118);
    t123 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t123 & t119);
    goto LAB120;

LAB121:    xsi_set_current_line(78, ng0);

LAB124:    xsi_set_current_line(79, ng0);
    t130 = ((char*)((ng2)));
    t131 = (t0 + 3184);
    xsi_vlogvar_assign_value(t131, t130, 0, 0, 1);
    goto LAB123;

LAB125:    *((unsigned int *)t16) = 1;
    goto LAB128;

LAB127:    t9 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB128;

LAB129:    t12 = (t0 + 1664U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng3)));
    memset(t26, 0, 8);
    xsi_vlog_signed_greatereq(t26, 32, t13, 32, t12, 32);
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t28) != 0)
        goto LAB134;

LAB135:    t36 = *((unsigned int *)t16);
    t37 = *((unsigned int *)t27);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t39 = (t16 + 4);
    t40 = (t27 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB136;

LAB137:
LAB138:    goto LAB131;

LAB132:    *((unsigned int *)t27) = 1;
    goto LAB135;

LAB134:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB135;

LAB136:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t16 + 4);
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t16);
    t52 = (~(t51));
    t53 = *((unsigned int *)t49);
    t54 = (~(t53));
    t55 = *((unsigned int *)t27);
    t56 = (~(t55));
    t57 = *((unsigned int *)t50);
    t58 = (~(t57));
    t6 = (t52 & t54);
    t59 = (t56 & t58);
    t60 = (~(t6));
    t61 = (~(t59));
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    t63 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t63 & t61);
    t64 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t64 & t60);
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    goto LAB138;

LAB139:    *((unsigned int *)t66) = 1;
    goto LAB142;

LAB141:    t73 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB142;

LAB143:    t79 = (t0 + 2864);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng3)));
    memset(t83, 0, 8);
    xsi_vlog_signed_greatereq(t83, 32, t81, 32, t82, 32);
    memset(t84, 0, 8);
    t85 = (t83 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t83);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t85) != 0)
        goto LAB148;

LAB149:    t93 = *((unsigned int *)t66);
    t94 = *((unsigned int *)t84);
    t95 = (t93 & t94);
    *((unsigned int *)t92) = t95;
    t96 = (t66 + 4);
    t97 = (t84 + 4);
    t98 = (t92 + 4);
    t99 = *((unsigned int *)t96);
    t100 = *((unsigned int *)t97);
    t101 = (t99 | t100);
    *((unsigned int *)t98) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB150;

LAB151:
LAB152:    goto LAB145;

LAB146:    *((unsigned int *)t84) = 1;
    goto LAB149;

LAB148:    t91 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB149;

LAB150:    t104 = *((unsigned int *)t92);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t92) = (t104 | t105);
    t106 = (t66 + 4);
    t107 = (t84 + 4);
    t108 = *((unsigned int *)t66);
    t109 = (~(t108));
    t110 = *((unsigned int *)t106);
    t111 = (~(t110));
    t112 = *((unsigned int *)t84);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (~(t114));
    t116 = (t109 & t111);
    t117 = (t113 & t115);
    t118 = (~(t116));
    t119 = (~(t117));
    t120 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t120 & t118);
    t121 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t121 & t119);
    t122 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t122 & t118);
    t123 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t123 & t119);
    goto LAB152;

LAB153:    xsi_set_current_line(83, ng0);

LAB156:    xsi_set_current_line(84, ng0);
    t130 = ((char*)((ng2)));
    t131 = (t0 + 3184);
    xsi_vlogvar_assign_value(t131, t130, 0, 0, 1);
    goto LAB155;

LAB159:    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t12);
    *((unsigned int *)t14) = (t29 | t30);
    t13 = (t5 + 4);
    t28 = (t9 + 4);
    t31 = *((unsigned int *)t5);
    t32 = (~(t31));
    t33 = *((unsigned int *)t13);
    t36 = (~(t33));
    t37 = *((unsigned int *)t9);
    t38 = (~(t37));
    t42 = *((unsigned int *)t28);
    t43 = (~(t42));
    t59 = (t32 & t36);
    t116 = (t38 & t43);
    t44 = (~(t59));
    t45 = (~(t116));
    t46 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t46 & t44);
    t47 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t47 & t45);
    t48 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t48 & t44);
    t51 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t51 & t45);
    goto LAB161;

LAB163:    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t12);
    *((unsigned int *)t14) = (t29 | t30);
    t13 = (t5 + 4);
    t28 = (t9 + 4);
    t31 = *((unsigned int *)t13);
    t32 = (~(t31));
    t33 = *((unsigned int *)t5);
    t59 = (t33 & t32);
    t36 = *((unsigned int *)t28);
    t37 = (~(t36));
    t38 = *((unsigned int *)t9);
    t116 = (t38 & t37);
    t42 = (~(t59));
    t43 = (~(t116));
    t44 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t44 & t42);
    t45 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t45 & t43);
    goto LAB165;

LAB167:    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t12);
    *((unsigned int *)t14) = (t29 | t30);
    goto LAB169;

}

static void Always_118_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 4352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 4688);
    *((int *)t2) = 1;
    t3 = (t0 + 4384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(119, ng0);

LAB5:    xsi_set_current_line(120, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(128, ng0);

LAB14:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(138, ng0);

LAB23:    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB21:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(121, ng0);

LAB13:    xsi_set_current_line(122, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB17:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(134, ng0);

LAB22:    xsi_set_current_line(135, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB21;

}


extern void work_m_00000000002614614436_2779603676_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Always_118_1};
	xsi_register_didat("work_m_00000000002614614436_2779603676", "isim/my_alu_isim_beh.exe.sim/work/m_00000000002614614436_2779603676.didat");
	xsi_register_executes(pe);
}
