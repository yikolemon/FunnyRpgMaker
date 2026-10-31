/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180093ac6 */

undefined2 * FUN_180093ac6(longlong param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = FUN_180245020(*param_2,param_1 + 0x10);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

