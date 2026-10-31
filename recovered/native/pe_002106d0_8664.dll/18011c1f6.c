/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011c1f6 */

void FUN_18011c1f6(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  FUN_180110ca9();
  *(undefined1 *)(lVar1 + 0x22a2) = 1;
  *(undefined4 *)(lVar1 + 0x22b0) = param_1;
  *(undefined4 *)(lVar1 + 0x22b8) = param_2;
  *(uint *)(lVar1 + 0x22a4) = param_3 | 0x80;
  *(undefined4 *)(lVar1 + 0x22a8) = param_4;
  return;
}

