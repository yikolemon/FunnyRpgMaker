/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180046835 */

void FUN_180046835(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  char cVar2;
  
  cVar2 = FUN_1800468a1(param_3);
  if (cVar2 != '\0') {
    FUN_1800468a9(param_1,(longlong)param_2 - (longlong)param_1 >> 1);
    return;
  }
  if (param_1 != param_2) {
    uVar1 = *param_3;
    do {
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}

