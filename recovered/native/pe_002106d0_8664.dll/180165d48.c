/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180165d48 */

longlong FUN_180165d48(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)FUN_1800ff78e(param_1 + 0x10,param_2,0xffffffff);
  if ((longlong)*piVar1 != -1) {
    return (longlong)*piVar1 * 0x250 + *(longlong *)(param_1 + 8);
  }
  *piVar1 = *(int *)(param_1 + 0x20);
  lVar2 = FUN_18016f6aa(param_1);
  return lVar2;
}

