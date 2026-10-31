/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140035aea */

void FUN_140035aea(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  longlong *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint *local_38;
  uint local_30 [4];
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  uVar2 = FUN_140031de5(param_3);
  if (uVar2 < 100) {
    bVar1 = (byte)((uVar2 * 0xcd & 0xffff) >> 0xb);
    lVar3 = param_4[1];
    uVar4 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar4 = lVar3 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar3) = bVar1 | 0x30;
    lVar3 = param_4[1];
    uVar4 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar4 = lVar3 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar3) = (char)uVar2 + bVar1 * -10 | 0x30;
  }
  else {
    local_38 = local_30;
    local_40 = 1;
    local_50 = "{:02}";
    local_48 = 5;
    local_58 = param_4;
    local_30[0] = uVar2;
    FUN_14001a2bc(local_60);
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_88);
}

