/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f9e56 */

void FUN_100f9e56(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  float fVar3;
  undefined8 uVar2;
  float fVar4;
  float fVar5;
  float fVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar9;
  
  fVar1 = (float)*param_2;
  fVar3 = (float)((ulonglong)*param_2 >> 0x20);
  fVar5 = (float)*param_3 - fVar1;
  fVar8 = (float)((ulonglong)*param_3 >> 0x20) - fVar3;
  fVar4 = (*param_4 - fVar1) * fVar5 + (param_4[1] - fVar3) * fVar8;
  if (0.0 <= fVar4) {
    fVar9 = fVar5 * fVar5 + fVar8 * fVar8;
    if (fVar4 <= fVar9) {
      auVar6._0_4_ = fVar5 * fVar4;
      auVar6._4_4_ = fVar8 * fVar4;
      auVar6._8_8_ = 0;
      auVar7._4_4_ = fVar9;
      auVar7._0_4_ = fVar9;
      auVar7._8_4_ = fVar8;
      auVar7._12_4_ = fVar8;
      auVar7 = divps(auVar6,auVar7);
      *param_1 = CONCAT44(fVar3 + auVar7._4_4_,fVar1 + auVar7._0_4_);
      return;
    }
    uVar2 = *param_3;
  }
  else {
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}

