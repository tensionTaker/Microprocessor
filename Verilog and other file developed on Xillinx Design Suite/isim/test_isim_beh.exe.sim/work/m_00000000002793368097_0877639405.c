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
static const char *ng0 = "C:/Users/hp/Desktop/harsh12140750/first_q6/alu_1.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static int ng5[] = {8, 0};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {15, 0};
static unsigned int ng8[] = {3U, 0U};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {4U, 0U};
static int ng11[] = {2, 0};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {6U, 0U};
static int ng14[] = {14, 0};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {15U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {9U, 0U};
static unsigned int ng19[] = {10U, 0U};
static unsigned int ng20[] = {11U, 0U};
static unsigned int ng21[] = {12U, 0U};
static unsigned int ng22[] = {13U, 0U};
static unsigned int ng23[] = {14U, 0U};
static unsigned int ng24[] = {79U, 0U};
static unsigned int ng25[] = {18U, 0U};
static int ng26[] = {3, 0};
static unsigned int ng27[] = {76U, 0U};
static int ng28[] = {5, 0};
static unsigned int ng29[] = {36U, 0U};
static int ng30[] = {6, 0};
static unsigned int ng31[] = {32U, 0U};
static int ng32[] = {7, 0};
static int ng33[] = {9, 0};
static int ng34[] = {10, 0};
static int ng35[] = {11, 0};
static unsigned int ng36[] = {96U, 0U};
static int ng37[] = {12, 0};
static unsigned int ng38[] = {49U, 0U};
static int ng39[] = {13, 0};
static unsigned int ng40[] = {66U, 0U};
static unsigned int ng41[] = {48U, 0U};
static unsigned int ng42[] = {56U, 0U};



static void Cont_32_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4616);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 3);

LAB1:    return;
}

static void Always_45_1(char *t0)
{
    char t9[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
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
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4536);
    *((int *)t2) = 1;
    t3 = (t0 + 4248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(167, ng0);

LAB101:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB102:    t7 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t7, 32);
    if (t6 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t6 == 1)
        goto LAB105;

LAB106:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t6 == 1)
        goto LAB107;

LAB108:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t6 == 1)
        goto LAB109;

LAB110:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t6 == 1)
        goto LAB111;

LAB112:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t6 == 1)
        goto LAB113;

LAB114:    t2 = ((char*)((ng30)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t6 == 1)
        goto LAB115;

LAB116:    t2 = ((char*)((ng32)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t6 == 1)
        goto LAB117;

LAB118:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t6 == 1)
        goto LAB119;

LAB120:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t6 == 1)
        goto LAB121;

LAB122:    t2 = ((char*)((ng34)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t6 == 1)
        goto LAB123;

LAB124:    t2 = ((char*)((ng35)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t6 == 1)
        goto LAB125;

LAB126:    t2 = ((char*)((ng37)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t6 == 1)
        goto LAB127;

LAB128:    t2 = ((char*)((ng39)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t6 == 1)
        goto LAB129;

LAB130:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t6 == 1)
        goto LAB131;

LAB132:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t6 == 1)
        goto LAB133;

LAB134:
LAB135:    goto LAB2;

LAB7:    xsi_set_current_line(50, ng0);

LAB40:    xsi_set_current_line(51, ng0);
    t7 = (t0 + 1848U);
    t8 = *((char **)t7);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 4);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB9:    xsi_set_current_line(57, ng0);

LAB41:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (~(t10));
    *((unsigned int *)t9) = t11;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB43;

LAB42:    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 4294967295U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 4294967295U);
    t8 = ((char*)((ng3)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t9, 32, t8, 32);
    t19 = (t0 + 3048);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 4);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t7);
    t21 = (t17 | t20);
    t22 = (~(t21));
    t23 = (t16 & t22);
    if (t23 != 0)
        goto LAB47;

LAB44:    if (t21 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t9) = 1;

LAB47:    t19 = (t9 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB50:    goto LAB39;

LAB11:    xsi_set_current_line(65, ng0);

LAB51:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 2008U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 4, t4, 4, t7, 4);
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 4);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t3, 4, t4, 4);
    t2 = ((char*)((ng7)));
    memset(t18, 0, 8);
    t7 = (t9 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB53;

LAB52:    t8 = (t2 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB53;

LAB56:    if (*((unsigned int *)t9) > *((unsigned int *)t2))
        goto LAB54;

LAB55:    t29 = (t18 + 4);
    t10 = *((unsigned int *)t29);
    t11 = (~(t10));
    t12 = *((unsigned int *)t18);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB59:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB13:    xsi_set_current_line(73, ng0);

LAB60:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 2008U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 5, t4, 4, t7, 4);
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 5);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 4);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2888);
    t8 = (t7 + 72U);
    t19 = *((char **)t8);
    t29 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t4, t19, 2, t29, 32, 1);
    t30 = ((char*)((ng3)));
    memset(t18, 0, 8);
    t31 = (t9 + 4);
    t32 = (t30 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t30);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t31);
    t14 = *((unsigned int *)t32);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t31);
    t20 = *((unsigned int *)t32);
    t21 = (t17 | t20);
    t22 = (~(t21));
    t23 = (t16 & t22);
    if (t23 != 0)
        goto LAB64;

LAB61:    if (t21 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t18) = 1;

LAB64:    t34 = (t18 + 4);
    t24 = *((unsigned int *)t34);
    t25 = (~(t24));
    t26 = *((unsigned int *)t18);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB67:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB15:    xsi_set_current_line(82, ng0);

