/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003f32e */

void FUN_18003f32e(undefined8 param_1,undefined8 param_2,uint *param_3,longlong *param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  byte bVar5;
  size_t sVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  longlong *local_70;
  char *local_68;
  undefined8 local_60;
  uint local_58 [4];
  undefined8 local_48;
  uint *local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_98;
  pcVar3 = (&PTR_DAT_1802b08f8)[(int)param_3[6]];
  sVar6 = strlen(pcVar3);
  FUN_180018bde(param_4,pcVar3,pcVar3 + sVar6);
  lVar7 = param_4[1];
  uVar9 = lVar7 + 1;
  if ((ulonglong)param_4[2] < uVar9) {
    (*(code *)param_4[3])(param_4);
    lVar7 = param_4[1];
    uVar9 = lVar7 + 1;
  }
  param_4[1] = uVar9;
  *(undefined1 *)(*param_4 + lVar7) = 0x20;
  pcVar3 = (&PTR_DAT_1802b0968)[(int)param_3[4]];
  sVar6 = strlen(pcVar3);
  FUN_180018bde(param_4,pcVar3,pcVar3 + sVar6);
  lVar7 = param_4[1];
  uVar9 = lVar7 + 1;
  if ((ulonglong)param_4[2] < uVar9) {
    (*(code *)param_4[3])(param_4);
    lVar7 = param_4[1];
    uVar9 = lVar7 + 1;
  }
  param_4[1] = uVar9;
  *(undefined1 *)(*param_4 + lVar7) = 0x20;
  uVar2 = param_3[3];
  uVar4 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar4 = uVar2;
  }
  local_30 = FUN_180024c02(&local_48,uVar4,0x15);
  if ((int)uVar2 < 0) {
    *(undefined1 *)(local_30 + -1) = 0x2d;
    local_30 = local_30 + -1;
  }
  FUN_180018bde(param_4,local_30);
  lVar7 = param_4[1];
  uVar9 = lVar7 + 1;
  if ((ulonglong)param_4[2] < uVar9) {
    (*(code *)param_4[3])(param_4);
    lVar7 = param_4[1];
    uVar9 = lVar7 + 1;
  }
  param_4[1] = uVar9;
  *(undefined1 *)(*param_4 + lVar7) = 0x20;
  uVar2 = param_3[2];
  if (uVar2 < 100) {
    bVar5 = (byte)((uVar2 * 0xcd & 0xffff) >> 0xb);
    lVar7 = param_4[1];
    uVar9 = lVar7 + 1;
    if ((ulonglong)param_4[2] < uVar9) {
      (*(code *)param_4[3])(param_4);
      lVar7 = param_4[1];
      uVar9 = lVar7 + 1;
    }
    param_4[1] = uVar9;
    *(byte *)(*param_4 + lVar7) = bVar5 | 0x30;
    lVar7 = param_4[1];
    uVar9 = lVar7 + 1;
    if ((ulonglong)param_4[2] < uVar9) {
      (*(code *)param_4[3])(param_4);
      lVar7 = param_4[1];
      uVar9 = lVar7 + 1;
    }
    param_4[1] = uVar9;
    *(byte *)(*param_4 + lVar7) = (char)uVar2 + bVar5 * -10 | 0x30;
  }
  else {
    local_40 = local_58;
    local_48 = 1;
    local_68 = "{:02}";
    local_60 = 5;
    local_70 = param_4;
    local_58[0] = uVar2;
    FUN_180024c6e(local_78);
  }
  lVar7 = param_4[1];
  uVar9 = lVar7 + 1;
  if ((ulonglong)param_4[2] < uVar9) {
    (*(code *)param_4[3])(param_4);
    lVar7 = param_4[1];
    uVar9 = lVar7 + 1;
  }
  param_4[1] = uVar9;
  *(undefined1 *)(*param_4 + lVar7) = 0x3a;
  uVar2 = param_3[1];
  if (uVar2 < 100) {
    bVar5 = (byte)((uVar2 * 0xcd & 0xffff) >> 0xb);
    lVar7 = param_4[1];
    uVar9 = lVar7 + 1;
    if ((ulonglong)param_4[2] < uVar9) {
      (*(code *)param_4[3])(param_4);
      lVar7 = param_4[1];
      uVar9 = lVar7 + 1;
    }
    param_4[1] = uVar9;
    *(byte *)(*param_4 + lVar7) = bVar5 | 0x30;
    lVar7 = param_4[1];
    uVar9 = lVar7 + 1;
    if ((ulonglong)param_4[2] < uVar9) {
      (*(code *)param_4[3])(param_4);
      lVar7 = param_4[1];
      uVar9 = lVar7 + 1;
    }
    param_4[1] = uVar9;
    *(byte *)(*param_4 + lVar7) = (char)uVar2 + bVar5 * -10 | 0x30;
  }
  else {
    local_40 = local_58;
    local_48 = 1;
    local_68 = "{:02}";
    local_60 = 5;
    local_70 = param_4;
    local_58[0] = uVar2;
    FUN_180024c6e(local_78);
  }
  lVar7 = param_4[1];
  uVar9 = lVar7 + 1;
  if ((ulonglong)param_4[2] < uVar9) {
    (*(code *)param_4[3])(param_4);
    lVar7 = param_4[1];
    uVar9 = lVar7 + 1;
  }
  param_4[1] = uVar9;
  *(undefined1 *)(*param_4 + lVar7) = 0x3a;
  uVar2 = *param_3;
  if (uVar2 < 100) {
    bVar5 = (byte)((uVar2 * 0xcd & 0xffff) >> 0xb);
    lVar7 = param_4[1];
    uVar9 = lVar7 + 1;
    if ((ulonglong)param_4[2] < uVar9) {
      (*(code *)param_4[3])(param_4);
      lVar7 = param_4[1];
      uVar9 = lVar7 + 1;
    }
    param_4[1] = uVar9;
    *(byte *)(*param_4 + lVar7) = bVar5 | 0x30;
    lVar7 = param_4[1];
    uVar9 = lVar7 + 1;
    if ((ulonglong)param_4[2] < uVar9) {
      (*(code *)param_4[3])(param_4);
      lVar7 = param_4[1];
      uVar9 = lVar7 + 1;
    }
    param_4[1] = uVar9;
    *(byte *)(*param_4 + lVar7) = (char)uVar2 + bVar5 * -10 | 0x30;
  }
  else {
    local_40 = local_58;
    local_48 = 1;
    local_68 = "{:02}";
    local_60 = 5;
    local_70 = param_4;
    local_58[0] = uVar2;
    FUN_180024c6e(local_78);
  }
  lVar7 = param_4[1];
  uVar9 = lVar7 + 1;
  if ((ulonglong)param_4[2] < uVar9) {
    (*(code *)param_4[3])(param_4);
    lVar7 = param_4[1];
    uVar9 = lVar7 + 1;
  }
  param_4[1] = uVar9;
  *(undefined1 *)(*param_4 + lVar7) = 0x20;
  uVar2 = param_3[5];
  iVar1 = uVar2 + 0x76c;
  iVar8 = -iVar1;
  if (iVar8 < 0) {
    iVar8 = iVar1;
  }
  local_30 = FUN_180024c02(&local_48,iVar8,0x15);
  if ((int)uVar2 < -0x76c) {
    *(undefined1 *)(local_30 + -1) = 0x2d;
    local_30 = local_30 + -1;
  }
  FUN_180018bde(param_4,local_30);
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_98);
}

