/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10192b7a */

void FUN_10192b7a(undefined4 param_1,int param_2,int param_3,ushort param_4,float param_5)

{
  float fVar1;
  float10 fVar2;
  float fVar3;
  undefined4 local_1c;
  
  if (param_3 == 0) {
    local_1c = param_5;
  }
  else {
    fVar1 = *(float *)(**(int **)(*(int *)(param_2 + 0x48) + 0x20) + 0x38);
    if ((fVar1 != 0.0) || (fVar3 = DAT_1028b430, NAN(fVar1))) {
      fVar3 = *(float *)(param_2 + 0x10) / fVar1;
    }
    fVar2 = (float10)FUN_10112cc4(param_5,fVar3 * *(float *)(param_3 + 0x4c),
                                  *(float *)(param_3 + 0x50) * fVar3);
    local_1c = (float)fVar2;
    if (*(char *)(param_3 + 0x32) != '\0') {
      local_1c = (float)(int)(local_1c + DAT_102b70e0);
    }
    local_1c = local_1c + *(float *)(param_3 + 0x54);
  }
  FUN_10192a7d();
  *(float *)(*(int *)(param_2 + 8) + (uint)param_4 * 4) = local_1c;
  return;
}

