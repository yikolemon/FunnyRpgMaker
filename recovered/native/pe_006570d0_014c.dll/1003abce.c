/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003abce */

void __thiscall FUN_1003abce(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  int *local_48 [6];
  int local_30 [2];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_68;
  local_18 = 0xffffffff;
  local_1c = &LAB_10059f00;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_1003a106(2,param_1 + 4,param_4);
  local_18 = 0;
  iVar3 = *(int *)(param_3 + 0x14) % 100;
  if (iVar3 < 0) {
    local_48[0] = param_4;
    piStack_58 = local_30;
    uStack_5c = 0;
    local_60 = 1;
    local_30[0] = iVar3;
    FUN_1002479c(local_4c,local_48,"{:02}",5,1,0,piStack_58,uStack_54);
  }
  else {
    iVar1 = param_4[1];
    uVar2 = iVar1 + 1;
    local_68 = iVar3;
    if ((uint)param_4[2] < uVar2) {
      (*(code *)param_4[3])(param_4,uVar2);
      iVar1 = param_4[1];
      uVar2 = iVar1 + 1;
    }
    param_4[1] = uVar2;
    local_64 = (local_68 * 0xcd & 0xffffU) >> 0xb;
    *(byte *)(*param_4 + iVar1) = (byte)local_64 | 0x30;
    iVar3 = param_4[1];
    uVar2 = iVar3 + 1;
    if ((uint)param_4[2] < uVar2) {
      (*(code *)param_4[3])(param_4,uVar2);
      iVar3 = param_4[1];
      uVar2 = iVar3 + 1;
    }
    param_4[1] = uVar2;
    *(byte *)(*param_4 + iVar3) = (char)local_68 + (char)local_64 * -10 | 0x30;
  }
  local_18 = 0xffffffff;
  FUN_1003a17a();
  ExceptionList = local_20;
  return;
}

