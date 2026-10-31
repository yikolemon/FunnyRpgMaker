/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028ca30 */

ulonglong FUN_18028ca30(undefined1 (*param_1) [32])

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  
  if (DAT_1804039d8 < 5) {
    pauVar2 = param_1;
    if (DAT_1804039d8 < 1) {
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    else if (((ulonglong)param_1 & 1) == 0) {
      uVar3 = (ulonglong)((uint)param_1 & 0xf);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x10 - uVar3;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + (uVar4 >> 1) * 2) &&
             (*(short *)*pauVar2 != 0)); pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
      uVar3 = (longlong)pauVar2 - (longlong)param_1 >> 1;
      if (uVar3 != uVar4 >> 1) {
        return uVar3;
      }
      pauVar2 = (undefined1 (*) [32])(*param_1 + uVar3 * 2);
      while( true ) {
        auVar5._0_2_ = -(ushort)(*(short *)*pauVar2 == 0);
        auVar5._2_2_ = -(ushort)(*(short *)(*pauVar2 + 2) == 0);
        auVar5._4_2_ = -(ushort)(*(short *)(*pauVar2 + 4) == 0);
        auVar5._6_2_ = -(ushort)(*(short *)(*pauVar2 + 6) == 0);
        auVar5._8_2_ = -(ushort)(*(short *)(*pauVar2 + 8) == 0);
        auVar5._10_2_ = -(ushort)(*(short *)(*pauVar2 + 10) == 0);
        auVar5._12_2_ = -(ushort)(*(short *)(*pauVar2 + 0xc) == 0);
        auVar5._14_2_ = -(ushort)(*(short *)(*pauVar2 + 0xe) == 0);
        if ((((((((((((((((SUB161(auVar5 >> 7,0) & 1) != 0 || (SUB161(auVar5 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar5 >> 0x17,0) & 1) != 0) || (SUB161(auVar5 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar5 >> 0x27,0) & 1) != 0) || (SUB161(auVar5 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar5 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar5 >> 0x3f,0) & 1) != 0) || (SUB161(auVar5 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar5 >> 0x4f,0) & 1) != 0) || (SUB161(auVar5 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar5 >> 0x5f,0) & 1) != 0) || (SUB161(auVar5 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar5 >> 0x6f,0) & 1) != 0) || (auVar5._14_2_ >> 7 & 1) != 0) ||
            (auVar5._14_2_ & 0x8000) != 0) break;
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 0x10);
      }
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    else {
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    return (longlong)pauVar2 - (longlong)param_1 >> 1;
  }
  pauVar2 = param_1;
  if (((ulonglong)param_1 & 1) == 0) {
    uVar3 = (ulonglong)((uint)param_1 & 0x1f);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = 0x20 - uVar3;
    }
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + (uVar4 >> 1) * 2) &&
           (*(short *)*pauVar2 != 0)); pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
    uVar3 = (longlong)pauVar2 - (longlong)param_1 >> 1;
    if (uVar3 != uVar4 >> 1) {
      return uVar3;
    }
    pauVar2 = (undefined1 (*) [32])(*param_1 + uVar3 * 2);
    while (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar2),
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
                     && (SUB321(auVar1 >> 0x9f,0) & 1) == 0) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0)
                   && (SUB321(auVar1 >> 0xaf,0) & 1) == 0) && (SUB321(auVar1 >> 0xb7,0) & 1) == 0)
                 && SUB321(auVar1 >> 0xbf,0) == '\0') && (SUB321(auVar1 >> 199,0) & 1) == 0) &&
               (SUB321(auVar1 >> 0xcf,0) & 1) == 0) && (SUB321(auVar1 >> 0xd7,0) & 1) == 0) &&
             (SUB321(auVar1 >> 0xdf,0) & 1) == 0) && (SUB321(auVar1 >> 0xe7,0) & 1) == 0) &&
           (SUB321(auVar1 >> 0xef,0) & 1) == 0) && (SUB321(auVar1 >> 0xf7,0) & 1) == 0) &&
          -1 < auVar1[0x1f]) {
      pauVar2 = pauVar2 + 1;
    }
    for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
  }
  else {
    for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
  }
  return (longlong)pauVar2 - (longlong)param_1 >> 1;
}

