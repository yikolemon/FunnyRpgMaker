/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003bee2 */

void FUN_18003bee2(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined1 local_60 [40];
  longlong *local_38;
  undefined1 local_30 [8];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_18003ae98(local_60,2,param_1 + 8);
  uVar1 = *(uint *)(param_3 + 0xc);
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
    local_38 = param_4;
    FUN_180024c6e(local_30);
  }
  FUN_18003af0c(local_60);
  return;
}

