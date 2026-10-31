/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022b66c */

void FUN_14022b66c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_14022b6bf(param_3);
  if (cVar2 != '\0') {
    FUN_14022b6c7(param_1,(longlong)param_2 - (longlong)param_1 >> 3);
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

