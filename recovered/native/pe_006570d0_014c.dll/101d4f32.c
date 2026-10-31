/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d4f32 */

float10 FUN_101d4f32(int param_1)

{
  double dVar1;
  
  dVar1 = DAT_103084d8;
  if (*(char *)(param_1 + 0x24) == '\0') {
    dVar1 = DAT_103084c8;
  }
  return (float10)dVar1;
}

