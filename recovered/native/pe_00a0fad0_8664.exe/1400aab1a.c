/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400aab1a */

void FUN_1400aab1a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  lVar2 = param_1 + 0x20;
  lVar4 = lVar2;
  if (7 < *(ulonglong *)(param_1 + 0x38)) {
    lVar4 = *(longlong *)(param_1 + 0x20);
  }
  lVar1 = lVar4 + *(longlong *)(param_1 + 0x30) * 2;
  FUN_1400a11f3(&local_30,lVar4,lVar1);
  if (7 < *(ulonglong *)(param_1 + 0x38)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  lVar2 = local_30 - lVar2 >> 1;
  uVar5 = lVar1 - local_30 >> 1;
  uVar3 = *(longlong *)(param_1 + 0x30) - lVar2;
  if (uVar5 <= uVar3) {
    uVar3 = uVar5;
  }
  lVar4 = *(longlong *)(param_1 + 0x30) - uVar3;
  FUN_140135ff0(local_30,local_30 + uVar3 * 2,(lVar4 - lVar2) * 2 + 2);
  *(longlong *)(param_1 + 0x30) = lVar4;
  if (DAT_1401c9640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_58);
}

