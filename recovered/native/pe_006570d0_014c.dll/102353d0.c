/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102353d0 */

void FUN_102353d0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}

