/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013d123 */

byte FUN_1013d123(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,uint param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  float10 fVar8;
  
  iVar3 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  if (*(char *)(*(int *)(iVar3 + 0x14cc) + 0xfe) == '\0') {
    FUN_10115649();
    FUN_101131fa(param_1);
    fVar8 = (float10)FUN_10115533();
    FUN_101152df(param_4,(float)fVar8);
    iVar7 = 0;
    if (param_4 < 1) {
      bVar6 = 0;
    }
    else {
      iVar1 = *(int *)(&DAT_102b92c8 + param_2 * 0x10);
      bVar6 = 0;
      do {
        FUN_10113358(iVar7);
        if (iVar7 != 0) {
          FUN_10114a0e(0,*(undefined4 *)(iVar3 + 0xd24));
        }
        iVar4 = DAT_1039d74c;
        if ((param_8 >> 0xc & 1) != 0) {
          uVar2 = (&DAT_102b9388)[iVar7];
          *(uint *)(DAT_1039d74c + 0x1e48) = *(uint *)(DAT_1039d74c + 0x1e48) | 0x20;
          *(undefined4 *)(iVar4 + 0x1e7c) = uVar2;
        }
        bVar5 = FUN_1013cb9f(&DAT_10356101,param_2,param_3,param_5,param_6,param_7,param_8);
        bVar6 = bVar6 | bVar5;
        FUN_10113568();
        FUN_101154f4();
        param_3 = param_3 + iVar1;
        iVar7 = iVar7 + 1;
      } while (param_4 != iVar7);
    }
    FUN_10113568();
    iVar7 = FUN_100fd57d(param_1,0);
    if (param_1 != iVar7) {
      FUN_10114a0e(0,*(undefined4 *)(iVar3 + 0xd24));
      FUN_1012cbcc(param_1,iVar7,0);
    }
    FUN_1011462f();
  }
  else {
    bVar6 = 0;
  }
  return bVar6 & 1;
}

