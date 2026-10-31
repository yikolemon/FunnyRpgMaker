/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011bfa8 */

void FUN_18011bfa8(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *(undefined4 *)(DAT_180419160 + 0x2238) = param_1;
  *(undefined4 *)(lVar1 + 0x223c) = 0x3dcccccd;
  return;
}

