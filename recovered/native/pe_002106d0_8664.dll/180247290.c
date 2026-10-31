/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180247290 */

void FUN_180247290(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}

