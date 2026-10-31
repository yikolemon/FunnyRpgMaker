/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101651f3 */

float * FUN_101651f3(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc + param_3 * 0x74);
  fVar3 = (float10)FUN_100fdbca(*(undefined4 *)(*(int *)(param_2 + 0x10) + 8 + param_3 * 0x74),
                                *(undefined4 *)(param_2 + 0xe4),uVar5);
  fVar4 = (float10)FUN_100ea38a(uVar5,*(undefined4 *)(param_2 + 0xec));
  fVar1 = *(float *)(param_2 + 0x50);
  fVar2 = *(float *)(param_2 + 0x54);
  *param_1 = (float)fVar3;
  param_1[1] = fVar1;
  param_1[2] = (float)fVar4;
  param_1[3] = fVar2;
  return param_1;
}

