/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180108907 */

void FUN_180108907(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  if ((param_3 == 0) || (((int)(char)(*(uint *)(param_1 + 0x130) >> 8) & param_3) != 0)) {
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfffff1ff;
    *(undefined8 *)(param_1 + 0x138) = 0x7f7fffff7f7fffff;
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    fVar2 = (float)(int)(float)*param_2;
    fVar3 = (float)(int)(float)((ulonglong)*param_2 >> 0x20);
    *(ulonglong *)(param_1 + 0x60) = CONCAT44(fVar3,fVar2);
    fVar2 = fVar2 - (float)uVar1;
    fVar3 = fVar3 - (float)((ulonglong)uVar1 >> 0x20);
    if ((fVar2 != 0.0) || (((NAN(fVar2) || (fVar3 != 0.0)) || (NAN(fVar3))))) {
      FUN_180113248(param_1);
      *(ulonglong *)(param_1 + 0x158) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x158) >> 0x20) + fVar3,
                    (float)*(undefined8 *)(param_1 + 0x158) + fVar2);
      *(ulonglong *)(param_1 + 0x178) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x178) >> 0x20) + fVar3,
                    (float)*(undefined8 *)(param_1 + 0x178) + fVar2);
      *(float *)(param_1 + 0x168) = *(float *)(param_1 + 0x168) + fVar2;
      *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x16c) + fVar3;
      *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) + fVar2;
      *(float *)(param_1 + 0x174) = *(float *)(param_1 + 0x174) + fVar3;
    }
  }
  return;
}

