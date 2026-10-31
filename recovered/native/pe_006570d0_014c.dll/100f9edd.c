/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f9edd */

uint FUN_100f9edd(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_4;
  fVar7 = (float)*param_2;
  fVar8 = (float)((ulonglong)*param_2 >> 0x20);
  fVar5 = (float)*param_3;
  fVar4 = (float)((ulonglong)*param_3 >> 0x20);
  fVar6 = (float)*param_1;
  fVar2 = param_4[1];
  fVar4 = (fVar8 - fVar4) * (fVar1 - fVar5) - (fVar7 - fVar5) * (fVar2 - fVar4);
  if (0.0 <= ((float)((ulonglong)*param_1 >> 0x20) - fVar8) * (fVar1 - fVar7) -
             (fVar6 - fVar7) * (fVar2 - fVar8) == fVar4 < 0.0) {
    uVar3 = 0;
  }
  else {
    uVar3 = -(uint)(fVar4 < 0.0 !=
                   0.0 <= (*(float *)((int)param_3 + 4) - *(float *)((int)param_1 + 4)) *
                          (fVar1 - fVar6) - (fVar5 - fVar6) * (fVar2 - *(float *)((int)param_1 + 4))
                   );
  }
  return uVar3 & 0xffffff01;
}

