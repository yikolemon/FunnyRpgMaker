/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140063fb7 */

void FUN_140063fb7(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = *param_1;
    FUN_14001c53d(lVar1,param_1[0xf]);
    param_1[0xf] = 0;
    FUN_14001c53d(lVar1,param_1[0x11]);
    param_1[0x11] = 0;
  }
  return;
}

