/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d4390 */

undefined8 * FUN_1400d4390(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    FUN_1400065bc();
    if ((ulonglong)param_2[3] < 0x10) {
      FUN_140135ff0(param_1,param_2,param_2[2] + 1);
    }
    else {
      *param_1 = *param_2;
    }
    param_1[3] = param_2[3];
    param_1[2] = param_2[2];
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  return param_1;
}

