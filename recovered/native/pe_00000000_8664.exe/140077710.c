/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140077710 */

void FUN_140077710(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar9;
  
  fVar2 = (float)*param_2;
  fVar3 = (float)((ulonglong)*param_2 >> 0x20);
  fVar5 = (float)*param_3 - fVar2;
  fVar8 = (float)((ulonglong)*param_3 >> 0x20) - fVar3;
  fVar4 = (*param_4 - fVar2) * fVar5 + (param_4[1] - fVar3) * fVar8;
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
      *param_1 = CONCAT44(fVar3 + auVar7._4_4_,fVar2 + auVar7._0_4_);
      return;
    }
    uVar1 = *param_3;
  }
  else {
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}

