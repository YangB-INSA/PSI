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
static const char *ng0 = "D:/Projet INSA/Processeur/BANC.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


static void work_a_0147669383_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;

LAB0:    t1 = (t0 + 3632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);

LAB6:    t2 = (t0 + 4200);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 4200);
    *((int *)t6) = 0;
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t5 = (t3 == (unsigned char)2);
    if (t5 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t5 = (t3 == (unsigned char)3);
    if (t5 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB2;

LAB5:    t4 = (t0 + 1952U);
    t5 = xsi_signal_has_event(t4);
    if (t5 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t6 = (t0 + 1992U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB10;

LAB11:    xsi_set_current_line(55, ng0);
    t2 = xsi_get_transient_memory(128U);
    memset(t2, 0, 128U);
    t6 = t2;
    t7 = (t0 + 6975);
    t8 = (8U != 0);
    if (t8 == 1)
        goto LAB14;

LAB15:    t12 = (t0 + 4296);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 128U);
    xsi_driver_first_trans_fast(t12);
    goto LAB12;

LAB14:    t11 = (128U / 8U);
    xsi_mem_set_data(t6, t7, 8U, t11);
    goto LAB15;

LAB16:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t2 = (t0 + 1352U);
    t7 = *((char **)t2);
    t2 = (t0 + 6720U);
    t17 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t2);
    t18 = (t17 - 15);
    t11 = (t18 * -1);
    t19 = (8U * t11);
    t20 = (0U + t19);
    t10 = (t0 + 4296);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 8U);
    xsi_driver_first_trans_delta(t10, t20, 8U, 0LL);
    goto LAB17;

}

static void work_a_0147669383_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 6688U);
    t13 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t5, t1);
    t14 = (t13 - 15);
    t8 = (t14 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t13);
    t15 = (8U * t8);
    t16 = (0 + t15);
    t6 = (t2 + t16);
    t9 = (t0 + 4360);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    memcpy(t18, t6, 8U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t1 = (t0 + 6704U);
    t13 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t5, t1);
    t14 = (t13 - 15);
    t8 = (t14 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t13);
    t15 = (8U * t8);
    t16 = (0 + t15);
    t6 = (t2 + t16);
    t9 = (t0 + 4424);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    memcpy(t18, t6, 8U);
    xsi_driver_first_trans_fast_port(t9);

LAB3:    t1 = (t0 + 4216);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t1 = (t0 + 1192U);
    t6 = *((char **)t1);
    t7 = 1;
    if (4U == 4U)
        goto LAB8;

LAB9:    t7 = 0;

LAB10:    if (t7 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t3 = 1;
    if (4U == 4U)
        goto LAB16;

LAB17:    t3 = 0;

LAB18:    if (t3 != 0)
        goto LAB14;

LAB15:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t1 = (t0 + 6704U);
    t13 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t5, t1);
    t14 = (t13 - 15);
    t8 = (t14 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t13);
    t15 = (8U * t8);
    t16 = (0 + t15);
    t6 = (t2 + t16);
    t9 = (t0 + 4424);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    memcpy(t18, t6, 8U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 6688U);
    t13 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t5, t1);
    t14 = (t13 - 15);
    t8 = (t14 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t13);
    t15 = (8U * t8);
    t16 = (0 + t15);
    t6 = (t2 + t16);
    t9 = (t0 + 4360);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    memcpy(t18, t6, 8U);
    xsi_driver_first_trans_fast_port(t9);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(68, ng0);
    t10 = (t0 + 2472U);
    t11 = *((char **)t10);
    t10 = (t0 + 1032U);
    t12 = *((char **)t10);
    t10 = (t0 + 6688U);
    t13 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t12, t10);
    t14 = (t13 - 15);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t13);
    t16 = (8U * t15);
    t17 = (0 + t16);
    t18 = (t11 + t17);
    t19 = (t0 + 4360);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t18, 8U);
    xsi_driver_first_trans_fast_port(t19);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 4424);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB8:    t8 = 0;

LAB11:    if (t8 < 4U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t1 = (t5 + t8);
    t9 = (t6 + t8);
    if (*((unsigned char *)t1) != *((unsigned char *)t9))
        goto LAB9;

LAB13:    t8 = (t8 + 1);
    goto LAB11;

LAB14:    xsi_set_current_line(71, ng0);
    t9 = (t0 + 2472U);
    t10 = *((char **)t9);
    t9 = (t0 + 1192U);
    t11 = *((char **)t9);
    t9 = (t0 + 6704U);
    t13 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t11, t9);
    t14 = (t13 - 15);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t13);
    t16 = (8U * t15);
    t17 = (0 + t16);
    t12 = (t10 + t17);
    t18 = (t0 + 4424);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t12, 8U);
    xsi_driver_first_trans_fast_port(t18);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 4360);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB16:    t8 = 0;

LAB19:    if (t8 < 4U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t1 = (t2 + t8);
    t6 = (t5 + t8);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB17;

LAB21:    t8 = (t8 + 1);
    goto LAB19;

}


extern void work_a_0147669383_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0147669383_3212880686_p_0,(void *)work_a_0147669383_3212880686_p_1};
	xsi_register_didat("work_a_0147669383_3212880686", "isim/Test_Processeur_isim_beh.exe.sim/work/a_0147669383_3212880686.didat");
	xsi_register_executes(pe);
}
