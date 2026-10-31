/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003c93a */

void FUN_18003c93a(longlong param_1,undefined8 param_2,uint *param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  char *_Str;
  size_t sVar3;
  byte bVar4;
  ulonglong uVar5;
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
  FUN_18003ae98(local_98,0xb,param_1 + 8);
  uVar1 = FUN_18003c261(param_3);
  if (uVar1 < 100) {
    lVar2 = param_4[1];
    uVar5 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar5 = lVar2 + 1;
    }
    bVar4 = (byte)((uVar1 * 0xcd & 0xffff) >> 0xb);
    param_4[1] = uVar5;
    *(byte *)(*param_4 + lVar2) = bVar4 | 0x30;
    lVar2 = param_4[1];
    uVar5 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar5 = lVar2 + 1;
    }
    param_4[1] = uVar5;
    *(byte *)(*param_4 + lVar2) = (char)uVar1 + bVar4 * -10 | 0x30;
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
  uVar5 = lVar2 + 1;
  if ((ulonglong)param_4[2] < uVar5) {
    (*(code *)param_4[3])(param_4);
    lVar2 = param_4[1];
    uVar5 = lVar2 + 1;
  }
  param_4[1] = uVar5;
  *(undefined1 *)(*param_4 + lVar2) = 0x3a;
  uVar1 = param_3[1];
  if (uVar1 < 100) {
    lVar2 = param_4[1];
    uVar5 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar5 = lVar2 + 1;
    }
    bVar4 = (byte)((uVar1 * 0xcd & 0xffff) >> 0xb);
    param_4[1] = uVar5;
    *(byte *)(*param_4 + lVar2) = bVar4 | 0x30;
    lVar2 = param_4[1];
    uVar5 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar5 = lVar2 + 1;
    }
    param_4[1] = uVar5;
    *(byte *)(*param_4 + lVar2) = (char)uVar1 + bVar4 * -10 | 0x30;
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
  uVar5 = lVar2 + 1;
  if ((ulonglong)param_4[2] < uVar5) {
    (*(code *)param_4[3])(param_4);
    lVar2 = param_4[1];
    uVar5 = lVar2 + 1;
  }
  param_4[1] = uVar5;
  *(undefined1 *)(*param_4 + lVar2) = 0x3a;
  uVar1 = *param_3;
  if (uVar1 < 100) {
    lVar2 = param_4[1];
    uVar5 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar5 = lVar2 + 1;
    }
    bVar4 = (byte)((uVar1 * 0xcd & 0xffff) >> 0xb);
    param_4[1] = uVar5;
    *(byte *)(*param_4 + lVar2) = bVar4 | 0x30;
    lVar2 = param_4[1];
    uVar5 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar5 = lVar2 + 1;
    }
    param_4[1] = uVar5;
    *(byte *)(*param_4 + lVar2) = (char)uVar1 + bVar4 * -10 | 0x30;
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
  uVar5 = lVar2 + 1;
  if ((ulonglong)param_4[2] < uVar5) {
    (*(code *)param_4[3])(param_4);
    lVar2 = param_4[1];
    uVar5 = lVar2 + 1;
  }
  param_4[1] = uVar5;
  *(undefined1 *)(*param_4 + lVar2) = 0x20;
  _Str = (char *)FUN_18003c922(param_3);
  sVar3 = strlen(_Str);
  FUN_180018bde(param_4,_Str,_Str + sVar3);
  FUN_18003af0c(local_98);
  return;
}

