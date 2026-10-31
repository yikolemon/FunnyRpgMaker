/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014ece8 */

longlong FUN_18014ece8(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)FUN_1800ff78e(param_1 + 0x10,param_2,0xffffffff);
  if ((longlong)*piVar1 != -1) {
    return (longlong)*piVar1 * 0x28 + *(longlong *)(param_1 + 8);
  }
  *piVar1 = *(int *)(param_1 + 0x20);
  lVar2 = FUN_18015980e(param_1);
  return lVar2;
}

