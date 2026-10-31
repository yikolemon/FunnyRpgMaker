/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004649e */

void FUN_1004649e(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  char cVar2;
  
  cVar2 = FUN_10046502(param_3);
  if (cVar2 == '\0') {
    if (param_1 != param_2) {
      uVar1 = *param_3;
      do {
        *param_1 = uVar1;
        param_1 = param_1 + 1;
      } while (param_1 != param_2);
    }
  }
  else {
    FUN_1004650e(param_1,(int)param_2 - (int)param_1 >> 1);
  }
  return;
}

