/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102390f0 */

undefined2 * __thiscall FUN_102390f0(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = FUN_10233670(*param_2,param_1 + 8);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

