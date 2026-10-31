/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010121d */

void FUN_18010121d(longlong param_1,longlong param_2,float param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = FUN_1801003e9((int)((*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) / param_3),0);
  *param_4 = uVar1;
  fVar2 = (float)FUN_180283cd0((*(float *)(param_1 + 0xc) - *(float *)(param_2 + 4)) / param_3);
  uVar1 = FUN_1801003e9((int)fVar2,uVar1);
  *param_5 = uVar1;
  return;
}

