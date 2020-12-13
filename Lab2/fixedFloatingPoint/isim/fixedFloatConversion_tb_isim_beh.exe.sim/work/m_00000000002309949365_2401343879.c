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
static const char *ng0 = "D:/UCR/2019 Spring/CS161L/Lab2/fixedFloatingPoint/fixedFloatConversion.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {31, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {0, 0};
static int ng6[] = {127, 0};
static int ng7[] = {23, 0};



static void Always_29_0(char *t0)
{
    char t8[8];
    char t14[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 5336);
    *((int *)t2) = 1;
    t3 = (t0 + 4800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(41, ng0);

LAB12:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = (t0 + 2568);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t7, t11, 2, t12, 32, 1);
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t15 = (t8 + 4);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB16;

LAB13:    if (t26 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t14) = 1;

LAB16:    t30 = (t14 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t14);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB19:    xsi_set_current_line(50, ng0);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB21:    t2 = (t0 + 3528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t5, 32, t7, 32);
    t9 = (t8 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3688);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_not_equal(t8, 32, t5, 32, t7, 32);
    t9 = (t8 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);

LAB34:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    t9 = (t0 + 3688);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t7, 32, t11, 32);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_lshift(t14, 32, t5, 32, t8, 32);
    t12 = (t0 + 2568);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 8);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 >> 8);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t21 & 16777215U);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 16777215U);
    t10 = (t0 + 3208);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 23);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3048);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 2888);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlogtype_concat(t8, 32, 32, 3U, t13, 1, t10, 8, t5, 23);
    t15 = (t0 + 2248);
    xsi_vlogvar_assign_value(t15, t8, 0, 0, 32);
    goto LAB11;

LAB9:    xsi_set_current_line(68, ng0);

LAB35:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t8) = t19;
    t20 = *((unsigned int *)t10);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t9) = t22;
    t11 = (t0 + 2888);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 23);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 >> 23);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t21 & 255U);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 255U);
    t10 = ((char*)((ng6)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t8, 32, t10, 32);
    t11 = (t0 + 3848);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 0);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 >> 0);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t21 & 8388607U);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 8388607U);
    t10 = (t0 + 3208);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 23);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 23);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 >> 23);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t21 & 255U);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 255U);
    t10 = (t0 + 3048);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 8);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 3848);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = (t0 + 2728);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t7, 32, t11, 5);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t2, 32, t8, 32);
    t12 = (t0 + 3688);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t10);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB37;

LAB36:    if (t26 != 0)
        goto LAB38;

LAB39:    t12 = (t8 + 4);
    t31 = *((unsigned int *)t12);
    t32 = (~(t31));
    t33 = *((unsigned int *)t8);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t8, 32, 24, 2U, t7, 1, t5, 23);
    t9 = (t0 + 3368);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);

LAB42:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3688);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greater(t8, 32, t5, 32, t7, 32);
    t9 = (t8 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3688);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t5, 32, t7, 32);
    t9 = (t8 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB47;

LAB48:
LAB49:
LAB45:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t10);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB54;

LAB51:    if (t26 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t8) = 1;

LAB54:    t12 = (t8 + 4);
    t31 = *((unsigned int *)t12);
    t32 = (~(t31));
    t33 = *((unsigned int *)t8);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB55;

LAB56:
LAB57:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 32);
    goto LAB11;

LAB15:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(43, ng0);

LAB20:    xsi_set_current_line(44, ng0);
    t36 = ((char*)((ng4)));
    t37 = (t0 + 2888);
    xsi_vlogvar_assign_value(t37, t36, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_unary_minus(t8, 32, t5, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB19;

LAB22:    xsi_set_current_line(51, ng0);

LAB24:    xsi_set_current_line(52, ng0);
    t10 = (t0 + 2568);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 2568);
    t15 = (t13 + 72U);
    t16 = *((char **)t15);
    t29 = (t0 + 3528);
    t30 = (t29 + 56U);
    t36 = *((char **)t30);
    xsi_vlog_generic_get_index_select_value(t14, 32, t12, t16, 2, t36, 32, 1);
    t37 = ((char*)((ng3)));
    memset(t38, 0, 8);
    t39 = (t14 + 4);
    t40 = (t37 + 4);
    t22 = *((unsigned int *)t14);
    t23 = *((unsigned int *)t37);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t39);
    t26 = *((unsigned int *)t40);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t31 = *((unsigned int *)t39);
    t32 = *((unsigned int *)t40);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t28 & t34);
    if (t35 != 0)
        goto LAB28;

