// This file was generated by the create_regs script
#ifdef ANDROID
extern void *regbase;
#define V3D_BASE	((unsigned long)regbase)
#else // ANDROID
#if defined(__CC_ARM) && defined(V3D_INCLUDED)
#if defined(_HERA_) || defined(_RHEA_) || defined(_SAMOA_)
#define V3D_BASE                                                 0x3c00b000		/* for Hera V3D */
#elif defined(_ATHENA_)
#define V3D_BASE                                                 0x08950000
#else
   #error "WRONG BASEBAND CHIP!!!"
#endif
#else
#define V3D_BASE                                                 0x7ec00000		/* for VC4 V3D */
#endif
#endif // ANDROID

#define V3D_IDENT0                                               HW_REGISTER_RW( V3D_BASE+0x0000 ) 
   #define V3D_IDENT0_MASK                                       0xffffffff
   #define V3D_IDENT0_WIDTH                                      32
#define V3D_IDENT1                                               HW_REGISTER_RW( V3D_BASE+0x0004 ) 
   #define V3D_IDENT1_MASK                                       0xffffffff
   #define V3D_IDENT1_WIDTH                                      32
#define V3D_IDENT2                                               HW_REGISTER_RW( V3D_BASE+0x0008 ) 
   #define V3D_IDENT2_MASK                                       0xffffffff
   #define V3D_IDENT2_WIDTH                                      32
#define V3D_IDENT3                                               HW_REGISTER_RW( V3D_BASE+0x000c ) 
   #define V3D_IDENT3_MASK                                       0xffffffff
   #define V3D_IDENT3_WIDTH                                      32
#define V3D_SCRATCH                                              HW_REGISTER_RW( V3D_BASE+0x0010 ) 
   #define V3D_SCRATCH_MASK                                      0xffffffff
   #define V3D_SCRATCH_WIDTH                                     32
#define V3D_L2CACTL                                              HW_REGISTER_RW( V3D_BASE+0x0020 ) 
   #define V3D_L2CACTL_MASK                                      0xffffffff
   #define V3D_L2CACTL_WIDTH                                     32
#define V3D_SLCACTL                                              HW_REGISTER_RW( V3D_BASE+0x0024 ) 
   #define V3D_SLCACTL_MASK                                      0xffffffff
   #define V3D_SLCACTL_WIDTH                                     32
#define V3D_INTCTL                                               HW_REGISTER_RW( V3D_BASE+0x0030 ) 
   #define V3D_INTCTL_MASK                                       0xffffffff
   #define V3D_INTCTL_WIDTH                                      32
#define V3D_INTENA                                               HW_REGISTER_RW( V3D_BASE+0x0034 ) 
   #define V3D_INTENA_MASK                                       0xffffffff
   #define V3D_INTENA_WIDTH                                      32
#define V3D_INTDIS                                               HW_REGISTER_RW( V3D_BASE+0x0038 ) 
   #define V3D_INTDIS_MASK                                       0xffffffff
   #define V3D_INTDIS_WIDTH                                      32
#define V3D_CT0CS                                                HW_REGISTER_RW( V3D_BASE+0x0100 ) 
   #define V3D_CT0CS_MASK                                        0xffffffff
   #define V3D_CT0CS_WIDTH                                       32
#define V3D_CT1CS                                                HW_REGISTER_RW( V3D_BASE+0x0104 ) 
   #define V3D_CT1CS_MASK                                        0xffffffff
   #define V3D_CT1CS_WIDTH                                       32
#define V3D_CT0EA                                                HW_REGISTER_RW( V3D_BASE+0x0108 ) 
   #define V3D_CT0EA_MASK                                        0xffffffff
   #define V3D_CT0EA_WIDTH                                       32
#define V3D_CT1EA                                                HW_REGISTER_RW( V3D_BASE+0x010c ) 
   #define V3D_CT1EA_MASK                                        0xffffffff
   #define V3D_CT1EA_WIDTH                                       32
#define V3D_CT0CA                                                HW_REGISTER_RW( V3D_BASE+0x0110 ) 
   #define V3D_CT0CA_MASK                                        0xffffffff
   #define V3D_CT0CA_WIDTH                                       32
#define V3D_CT1CA                                                HW_REGISTER_RW( V3D_BASE+0x0114 ) 
   #define V3D_CT1CA_MASK                                        0xffffffff
   #define V3D_CT1CA_WIDTH                                       32
#define V3D_CT00RA0                                              HW_REGISTER_RW( V3D_BASE+0x0118 ) 
   #define V3D_CT00RA0_MASK                                      0xffffffff
   #define V3D_CT00RA0_WIDTH                                     32
