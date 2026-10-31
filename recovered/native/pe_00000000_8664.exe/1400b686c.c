/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b686c */

byte FUN_1400b686c(undefined8 param_1,int *param_2,int *param_3,undefined4 param_4,int param_5,
                  int param_6,longlong param_7,longlong param_8,uint param_9)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  lVar2 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar2 + 0x1608) + 0x10e) == '\0') {
    FUN_1400912b0();
    FUN_1400937ae();
    uVar7 = FUN_1400936b2();
    FUN_140093452(2,uVar7);
    iVar5 = *param_3;
    iVar1 = -0x80000000;
    if (param_5 < param_6) {
      iVar5 = FUN_140077fbc(param_6,iVar5);
      iVar1 = param_5;
    }
    bVar3 = FUN_1400b6661("##min",param_2,param_4,iVar1,iVar5,param_7,
                          (uint)(iVar1 == iVar5) << 0x15 | param_9);
    FUN_14009366e();
    FUN_140092bab(0,*(undefined4 *)(lVar2 + 0xe0c));
    iVar5 = *param_2;
    if (param_5 < param_6) {
      iVar5 = FUN_1400796a5(param_5,iVar5);
    }
    else {
      param_6 = 0x7fffffff;
    }
    if (param_8 != 0) {
      param_7 = param_8;
    }
    bVar4 = FUN_1400b6661("##max",param_3,param_4,iVar5,param_6,param_7,
                          (uint)(iVar5 == param_6) << 0x15 | param_9);
    bVar3 = bVar3 | bVar4;
    FUN_14009366e();
    FUN_140092bab(0,*(undefined4 *)(lVar2 + 0xe0c));
    uVar6 = FUN_14007b050(param_1,0);
    FUN_1400abb60(param_1,uVar6,0);
    FUN_1400927b2();
    FUN_140091667();
  }
  else {
    bVar3 = 0;
  }
  return bVar3;
}

