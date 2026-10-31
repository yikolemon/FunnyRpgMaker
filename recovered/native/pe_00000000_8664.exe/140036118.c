/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140036118 */

void FUN_140036118(undefined8 param_1,undefined8 param_2,uint *param_3,longlong *param_4)

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
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  uVar2 = FUN_140031de5(param_3);
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
    FUN_14001a2bc(local_68);
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
    FUN_14001a2bc(local_68);
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
    FUN_14001a2bc(local_68);
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
  _Str = (char *)FUN_1400324a6(param_3);
  sVar4 = strlen(_Str);
  FUN_140019fc2(param_4,_Str,_Str + sVar4);
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_88);
}

