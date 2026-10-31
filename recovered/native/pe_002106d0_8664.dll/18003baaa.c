/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003baaa */

void FUN_18003baaa(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_98 [40];
  undefined8 local_70;
  uint *local_68;
  uint local_60 [4];
  char *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_18003ae98(local_98,8,param_1 + 8);
  uVar4 = *(int *)(param_3 + 0x10) + 1;
  if (uVar4 < 100) {
    lVar1 = param_4[1];
    uVar3 = lVar1 + 1;
    if ((ulonglong)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4);
      lVar1 = param_4[1];
      uVar3 = lVar1 + 1;
    }
    bVar2 = (byte)((uVar4 * 0xcd & 0xffff) >> 0xb);
    param_4[1] = uVar3;
    *(byte *)(*param_4 + lVar1) = bVar2 | 0x30;
    lVar1 = param_4[1];
    uVar3 = lVar1 + 1;
    if ((ulonglong)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4);
      lVar1 = param_4[1];
      uVar3 = lVar1 + 1;
    }
    param_4[1] = uVar3;
    *(byte *)(*param_4 + lVar1) = (char)uVar4 + bVar2 * -10 | 0x30;
  }
  else {
    local_68 = local_60;
    local_70 = 1;
    local_50 = "{:02}";
    local_48 = 5;
    local_60[0] = uVar4;
    local_40 = param_4;
    FUN_180024c6e(local_38);
  }
  lVar1 = param_4[1];
  uVar3 = lVar1 + 1;
  if ((ulonglong)param_4[2] < uVar3) {
    (*(code *)param_4[3])(param_4);
    lVar1 = param_4[1];
    uVar3 = lVar1 + 1;
  }
  param_4[1] = uVar3;
  *(undefined1 *)(*param_4 + lVar1) = 0x2f;
  uVar4 = *(uint *)(param_3 + 0xc);
  if (uVar4 < 100) {
    lVar1 = param_4[1];
    uVar3 = lVar1 + 1;
    if ((ulonglong)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4);
      lVar1 = param_4[1];
      uVar3 = lVar1 + 1;
    }
    bVar2 = (byte)((uVar4 * 0xcd & 0xffff) >> 0xb);
    param_4[1] = uVar3;
    *(byte *)(*param_4 + lVar1) = bVar2 | 0x30;
    lVar1 = param_4[1];
    uVar3 = lVar1 + 1;
    if ((ulonglong)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4);
      lVar1 = param_4[1];
      uVar3 = lVar1 + 1;
    }
    param_4[1] = uVar3;
    *(byte *)(*param_4 + lVar1) = (char)uVar4 + bVar2 * -10 | 0x30;
  }
  else {
    local_68 = local_60;
    local_70 = 1;
    local_50 = "{:02}";
    local_48 = 5;
    local_60[0] = uVar4;
    local_40 = param_4;
    FUN_180024c6e(local_38);
  }
  lVar1 = param_4[1];
  uVar3 = lVar1 + 1;
  if ((ulonglong)param_4[2] < uVar3) {
    (*(code *)param_4[3])(param_4);
    lVar1 = param_4[1];
    uVar3 = lVar1 + 1;
  }
  param_4[1] = uVar3;
  *(undefined1 *)(*param_4 + lVar1) = 0x2f;
  uVar4 = *(int *)(param_3 + 0x14) % 100;
  if ((int)uVar4 < 0) {
    local_68 = local_60;
    local_70 = 1;
    local_50 = "{:02}";
    local_48 = 5;
    local_60[0] = uVar4;
    local_40 = param_4;
    FUN_180024c6e(local_38);
  }
  else {
    lVar1 = param_4[1];
    uVar3 = lVar1 + 1;
    if ((ulonglong)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4);
      lVar1 = param_4[1];
      uVar3 = lVar1 + 1;
    }
    bVar2 = (byte)((uVar4 * 0xcd & 0xffff) >> 0xb);
    param_4[1] = uVar3;
    *(byte *)(*param_4 + lVar1) = bVar2 | 0x30;
    lVar1 = param_4[1];
    uVar3 = lVar1 + 1;
    if ((ulonglong)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4);
      lVar1 = param_4[1];
      uVar3 = lVar1 + 1;
    }
    param_4[1] = uVar3;
    *(byte *)(*param_4 + lVar1) = (char)uVar4 + bVar2 * -10 | 0x30;
  }
  FUN_18003af0c(local_98);
  return;
}

