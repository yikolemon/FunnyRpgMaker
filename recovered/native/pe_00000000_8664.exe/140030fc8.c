/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140030fc8 */

void FUN_140030fc8(longlong param_1,undefined8 param_2,uint *param_3,longlong *param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  size_t sVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 local_a8 [40];
  uint local_80 [4];
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  uint *local_58;
  longlong local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_140030a1c(local_a8,0x18,param_1 + 8);
  pcVar3 = (&PTR_DAT_1401c8188)[(int)param_3[6]];
  sVar5 = strlen(pcVar3);
  FUN_140019fc2(param_4,pcVar3,pcVar3 + sVar5);
  lVar6 = param_4[1];
  uVar9 = lVar6 + 1;
  if ((ulonglong)param_4[2] < uVar9) {
    (*(code *)param_4[3])(param_4);
    lVar6 = param_4[1];
    uVar9 = lVar6 + 1;
  }
  param_4[1] = uVar9;
  *(undefined1 *)(*param_4 + lVar6) = 0x20;
  pcVar3 = (&PTR_DAT_1401c81f8)[(int)param_3[4]];
  sVar5 = strlen(pcVar3);
  FUN_140019fc2(param_4,pcVar3,pcVar3 + sVar5);
  lVar6 = param_4[1];
  uVar9 = lVar6 + 1;
  if ((ulonglong)param_4[2] < uVar9) {
    (*(code *)param_4[3])(param_4);
    lVar6 = param_4[1];
    uVar9 = lVar6 + 1;
  }
  param_4[1] = uVar9;
  *(undefined1 *)(*param_4 + lVar6) = 0x20;
  uVar2 = param_3[3];
  uVar4 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar4 = uVar2;
  }
  lVar6 = FUN_14001a250(&local_60,uVar4,0x15);
  local_48 = lVar6;
  if ((int)uVar2 < 0) {
    local_48 = lVar6 + -1;
    *(undefined1 *)(lVar6 + -1) = 0x2d;
  }
  FUN_140019fc2(param_4,local_48);
  lVar6 = param_4[1];
  uVar9 = lVar6 + 1;
  if ((ulonglong)param_4[2] < uVar9) {
    (*(code *)param_4[3])(param_4);
    lVar6 = param_4[1];
    uVar9 = lVar6 + 1;
  }
  param_4[1] = uVar9;
  *(undefined1 *)(*param_4 + lVar6) = 0x20;
  uVar2 = param_3[2];
  if (uVar2 < 100) {
    lVar6 = param_4[1];
    uVar9 = lVar6 + 1;
    if ((ulonglong)param_4[2] < uVar9) {
      (*(code *)param_4[3])(param_4);
      lVar6 = param_4[1];
      uVar9 = lVar6 + 1;
    }
    bVar7 = (byte)((uVar2 * 0xcd & 0xffff) >> 0xb);
    param_4[1] = uVar9;
    *(byte *)(*param_4 + lVar6) = bVar7 | 0x30;
    lVar6 = param_4[1];
    uVar9 = lVar6 + 1;
    if ((ulonglong)param_4[2] < uVar9) {
      (*(code *)param_4[3])(param_4);
      lVar6 = param_4[1];
      uVar9 = lVar6 + 1;
    }
    param_4[1] = uVar9;
    *(byte *)(*param_4 + lVar6) = (char)uVar2 + bVar7 * -10 | 0x30;
  }
  else {
    local_58 = local_80;
    local_60 = 1;
    local_70 = "{:02}";
    local_68 = 5;
    local_80[0] = uVar2;
    local_40 = param_4;
    FUN_14001a2bc(local_38);
  }
  lVar6 = param_4[1];
  uVar9 = lVar6 + 1;
  if ((ulonglong)param_4[2] < uVar9) {
    (*(code *)param_4[3])(param_4);
    lVar6 = param_4[1];
    uVar9 = lVar6 + 1;
  }
  param_4[1] = uVar9;
  *(undefined1 *)(*param_4 + lVar6) = 0x3a;
  uVar2 = param_3[1];
  if (uVar2 < 100) {
    lVar6 = param_4[1];
    uVar9 = lVar6 + 1;
    if ((ulonglong)param_4[2] < uVar9) {
      (*(code *)param_4[3])(param_4);
      lVar6 = param_4[1];
      uVar9 = lVar6 + 1;
    }
    bVar7 = (byte)((uVar2 * 0xcd & 0xffff) >> 0xb);
    param_4[1] = uVar9;
    *(byte *)(*param_4 + lVar6) = bVar7 | 0x30;
    lVar6 = param_4[1];
    uVar9 = lVar6 + 1;
    if ((ulonglong)param_4[2] < uVar9) {
      (*(code *)param_4[3])(param_4);
      lVar6 = param_4[1];
      uVar9 = lVar6 + 1;
    }
    param_4[1] = uVar9;
    *(byte *)(*param_4 + lVar6) = (char)uVar2 + bVar7 * -10 | 0x30;
  }
  else {
    local_58 = local_80;
    local_60 = 1;
    local_70 = "{:02}";
    local_68 = 5;
    local_80[0] = uVar2;
    local_40 = param_4;
    FUN_14001a2bc(local_38);
  }
  lVar6 = param_4[1];
  uVar9 = lVar6 + 1;
  if ((ulonglong)param_4[2] < uVar9) {
    (*(code *)param_4[3])(param_4);
    lVar6 = param_4[1];
    uVar9 = lVar6 + 1;
  }
  param_4[1] = uVar9;
  *(undefined1 *)(*param_4 + lVar6) = 0x3a;
  uVar2 = *param_3;
  if (uVar2 < 100) {
    lVar6 = param_4[1];
    uVar9 = lVar6 + 1;
    if ((ulonglong)param_4[2] < uVar9) {
      (*(code *)param_4[3])(param_4);
      lVar6 = param_4[1];
      uVar9 = lVar6 + 1;
    }
    bVar7 = (byte)((uVar2 * 0xcd & 0xffff) >> 0xb);
    param_4[1] = uVar9;
    *(byte *)(*param_4 + lVar6) = bVar7 | 0x30;
    lVar6 = param_4[1];
    uVar9 = lVar6 + 1;
    if ((ulonglong)param_4[2] < uVar9) {
      (*(code *)param_4[3])(param_4);
      lVar6 = param_4[1];
      uVar9 = lVar6 + 1;
    }
    param_4[1] = uVar9;
    *(byte *)(*param_4 + lVar6) = (char)uVar2 + bVar7 * -10 | 0x30;
  }
  else {
    local_58 = local_80;
    local_60 = 1;
    local_70 = "{:02}";
    local_68 = 5;
    local_80[0] = uVar2;
    local_40 = param_4;
    FUN_14001a2bc(local_38);
  }
  lVar6 = param_4[1];
  uVar9 = lVar6 + 1;
  if ((ulonglong)param_4[2] < uVar9) {
    (*(code *)param_4[3])(param_4);
    lVar6 = param_4[1];
    uVar9 = lVar6 + 1;
  }
  param_4[1] = uVar9;
  *(undefined1 *)(*param_4 + lVar6) = 0x20;
  uVar2 = param_3[5];
  iVar1 = uVar2 + 0x76c;
  iVar8 = -iVar1;
  if (iVar8 < 0) {
    iVar8 = iVar1;
  }
  lVar6 = FUN_14001a250(&local_60,iVar8,0x15);
  local_48 = lVar6;
  if ((int)uVar2 < -0x76c) {
    local_48 = lVar6 + -1;
    *(undefined1 *)(lVar6 + -1) = 0x2d;
  }
  FUN_140019fc2(param_4,local_48);
  FUN_140030a90(local_a8);
  return;
}

