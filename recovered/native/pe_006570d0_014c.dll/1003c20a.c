/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003c20a */

void __thiscall FUN_1003c20a(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint *puStack_58;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  int *local_4c;
  uint local_48 [8];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_68;
  local_18 = 0xffffffff;
  local_1c = &LAB_10059ff0;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_1003a106(5,param_1 + 4,param_4);
  local_18 = 0;
  uVar1 = *(uint *)(param_3 + 8);
  if (uVar1 < 100) {
    iVar2 = param_4[1];
    uVar3 = iVar2 + 1;
    local_68 = uVar1;
    if ((uint)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4,uVar3);
      iVar2 = param_4[1];
      uVar3 = iVar2 + 1;
    }
    param_4[1] = uVar3;
    local_64 = (local_68 * 0xcd & 0xffff) >> 0xb;
    *(byte *)(*param_4 + iVar2) = (byte)local_64 | 0x30;
    iVar2 = param_4[1];
    uVar1 = iVar2 + 1;
    if ((uint)param_4[2] < uVar1) {
      (*(code *)param_4[3])(param_4,uVar1);
      iVar2 = param_4[1];
      uVar1 = iVar2 + 1;
    }
    param_4[1] = uVar1;
    *(byte *)(*param_4 + iVar2) = (char)local_68 + (char)local_64 * -10 | 0x30;
  }
  else {
    local_4c = param_4;
    puStack_58 = local_48;
    uStack_5c = 0;
    local_60 = 1;
    local_48[0] = uVar1;
    FUN_1002479c(local_50,&local_4c,"{:02}",5,1,0,puStack_58,uStack_54);
  }
  iVar2 = param_4[1];
  uVar1 = iVar2 + 1;
  if ((uint)param_4[2] < uVar1) {
    (*(code *)param_4[3])(param_4,uVar1);
    iVar2 = param_4[1];
    uVar1 = iVar2 + 1;
  }
  param_4[1] = uVar1;
  *(undefined1 *)(*param_4 + iVar2) = 0x3a;
  uVar1 = *(uint *)(param_3 + 4);
  if (uVar1 < 100) {
    iVar2 = param_4[1];
    uVar3 = iVar2 + 1;
    local_68 = uVar1;
    if ((uint)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4,uVar3);
      iVar2 = param_4[1];
      uVar3 = iVar2 + 1;
    }
    param_4[1] = uVar3;
    local_64 = (local_68 * 0xcd & 0xffff) >> 0xb;
    *(byte *)(*param_4 + iVar2) = (byte)local_64 | 0x30;
    iVar2 = param_4[1];
    uVar1 = iVar2 + 1;
    if ((uint)param_4[2] < uVar1) {
      (*(code *)param_4[3])(param_4,uVar1);
      iVar2 = param_4[1];
      uVar1 = iVar2 + 1;
    }
    param_4[1] = uVar1;
    *(byte *)(*param_4 + iVar2) = (char)local_68 + (char)local_64 * -10 | 0x30;
  }
  else {
    local_4c = param_4;
    puStack_58 = local_48;
    uStack_5c = 0;
    local_60 = 1;
    local_48[0] = uVar1;
    FUN_1002479c(local_50,&local_4c,"{:02}",5,1,0,puStack_58,uStack_54);
  }
  local_18 = 0xffffffff;
  FUN_1003a17a();
  ExceptionList = local_20;
  return;
}

