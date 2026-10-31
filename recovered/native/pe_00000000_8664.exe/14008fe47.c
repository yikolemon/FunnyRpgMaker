/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008fe47 */

void FUN_14008fe47(undefined1 param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(uint *)(DAT_140f2a910 + 0x2030) = *(uint *)(DAT_140f2a910 + 0x2030) | 8;
  *(undefined1 *)(lVar1 + 0x2075) = param_1;
  *(uint *)(lVar1 + 0x203c) = param_2 + (uint)(param_2 == 0);
  return;
}

