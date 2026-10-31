/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c9d80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1408c9d80(void)

{
  int iVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [32];
  
  uVar7 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar3 = _DAT_f88357561039d7b4 + 0xc88c0f;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  uVar3 = *(uint *)(uVar7 + 8);
  psVar6 = (short *)(ulonglong)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar4 = uVar3;
    while ((uVar4 != uVar3 + *(int *)(uVar7 + 0xc) * 2 && (*psVar6 != 0))) {
      uVar4 = (int)psVar6 + 2;
      psVar6 = (short *)(ulonglong)uVar4;
    }
    return (int)((int)psVar6 - uVar3) >> 1;
  }
  uVar4 = (-(uint)((uVar3 & 0x1f) != 0) & 0x20 - (uVar3 & 0x1f)) >> 1;
  if (*(uint *)(uVar7 + 0xc) < uVar4) {
    uVar4 = *(uint *)(uVar7 + 0xc);
  }
  uVar5 = uVar3;
  while ((uVar5 != uVar3 + uVar4 * 2 && (*psVar6 != 0))) {
    uVar5 = (int)psVar6 + 2;
    psVar6 = (short *)(ulonglong)uVar5;
  }
  uVar5 = (int)((int)psVar6 - uVar3) >> 1;
  if (uVar5 == uVar4) {
    uVar3 = uVar3 + uVar5 * 2;
    uVar4 = *(int *)(uVar7 + 0xc) - uVar4;
    iVar1 = *(int *)(uVar7 + 8);
    while ((pauVar8 = (undefined1 (*) [32])(ulonglong)uVar3,
           uVar3 != iVar1 + ((uVar4 - (uVar4 & 0x1f)) + uVar5) * 2 &&
           (auVar2 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar8),
           (((((((((((((((((((((((((((((((SUB321(auVar2 >> 7,0) & 1) == 0 &&
                                        (SUB321(auVar2 >> 0xf,0) & 1) == 0) &&
                                       (SUB321(auVar2 >> 0x17,0) & 1) == 0) &&
                                      (SUB321(auVar2 >> 0x1f,0) & 1) == 0) &&
                                     (SUB321(auVar2 >> 0x27,0) & 1) == 0) &&
                                    (SUB321(auVar2 >> 0x2f,0) & 1) == 0) &&
                                   (SUB321(auVar2 >> 0x37,0) & 1) == 0) &&
                                  (SUB321(auVar2 >> 0x3f,0) & 1) == 0) &&
                                 (SUB321(auVar2 >> 0x47,0) & 1) == 0) &&
                                (SUB321(auVar2 >> 0x4f,0) & 1) == 0) &&
                               (SUB321(auVar2 >> 0x57,0) & 1) == 0) &&
                              (SUB321(auVar2 >> 0x5f,0) & 1) == 0) &&
                             (SUB321(auVar2 >> 0x67,0) & 1) == 0) &&
                            (SUB321(auVar2 >> 0x6f,0) & 1) == 0) &&
                           (SUB321(auVar2 >> 0x77,0) & 1) == 0) && SUB321(auVar2 >> 0x7f,0) == '\0')
                         && (SUB321(auVar2 >> 0x87,0) & 1) == 0) &&
                        (SUB321(auVar2 >> 0x8f,0) & 1) == 0) && (SUB321(auVar2 >> 0x97,0) & 1) == 0)
                      && (SUB321(auVar2 >> 0x9f,0) & 1) == 0) && (SUB321(auVar2 >> 0xa7,0) & 1) == 0
                     ) && (SUB321(auVar2 >> 0xaf,0) & 1) == 0) &&
                   (SUB321(auVar2 >> 0xb7,0) & 1) == 0) && SUB321(auVar2 >> 0xbf,0) == '\0') &&
                 (SUB321(auVar2 >> 199,0) & 1) == 0) && (SUB321(auVar2 >> 0xcf,0) & 1) == 0) &&
               (SUB321(auVar2 >> 0xd7,0) & 1) == 0) && (SUB321(auVar2 >> 0xdf,0) & 1) == 0) &&
             (SUB321(auVar2 >> 0xe7,0) & 1) == 0) && (SUB321(auVar2 >> 0xef,0) & 1) == 0) &&
           (SUB321(auVar2 >> 0xf7,0) & 1) == 0) && -1 < auVar2[0x1f]))) {
      uVar3 = uVar3 + 0x20;
    }
    while ((uVar3 != iVar1 + *(int *)(uVar7 + 0xc) * 2 && (*(short *)*pauVar8 != 0))) {
      uVar3 = (int)pauVar8 + 2;
      pauVar8 = (undefined1 (*) [32])(ulonglong)uVar3;
    }
    uVar5 = (int)pauVar8 - iVar1 >> 1;
  }
  return uVar5;
}