#define V3D_CT01RA0                                              HW_REGISTER_RW( V3D_BASE+0x011c ) 
   #define V3D_CT01RA0_MASK                                      0xffffffff
   #define V3D_CT01RA0_WIDTH                                     32
#define V3D_CT0LC                                                HW_REGISTER_RW( V3D_BASE+0x0120 ) 
   #define V3D_CT0LC_MASK                                        0xffffffff
   #define V3D_CT0LC_WIDTH                                       32
#define V3D_CT1LC                                                HW_REGISTER_RW( V3D_BASE+0x0124 ) 
   #define V3D_CT1LC_MASK                                        0xffffffff
   #define V3D_CT1LC_WIDTH                                       32
#define V3D_CT0PC                                                HW_REGISTER_RW( V3D_BASE+0x0128 ) 
   #define V3D_CT0PC_MASK                                        0xffffffff
   #define V3D_CT0PC_WIDTH                                       32
#define V3D_CT1PC                                                HW_REGISTER_RW( V3D_BASE+0x012c ) 
   #define V3D_CT1PC_MASK                                        0xffffffff
   #define V3D_CT1PC_WIDTH                                       32
#define V3D_PCS                                                  HW_REGISTER_RW( V3D_BASE+0x0130 ) 
   #define V3D_PCS_MASK                                          0x0000013f
   #define V3D_PCS_WIDTH                                         9
#define V3D_BFC                                                  HW_REGISTER_RW( V3D_BASE+0x0134 ) 
   #define V3D_BFC_MASK                                          0x000000ff
   #define V3D_BFC_WIDTH                                         8
#define V3D_RFC                                                  HW_REGISTER_RW( V3D_BASE+0x0138 ) 
   #define V3D_RFC_MASK                                          0x000000ff
   #define V3D_RFC_WIDTH                                         8
#define V3D_BPCA                                                 HW_REGISTER_RW( V3D_BASE+0x0300 ) 
   #define V3D_BPCA_MASK                                         0xffffffff
   #define V3D_BPCA_WIDTH                                        32
#define V3D_BPCS                                                 HW_REGISTER_RW( V3D_BASE+0x0304 ) 
   #define V3D_BPCS_MASK                                         0xffffffff
   #define V3D_BPCS_WIDTH                                        32
#define V3D_BPOA                                                 HW_REGISTER_RW( V3D_BASE+0x0308 ) 
   #define V3D_BPOA_MASK                                         0xffffffff
   #define V3D_BPOA_WIDTH                                        32
#define V3D_BPOS                                                 HW_REGISTER_RW( V3D_BASE+0x030c ) 
   #define V3D_BPOS_MASK                                         0xffffffff
   #define V3D_BPOS_WIDTH                                        32
#define V3D_BXCF                                                 HW_REGISTER_RW( V3D_BASE+0x0310 ) 
   #define V3D_BXCF_MASK                                         0x00000003
   #define V3D_BXCF_WIDTH                                        2
#define V3D_SQRSV0                                               HW_REGISTER_RW( V3D_BASE+0x0410 ) 
   #define V3D_SQRSV0_MASK                                       0xffffffff
   #define V3D_SQRSV0_WIDTH                                      32
#define V3D_SQRSV1                                               HW_REGISTER_RW( V3D_BASE+0x0414 ) 
   #define V3D_SQRSV1_MASK                                       0xffffffff
   #define V3D_SQRSV1_WIDTH                                      32
#define V3D_SQCNTL                                               HW_REGISTER_RW( V3D_BASE+0x0418 ) 
   #define V3D_SQCNTL_MASK                                       0x0000000f
   #define V3D_SQCNTL_WIDTH                                      4
#define V3D_SQCSTAT                                              HW_REGISTER_RW( V3D_BASE+0x041c ) 
   #define V3D_SQCSTAT_MASK                                      0xffffffff
   #define V3D_SQCSTAT_WIDTH                                     32
#define V3D_SRQPC                                                HW_REGISTER_RW( V3D_BASE+0x0430 ) 
   #define V3D_SRQPC_MASK                                        0xffffffff
   #define V3D_SRQPC_WIDTH                                       32
#define V3D_SRQUA                                                HW_REGISTER_RW( V3D_BASE+0x0434 ) 
   #define V3D_SRQUA_MASK                                        0xffffffff
   #define V3D_SRQUA_WIDTH                                       32
#define V3D_SRQUL                                                HW_REGISTER_RW( V3D_BASE+0x0438 ) 
   #define V3D_SRQUL_MASK                                        0x00000fff
   #define V3D_SRQUL_WIDTH                                       12
