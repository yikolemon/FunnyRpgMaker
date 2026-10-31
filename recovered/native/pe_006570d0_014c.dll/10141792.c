/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10141792 */

byte FUN_10141792(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  float10 fVar6;
  
  iVar2 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  if (*(char *)(*(int *)(iVar2 + 0x14cc) + 0xfe) == '\0') {
    FUN_10115649();
    FUN_101131fa(param_1);
    fVar6 = (float10)FUN_10115533();
    FUN_101152df(param_4,(float)fVar6);
    iVar5 = 0;
    if (param_4 < 1) {
      bVar4 = 0;
    }
    else {
      iVar1 = *(int *)(&DAT_102b92c8 + param_2 * 0x10);
      bVar4 = 0;
      do {
        FUN_10113358(iVar5);
        if (iVar5 != 0) {
          FUN_10114a0e(0,*(undefined4 *)(iVar2 + 0xd24));
        }
        bVar3 = FUN_101412ec(&DAT_10356101,param_2,param_3,param_5,param_6,param_7,param_8);
        bVar4 = bVar4 | bVar3;
        FUN_10113568();
        FUN_101154f4();
        param_3 = param_3 + iVar1;
        iVar5 = iVar5 + 1;
      } while (param_4 != iVar5);
    }
    FUN_10113568();
    iVar5 = FUN_100fd57d(param_1,0);
    if (param_1 != iVar5) {
      FUN_10114a0e(0,*(undefined4 *)(iVar2 + 0xd24));
      FUN_1012cbcc(param_1,iVar5,0);
    }
    FUN_1011462f();
  }
  else {
    bVar4 = 0;
  }
  return bVar4 & 1;
}

