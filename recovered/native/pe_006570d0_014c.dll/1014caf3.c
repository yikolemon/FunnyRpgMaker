/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014caf3 */

void FUN_1014caf3(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  
  iVar7 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar7 + 0x14cc);
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    cVar5 = FUN_101172b5();
    if (((cVar5 == '\0') || (1 < *(uint *)(iVar7 + 0x20e8))) ||
       (iVar2 = *(int *)(iVar7 + 0x2048), (*(byte *)(*(int *)(iVar7 + 0x2048) + 0xf) & 0x10) == 0))
    {
      FUN_10116891(iVar1,4);
    }
    else {
      do {
        iVar6 = iVar2;
        iVar2 = *(int *)(iVar6 + 0x3a0);
        if (iVar2 == 0) break;
      } while ((*(byte *)(iVar2 + 0xf) & 0x10) != 0);
      if (((iVar2 == iVar1) && (*(int *)(iVar6 + 500) == 0)) &&
         ((*(byte *)(iVar7 + 0x20dc) & 0x80) == 0)) {
        FUN_101034e2(iVar1,0);
        FUN_1011714e(*(undefined4 *)(iVar1 + 0x3c8),1,0,iVar1 + 0x3dc);
        if (*(char *)(iVar7 + 0x2040) == '\x01') {
          *(undefined1 *)(iVar7 + 0x2040) = 0;
          *(undefined1 *)(iVar7 + 0x2098) = 2;
        }
        *(undefined2 *)(iVar7 + 0x2041) = 0x101;
        FUN_1011733e(*(undefined4 *)(iVar7 + 0x20e8),*(undefined4 *)(iVar7 + 0x20f0),
                     *(undefined4 *)(iVar7 + 0x20dc),*(undefined4 *)(iVar7 + 0x20e0));
      }
    }
    FUN_1010a588();
    FUN_10113568();
    *(float *)(iVar1 + 0x1a8) = *(float *)(iVar1 + 0x144) - *(float *)(iVar1 + 0x50);
    iVar2 = *(int *)(iVar7 + 0x1fb8);
    iVar7 = *(int *)(iVar7 + 0x1fb0) * 0x3c;
    *(undefined1 *)(iVar2 + -4 + iVar7) = 0;
    uVar3 = *(undefined4 *)(iVar2 + -0x30 + iVar7);
    uVar4 = *(undefined4 *)(iVar2 + -0x2c + iVar7);
    fVar8 = (float10)FUN_100fdbca(*(undefined4 *)(iVar1 + 0x164),
                                  *(float *)(iVar1 + 0x15c) - *(float *)(iVar1 + 0xc4));
    *(float *)(iVar1 + 0x164) = (float)fVar8;
    FUN_1011462f();
    *(undefined4 *)(iVar1 + 0x1f0) = 1;
    *(undefined1 *)(iVar1 + 0x184) = 0;
    *(undefined4 *)(iVar1 + 0x19c) = 0;
    *(undefined1 *)(iVar1 + 0x1a7) = 0;
    *(undefined4 *)(iVar1 + 0x160) = uVar4;
    *(undefined4 *)(iVar1 + 0x15c) = uVar3;
  }
  return;
}

