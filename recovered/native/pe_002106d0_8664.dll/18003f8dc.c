/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003f8dc */

void FUN_18003f8dc(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint *local_40;
  uint local_38 [4];
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_88;
  uVar4 = *(int *)(param_3 + 0x10) + 1;
  if (uVar4 < 100) {
    bVar1 = (byte)((uVar4 * 0xcd & 0xffff) >> 0xb);
    lVar2 = param_4[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar3 = lVar2 + 1;
    }
    param_4[1] = uVar3;
    *(byte *)(*param_4 + lVar2) = bVar1 | 0x30;
    lVar2 = param_4[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar3 = lVar2 + 1;
    }
    param_4[1] = uVar3;
    *(byte *)(*param_4 + lVar2) = (char)uVar4 + bVar1 * -10 | 0x30;
  }
  else {
    local_40 = local_38;
    local_48 = 1;
    local_58 = "{:02}";
    local_50 = 5;
    local_60 = param_4;
    local_38[0] = uVar4;
    FUN_180024c6e(local_68);
  }
  lVar2 = param_4[1];
  uVar3 = lVar2 + 1;
  if ((ulonglong)param_4[2] < uVar3) {
    (*(code *)param_4[3])(param_4);
    lVar2 = param_4[1];
    uVar3 = lVar2 + 1;
  }
  param_4[1] = uVar3;
  *(undefined1 *)(*param_4 + lVar2) = 0x2f;
  uVar4 = *(uint *)(param_3 + 0xc);
  if (uVar4 < 100) {
    bVar1 = (byte)((uVar4 * 0xcd & 0xffff) >> 0xb);
    lVar2 = param_4[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar3 = lVar2 + 1;
    }
    param_4[1] = uVar3;
    *(byte *)(*param_4 + lVar2) = bVar1 | 0x30;
    lVar2 = param_4[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar3 = lVar2 + 1;
    }
    param_4[1] = uVar3;
    *(byte *)(*param_4 + lVar2) = (char)uVar4 + bVar1 * -10 | 0x30;
  }
  else {
    local_40 = local_38;
    local_48 = 1;
    local_58 = "{:02}";
    local_50 = 5;
    local_60 = param_4;
    local_38[0] = uVar4;
    FUN_180024c6e(local_68);
  }
  lVar2 = param_4[1];
  uVar3 = lVar2 + 1;
  if ((ulonglong)param_4[2] < uVar3) {
    (*(code *)param_4[3])(param_4);
    lVar2 = param_4[1];
    uVar3 = lVar2 + 1;
  }
  param_4[1] = uVar3;
  *(undefined1 *)(*param_4 + lVar2) = 0x2f;
  uVar4 = *(int *)(param_3 + 0x14) % 100;
  if ((int)uVar4 < 0) {
    local_40 = local_38;
    local_48 = 1;
    local_58 = "{:02}";
    local_50 = 5;
    local_60 = param_4;
    local_38[0] = uVar4;
    FUN_180024c6e(local_68);
  }
  else {
    bVar1 = (byte)((uVar4 * 0xcd & 0xffff) >> 0xb);
    lVar2 = param_4[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar3 = lVar2 + 1;
    }
    param_4[1] = uVar3;
    *(byte *)(*param_4 + lVar2) = bVar1 | 0x30;
    lVar2 = param_4[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar3 = lVar2 + 1;
    }
    param_4[1] = uVar3;
    *(byte *)(*param_4 + lVar2) = (char)uVar4 + bVar1 * -10 | 0x30;
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_88);
}

