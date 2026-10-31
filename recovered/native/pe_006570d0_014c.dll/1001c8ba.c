/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001c8ba */

undefined1 * __thiscall FUN_1001c8ba(int param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = FUN_1022cce0(*param_2,param_1 + 8);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

