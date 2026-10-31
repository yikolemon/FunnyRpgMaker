/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140257d05 */

void FUN_140257d05(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  char cVar2;
  
  cVar2 = FUN_140257d71(param_3);
  if (cVar2 != '\0') {
    FUN_140257d79(param_1,(longlong)param_2 - (longlong)param_1 >> 1);
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

