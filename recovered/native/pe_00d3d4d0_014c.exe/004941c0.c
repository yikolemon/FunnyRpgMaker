/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004941c0 */

uint __cdecl FUN_004941c0(short *param_1,uint param_2)

{
  undefined1 auVar1 [32];
  short *psVar2;
  uint uVar3;
  undefined1 (*pauVar4) [32];
  uint uVar5;
  undefined1 auVar6 [16];
  
  if (4 < DAT_0051bfb0) {
    if (((uint)param_1 & 1) != 0) {
      for (psVar2 = param_1; (psVar2 != param_1 + param_2 && (*psVar2 != 0)); psVar2 = psVar2 + 1) {
      }
      return (int)psVar2 - (int)param_1 >> 1;
    }
    uVar5 = (-(uint)(((uint)param_1 & 0x1f) != 0) & 0x20 - ((uint)param_1 & 0x1f)) >> 1;
    if (param_2 < uVar5) {
      uVar5 = param_2;
    }
    for (psVar2 = param_1; (psVar2 != param_1 + uVar5 && (*psVar2 != 0)); psVar2 = psVar2 + 1) {
    }
    uVar3 = (int)psVar2 - (int)param_1 >> 1;
    if (uVar3 == uVar5) {
      pauVar4 = (undefined1 (*) [32])(param_1 + uVar3);
      while ((pauVar4 !=
              (undefined1 (*) [32])
              (param_1 + ((param_2 - uVar5) - (param_2 - uVar5 & 0x1f)) + uVar3) &&
             (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar4),
             (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 &&
                                          (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                         (SUB321(auVar1 >> 0x17,0) & 1) == 0) &&
                                        (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                       (SUB321(auVar1 >> 0x27,0) & 1) == 0) &&
                                      (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x37,0) & 1) == 0) &&
                                    (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x47,0) & 1) == 0) &&
                                  (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x57,0) & 1) == 0) &&
                                (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x67,0) & 1) == 0) &&
                              (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                             (SUB321(auVar1 >> 0x77,0) & 1) == 0) &&
                            SUB321(auVar1 >> 0x7f,0) == '\0') && (SUB321(auVar1 >> 0x87,0) & 1) == 0
                           ) && (SUB321(auVar1 >> 0x8f,0) & 1) == 0) &&
                         (SUB321(auVar1 >> 0x97,0) & 1) == 0) && (SUB321(auVar1 >> 0x9f,0) & 1) == 0
                        ) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0) &&
                      (SUB321(auVar1 >> 0xaf,0) & 1) == 0) && (SUB321(auVar1 >> 0xb7,0) & 1) == 0)
                    && SUB321(auVar1 >> 0xbf,0) == '\0') && (SUB321(auVar1 >> 199,0) & 1) == 0) &&
                  (SUB321(auVar1 >> 0xcf,0) & 1) == 0) && (SUB321(auVar1 >> 0xd7,0) & 1) == 0) &&
                (SUB321(auVar1 >> 0xdf,0) & 1) == 0) && (SUB321(auVar1 >> 0xe7,0) & 1) == 0) &&
              (SUB321(auVar1 >> 0xef,0) & 1) == 0) && (SUB321(auVar1 >> 0xf7,0) & 1) == 0) &&
             -1 < auVar1[0x1f]))) {
        pauVar4 = pauVar4 + 1;
      }
      for (; (pauVar4 != (undefined1 (*) [32])(param_1 + param_2) && (*(short *)*pauVar4 != 0));
          pauVar4 = (undefined1 (*) [32])(*pauVar4 + 2)) {
      }
      uVar3 = (int)pauVar4 - (int)param_1 >> 1;
    }
    return uVar3;
  }
  if (DAT_0051bfb0 < 1) {
    for (psVar2 = param_1; (psVar2 != param_1 + param_2 && (*psVar2 != 0)); psVar2 = psVar2 + 1) {
    }
    return (int)psVar2 - (int)param_1 >> 1;
  }
  if (((uint)param_1 & 1) == 0) {
    uVar5 = (-(uint)(((uint)param_1 & 0xf) != 0) & 0x10 - ((uint)param_1 & 0xf)) >> 1;
    if (param_2 < uVar5) {
      uVar5 = param_2;
    }
    for (psVar2 = param_1; (psVar2 != param_1 + uVar5 && (*psVar2 != 0)); psVar2 = psVar2 + 1) {
    }
    uVar3 = (int)psVar2 - (int)param_1 >> 1;
    if (uVar3 != uVar5) {
      return uVar3;
    }
    for (psVar2 = param_1 + uVar3;
        psVar2 != param_1 + ((param_2 - uVar5) - (param_2 - uVar5 & 0xf)) + uVar3;
        psVar2 = psVar2 + 8) {
      auVar6._0_2_ = -(ushort)(*psVar2 == 0);
      auVar6._2_2_ = -(ushort)(psVar2[1] == 0);
      auVar6._4_2_ = -(ushort)(psVar2[2] == 0);
      auVar6._6_2_ = -(ushort)(psVar2[3] == 0);
      auVar6._8_2_ = -(ushort)(psVar2[4] == 0);
      auVar6._10_2_ = -(ushort)(psVar2[5] == 0);
      auVar6._12_2_ = -(ushort)(psVar2[6] == 0);
      auVar6._14_2_ = -(ushort)(psVar2[7] == 0);
      if ((((((((((((((((SUB161(auVar6 >> 7,0) & 1) != 0 || (SUB161(auVar6 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar6 >> 0x17,0) & 1) != 0) || (SUB161(auVar6 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar6 >> 0x27,0) & 1) != 0) || (SUB161(auVar6 >> 0x2f,0) & 1) != 0)
                  || (SUB161(auVar6 >> 0x37,0) & 1) != 0) || (SUB161(auVar6 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar6 >> 0x47,0) & 1) != 0) || (SUB161(auVar6 >> 0x4f,0) & 1) != 0) ||
              (SUB161(auVar6 >> 0x57,0) & 1) != 0) || (SUB161(auVar6 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar6 >> 0x67,0) & 1) != 0) || (SUB161(auVar6 >> 0x6f,0) & 1) != 0) ||
          (auVar6._14_2_ >> 7 & 1) != 0) || (auVar6._14_2_ & 0x8000) != 0) break;
    }
    for (; (psVar2 != param_1 + param_2 && (*psVar2 != 0)); psVar2 = psVar2 + 1) {
    }
  }
  else {
    psVar2 = param_1;
    if (param_1 != param_1 + param_2) {
      while (*psVar2 != 0) {
        psVar2 = psVar2 + 1;
        if (psVar2 == param_1 + param_2) {
          return (int)psVar2 - (int)param_1 >> 1;
        }
      }
    }
  }
  return (int)psVar2 - (int)param_1 >> 1;
}

