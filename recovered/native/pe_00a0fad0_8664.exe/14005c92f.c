/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005c92f */

void FUN_14005c92f(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  char cVar2;
  
  cVar2 = FUN_14005c99b(param_3);
  if (cVar2 != '\0') {
    FUN_14005c9a3(param_1,(longlong)param_2 - (longlong)param_1 >> 1);
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

