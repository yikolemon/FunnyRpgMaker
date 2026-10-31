/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076b52b */

uint FUN_14076b52b(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float unaff_retaddr;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  
  if ((local_res8 == 0.0) && (!NAN(local_res8))) {
    return 0;
  }
  uVar1 = 0;
  if (unaff_retaddr < local_res8) {
    if (local_res10 <= 0.0) {
      return -(uint)(unaff_retaddr < local_resc && local_resc <= local_res8) & 1;
    }
    auVar2._0_4_ = local_res8 - local_resc;
    auVar2._4_4_ = unaff_retaddr - local_resc;
    auVar2._8_4_ = 0.0 - local_resc;
    auVar2._12_4_ = 0.0 - local_resc;
    auVar3._4_4_ = local_res10;
    auVar3._0_4_ = local_res10;
    auVar3._8_4_ = local_res10;
    auVar3._12_4_ = local_res10;
    auVar3 = divps(auVar2,auVar3);
    uVar1 = ((int)((uint)(local_res8 < local_resc) << 0x1f) >> 0x1f | (int)auVar3._0_4_) -
            ((int)((uint)(unaff_retaddr < local_resc) << 0x1f) >> 0x1f | (int)auVar3._4_4_);
  }
  return uVar1;
}

