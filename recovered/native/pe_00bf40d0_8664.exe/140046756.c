/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140046756 */

undefined8 FUN_140046756(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(char **)(param_1 + 0x18) != (char *)0x0) {
    uVar1 = FUN_140046d77(*(char **)(param_1 + 0x18));
    if ((char)uVar1 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
    }
  }
  uVar1 = FUN_140046dbb(param_1);
  return uVar1;
}

