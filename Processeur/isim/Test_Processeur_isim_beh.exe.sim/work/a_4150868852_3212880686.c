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
static const char *ng0 = "D:/Projet INSA/Processeur/Processeur.vhd";



static void work_a_4150868852_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 14188);
    t5 = 1;
    if (8U == 8U)
        goto LAB8;

LAB9:    t5 = 0;

LAB10:    if (t5 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 2472U);
    t10 = *((char **)t9);
    t9 = (t0 + 14196);
    t12 = 1;
    if (8U == 8U)
        goto LAB14;

LAB15:    t12 = 0;

LAB16:    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB20:    t22 = (t0 + 5192U);
    t23 = *((char **)t22);
    t22 = (t0 + 9144);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t23, 8U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t28 = (t0 + 9016);
    *((int *)t28) = 1;

LAB1:    return;
LAB3:    t16 = (t0 + 2632U);
    t17 = *((char **)t16);
    t16 = (t0 + 9144);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t17, 8U);
    xsi_driver_first_trans_fast(t16);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t6 = 0;

LAB11:    if (t6 < 8U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB9;

LAB13:    t6 = (t6 + 1);
    goto LAB11;

LAB14:    t13 = 0;

LAB17:    if (t13 < 8U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t14 = (t10 + t13);
    t15 = (t9 + t13);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB15;

LAB19:    t13 = (t13 + 1);
    goto LAB17;

LAB21:    goto LAB2;

}

static void work_a_4150868852_3212880686_p_1(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(184, ng0);
    t3 = (t0 + 3112U);
    t4 = *((char **)t3);
    t3 = (t0 + 14204);
    t6 = 1;
    if (8U == 8U)
        goto LAB11;

LAB12:    t6 = 0;

LAB13:    if (t6 == 1)
        goto LAB8;

LAB9:    t10 = (t0 + 3112U);
    t11 = *((char **)t10);
    t10 = (t0 + 14212);
    t13 = 1;
    if (8U == 8U)
        goto LAB17;

LAB18:    t13 = 0;

LAB19:    t2 = t13;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 3752U);
    t18 = *((char **)t17);
    t17 = (t0 + 14220);
    t20 = 1;
    if (8U == 8U)
        goto LAB23;

LAB24:    t20 = 0;

LAB25:    t1 = t20;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB29:    t30 = (t0 + 3272U);
    t31 = *((char **)t30);
    t30 = (t0 + 9208);
    t32 = (t30 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t31, 8U);
    xsi_driver_first_trans_fast(t30);

LAB2:    t36 = (t0 + 9032);
    *((int *)t36) = 1;

LAB1:    return;
LAB3:    t24 = (t0 + 6152U);
    t25 = *((char **)t24);
    t24 = (t0 + 9208);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t25, 8U);
    xsi_driver_first_trans_fast(t24);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t7 = 0;

LAB14:    if (t7 < 8U)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t8 = (t4 + t7);
    t9 = (t3 + t7);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB12;

LAB16:    t7 = (t7 + 1);
    goto LAB14;

LAB17:    t14 = 0;

LAB20:    if (t14 < 8U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t15 = (t11 + t14);
    t16 = (t10 + t14);
    if (*((unsigned char *)t15) != *((unsigned char *)t16))
        goto LAB18;

LAB22:    t14 = (t14 + 1);
    goto LAB20;

LAB23:    t21 = 0;

LAB26:    if (t21 < 8U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t22 = (t18 + t21);
    t23 = (t17 + t21);
    if (*((unsigned char *)t22) != *((unsigned char *)t23))
        goto LAB24;

LAB28:    t21 = (t21 + 1);
    goto LAB26;

LAB30:    goto LAB2;

}

static void work_a_4150868852_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(198, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 14228);
    t4 = 1;
    if (8U == 8U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t14 = (t0 + 3912U);
    t15 = *((char **)t14);
    t14 = (t0 + 9272);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t15, 8U);
    xsi_driver_first_trans_fast(t14);

LAB2:    t20 = (t0 + 9048);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 3592U);
    t9 = *((char **)t8);
    t8 = (t0 + 9272);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 8U);
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 8U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void work_a_4150868852_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(213, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 14236);
    t4 = 1;
    if (8U == 8U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t14 = (t0 + 3912U);
    t15 = *((char **)t14);
    t14 = (t0 + 9336);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t15, 8U);
    xsi_driver_first_trans_fast(t14);

LAB2:    t20 = (t0 + 9064);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 6312U);
    t9 = *((char **)t8);
    t8 = (t0 + 9336);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 8U);
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 8U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}


extern void work_a_4150868852_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4150868852_3212880686_p_0,(void *)work_a_4150868852_3212880686_p_1,(void *)work_a_4150868852_3212880686_p_2,(void *)work_a_4150868852_3212880686_p_3};
	xsi_register_didat("work_a_4150868852_3212880686", "isim/Test_Processeur_isim_beh.exe.sim/work/a_4150868852_3212880686.didat");
	xsi_register_executes(pe);
}
