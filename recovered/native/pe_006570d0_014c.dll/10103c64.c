/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10103c64 */

void FUN_10103c64(int param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  if ((param_3 == 0) || (((int)(char)(*(uint *)(param_1 + 0x120) >> 8) & param_3) != 0)) {
    *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) & 0xfffff1ff;
    *(undefined4 *)(param_1 + 0x128) = 0x7f7fffff;
    *(undefined4 *)(param_1 + 300) = 0x7f7fffff;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    fVar2 = (float)(int)(float)*param_2;
    fVar3 = (float)(int)(float)((ulonglong)*param_2 >> 0x20);
    *(ulonglong *)(param_1 + 0x50) = CONCAT44(fVar3,fVar2);
    fVar2 = fVar2 - (float)uVar1;
    fVar3 = fVar3 - (float)((ulonglong)uVar1 >> 0x20);
    if ((fVar2 != 0.0) || (((NAN(fVar2) || (fVar3 != 0.0)) || (NAN(fVar3))))) {
      FUN_1010e508(param_1,fVar2,fVar3,0,0);
      *(ulonglong *)(param_1 + 0x144) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x144) >> 0x20) + fVar3,
                    (float)*(undefined8 *)(param_1 + 0x144) + fVar2);
      *(ulonglong *)(param_1 + 0x164) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x164) >> 0x20) + fVar3,
                    (float)*(undefined8 *)(param_1 + 0x164) + fVar2);
      *(float *)(param_1 + 0x154) = *(float *)(param_1 + 0x154) + fVar2;
      *(float *)(param_1 + 0x158) = *(float *)(param_1 + 0x158) + fVar3;
      *(float *)(param_1 + 0x15c) = *(float *)(param_1 + 0x15c) + fVar2;
      *(float *)(param_1 + 0x160) = *(float *)(param_1 + 0x160) + fVar3;
    }
  }
  return;
}

