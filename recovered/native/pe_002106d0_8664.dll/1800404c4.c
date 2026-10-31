/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800404c4 */

void FUN_1800404c4(undefined8 param_1,undefined8 param_2,uint *param_3,longlong *param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  char *_Str;
  size_t sVar4;
  ulonglong uVar5;
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
  uVar2 = FUN_18003c261(param_3);
  if (uVar2 < 100) {
    bVar1 = (byte)((uVar2 * 0xcd & 0xffff) >> 0xb);
    lVar3 = param_4[1];
    uVar5 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar5 = lVar3 + 1;
    }
    param_4[1] = uVar5;
    *(byte *)(*param_4 + lVar3) = bVar1 | 0x30;
    lVar3 = param_4[1];
    uVar5 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar5 = lVar3 + 1;
    }
    param_4[1] = uVar5;
    *(byte *)(*param_4 + lVar3) = (char)uVar2 + bVar1 * -10 | 0x30;
  }
  else {
    local_40 = local_38;
    local_48 = 1;
    local_58 = "{:02}";
    local_50 = 5;
    local_60 = param_4;
    local_38[0] = uVar2;
    FUN_180024c6e(local_68);
  }
  lVar3 = param_4[1];
  uVar5 = lVar3 + 1;
  if ((ulonglong)param_4[2] < uVar5) {
    (*(code *)param_4[3])(param_4);
    lVar3 = param_4[1];
    uVar5 = lVar3 + 1;
  }
  param_4[1] = uVar5;
  *(undefined1 *)(*param_4 + lVar3) = 0x3a;
  uVar2 = param_3[1];
  if (uVar2 < 100) {
    bVar1 = (byte)((uVar2 * 0xcd & 0xffff) >> 0xb);
    lVar3 = param_4[1];
    uVar5 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar5 = lVar3 + 1;
    }
    param_4[1] = uVar5;
    *(byte *)(*param_4 + lVar3) = bVar1 | 0x30;
    lVar3 = param_4[1];
    uVar5 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar5 = lVar3 + 1;
    }
    param_4[1] = uVar5;
    *(byte *)(*param_4 + lVar3) = (char)uVar2 + bVar1 * -10 | 0x30;
  }
  else {
    local_40 = local_38;
    local_48 = 1;
    local_58 = "{:02}";
    local_50 = 5;
    local_60 = param_4;
    local_38[0] = uVar2;
    FUN_180024c6e(local_68);
  }
  lVar3 = param_4[1];
  uVar5 = lVar3 + 1;
  if ((ulonglong)param_4[2] < uVar5) {
    (*(code *)param_4[3])(param_4);
    lVar3 = param_4[1];
    uVar5 = lVar3 + 1;
  }
  param_4[1] = uVar5;
  *(undefined1 *)(*param_4 + lVar3) = 0x3a;
  uVar2 = *param_3;
  if (uVar2 < 100) {
    bVar1 = (byte)((uVar2 * 0xcd & 0xffff) >> 0xb);
    lVar3 = param_4[1];
    uVar5 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar5 = lVar3 + 1;
    }
    param_4[1] = uVar5;
    *(byte *)(*param_4 + lVar3) = bVar1 | 0x30;
    lVar3 = param_4[1];
    uVar5 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar5 = lVar3 + 1;
    }
    param_4[1] = uVar5;
    *(byte *)(*param_4 + lVar3) = (char)uVar2 + bVar1 * -10 | 0x30;
  }
  else {
    local_40 = local_38;
    local_48 = 1;
    local_58 = "{:02}";
    local_50 = 5;
    local_60 = param_4;
    local_38[0] = uVar2;
    FUN_180024c6e(local_68);
  }
  lVar3 = param_4[1];
  uVar5 = lVar3 + 1;
  if ((ulonglong)param_4[2] < uVar5) {
    (*(code *)param_4[3])(param_4);
    lVar3 = param_4[1];
    uVar5 = lVar3 + 1;
  }
  param_4[1] = uVar5;
  *(undefined1 *)(*param_4 + lVar3) = 0x20;
  _Str = (char *)FUN_18003c922(param_3);
  sVar4 = strlen(_Str);
  FUN_180018bde(param_4,_Str,_Str + sVar4);
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_88);
}

