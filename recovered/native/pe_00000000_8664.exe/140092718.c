/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140092718 */

void FUN_140092718(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(uint *)(DAT_140f2a910 + 0x1fa8) = *(uint *)(DAT_140f2a910 + 0x1fa8) | 4;
  *(undefined4 *)(lVar1 + 0x1fc4) = param_1;
  *(undefined4 *)(lVar1 + 0x1fc8) = param_2;
  return;
}

