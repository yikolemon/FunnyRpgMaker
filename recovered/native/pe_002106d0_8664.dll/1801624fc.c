/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801624fc */

undefined8 FUN_1801624fc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_3 + 2;
  if (*puVar1 <= (param_2[2] ^ 0x7fffffffffffffff)) {
    puVar2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar2 = (undefined8 *)*param_2;
    }
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    FUN_180015c90(param_1,param_2,param_2,puVar2,param_2[2],param_3,*puVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800013a5();
}

