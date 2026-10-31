/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008fe68 */

void FUN_14008fe68(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(uint *)(DAT_140f2a910 + 0x2030) = *(uint *)(DAT_140f2a910 + 0x2030) | 0x40;
  *(undefined4 *)(lVar1 + 0x2098) = param_1;
  return;
}

