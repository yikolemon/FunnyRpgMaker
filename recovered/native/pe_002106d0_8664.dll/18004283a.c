/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004283a */

void FUN_18004283a(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    FUN_1800428f6();
    puVar3 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)*param_4;
    for (param_3 = (undefined8 *)*param_3; param_3 != puVar2; param_3 = param_3 + 2) {
      *puVar3 = 0;
      puVar3[1] = 0;
      if (param_3[1] != 0) {
        LOCK();
        piVar1 = (int *)(param_3[1] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *puVar3 = *param_3;
      puVar3[1] = param_3[1];
      puVar3 = puVar3 + 2;
    }
    param_1[1] = puVar3;
  }
  return;
}

