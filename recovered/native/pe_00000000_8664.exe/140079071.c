/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140079071 */

void FUN_140079071(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(uint *)(DAT_140f2a910 + 0x1fa8) = *(uint *)(DAT_140f2a910 + 0x1fa8) | 1;
  *(undefined4 *)(lVar1 + 0x1fc0) = param_1;
  return;
}

