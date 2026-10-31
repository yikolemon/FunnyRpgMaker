/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000b6ec */

undefined1 * FUN_14000b6ec(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = FUN_1400da850(*param_2,param_1 + 0x10);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

