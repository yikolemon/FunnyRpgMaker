/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015aa15 */

undefined8 * FUN_18015aa15(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)((longlong)param_3 + 0xc);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  fVar5 = DAT_1802ac570 - fVar1;
  fVar3 = *(float *)(param_3 + 1);
  fVar4 = *(float *)(param_2 + 1);
  *param_1 = CONCAT44(fVar5 * (float)((ulonglong)*param_2 >> 0x20) +
                      (float)((ulonglong)*param_3 >> 0x20) * fVar1,
                      fVar5 * (float)*param_2 + fVar1 * (float)*param_3);
  *(float *)(param_1 + 1) = fVar4 * fVar5 + fVar3 * fVar1;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  return param_1;
}

