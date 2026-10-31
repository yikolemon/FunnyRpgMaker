/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003bdb8 */

void FUN_18003bdb8(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_60 [40];
  longlong *local_38;
  undefined1 local_30 [8];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_18003ae98(local_60,2,param_1 + 8);
  uVar4 = *(int *)(param_3 + 0x10) + 1;
  if (uVar4 < 100) {
    lVar1 = param_4[1];
    uVar3 = lVar1 + 1;
    if ((ulonglong)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4);
      lVar1 = param_4[1];
      uVar3 = lVar1 + 1;
    }
    bVar2 = (byte)((uVar4 * 0xcd & 0xffff) >> 0xb);
    param_4[1] = uVar3;
    *(byte *)(*param_4 + lVar1) = bVar2 | 0x30;
    lVar1 = param_4[1];
    uVar3 = lVar1 + 1;
    if ((ulonglong)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4);
      lVar1 = param_4[1];
      uVar3 = lVar1 + 1;
    }
    param_4[1] = uVar3;
    *(byte *)(*param_4 + lVar1) = (char)uVar4 + bVar2 * -10 | 0x30;
  }
  else {
    local_38 = param_4;
    FUN_180024c6e(local_30);
  }
  FUN_18003af0c(local_60);
  return;
}

