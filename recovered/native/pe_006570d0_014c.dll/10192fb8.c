/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10192fb8 */

float10 __thiscall FUN_10192fb8(int *param_1,ushort param_2)

{
  float in_XMM0_Da;
  
  if ((*param_1 <= (int)(uint)param_2) ||
     (in_XMM0_Da = *(float *)(param_1[2] + (uint)param_2 * 4), in_XMM0_Da < 0.0)) {
    FUN_10192ff3();
  }
  return (float10)in_XMM0_Da;
}

