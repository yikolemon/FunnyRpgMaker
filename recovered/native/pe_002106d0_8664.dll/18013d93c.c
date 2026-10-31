/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013d93c */

byte FUN_18013d93c(undefined8 param_1,int *param_2,int *param_3,undefined4 param_4,int param_5,
                  int param_6,longlong param_7,longlong param_8,uint param_9)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  lVar2 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar2 + 0x1608) + 0x10e) == '\0') {
    FUN_180117f98();
    FUN_18011a496();
    uVar7 = FUN_18011a39a();
    FUN_18011a13a(2,uVar7);
    iVar5 = *param_3;
    iVar1 = -0x80000000;
    if (param_5 < param_6) {
      iVar5 = FUN_1800fed00(param_6,iVar5);
      iVar1 = param_5;
    }
    bVar3 = FUN_18013d731("##min",param_2,param_4,iVar1,iVar5,param_7,
                          (uint)(iVar1 == iVar5) << 0x15 | param_9);
    FUN_18011a356();
    FUN_180119893(0,*(undefined4 *)(lVar2 + 0xe0c));
    iVar5 = *param_2;
    if (param_5 < param_6) {
      iVar5 = FUN_1801003e9(param_5,iVar5);
    }
    else {
      param_6 = 0x7fffffff;
    }
    if (param_8 != 0) {
      param_7 = param_8;
    }
    bVar4 = FUN_18013d731("##max",param_3,param_4,iVar5,param_6,param_7,
                          (uint)(iVar5 == param_6) << 0x15 | param_9);
    bVar3 = bVar3 | bVar4;
    FUN_18011a356();
    FUN_180119893(0,*(undefined4 *)(lVar2 + 0xe0c));
    uVar6 = FUN_180101d94(param_1,0);
    FUN_180132c30(param_1,uVar6,0);
    FUN_18011949a();
    FUN_18011834f();
  }
  else {
    bVar3 = 0;
  }
  return bVar3;
}

