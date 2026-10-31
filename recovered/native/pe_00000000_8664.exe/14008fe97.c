/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008fe97 */

void FUN_14008fe97(undefined4 param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(uint *)(DAT_140f2a910 + 0x2030) = *(uint *)(DAT_140f2a910 + 0x2030) | 0x1000;
  *(uint *)(lVar1 + 0x2040) = param_2 + (uint)(param_2 == 0);
  *(undefined4 *)(lVar1 + 0x20a0) = param_1;
  return;
}

