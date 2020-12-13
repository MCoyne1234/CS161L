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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001344644632_1524469873_init();
    work_m_00000000004015206992_2168347513_init();
    work_m_00000000003898398942_3345147203_init();
    work_m_00000000003083529190_0598602558_init();
    work_m_00000000001344644632_2231872394_init();
    work_m_00000000004269800416_2855942875_init();
    work_m_00000000000988186470_2173393775_init();
    work_m_00000000003083529190_2950672405_init();
    work_m_00000000002308305320_1822797907_init();
    work_m_00000000000822033784_1255044201_init();
    work_m_00000000002890036462_2368457068_init();
    work_m_00000000003083529190_0154811746_init();
    work_m_00000000003438806257_3341979057_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003438806257_3341979057");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}