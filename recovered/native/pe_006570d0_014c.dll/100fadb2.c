/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fadb2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fadb2(float param_1,float param_2,float param_3,uint *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  uint *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  fVar6 = param_1;
  fVar4 = 0.0;
  if (param_2 < param_3) {
    local_18 = param_1;
    FUN_100faec4(&param_2,&param_3);
    fVar6 = local_18;
    fVar4 = DAT_102b8a50;
  }
  pfVar3 = param_5;
  puVar2 = param_4;
  if (fVar6 < param_2) {
    local_18 = fVar4;
    FUN_100faec4(&param_1,&param_2);
    fVar4 = DAT_102b8a54 - local_18;
    fVar6 = param_1;
  }
  fVar1 = DAT_102b8a5c;
  fVar5 = param_2;
  if (param_3 <= param_2) {
    fVar5 = param_3;
  }
  *puVar2 = (uint)((param_2 - param_3) / (DAT_102b8a58 * (fVar6 - fVar5) + DAT_102b8a5c) + fVar4) &
            _DAT_1028b410;
  *pfVar3 = (fVar6 - fVar5) / (fVar1 + fVar6);
  *param_6 = fVar6;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

