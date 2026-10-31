/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400365f8 */

void FUN_1400365f8(undefined8 param_1,undefined8 param_2,uint *param_3,longlong *param_4)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint *local_40;
  uint local_38 [4];
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  uVar1 = param_3[2];
  if (uVar1 < 100) {
    bVar2 = (byte)((uVar1 * 0xcd & 0xffff) >> 0xb);
    lVar3 = param_4[1];
    uVar4 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar4 = lVar3 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar3) = bVar2 | 0x30;
    lVar3 = param_4[1];
    uVar4 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar4 = lVar3 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar3) = (char)uVar1 + bVar2 * -10 | 0x30;
  }
  else {
    local_40 = local_38;
    local_48 = 1;
    local_58 = "{:02}";
    local_50 = 5;
    local_60 = param_4;
    local_38[0] = uVar1;
    FUN_14001a2bc(local_68);
  }
  lVar3 = param_4[1];
  uVar4 = lVar3 + 1;
  if ((ulonglong)param_4[2] < uVar4) {
    (*(code *)param_4[3])(param_4);
    lVar3 = param_4[1];
    uVar4 = lVar3 + 1;
  }
  param_4[1] = uVar4;
  *(undefined1 *)(*param_4 + lVar3) = 0x3a;
  uVar1 = param_3[1];
  if (uVar1 < 100) {
    bVar2 = (byte)((uVar1 * 0xcd & 0xffff) >> 0xb);
    lVar3 = param_4[1];
    uVar4 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar4 = lVar3 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar3) = bVar2 | 0x30;
    lVar3 = param_4[1];
    uVar4 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar4 = lVar3 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar3) = (char)uVar1 + bVar2 * -10 | 0x30;
  }
  else {
    local_40 = local_38;
    local_48 = 1;
    local_58 = "{:02}";
    local_50 = 5;
    local_60 = param_4;
    local_38[0] = uVar1;
    FUN_14001a2bc(local_68);
  }
  lVar3 = param_4[1];
  uVar4 = lVar3 + 1;
  if ((ulonglong)param_4[2] < uVar4) {
    (*(code *)param_4[3])(param_4);
    lVar3 = param_4[1];
    uVar4 = lVar3 + 1;
  }
  param_4[1] = uVar4;
  *(undefined1 *)(*param_4 + lVar3) = 0x3a;
  uVar1 = *param_3;
  if (uVar1 < 100) {
    bVar2 = (byte)((uVar1 * 0xcd & 0xffff) >> 0xb);
    lVar3 = param_4[1];
    uVar4 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar4 = lVar3 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar3) = bVar2 | 0x30;
    lVar3 = param_4[1];
    uVar4 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar4 = lVar3 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar3) = (char)uVar1 + bVar2 * -10 | 0x30;
  }
  else {
    local_40 = local_38;
    local_48 = 1;
    local_58 = "{:02}";
    local_50 = 5;
    local_60 = param_4;
    local_38[0] = uVar1;
    FUN_14001a2bc(local_68);
  }
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_88);
}

