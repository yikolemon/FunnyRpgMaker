/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140328020 */

void FUN_140328020(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_14062a630;
  *(uint *)(DAT_14062a630 + 0x2030) = *(uint *)(DAT_14062a630 + 0x2030) | 0x40;
  *(undefined4 *)(lVar1 + 0x2098) = param_1;
  return;
}

