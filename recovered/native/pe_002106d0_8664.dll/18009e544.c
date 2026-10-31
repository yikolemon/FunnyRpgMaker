/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009e544 */

void FUN_18009e544(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    FUN_18006dd06(param_1,param_2);
    puVar1 = (undefined8 *)*param_1;
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 7;
      puVar1 = puVar1 + 4;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    param_1[1] = puVar1;
  }
  return;
}

