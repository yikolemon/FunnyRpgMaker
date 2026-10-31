/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180075156 */

longlong FUN_180075156(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    uVar2 = param_3;
    if ((**(longlong **)(param_1 + 0x40) != 0) &&
       (uVar3 = (ulonglong)**(int **)(param_1 + 0x58), 0 < (longlong)param_3 && 0 < (longlong)uVar3)
       ) {
      if (param_3 < uVar3) {
        uVar3 = param_3;
      }
      FUN_1802a82f0(**(longlong **)(param_1 + 0x40),param_2,uVar3);
      param_2 = param_2 + uVar3;
      **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) - (int)uVar3;
      **(longlong **)(param_1 + 0x40) = **(longlong **)(param_1 + 0x40) + uVar3;
      uVar2 = param_3 - uVar3;
    }
    if ((0 < (longlong)uVar2) && (*(longlong *)(param_1 + 0x80) != 0)) {
      lVar1 = FUN_180286a64(param_2,1,uVar2);
      uVar2 = uVar2 - lVar1;
    }
    return param_3 - uVar2;
  }
  lVar1 = FUN_1800755e6(param_1,param_2,param_3);
  return lVar1;
}

