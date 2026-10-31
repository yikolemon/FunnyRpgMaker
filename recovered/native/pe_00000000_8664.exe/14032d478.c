/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032d478 */

void FUN_14032d478(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_14062a630;
  *(undefined4 *)(DAT_14062a630 + 0x2238) = param_1;
  *(undefined4 *)(lVar1 + 0x223c) = 0x3dcccccd;
  return;
}

