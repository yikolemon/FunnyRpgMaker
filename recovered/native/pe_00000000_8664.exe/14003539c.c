/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003539c */

void FUN_14003539c(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  longlong *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  int *local_38;
  int local_30 [4];
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  iVar4 = *(int *)(param_3 + 0x14) % 100;
  if (iVar4 < 0) {
    local_38 = local_30;
    local_40 = 1;
    local_50 = "{:02}";
    local_48 = 5;
    local_58 = param_4;
    local_30[0] = iVar4;
    FUN_14001a2bc(local_60);
  }
  else {
    bVar1 = (byte)((iVar4 * 0xcd & 0xffffU) >> 0xb);
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
    *(byte *)(*param_4 + lVar2) = (char)iVar4 + bVar1 * -10 | 0x30;
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_88);
}