#define V3D_SRQCS                                                HW_REGISTER_RW( V3D_BASE+0x043c ) 
   #define V3D_SRQCS_MASK                                        0x00ffffbf
   #define V3D_SRQCS_WIDTH                                       24
#define V3D_VPACNTL                                              HW_REGISTER_RW( V3D_BASE+0x0500 ) 
   #define V3D_VPACNTL_MASK                                      0xffffffff
   #define V3D_VPACNTL_WIDTH                                     32
#define V3D_VPMBASE                                              HW_REGISTER_RW( V3D_BASE+0x0504 ) 
   #define V3D_VPMBASE_MASK                                      0xffffffff
   #define V3D_VPMBASE_WIDTH                                     32
#define V3D_PCTRC                                                HW_REGISTER_RW( 0x7ec00670 ) 
   #define V3D_PCTRC_MASK                                        0x0000ffff
   #define V3D_PCTRC_WIDTH                                       16
#define V3D_PCTRE                                                HW_REGISTER_RW( 0x7ec00674 ) 
   #define V3D_PCTRE_MASK                                        0x8000ffff
   #define V3D_PCTRE_WIDTH                                       32
#define V3D_PCTR0                                                HW_REGISTER_RW( 0x7ec00680 ) 
   #define V3D_PCTR0_MASK                                        0xffffffff
   #define V3D_PCTR0_WIDTH                                       32
#define V3D_PCTRS0                                               HW_REGISTER_RW( 0x7ec00684 ) 
   #define V3D_PCTRS0_MASK                                       0x0000001f
   #define V3D_PCTRS0_WIDTH                                      5
#define V3D_PCTR1                                                HW_REGISTER_RW( 0x7ec00688 ) 
   #define V3D_PCTR1_MASK                                        0xffffffff
   #define V3D_PCTR1_WIDTH                                       32
#define V3D_PCTRS1                                               HW_REGISTER_RW( 0x7ec0068c ) 
   #define V3D_PCTRS1_MASK                                       0x0000001f
   #define V3D_PCTRS1_WIDTH                                      5
#define V3D_PCTR2                                                HW_REGISTER_RW( 0x7ec00690 ) 
   #define V3D_PCTR2_MASK                                        0xffffffff
   #define V3D_PCTR2_WIDTH                                       32
#define V3D_PCTRS2                                               HW_REGISTER_RW( 0x7ec00694 ) 
   #define V3D_PCTRS2_MASK                                       0x0000001f
   #define V3D_PCTRS2_WIDTH                                      5
#define V3D_PCTR3                                                HW_REGISTER_RW( 0x7ec00698 ) 
   #define V3D_PCTR3_MASK                                        0xffffffff
   #define V3D_PCTR3_WIDTH                                       32
#define V3D_PCTRS3                                               HW_REGISTER_RW( 0x7ec0069c ) 
   #define V3D_PCTRS3_MASK                                       0x0000001f
   #define V3D_PCTRS3_WIDTH                                      5
#define V3D_PCTR4                                                HW_REGISTER_RW( 0x7ec006a0 ) 
   #define V3D_PCTR4_MASK                                        0xffffffff
   #define V3D_PCTR4_WIDTH                                       32
#define V3D_PCTRS4                                               HW_REGISTER_RW( 0x7ec006a4 ) 
   #define V3D_PCTRS4_MASK                                       0x0000001f
   #define V3D_PCTRS4_WIDTH                                      5
#define V3D_PCTR5                                                HW_REGISTER_RW( 0x7ec006a8 ) 
   #define V3D_PCTR5_MASK                                        0xffffffff
   #define V3D_PCTR5_WIDTH                                       32
#define V3D_PCTRS5                                               HW_REGISTER_RW( 0x7ec006ac ) 
   #define V3D_PCTRS5_MASK                                       0x0000001f
   #define V3D_PCTRS5_WIDTH                                      5
#define V3D_PCTR6                                                HW_REGISTER_RW( 0x7ec006b0 ) 
   #define V3D_PCTR6_MASK                                        0xffffffff
   #define V3D_PCTR6_WIDTH                                       32
#define V3D_PCTRS6                                               HW_REGISTER_RW( 0x7ec006b4 ) 
   #define V3D_PCTRS6_MASK                                       0x0000001f
   #define V3D_PCTRS6_WIDTH                                      5
#define V3D_PCTR7                                                HW_REGISTER_RW( 0x7ec006b8 ) 
   #define V3D_PCTR7_MASK                                        0xffffffff
   #define V3D_PCTR7_WIDTH                                       32
