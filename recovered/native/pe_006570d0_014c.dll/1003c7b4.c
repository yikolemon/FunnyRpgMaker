/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003c7b4 */

void __thiscall FUN_1003c7b4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_70 [4];
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint *puStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  int *local_48 [6];
  uint local_30 [2];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_70;
  local_18 = 0xffffffff;
  local_1c = &LAB_1005a010;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_1003a106(6,param_1 + 4,param_4);
  local_18 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_1001909c(&DAT_1033e9f6,&DAT_1033e9fc);
  }
  else {
    local_6c = FUN_1003ca66(param_2,param_3);
    iVar2 = param_4[1];
    uVar1 = iVar2 + 1;
    if ((int)local_6c < 0) {
      if ((uint)param_4[2] < uVar1) {
        (*(code *)param_4[3])(param_4,uVar1);
        iVar2 = param_4[1];
        uVar1 = iVar2 + 1;
      }
      param_4[1] = uVar1;
      *(undefined1 *)(*param_4 + iVar2) = 0x2d;
      local_6c = -local_6c;
    }
    else {
      if ((uint)param_4[2] < uVar1) {
        (*(code *)param_4[3])(param_4,uVar1);
        iVar2 = param_4[1];
        uVar1 = iVar2 + 1;
      }
      param_4[1] = uVar1;
      *(undefined1 *)(*param_4 + iVar2) = 0x2b;
    }
    local_68 = local_6c / 0x3c;
    if (local_6c < 6000) {
      iVar2 = param_4[1];
      uVar1 = iVar2 + 1;
      if ((uint)param_4[2] < uVar1) {
        (*(code *)param_4[3])(param_4,uVar1);
        iVar2 = param_4[1];
        uVar1 = iVar2 + 1;
      }
      param_4[1] = uVar1;
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
      local_48[0] = param_4;
      puStack_58 = local_30;
      uStack_5c = 0;
      local_60 = 1;
      local_30[0] = local_68;
      FUN_1002479c(local_4c,local_48,"{:02}",5,1,0,puStack_58,uStack_54);
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
    iVar2 = param_4[1];
    uVar1 = iVar2 + 1;
    if ((uint)param_4[2] < uVar1) {
      (*(code *)param_4[3])(param_4,uVar1);
      iVar2 = param_4[1];
      uVar1 = iVar2 + 1;
    }
    local_6c = local_6c + local_68 * -0x3c;
    param_4[1] = uVar1;
    local_68 = (local_6c * 0xcd & 0xffff) >> 0xb;
    *(byte *)(*param_4 + iVar2) = (byte)local_68 | 0x30;
    iVar2 = param_4[1];
    uVar1 = iVar2 + 1;
    if ((uint)param_4[2] < uVar1) {
      (*(code *)param_4[3])(param_4,uVar1);
      iVar2 = param_4[1];
      uVar1 = iVar2 + 1;
    }
    param_4[1] = uVar1;
    *(byte *)(*param_4 + iVar2) = (char)local_6c + (char)local_68 * -10 | 0x30;
  }
  local_18 = 0xffffffff;
  FUN_1003a17a();
  ExceptionList = local_20;
  return;
}

