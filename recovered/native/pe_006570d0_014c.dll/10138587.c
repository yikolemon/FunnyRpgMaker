/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10138587 */

byte FUN_10138587(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7,int param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  
  iVar2 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  if (*(char *)(*(int *)(iVar2 + 0x14cc) + 0xfe) == '\0') {
    FUN_101131fa(param_1);
    FUN_10115649();
    fVar7 = (float10)FUN_10115533();
    FUN_101152df(2,(float)fVar7);
    iVar5 = *param_3;
    iVar1 = -0x80000000;
    if (param_5 < param_6) {
      iVar5 = FUN_100fa683(param_6,iVar5);
      iVar1 = param_5;
    }
    bVar3 = FUN_1013838a("##min",param_2,param_4,iVar1,iVar5,param_7,
                         (uint)(iVar1 == iVar5) << 0x15 | param_9);
    FUN_101154f4();
    FUN_10114a0e(0,*(undefined4 *)(iVar2 + 0xd24));
    iVar5 = *param_2;
    if (param_5 < param_6) {
      iVar5 = FUN_100fbc6a(param_5,iVar5);
    }
    else {
      param_6 = 0x7fffffff;
    }
    if (param_8 != 0) {
      param_7 = param_8;
    }
    bVar4 = FUN_1013838a("##max",param_3,param_4,iVar5,param_6,param_7,
                         (uint)(iVar5 == param_6) << 0x15 | param_9);
    bVar3 = bVar3 | bVar4;
    FUN_101154f4();
    FUN_10114a0e(0,*(undefined4 *)(iVar2 + 0xd24));
    uVar6 = FUN_100fd57d(param_1,0);
    FUN_1012cbcc(param_1,uVar6,0);
    FUN_1011462f();
    FUN_10113568();
  }
  else {
    bVar3 = 0;
  }
  return bVar3;
}

