/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400292ae */

undefined8 * FUN_1400292ae(undefined8 *param_1,longlong param_2,longlong param_3)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 == param_2) {
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_1400061f6(param_1);
  }
  return param_1;
}

