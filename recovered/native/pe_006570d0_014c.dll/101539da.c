/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101539da */

uint FUN_101539da(uint param_1,int param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = (float)((double)((ulonglong)(param_2 - param_1) | (ulonglong)DAT_1028f6b0) - DAT_1028f6b0)
          * param_3 + (float)((double)((ulonglong)param_1 | (ulonglong)DAT_1028f6b0) - DAT_1028f6b0)
  ;
  uVar1 = (uint)fVar2;
  return (int)(fVar2 - DAT_1028f6d0) & (int)uVar1 >> 0x1f | uVar1;
}

