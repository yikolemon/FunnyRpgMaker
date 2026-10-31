/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001a0f9 */

void FUN_14001a0f9(uint param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [21];
  undefined1 local_2b [3];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (param_1 < 1000) {
    uVar4 = (uint)(((ulonglong)param_1 & 0xffff) >> 2) / 0x19;
    iVar5 = param_1 + uVar4 * -100;
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar2 = param_2[1];
      uVar3 = lVar2 + 1;
    }
    param_2[1] = uVar3;
    *(byte *)(*param_2 + lVar2) = (byte)uVar4 | 0x30;
    bVar1 = (byte)((iVar5 * 0xcd & 0xffffU) >> 0xb);
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar2 = param_2[1];
      uVar3 = lVar2 + 1;
    }
    param_2[1] = uVar3;
    *(byte *)(*param_2 + lVar2) = bVar1 | 0x30;
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar2 = param_2[1];
      uVar3 = lVar2 + 1;
    }
    param_2[1] = uVar3;
    *(byte *)(*param_2 + lVar2) = (char)iVar5 + bVar1 * -10 | 0x30;
  }
  else {
    local_28 = FUN_14001a250(local_40,(ulonglong)param_1,0x15);
    FUN_140019fc2(param_2,local_28,local_2b);
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_68);
}

