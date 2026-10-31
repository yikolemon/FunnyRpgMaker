/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a4886 */

void FUN_1400a4886(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(undefined4 *)(DAT_140f2a910 + 0x1fa4) = param_1;
  *(undefined2 *)(lVar1 + 0x2b01) = 2;
  return;
}

