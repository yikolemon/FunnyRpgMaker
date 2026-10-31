/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fd943 */

void FUN_100fd943(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4,
                 undefined4 param_5,float *param_6,float *param_7,float *param_8)

{
  float *pfVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  float *pfVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  undefined8 *puVar9;
  float local_3c;
  float local_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  local_1c = *param_2;
  local_18 = param_2[1];
  if (param_6 == (float *)0x0) {
    local_3c = local_1c;
    local_38 = param_2[1];
    FUN_100fdb2e(&local_24,param_4,param_5,0,0);
    fVar7 = local_38;
    fVar8 = local_3c;
  }
  else {
    local_24 = *param_6;
    local_20 = param_6[1];
    fVar7 = param_2[1];
    fVar8 = local_1c;
  }
  pfVar5 = param_8 + 2;
  pfVar1 = param_8;
  if (param_8 == (float *)0x0) {
    pfVar5 = param_3;
    pfVar1 = param_2;
  }
  bVar2 = true;
  if (local_24 + fVar8 < *pfVar5) {
    bVar2 = pfVar5[1] <= local_20 + fVar7;
  }
  cVar3 = bVar2;
  if ((param_8 != (float *)0x0) && (cVar3 = true, *param_8 <= fVar8)) {
    cVar3 = bVar2 | fVar7 < param_8[1];
  }
  if (0.0 < *param_7) {
    local_3c = (float)CONCAT31(local_3c._1_3_,cVar3);
    local_38 = fVar7;
    fVar6 = (float10)FUN_100fdbca(fVar8,((*param_3 - fVar8) - local_24) * *param_7 + fVar8);
    local_1c = (float)fVar6;
    fVar7 = local_38;
    cVar3 = local_3c._0_1_;
  }
  if (0.0 < param_7[1]) {
    fVar6 = (float10)FUN_100fdbca(fVar7,((param_3[1] - fVar7) - local_20) * param_7[1] + fVar7);
    local_18 = (float)fVar6;
  }
  if (cVar3 == '\0') {
    uVar4 = FUN_100fcb39(0,0x3f800000);
    puVar9 = (undefined8 *)0x0;
  }
  else {
    local_34 = *(undefined8 *)pfVar1;
    uStack_2c = *(undefined8 *)pfVar5;
    puVar9 = &local_34;
    uVar4 = FUN_100fcb39(0,0x3f800000);
  }
  FUN_1018c69a(0,0,&local_1c,uVar4,param_4,param_5,0,puVar9);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_3c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

