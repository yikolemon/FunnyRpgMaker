/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fcab4 */

void FUN_100fcab4(int param_1,int param_2,float param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  float10 fVar2;
  
  uVar1 = FUN_100fbc6a((int)((*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) / param_3),0);
  *param_4 = uVar1;
  fVar2 = (float10)FUN_1026d3b0((double)((*(float *)(param_1 + 0xc) - *(float *)(param_2 + 4)) /
                                        param_3));
  uVar1 = FUN_100fbc6a((int)fVar2,uVar1);
  *param_5 = uVar1;
  return;
}

