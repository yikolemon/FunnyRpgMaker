/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140095264 */

void FUN_140095264(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(undefined4 *)(DAT_140f2a910 + 0x2238) = param_1;
  *(undefined4 *)(lVar1 + 0x223c) = 0x3dcccccd;
  return;
}

