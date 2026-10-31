/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800195aa */

void FUN_1800195aa(longlong *param_1,ulonglong param_2)

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
    param_1[1] = lVar1 + param_2 * 0x18;
  }
  else if (lVar3 != 0) {
    if ((ulonglong)((param_1[2] - lVar1 >> 3) * -0x5555555555555555) < param_2) {
      FUN_180019634(param_1);
      return;
    }
    lVar3 = lVar3 * 0x18;
    FUN_1802a89a0(lVar2,0,lVar3);
    param_1[1] = lVar2 + lVar3;
  }
  return;
}

