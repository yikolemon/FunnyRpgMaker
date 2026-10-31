/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009e1f6 */

void FUN_18009e1f6(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar4 = lVar2 - lVar1 >> 3;
  lVar3 = param_2 + lVar4 * 0x5555555555555555;
  if (param_2 < (ulonglong)(lVar4 * -0x5555555555555555)) {
    lVar1 = lVar1 + param_2 * 0x18;
    for (lVar3 = lVar1; lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
      FUN_18006db58(lVar3);
    }
    param_1[1] = lVar1;
  }
  else if (lVar3 != 0) {
    if ((ulonglong)((param_1[2] - lVar1 >> 3) * -0x5555555555555555) < param_2) {
      FUN_18009e2a0(param_1);
      return;
    }
    lVar3 = lVar3 * 0x18;
    FUN_1802a89a0(lVar2,0,lVar3);
    param_1[1] = lVar2 + lVar3;
  }
  return;
}

