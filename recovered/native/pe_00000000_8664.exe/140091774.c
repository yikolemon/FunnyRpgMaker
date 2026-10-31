/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140091774 */

uint FUN_140091774(undefined8 param_1,undefined8 param_2,float param_3,float param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  fVar3 = (float)param_2;
  fVar2 = (float)param_1;
  uVar1 = 1;
  if (((fVar3 != 0.0) || (NAN(fVar3))) && (uVar1 = 0, fVar2 < fVar3)) {
    if (0.0 < param_4) {
      auVar4._0_4_ = fVar3 - param_3;
      auVar4._4_4_ = fVar2 - param_3;
      auVar4._8_4_ = (float)((ulonglong)param_2 >> 0x20) - param_3;
      auVar4._12_4_ = (float)((ulonglong)param_1 >> 0x20) - param_3;
      auVar5._4_4_ = param_4;
      auVar5._0_4_ = param_4;
      auVar5._8_4_ = param_4;
      auVar5._12_4_ = param_4;
      auVar5 = divps(auVar4,auVar5);
      return ((int)((uint)(fVar3 < param_3) << 0x1f) >> 0x1f | (int)auVar5._0_4_) -
             ((int)((uint)(fVar2 < param_3) << 0x1f) >> 0x1f | (int)auVar5._4_4_);
    }
    return -(uint)(param_3 <= fVar3 && fVar2 < param_3) & 1;
  }
  return uVar1;
}

