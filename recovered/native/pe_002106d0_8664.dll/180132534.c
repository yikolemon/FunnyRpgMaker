/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180132534 */

longlong FUN_180132534(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)FUN_1800ff78e(param_1 + 0x10,param_2,0xffffffff);
  if ((longlong)*piVar1 != -1) {
    return (longlong)*piVar1 * 0x10 + *(longlong *)(param_1 + 8);
  }
  *piVar1 = *(int *)(param_1 + 0x20);
  lVar2 = FUN_1801325c2(param_1);
  return lVar2;
}

