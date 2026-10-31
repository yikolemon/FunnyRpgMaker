/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140096567 */

void FUN_140096567(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(undefined8 *)(DAT_140f2a910 + 0x2a68) = param_1;
  *(undefined8 *)(lVar1 + 0x2a70) = param_2;
  return;
}

