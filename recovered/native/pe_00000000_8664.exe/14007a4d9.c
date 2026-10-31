/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007a4d9 */

void FUN_14007a4d9(longlong param_1,longlong param_2,float param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = FUN_1400796a5((int)((*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) / param_3),0);
  *param_4 = uVar1;
  fVar2 = (float)FUN_1401a1f10((*(float *)(param_1 + 0xc) - *(float *)(param_2 + 4)) / param_3);
  uVar1 = FUN_1400796a5((int)fVar2,uVar1);
  *param_5 = uVar1;
  return;
}

