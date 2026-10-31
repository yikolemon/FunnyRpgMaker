/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022aed0 */

void FUN_1022aed0(byte *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + param_2;
  for (; param_1 != pbVar1; param_1 = param_1 + 1) {
    *(undefined1 *)((uint)*param_1 + param_3) = 1;
  }
  return;
}

