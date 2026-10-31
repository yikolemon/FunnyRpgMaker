/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102772e2 */

void FUN_102772e2(char param_1,undefined4 *param_2,undefined4 param_3)

{
  uint *puVar1;
  
  if ((param_1 != '\0') && (puVar1 = param_2 + 3, (*puVar1 >> 9 & 1) != 0)) {
    FUN_1026d759(param_2,param_3);
    LOCK();
    *puVar1 = *puVar1 & 0xfffffd7f;
    UNLOCK();
    param_2[6] = 0;
    param_2[1] = 0;
    *param_2 = 0;
  }
  return;
}

