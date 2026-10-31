/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101575f2 */

undefined4 FUN_101575f2(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 ***pppuVar2;
  undefined1 local_6c [4];
  undefined4 **local_68 [4];
  int local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_6c;
  local_14 = 0xffffffff;
  local_18 = &LAB_1015f500;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_14 = 0;
  iVar1 = FUN_100d98a2(param_2);
  if (iVar1 == DAT_1039d84c) {
    local_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    local_3c = 3;
    local_50 = 0;
    local_14 = 1;
    FUN_10063c30(&local_38,*param_2,param_2[1] + *param_2,&local_50);
    local_14 = 2;
    FUN_10062bb6(local_68,&local_50);
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    local_28 = 0;
    local_24 = 0xf;
    local_14 = 4;
    pppuVar2 = local_68;
    if (3 < local_54) {
      pppuVar2 = (undefined4 ***)local_68[0];
    }
    FUN_10066ac5(local_6c,pppuVar2,pppuVar2 + local_58,&local_38);
    local_14 = 0xffffffff;
    FUN_10061fce();
    FUN_10061fce();
    local_14 = 5;
    FUN_1015f1aa(local_68,param_2,&local_38);
    FUN_1000334a(local_68[0] + 10);
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  else {
    FUN_1000334a(iVar1 + 0x28);
  }
  local_14 = 0xffffffff;
  FUN_1022c200(&DAT_10389e10);
  ExceptionList = local_1c;
  return param_1;
}

