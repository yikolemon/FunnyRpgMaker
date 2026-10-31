/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011365b */

uint FUN_1011365b(float param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((param_2 == 0.0) && (!NAN(param_2))) {
    return 1;
  }
  uVar1 = 0;
  if (param_1 < param_2) {
    if (param_4 <= 0.0) {
      return -(uint)(param_1 < param_3 && param_3 <= param_2) & 1;
    }
    auVar2._0_4_ = param_2 - param_3;
    auVar2._4_4_ = param_1 - param_3;
    auVar2._8_4_ = 0.0 - param_3;
    auVar2._12_4_ = 0.0 - param_3;
    auVar3._4_4_ = param_4;
    auVar3._0_4_ = param_4;
    auVar3._8_4_ = param_4;
    auVar3._12_4_ = param_4;
    auVar3 = divps(auVar2,auVar3);
    uVar1 = ((int)((uint)(param_2 < param_3) << 0x1f) >> 0x1f | (int)auVar3._0_4_) -
            ((int)((uint)(param_1 < param_3) << 0x1f) >> 0x1f | (int)auVar3._4_4_);
  }
  return uVar1;
}

