/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d4e7e */

float10 FUN_101d4e7e(int param_1)

{
  double dVar1;
  
  dVar1 = DAT_10303ab0;
  if (*(char *)(param_1 + 0x24) == '\0') {
    dVar1 = DAT_10308480;
  }
  return (float10)dVar1;
}

