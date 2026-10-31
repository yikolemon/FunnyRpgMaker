/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003ce96 */

void FUN_18003ce96(longlong param_1,undefined8 param_2,uint *param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
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
  uVar1 = param_3[2];
  if (uVar1 < 100) {
    lVar2 = param_4[1];
    uVar4 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar4 = lVar2 + 1;
    }
    bVar3 = (byte)((uVar1 * 0xcd & 0xffff) >> 0xb);
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar2) = bVar3 | 0x30;
    lVar2 = param_4[1];
    uVar4 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar4 = lVar2 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar2) = (char)uVar1 + bVar3 * -10 | 0x30;
  }
  else {
    local_68 = local_60;
    local_70 = 1;
    local_50 = "{:02}";
    local_48 = 5;
    local_60[0] = uVar1;
    local_40 = param_4;
    FUN_180024c6e(local_38);
  }
  lVar2 = param_4[1];
  uVar4 = lVar2 + 1;
  if ((ulonglong)param_4[2] < uVar4) {
    (*(code *)param_4[3])(param_4);
    lVar2 = param_4[1];
    uVar4 = lVar2 + 1;
  }
  param_4[1] = uVar4;
  *(undefined1 *)(*param_4 + lVar2) = 0x3a;
  uVar1 = param_3[1];
  if (uVar1 < 100) {
    lVar2 = param_4[1];
    uVar4 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar4 = lVar2 + 1;
    }
    bVar3 = (byte)((uVar1 * 0xcd & 0xffff) >> 0xb);
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar2) = bVar3 | 0x30;
    lVar2 = param_4[1];
    uVar4 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar4 = lVar2 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar2) = (char)uVar1 + bVar3 * -10 | 0x30;
  }
  else {
    local_68 = local_60;
    local_70 = 1;
    local_50 = "{:02}";
    local_48 = 5;
    local_60[0] = uVar1;
    local_40 = param_4;
    FUN_180024c6e(local_38);
  }
  lVar2 = param_4[1];
  uVar4 = lVar2 + 1;
  if ((ulonglong)param_4[2] < uVar4) {
    (*(code *)param_4[3])(param_4);
    lVar2 = param_4[1];
    uVar4 = lVar2 + 1;
  }
  param_4[1] = uVar4;
  *(undefined1 *)(*param_4 + lVar2) = 0x3a;
  uVar1 = *param_3;
  if (uVar1 < 100) {
    lVar2 = param_4[1];
    uVar4 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar4 = lVar2 + 1;
    }
    bVar3 = (byte)((uVar1 * 0xcd & 0xffff) >> 0xb);
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar2) = bVar3 | 0x30;
    lVar2 = param_4[1];
    uVar4 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar4 = lVar2 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar2) = (char)uVar1 + bVar3 * -10 | 0x30;
  }
  else {
    local_68 = local_60;
    local_70 = 1;
    local_50 = "{:02}";
    local_48 = 5;
    local_60[0] = uVar1;
    local_40 = param_4;
    FUN_180024c6e(local_38);
  }
  FUN_18003af0c(local_98);
  return;
}

