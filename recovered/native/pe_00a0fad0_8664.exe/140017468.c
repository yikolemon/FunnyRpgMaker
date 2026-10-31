/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140017468 */

undefined8 FUN_140017468(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(longlong *)(lVar1 + 0x98) != 0);
  }
  return 0;
}

