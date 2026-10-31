/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180022f30 */

void FUN_180022f30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    uVar1 = *param_3;
    do {
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}

