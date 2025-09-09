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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/pedro/Facultad/Tercero/Tecnicas/tecnicas-digitales-1/tp2/tp2-tecnicas/bcd-to-7seg.v";
static unsigned int ng1[] = {255U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {252U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {96U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {218U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {242U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {102U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {182U, 0U};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {190U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {224U, 0U};
static unsigned int ng18[] = {8U, 0U};
static unsigned int ng19[] = {254U, 0U};
static unsigned int ng20[] = {9U, 0U};
static unsigned int ng21[] = {246U, 0U};



static void Always_27_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3160);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t2) == 0)
        goto LAB13;

LAB15:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB16:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(32, ng0);

LAB20:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB21:    t2 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng6)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng8)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng10)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng12)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng14)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng16)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng18)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng20)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB40;

LAB41:
LAB43:
LAB42:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 8);

LAB44:
LAB19:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(29, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 1928);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 8);
    goto LAB12;

LAB13:    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(31, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 8);
    goto LAB19;

LAB22:    xsi_set_current_line(34, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB44;

LAB24:    xsi_set_current_line(35, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB44;

LAB26:    xsi_set_current_line(36, ng0);
    t5 = ((char*)((ng7)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB44;

LAB28:    xsi_set_current_line(37, ng0);
    t5 = ((char*)((ng9)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB44;

LAB30:    xsi_set_current_line(38, ng0);
    t5 = ((char*)((ng11)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB44;

LAB32:    xsi_set_current_line(39, ng0);
    t5 = ((char*)((ng13)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB44;

LAB34:    xsi_set_current_line(40, ng0);
    t5 = ((char*)((ng15)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB44;

LAB36:    xsi_set_current_line(41, ng0);
    t5 = ((char*)((ng17)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB44;

LAB38:    xsi_set_current_line(42, ng0);
    t5 = ((char*)((ng19)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB44;

LAB40:    xsi_set_current_line(43, ng0);
    t5 = ((char*)((ng21)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB44;

}


extern void work_m_16359148180321213206_0923880105_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_16359148180321213206_0923880105", "isim/bcd_to_7seg_isim_beh.exe.sim/work/m_16359148180321213206_0923880105.didat");
	xsi_register_executes(pe);
}
