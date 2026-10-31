/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140031f1a */

void FUN_140031f1a(longlong param_1,undefined8 param_2,uint *param_3,longlong *param_4)

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
  FUN_140030a1c(local_60,2,param_1 + 8);
  uVar1 = *param_3;
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
    FUN_14001a2bc(local_30);
  }
  FUN_140030a90(local_60);
  return;
}

