/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001a408 */

void FUN_1001a408(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = FUN_1001a44b(param_3);
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
    FUN_1001a456(param_1,(int)param_2 - (int)param_1 >> 2);
  }
  return;
}