#define V3D_PCTRS7                                               HW_REGISTER_RW( 0x7ec006bc ) 
   #define V3D_PCTRS7_MASK                                       0x0000001f
   #define V3D_PCTRS7_WIDTH                                      5
#define V3D_PCTR8                                                HW_REGISTER_RW( 0x7ec006c0 ) 
   #define V3D_PCTR8_MASK                                        0xffffffff
   #define V3D_PCTR8_WIDTH                                       32
#define V3D_PCTRS8                                               HW_REGISTER_RW( 0x7ec006c4 ) 
   #define V3D_PCTRS8_MASK                                       0x0000001f
   #define V3D_PCTRS8_WIDTH                                      5
#define V3D_PCTR9                                                HW_REGISTER_RW( 0x7ec006c8 ) 
   #define V3D_PCTR9_MASK                                        0xffffffff
   #define V3D_PCTR9_WIDTH                                       32
#define V3D_PCTRS9                                               HW_REGISTER_RW( 0x7ec006cc ) 
   #define V3D_PCTRS9_MASK                                       0x0000001f
   #define V3D_PCTRS9_WIDTH                                      5
#define V3D_PCTR10                                               HW_REGISTER_RW( 0x7ec006d0 ) 
   #define V3D_PCTR10_MASK                                       0xffffffff
   #define V3D_PCTR10_WIDTH                                      32
#define V3D_PCTRS10                                              HW_REGISTER_RW( 0x7ec006d4 ) 
   #define V3D_PCTRS10_MASK                                      0x0000001f
   #define V3D_PCTRS10_WIDTH                                     5
#define V3D_PCTR11                                               HW_REGISTER_RW( 0x7ec006d8 ) 
   #define V3D_PCTR11_MASK                                       0xffffffff
   #define V3D_PCTR11_WIDTH                                      32
#define V3D_PCTRS11                                              HW_REGISTER_RW( 0x7ec006dc ) 
   #define V3D_PCTRS11_MASK                                      0x0000001f
   #define V3D_PCTRS11_WIDTH                                     5
#define V3D_PCTR12                                               HW_REGISTER_RW( 0x7ec006e0 ) 
   #define V3D_PCTR12_MASK                                       0xffffffff
   #define V3D_PCTR12_WIDTH                                      32
#define V3D_PCTRS12                                              HW_REGISTER_RW( 0x7ec006e4 ) 
   #define V3D_PCTRS12_MASK                                      0x0000001f
   #define V3D_PCTRS12_WIDTH                                     5
#define V3D_PCTR13                                               HW_REGISTER_RW( 0x7ec006e8 ) 
   #define V3D_PCTR13_MASK                                       0xffffffff
   #define V3D_PCTR13_WIDTH                                      32
#define V3D_PCTRS13                                              HW_REGISTER_RW( 0x7ec006ec ) 
   #define V3D_PCTRS13_MASK                                      0x0000001f
   #define V3D_PCTRS13_WIDTH                                     5
#define V3D_PCTR14                                               HW_REGISTER_RW( 0x7ec006f0 ) 
   #define V3D_PCTR14_MASK                                       0xffffffff
   #define V3D_PCTR14_WIDTH                                      32
#define V3D_PCTRS14                                              HW_REGISTER_RW( 0x7ec006f4 ) 
   #define V3D_PCTRS14_MASK                                      0x0000001f
   #define V3D_PCTRS14_WIDTH                                     5
#define V3D_PCTR15                                               HW_REGISTER_RW( 0x7ec006f8 ) 
   #define V3D_PCTR15_MASK                                       0xffffffff
   #define V3D_PCTR15_WIDTH                                      32
#define V3D_PCTRS15                                              HW_REGISTER_RW( 0x7ec006fc ) 
   #define V3D_PCTRS15_MASK                                      0x0000001f
   #define V3D_PCTRS15_WIDTH                                     5
#define V3D_DBCFG                                                HW_REGISTER_RW( V3D_BASE+0x0e00 ) 
   #define V3D_DBCFG_MASK                                        0xffffffff
   #define V3D_DBCFG_WIDTH                                       32
#define V3D_DBSCS                                                HW_REGISTER_RW( V3D_BASE+0x0e04 ) 
   #define V3D_DBSCS_MASK                                        0xffffffff
   #define V3D_DBSCS_WIDTH                                       32
#define V3D_DBSCFG                                               HW_REGISTER_RW( V3D_BASE+0x0e08 ) 
   #define V3D_DBSCFG_MASK                                       0xffffffff
   #define V3D_DBSCFG_WIDTH                                      32
