/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14036205a */

void FUN_14036205a(undefined4 *param_1,float param_2,char param_3)

{
  if (param_3 != '\0') {
    *(undefined8 *)((longlong)param_1 + 0x12) = 0;
  }
  *(short *)(param_1 + 2) = (short)(int)param_2;
  FUN_14036209c(param_1,1);
  *(undefined8 *)((longlong)param_1 + 0x12) = 0;
  *param_1 = param_1[1];
  param_1[1] = 0;
  return;
}

