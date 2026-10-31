/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c9aba */

void FUN_1400c9aba(undefined4 *param_1,float param_2,char param_3)

{
  if (param_3 != '\0') {
    *(undefined8 *)((longlong)param_1 + 0x12) = 0;
  }
  *(short *)(param_1 + 2) = (short)(int)param_2;
  FUN_1400c9afc(param_1,1);
  *(undefined8 *)((longlong)param_1 + 0x12) = 0;
  *param_1 = param_1[1];
  param_1[1] = 0;
  return;
}