LAB25:    if (t33 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t38) = 1;

LAB28:    t42 = (t38 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t5, 32, t7, 32);
    t9 = (t0 + 3528);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB21;

LAB27:    t41 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(52, ng0);
    t48 = (t0 + 3528);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t0 + 3688);
    xsi_vlogvar_assign_value(t51, t50, 0, 0, 32);
    goto LAB31;

LAB32:    xsi_set_current_line(55, ng0);
    t10 = (t0 + 3688);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 2728);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t12, 32, t16, 5);
    t29 = ((char*)((ng6)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t14, 32, t29, 32);
    t30 = (t0 + 3048);
    xsi_vlogvar_assign_value(t30, t38, 0, 0, 8);
    goto LAB34;

LAB37:    *((unsigned int *)t8) = 1;
    goto LAB39;

LAB38:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(76, ng0);
    t13 = (t0 + 3208);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t29 = ((char*)((ng4)));
    xsi_vlogtype_concat(t14, 32, 24, 2U, t29, 1, t16, 23);
    t30 = (t0 + 3368);
    xsi_vlogvar_assign_value(t30, t14, 0, 0, 32);
    goto LAB42;

LAB43:    xsi_set_current_line(81, ng0);

LAB46:    xsi_set_current_line(82, ng0);
    t10 = (t0 + 3368);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 3688);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_rshift(t14, 32, t12, 32, t16, 32);
    t29 = (t0 + 3368);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 32);
    goto LAB45;

LAB47:    xsi_set_current_line(85, ng0);

LAB50:    xsi_set_current_line(86, ng0);
    t10 = (t0 + 3368);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 3688);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    xsi_vlog_signed_unary_minus(t14, 32, t16, 32);
    memset(t38, 0, 8);
    xsi_vlog_unsigned_lshift(t38, 32, t12, 32, t14, 32);
    t29 = (t0 + 3368);
    xsi_vlogvar_assign_value(t29, t38, 0, 0, 32);
    goto LAB49;

LAB53:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(89, ng0);
    t13 = (t0 + 3368);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_unary_minus(t14, 32, t16, 32);
    t29 = (t0 + 3368);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 32);
    goto LAB57;

}

static void Always_99_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5352);
    *((int *)t2) = 1;
    t3 = (t0 + 5048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);

LAB5:    xsi_set_current_line(101, ng0);
    t6 = (t0 + 1688U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t5, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t24) != 0)
        goto LAB12;

LAB13:    t31 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    t38 = *((unsigned int *)t5);
    t39 = (~(t38));
    t40 = *((unsigned int *)t31);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t31) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t5) > 0)
        goto LAB20;

LAB21:    memcpy(t4, t44, 8);

LAB22:    t45 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t45, t4, 0, 0, 32, 0LL);
    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t5) = 1;
    goto LAB13;

LAB12:    t30 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB13;

LAB14:    t35 = (t0 + 2408);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    goto LAB15;

LAB16:    t42 = (t0 + 2248);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t4, 32, t37, 32, t44, 32);
    goto LAB22;

LAB20:    memcpy(t4, t37, 8);
    goto LAB22;

}


extern void work_m_00000000002309949365_2401343879_init()
{
	static char *pe[] = {(void *)Always_29_0,(void *)Always_99_1};
	xsi_register_didat("work_m_00000000002309949365_2401343879", "isim/fixedFloatConversion_tb_isim_beh.exe.sim/work/m_00000000002309949365_2401343879.didat");
	xsi_register_executes(pe);
}
