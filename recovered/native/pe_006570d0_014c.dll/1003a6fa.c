/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003a6fa */

void __thiscall FUN_1003a6fa(int param_1,undefined4 param_2,uint *param_3,int *param_4)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_78;
  uint local_74;
  undefined1 local_70 [4];
  int *local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  uint *puStack_60;
  undefined4 uStack_5c;
  undefined1 local_53 [3];
  int local_50;
  uint local_48 [8];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_78;
  local_18 = 0xffffffff;
  local_1c = &LAB_10059ef0;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_1003a106(0x18,param_1 + 4,param_4);
  local_18 = 0;
  pcVar1 = (&PTR_DAT_1028f2f8)[param_3[6]];
  sVar2 = _strlen(pcVar1);
  FUN_1001909c(pcVar1,pcVar1 + sVar2);
  iVar3 = param_4[1];
  uVar4 = iVar3 + 1;
  if ((uint)param_4[2] < uVar4) {
    (*(code *)param_4[3])(param_4,uVar4);
    iVar3 = param_4[1];
    uVar4 = iVar3 + 1;
  }
  param_4[1] = uVar4;
  *(undefined1 *)(*param_4 + iVar3) = 0x20;
  pcVar1 = (&PTR_DAT_1028f330)[param_3[4]];
  sVar2 = _strlen(pcVar1);
  FUN_1001909c(pcVar1,pcVar1 + sVar2);
  iVar3 = param_4[1];
  uVar4 = iVar3 + 1;
  if ((uint)param_4[2] < uVar4) {
    (*(code *)param_4[3])(param_4,uVar4);
    iVar3 = param_4[1];
    uVar4 = iVar3 + 1;
  }
  param_4[1] = uVar4;
  *(undefined1 *)(*param_4 + iVar3) = 0x20;
  local_78 = param_3[3];
  uVar4 = -local_78;
  if ((int)-local_78 < 0) {
    uVar4 = local_78;
  }
  iVar3 = FUN_1002472e(&local_68,uVar4,0x15);
  local_50 = iVar3;
  if ((int)local_78 < 0) {
    local_50 = iVar3 + -1;
    *(undefined1 *)(iVar3 + -1) = 0x2d;
  }
  FUN_1001909c(local_50,local_53);
  iVar3 = param_4[1];
  uVar4 = iVar3 + 1;
  if ((uint)param_4[2] < uVar4) {
    (*(code *)param_4[3])(param_4,uVar4);
    iVar3 = param_4[1];
    uVar4 = iVar3 + 1;
  }
  param_4[1] = uVar4;
  *(undefined1 *)(*param_4 + iVar3) = 0x20;
  uVar4 = param_3[2];
  if (uVar4 < 100) {
    iVar3 = param_4[1];
    uVar5 = iVar3 + 1;
    local_78 = uVar4;
    if ((uint)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4,uVar5);
      iVar3 = param_4[1];
      uVar5 = iVar3 + 1;
    }
    param_4[1] = uVar5;
    local_74 = (local_78 * 0xcd & 0xffff) >> 0xb;
    *(byte *)(*param_4 + iVar3) = (byte)local_74 | 0x30;
    iVar3 = param_4[1];
    uVar4 = iVar3 + 1;
    if ((uint)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4,uVar4);
      iVar3 = param_4[1];
      uVar4 = iVar3 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + iVar3) = (char)local_78 + (char)local_74 * -10 | 0x30;
  }
  else {
    local_6c = param_4;
    puStack_60 = local_48;
    uStack_64 = 0;
    local_68 = 1;
    local_48[0] = uVar4;
    FUN_1002479c(local_70,&local_6c,"{:02}",5,1,0,puStack_60,uStack_5c);
  }
  iVar3 = param_4[1];
  uVar4 = iVar3 + 1;
  if ((uint)param_4[2] < uVar4) {
    (*(code *)param_4[3])(param_4,uVar4);
    iVar3 = param_4[1];
    uVar4 = iVar3 + 1;
  }
  param_4[1] = uVar4;
  *(undefined1 *)(*param_4 + iVar3) = 0x3a;
  uVar4 = param_3[1];
  if (uVar4 < 100) {
    iVar3 = param_4[1];
    uVar5 = iVar3 + 1;
    local_78 = uVar4;
    if ((uint)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4,uVar5);
      iVar3 = param_4[1];
      uVar5 = iVar3 + 1;
    }
    param_4[1] = uVar5;
    local_74 = (local_78 * 0xcd & 0xffff) >> 0xb;
    *(byte *)(*param_4 + iVar3) = (byte)local_74 | 0x30;
    iVar3 = param_4[1];
    uVar4 = iVar3 + 1;
    if ((uint)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4,uVar4);
      iVar3 = param_4[1];
      uVar4 = iVar3 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + iVar3) = (char)local_78 + (char)local_74 * -10 | 0x30;
  }
  else {
    local_6c = param_4;
    puStack_60 = local_48;
    uStack_64 = 0;
    local_68 = 1;
    local_48[0] = uVar4;
    FUN_1002479c(local_70,&local_6c,"{:02}",5,1,0,puStack_60,uStack_5c);
  }
  iVar3 = param_4[1];
  uVar4 = iVar3 + 1;
  if ((uint)param_4[2] < uVar4) {
    (*(code *)param_4[3])(param_4,uVar4);
    iVar3 = param_4[1];
    uVar4 = iVar3 + 1;
  }
  param_4[1] = uVar4;
  *(undefined1 *)(*param_4 + iVar3) = 0x3a;
  uVar4 = *param_3;
  if (uVar4 < 100) {
    iVar3 = param_4[1];
    uVar5 = iVar3 + 1;
    local_78 = uVar4;
    if ((uint)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4,uVar5);
      iVar3 = param_4[1];
      uVar5 = iVar3 + 1;
    }
    param_4[1] = uVar5;
    local_74 = (local_78 * 0xcd & 0xffff) >> 0xb;
    *(byte *)(*param_4 + iVar3) = (byte)local_74 | 0x30;
    iVar3 = param_4[1];
    uVar4 = iVar3 + 1;
    if ((uint)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4,uVar4);
      iVar3 = param_4[1];
      uVar4 = iVar3 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + iVar3) = (char)local_78 + (char)local_74 * -10 | 0x30;
  }
  else {
    local_6c = param_4;
    puStack_60 = local_48;
    uStack_64 = 0;
    local_68 = 1;
    local_48[0] = uVar4;
    FUN_1002479c(local_70,&local_6c,"{:02}",5,1,0,puStack_60,uStack_5c);
  }
  iVar3 = param_4[1];
  uVar4 = iVar3 + 1;
  if ((uint)param_4[2] < uVar4) {
    (*(code *)param_4[3])(param_4,uVar4);
    iVar3 = param_4[1];
    uVar4 = iVar3 + 1;
  }
  param_4[1] = uVar4;
  *(undefined1 *)(*param_4 + iVar3) = 0x20;
  local_78 = param_3[5];
  iVar3 = -(local_78 + 0x76c);
  if (iVar3 < 0) {
    iVar3 = local_78 + 0x76c;
  }
  iVar3 = FUN_1002472e(&local_68,iVar3,0x15);
  local_50 = iVar3;
  if ((int)local_78 < -0x76c) {
    local_50 = iVar3 + -1;
    *(undefined1 *)(iVar3 + -1) = 0x2d;
  }
  FUN_1001909c(local_50,local_53);
  local_18 = 0xffffffff;
  FUN_1003a17a();
  ExceptionList = local_20;
  return;
}

