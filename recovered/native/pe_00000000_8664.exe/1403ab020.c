/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ab020 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403ab020(uint *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  char *local_70;
  undefined1 local_68;
  undefined1 local_58 [16];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = ram0x000140613b10 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0xac);
  uVar8 = *param_1;
  local_58 = (undefined1  [16])0x0;
  local_48 = 0;
  cVar5 = FUN_1403a8e80(param_1,*(undefined4 *)(lVar1 + 0xec));
  if (cVar5 == '\0') {
    bVar10 = (uVar8 & 2) == 0;
    uVar9 = 2;
    if (bVar10) {
      uVar9 = 0x1b;
    }
    uVar7 = 0xf5;
    if (!bVar10) {
      uVar7 = 2;
    }
    uVar6 = FUN_1403a8b26(param_1,uVar7,uVar9,local_58);
    *(undefined4 *)(lVar1 + 0xec) = uVar6;
    if ((*param_1 & 2) == 0) {
      uVar8 = (ushort)local_58._0_2_ + 0x7b;
      local_70 = 
      "                                -   X.X           X.X   -                                                                                                 -    XX           XX    -                                           "
      ;
      local_78 = 0x1b;
      local_68 = 0x2e;
      FUN_1403a9775(param_1,local_58._0_2_,local_58._2_2_,0x7a);
      local_70 = 
      "                                -   X.X           X.X   -                                                                                                 -    XX           XX    -                                           "
      ;
      local_78 = 0x1b;
      uVar9 = 0x7a;
    }
    else {
      uVar8 = (uint)(ushort)local_58._0_2_;
      local_70 = "C7 ?? C0 BD F0 FF";
      local_78 = 2;
      uVar9 = 2;
    }
    local_68 = 0x58;
    FUN_1403a9775(param_1,uVar8,local_58._2_2_,uVar9);
  }
  auVar2._10_2_ = 0;
  auVar2._0_10_ = local_58._0_10_;
  auVar2._12_2_ = local_58._6_2_;
  auVar3._8_2_ = local_58._4_2_;
  auVar3._0_8_ = local_58._0_8_;
  auVar3._10_4_ = auVar2._10_4_;
  auVar4._6_8_ = 0;
  auVar4._0_6_ = auVar3._8_6_;
  *(ulonglong *)(param_1 + 0x17) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x15) >> 0x20) *
                ((float)(int)CONCAT82(SUB148(auVar4 << 0x40,6),local_58._2_2_) + _UNK_1404efa44),
                (float)*(undefined8 *)(param_1 + 0x15) * ((float)local_58._0_2_ + _DAT_1404efa40));
  if (ram0x000140613b10 == (local_40 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_40 ^ (ulonglong)auStack_98);
}