#define V3D_DBSSR                                                HW_REGISTER_RW( V3D_BASE+0x0e0c ) 
   #define V3D_DBSSR_MASK                                        0xffffffff
   #define V3D_DBSSR_WIDTH                                       32
#define V3D_DBSDR0                                               HW_REGISTER_RW( V3D_BASE+0x0e10 ) 
   #define V3D_DBSDR0_MASK                                       0xffffffff
   #define V3D_DBSDR0_WIDTH                                      32
#define V3D_DBSDR1                                               HW_REGISTER_RW( V3D_BASE+0x0e14 ) 
   #define V3D_DBSDR1_MASK                                       0xffffffff
   #define V3D_DBSDR1_WIDTH                                      32
#define V3D_DBSDR2                                               HW_REGISTER_RW( V3D_BASE+0x0e18 ) 
   #define V3D_DBSDR2_MASK                                       0xffffffff
   #define V3D_DBSDR2_WIDTH                                      32
#define V3D_DBSDR3                                               HW_REGISTER_RW( V3D_BASE+0x0e1c ) 
   #define V3D_DBSDR3_MASK                                       0xffffffff		 
   #define V3D_DBSDR3_WIDTH                                      32				 
#define V3D_DBQRUN                                               HW_REGISTER_RW( V3D_BASE+0x0e20 ) 
   #define V3D_DBQRUN_MASK                                       0xffffffff		 
   #define V3D_DBQRUN_WIDTH                                      32				 
#define V3D_DBQHLT                                               HW_REGISTER_RW( V3D_BASE+0x0e24 ) 
   #define V3D_DBQHLT_MASK                                       0xffffffff		 
   #define V3D_DBQHLT_WIDTH                                      32				 
#define V3D_DBQSTP                                               HW_REGISTER_RW( V3D_BASE+0x0e28 ) 
   #define V3D_DBQSTP_MASK                                       0xffffffff
   #define V3D_DBQSTP_WIDTH                                      32
#define V3D_DBQITE                                               HW_REGISTER_RW( V3D_BASE+0x0e2c ) 
   #define V3D_DBQITE_MASK                                       0xffffffff		 
   #define V3D_DBQITE_WIDTH                                      32				 
#define V3D_DBQITC                                               HW_REGISTER_RW( V3D_BASE+0x0e30 ) 
   #define V3D_DBQITC_MASK                                       0xffffffff		 
   #define V3D_DBQITC_WIDTH                                      32				 
#define V3D_DBQGHC                                               HW_REGISTER_RW( V3D_BASE+0x0e34 ) 
   #define V3D_DBQGHC_MASK                                       0xffffffff		 
   #define V3D_DBQGHC_WIDTH                                      32				 
#define V3D_DBQGHG                                               HW_REGISTER_RW( V3D_BASE+0x0e38 ) 
   #define V3D_DBQGHG_MASK                                       0xffffffff
   #define V3D_DBQGHG_WIDTH                                      32
#define V3D_DBQGHH                                               HW_REGISTER_RW( V3D_BASE+0x0e3c ) 
   #define V3D_DBQGHH_MASK                                       0xffffffff		 
   #define V3D_DBQGHH_WIDTH                                      32				 
#define V3D_DBGE                                                 HW_REGISTER_RW( V3D_BASE+0x0f00 ) 
   #define V3D_DBGE_MASK                                         0xffffffff		 
   #define V3D_DBGE_WIDTH                                        32				 
#define V3D_FDBG0                                                HW_REGISTER_RW( V3D_BASE+0x0f04 ) 
   #define V3D_FDBG0_MASK                                        0xffffffff		 
   #define V3D_FDBG0_WIDTH                                       32				 
#define V3D_FDBGB                                                HW_REGISTER_RW( V3D_BASE+0x0f08 ) 
   #define V3D_FDBGB_MASK                                        0xffffffff
   #define V3D_FDBGB_WIDTH                                       32
#define V3D_FDBGR                                                HW_REGISTER_RW( V3D_BASE+0x0f0c ) 
   #define V3D_FDBGR_MASK                                        0xffffffff		 
   #define V3D_FDBGR_WIDTH                                       32				 
#define V3D_FDBGS                                                HW_REGISTER_RW( V3D_BASE+0x0f10 ) 
   #define V3D_FDBGS_MASK                                        0xffffffff		 
   #define V3D_FDBGS_WIDTH                                       32				 
#define V3D_ERRSTAT                                              HW_REGISTER_RW( V3D_BASE+0x0f20 ) 
   #define V3D_ERRSTAT_MASK                                      0xffffffff		 
   #define V3D_ERRSTAT_WIDTH                                     32				 
