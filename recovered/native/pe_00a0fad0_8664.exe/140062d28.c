/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140062d28 */

undefined2 * FUN_140062d28(longlong param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = FUN_1400ddbb0(*param_2,param_1 + 0x10);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

