/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a1a08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100a1a08(undefined8 *param_1,undefined8 param_2,int param_3,undefined2 param_4,ulonglong param_5
            )

{
  ulonglong uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 ****ppppuVar8;
  undefined4 local_70;
  undefined4 ***local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_54;
  ulonglong local_50;
  ulonglong local_48;
  undefined8 local_40;
  int local_38 [2];
  undefined8 local_30;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_70;
  local_1c = &LAB_100c4080;
  local_20 = ExceptionList;
  local_5c = 0;
  local_6c = (undefined4 ****)0x0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_58 = 0xf;
  local_18 = 0;
  uVar7 = *(uint *)(param_3 + 0x14) & 0x3000;
  if (uVar7 == 0x3000) {
    local_54 = 0xffffffff;
    uVar3 = 0xffffffff;
  }
  else {
    local_54 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
  }
  ExceptionList = &local_20;
  iVar4 = FUN_1007d028(local_54,uVar3,uVar7);
  local_40 = param_5;
  uVar1 = local_40;
  local_40._4_4_ = (uint)(param_5 >> 0x20);
  uVar2 = local_40._4_4_;
  uVar5 = local_40._4_4_ & 0x7fffffff;
  local_40 = uVar1;
  if (((uVar5 < 0x7ff00000) && (DAT_102945c0 < (double)(_DAT_1028b420 & param_5))) &&
     (uVar7 == 0x2000)) {
    local_38[0] = 0;
    FUN_1026e530((int)param_5,uVar2,local_38);
    iVar6 = -local_38[0];
    if (-local_38[0] < 0) {
      iVar6 = local_38[0];
    }
    iVar4 = iVar4 + (uint)(iVar6 * 0x7597) / 100000;
  }
  FUN_1000396a(iVar4 + 0x32,0);
  local_48 = param_5;
  uVar7 = *(uint *)(param_3 + 0x14) & 0xffffffef;
  if ((uVar2 & 0x7fffffff) < 0x7ff00000) {
    uVar7 = *(uint *)(param_3 + 0x14);
  }
  FUN_1007d062(local_70,local_38,0,uVar7);
  iVar4 = FUN_1007c87c();
  if (iVar4 < 0) {
    *param_1 = param_2;
  }
  else {
    local_50 = param_5;
    ppppuVar8 = (undefined4 ****)local_6c;
    if (local_58 < 0x10) {
      ppppuVar8 = &local_6c;
    }
    local_30 = param_2;
    FUN_100a2a70(param_1,param_2,param_3,param_4,ppppuVar8,iVar4,(uVar2 & 0x7fffffff) < 0x7ff00000);
  }
  local_18 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_20;
  return param_1;
}

