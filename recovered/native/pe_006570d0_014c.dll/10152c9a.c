/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10152c9a */

void __fastcall FUN_10152c9a(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_14;
  
  iVar1 = FUN_1014f645(param_1,param_2);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 4) & 0xc0) == 0)) {
    fVar6 = *(float *)(DAT_1039d74c + 0x1228);
    iVar2 = (iVar1 - *(int *)(param_1 + 0xc) >> 4) * -0x55555555;
    fVar4 = fVar6;
    FUN_10152dac();
    fVar5 = *(float *)(iVar1 + 0x14) - (float)param_3[1];
    local_14 = DAT_102b9640;
    if (*param_3 <= iVar2) {
      local_14 = fVar6;
    }
    local_14 = fVar5 - local_14;
    if (*(int *)(param_1 + 4) - param_3[8] <= iVar2 + 1) {
      fVar6 = DAT_1028b430;
    }
    fVar6 = fVar5 + *(float *)(iVar1 + 0x18) + fVar6;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if ((local_14 < *(float *)(param_1 + 0x58)) || (fVar4 <= fVar6 - local_14)) {
      fVar5 = *(float *)(param_1 + 0x54) - fVar6;
    }
    else {
      if (fVar6 - fVar4 <= *(float *)(param_1 + 0x58)) {
        return;
      }
      fVar5 = (local_14 - fVar4) - *(float *)(param_1 + 0x54);
      local_14 = fVar6 - fVar4;
    }
    fVar3 = (float10)FUN_100fdbca(fVar5,0);
    *(float *)(param_1 + 0x5c) = (float)fVar3;
    *(float *)(param_1 + 0x58) = local_14;
  }
  return;
}

