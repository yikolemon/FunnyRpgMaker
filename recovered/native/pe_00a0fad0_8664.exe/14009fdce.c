/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009fdce */

void FUN_14009fdce(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14000a2c6();
    }
    FUN_140019b84(param_1,param_2);
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