LAB68:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1848U);
    t7 = *((char **)t4);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_multiply(t9, 32, t3, 32, t7, 4);
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 4);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_multiply(t9, 32, t2, 32, t4, 4);
    t3 = ((char*)((ng7)));
    memset(t18, 0, 8);
    t7 = (t9 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB70;

LAB69:    t8 = (t3 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB70;

LAB73:    if (*((unsigned int *)t9) > *((unsigned int *)t3))
        goto LAB71;

LAB72:    t29 = (t18 + 4);
    t10 = *((unsigned int *)t29);
    t11 = (~(t10));
    t12 = *((unsigned int *)t18);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB76:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB17:    xsi_set_current_line(90, ng0);

LAB77:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng11)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_divide(t9, 32, t4, 4, t3, 32);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 4);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB19:    xsi_set_current_line(97, ng0);

LAB78:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 4, t3, 32);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 4);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng14)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB80;

LAB79:    t7 = (t2 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB80;

LAB83:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB81;

LAB82:    t19 = (t9 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB86:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB21:    xsi_set_current_line(105, ng0);

LAB87:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng16)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 4, t4, 4, t3, 4);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 4);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB23:    xsi_set_current_line(112, ng0);

LAB88:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (~(t10));
    *((unsigned int *)t9) = t11;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB90;

LAB89:    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 15U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 15U);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 4);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB25:    xsi_set_current_line(119, ng0);

LAB91:    xsi_set_current_line(120, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 2008U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_multiply(t9, 4, t4, 4, t7, 4);
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 4);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB27:    xsi_set_current_line(126, ng0);

LAB92:    xsi_set_current_line(127, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 2008U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 4, t4, 4, t7, 4);
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 4);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB29:    xsi_set_current_line(133, ng0);

LAB93:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 2008U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t19 = (t9 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    t15 = (t13 | t14);
    *((unsigned int *)t19) = t15;
    t16 = *((unsigned int *)t19);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB94;

LAB95:
LAB96:    t29 = (t0 + 3048);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 4);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB31:    xsi_set_current_line(140, ng0);

LAB97:    xsi_set_current_line(141, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_lshift(t9, 4, t4, 4, t3, 32);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 4);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB33:    xsi_set_current_line(147, ng0);

LAB98:    xsi_set_current_line(148, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_rshift(t9, 4, t4, 4, t3, 32);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 4);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB35:    xsi_set_current_line(154, ng0);

LAB99:    xsi_set_current_line(155, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB37:    xsi_set_current_line(161, ng0);

LAB100:    xsi_set_current_line(162, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB39;

LAB43:    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t9) = (t12 | t13);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t14 | t15);
    goto LAB42;

LAB46:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(60, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 2728);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    goto LAB50;

LAB53:    t19 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB55;

LAB54:    *((unsigned int *)t18) = 1;
    goto LAB55;

LAB57:    xsi_set_current_line(67, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 2728);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB59;

LAB63:    t33 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(76, ng0);
    t35 = ((char*)((ng3)));
    t36 = (t0 + 2728);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 1);
    goto LAB67;

LAB70:    t19 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB72;

LAB71:    *((unsigned int *)t18) = 1;
    goto LAB72;

LAB74:    xsi_set_current_line(84, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 2728);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB76;

LAB80:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB82;

LAB81:    *((unsigned int *)t9) = 1;
    goto LAB82;

LAB84:    xsi_set_current_line(99, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 2728);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    goto LAB86;

LAB90:    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t9) = (t12 | t13);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t14 | t15);
    goto LAB89;

LAB94:    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t9) = (t20 | t21);
    goto LAB96;

LAB103:    xsi_set_current_line(169, ng0);
    t8 = ((char*)((ng1)));
    t19 = (t0 + 2408);
    xsi_vlogvar_assign_value(t19, t8, 0, 0, 7);
    goto LAB135;

LAB105:    xsi_set_current_line(170, ng0);
    t3 = ((char*)((ng24)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB135;

LAB107:    xsi_set_current_line(171, ng0);
    t3 = ((char*)((ng25)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB135;

LAB109:    xsi_set_current_line(172, ng0);
    t3 = ((char*)((ng13)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB135;

LAB111:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng27)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB135;

LAB113:    xsi_set_current_line(174, ng0);
    t3 = ((char*)((ng29)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB135;

LAB115:    xsi_set_current_line(175, ng0);
    t3 = ((char*)((ng31)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB135;

LAB117:    xsi_set_current_line(176, ng0);
    t3 = ((char*)((ng22)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB135;

LAB119:    xsi_set_current_line(177, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB135;

LAB121:    xsi_set_current_line(178, ng0);
    t3 = ((char*)((ng10)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB135;

LAB123:    xsi_set_current_line(179, ng0);
    t3 = ((char*)((ng17)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB135;

LAB125:    xsi_set_current_line(180, ng0);
    t3 = ((char*)((ng36)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB135;

LAB127:    xsi_set_current_line(181, ng0);
    t3 = ((char*)((ng38)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB135;

LAB129:    xsi_set_current_line(182, ng0);
    t3 = ((char*)((ng40)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB135;

LAB131:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng41)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB135;

LAB133:    xsi_set_current_line(184, ng0);
    t3 = ((char*)((ng42)));
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB135;

}


extern void work_m_00000000002793368097_0877639405_init()
{
	static char *pe[] = {(void *)Cont_32_0,(void *)Always_45_1};
	xsi_register_didat("work_m_00000000002793368097_0877639405", "isim/test_isim_beh.exe.sim/work/m_00000000002793368097_0877639405.didat");
	xsi_register_executes(pe);
}
