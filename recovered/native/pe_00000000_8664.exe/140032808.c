/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140032808 */

void FUN_140032808(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

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
  FUN_140030a1c(local_98,5,param_1 + 8);
  uVar1 = *(uint *)(param_3 + 8);
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
    FUN_14001a2bc(local_38);
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
  uVar1 = *(uint *)(param_3 + 4);
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
    FUN_14001a2bc(local_38);
  }
  FUN_140030a90(local_98);
  return;
}

