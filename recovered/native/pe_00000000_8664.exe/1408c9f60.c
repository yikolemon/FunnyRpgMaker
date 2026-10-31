/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c9f60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1408c9f60(void)

{
  undefined1 auVar1 [32];
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint unaff_R14D;
  
  uVar5 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar3 = _DAT_f88357561039d7b4 + 0x938c0f;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  uVar3 = *(uint *)(uVar5 + 8);
  uVar6 = -(uint)((uVar3 & 0x1f) != 0) & 0x20 - (uVar3 & 0x1f);
  if (*(uint *)(uVar5 + 0xc) < uVar6) {
    uVar6 = *(uint *)(uVar5 + 0xc);
  }
  uVar2 = uVar3;
  do {
    if (uVar2 == uVar6 + uVar3) break;
    uVar2 = unaff_R14D;
  } while (*(char *)(ulonglong)uVar3 != '\0');
  iVar4 = 0;
  if (uVar6 == 0) {
    iVar4 = uVar3 - (*(uint *)(uVar5 + 0xc) & 0x1f);
    while ((uVar3 != iVar4 + *(uint *)(uVar5 + 0xc) &&
           (auVar1 = vpcmpeqb_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),
                                   *(undefined1 (*) [32])(ulonglong)uVar3),
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
      uVar3 = uVar3 + 0x20;
    }
    do {
      if (uVar3 == *(int *)(uVar5 + 0xc) + *(int *)(uVar5 + 8)) break;
    } while ((*(undefined1 (*) [32])(ulonglong)uVar3)[0] != '\0');
    iVar4 = uVar3 - *(int *)(uVar5 + 8);
  }
  return iVar4;
}

