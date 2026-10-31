/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400954b2 */

void FUN_1400954b2(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  FUN_140089fc1();
  *(undefined1 *)(lVar1 + 0x22a2) = 1;
  *(undefined4 *)(lVar1 + 0x22b0) = param_1;
  *(undefined4 *)(lVar1 + 0x22b8) = param_2;
  *(uint *)(lVar1 + 0x22a4) = param_3 | 0x80;
  *(undefined4 *)(lVar1 + 0x22a8) = param_4;
  return;
}

