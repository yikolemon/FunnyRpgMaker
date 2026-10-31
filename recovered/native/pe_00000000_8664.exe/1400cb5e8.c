/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cb5e8 */

longlong FUN_1400cb5e8(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)FUN_140078a4a(param_1 + 0x10,param_2,0xffffffff);
  if ((longlong)*piVar1 != -1) {
    return (longlong)*piVar1 * 0xb0 + *(longlong *)(param_1 + 8);
  }
  *piVar1 = *(int *)(param_1 + 0x20);
  lVar2 = FUN_1400d2828(param_1);
  return lVar2;
}

