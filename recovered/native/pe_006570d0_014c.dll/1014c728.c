/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014c728 */

void __thiscall FUN_1014c728(undefined4 *param_1,float param_2,char param_3)

{
  if (param_3 != '\0') {
    *(undefined4 *)((int)param_1 + 0x16) = 0;
    *(undefined4 *)((int)param_1 + 0x12) = 0;
  }
  *(short *)(param_1 + 2) = (short)(int)param_2;
  FUN_1014c766(1);
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *param_1 = param_1[1];
  param_1[1] = 0;
  return;
}

