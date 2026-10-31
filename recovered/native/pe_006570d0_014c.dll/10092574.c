/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10092574 */

undefined2 * __thiscall
FUN_10092574(int *param_1,short param_2,undefined2 *param_3,undefined2 *param_4)

{
  char cVar1;
  
  if (param_3 != param_4) {
    do {
      cVar1 = (**(code **)(*param_1 + 0x10))((int)param_2,*param_3);
      if (cVar1 == '\0') {
        return param_3;
      }
      param_3 = param_3 + 1;
    } while (param_3 != param_4);
  }
  return param_3;
}

