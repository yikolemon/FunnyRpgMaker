/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004943a0 */

uint __cdecl FUN_004943a0(undefined1 (*param_1) [32],uint param_2)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  uint uVar3;
  undefined1 (*pauVar4) [32];
  undefined1 auVar5 [16];
  
  pauVar2 = param_1;
  if (DAT_0051bfb0 < 5) {
    if (DAT_0051bfb0 < 1) {
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2) && ((*pauVar2)[0] != '\0'));
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
      }
      return (int)pauVar2 - (int)param_1;
    }
    uVar3 = -(uint)(((uint)param_1 & 0xf) != 0) & 0x10 - ((uint)param_1 & 0xf);
    if (param_2 < uVar3) {
      uVar3 = param_2;
    }
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar3) && ((*pauVar2)[0] != '\0'));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
    }
    if ((int)pauVar2 - (int)param_1 != uVar3) {
      return (int)pauVar2 - (int)param_1;
    }
    pauVar4 = (undefined1 (*) [32])((int)pauVar2 + ((param_2 - uVar3) - (param_2 - uVar3 & 0xf)));
    while ((pauVar2 != pauVar4 &&
           (auVar5[0] = -((*pauVar2)[0] == '\0'), auVar5[1] = -((*pauVar2)[1] == '\0'),
           auVar5[2] = -((*pauVar2)[2] == '\0'), auVar5[3] = -((*pauVar2)[3] == '\0'),
           auVar5[4] = -((*pauVar2)[4] == '\0'), auVar5[5] = -((*pauVar2)[5] == '\0'),
           auVar5[6] = -((*pauVar2)[6] == '\0'), auVar5[7] = -((*pauVar2)[7] == '\0'),
           auVar5[8] = -((*pauVar2)[8] == '\0'), auVar5[9] = -((*pauVar2)[9] == '\0'),
           auVar5[10] = -((*pauVar2)[10] == '\0'), auVar5[0xb] = -((*pauVar2)[0xb] == '\0'),
           auVar5[0xc] = -((*pauVar2)[0xc] == '\0'), auVar5[0xd] = -((*pauVar2)[0xd] == '\0'),
           auVar5[0xe] = -((*pauVar2)[0xe] == '\0'), auVar5[0xf] = -((*pauVar2)[0xf] == '\0'),
           (((((((((((((((SUB161(auVar5 >> 7,0) & 1) == 0 && (SUB161(auVar5 >> 0xf,0) & 1) == 0) &&
                       (SUB161(auVar5 >> 0x17,0) & 1) == 0) && (SUB161(auVar5 >> 0x1f,0) & 1) == 0)
                     && (SUB161(auVar5 >> 0x27,0) & 1) == 0) && (SUB161(auVar5 >> 0x2f,0) & 1) == 0)
                   && (SUB161(auVar5 >> 0x37,0) & 1) == 0) && (SUB161(auVar5 >> 0x3f,0) & 1) == 0)
                 && (SUB161(auVar5 >> 0x47,0) & 1) == 0) && (SUB161(auVar5 >> 0x4f,0) & 1) == 0) &&
               (SUB161(auVar5 >> 0x57,0) & 1) == 0) && (SUB161(auVar5 >> 0x5f,0) & 1) == 0) &&
             (SUB161(auVar5 >> 0x67,0) & 1) == 0) && (SUB161(auVar5 >> 0x6f,0) & 1) == 0) &&
           (SUB161(auVar5 >> 0x77,0) & 1) == 0) && -1 < auVar5[0xf]))) {
      pauVar2 = (undefined1 (*) [32])(*pauVar2 + 0x10);
    }
    if (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2)) {
      while ((*pauVar2)[0] != '\0') {
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1);
        if (pauVar2 == (undefined1 (*) [32])(*param_1 + param_2)) {
          return (int)pauVar2 - (int)param_1;
        }
      }
    }
  }
  else {
    uVar3 = -(uint)(((uint)param_1 & 0x1f) != 0) & 0x20 - ((uint)param_1 & 0x1f);
    if (param_2 < uVar3) {
      uVar3 = param_2;
    }
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar3) && ((*pauVar2)[0] != '\0'));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
    }
    if ((int)pauVar2 - (int)param_1 != uVar3) {
      return (int)pauVar2 - (int)param_1;
    }
    pauVar4 = (undefined1 (*) [32])((int)pauVar2 + ((param_2 - uVar3) - (param_2 - uVar3 & 0x1f)));
    while ((pauVar2 != pauVar4 &&
           (auVar1 = vpcmpeqb_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar2),
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
                           (SUB321(auVar1 >> 0x77,0) & 1) == 0) && SUB321(auVar1 >> 0x7f,0) == '\0')
                         && (SUB321(auVar1 >> 0x87,0) & 1) == 0) &&
                        (SUB321(auVar1 >> 0x8f,0) & 1) == 0) && (SUB321(auVar1 >> 0x97,0) & 1) == 0)
                      && (SUB321(auVar1 >> 0x9f,0) & 1) == 0) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0
                     ) && (SUB321(auVar1 >> 0xaf,0) & 1) == 0) &&
                   (SUB321(auVar1 >> 0xb7,0) & 1) == 0) && SUB321(auVar1 >> 0xbf,0) == '\0') &&
                 (SUB321(auVar1 >> 199,0) & 1) == 0) && (SUB321(auVar1 >> 0xcf,0) & 1) == 0) &&
               (SUB321(auVar1 >> 0xd7,0) & 1) == 0) && (SUB321(auVar1 >> 0xdf,0) & 1) == 0) &&
             (SUB321(auVar1 >> 0xe7,0) & 1) == 0) && (SUB321(auVar1 >> 0xef,0) & 1) == 0) &&
           (SUB321(auVar1 >> 0xf7,0) & 1) == 0) && -1 < auVar1[0x1f]))) {
      pauVar2 = pauVar2 + 1;
    }
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2) && ((*pauVar2)[0] != '\0'));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
    }
  }
  return (int)pauVar2 - (int)param_1;
}

