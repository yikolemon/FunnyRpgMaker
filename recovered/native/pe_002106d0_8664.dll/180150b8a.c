/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180150b8a */

void FUN_180150b8a(undefined4 *param_1,float param_2,char param_3)

{
  if (param_3 != '\0') {
    *(undefined8 *)((longlong)param_1 + 0x12) = 0;
  }
  *(short *)(param_1 + 2) = (short)(int)param_2;
  FUN_180150bcc(param_1,1);
  *(undefined8 *)((longlong)param_1 + 0x12) = 0;
  *param_1 = param_1[1];
  param_1[1] = 0;
  return;
}

