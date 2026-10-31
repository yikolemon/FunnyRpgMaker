/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400141ba */

undefined1 * FUN_1400141ba(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = FUN_14018a400(*param_2,param_1 + 0x10);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

