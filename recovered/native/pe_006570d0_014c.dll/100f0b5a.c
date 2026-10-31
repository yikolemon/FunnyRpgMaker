/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f0b5a */

undefined8 * __thiscall FUN_100f0b5a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    FUN_100f1cbe();
    if (*(int *)((int)param_1 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_102716bc();
    }
    uVar1 = *param_2;
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
    *param_1 = uVar1;
    FUN_100f1cdc(param_2 + 1);
  }
  return param_1;
}

