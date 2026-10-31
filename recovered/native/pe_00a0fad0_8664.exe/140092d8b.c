/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140092d8b */

void FUN_140092d8b(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_1400857c2(param_3);
  if (cVar2 != '\0') {
    FUN_1400857ca(param_1,(longlong)param_2 - (longlong)param_1 >> 3);
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

