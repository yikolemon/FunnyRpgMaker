/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fad3d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100fad3d(undefined1 (*param_1) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar5 = *param_1;
  auVar6 = minps(_DAT_102b8a10,auVar5);
  uVar1 = -(uint)(auVar5._0_4_ < 0.0);
  uVar2 = -(uint)(auVar5._4_4_ < 0.0);
  uVar3 = -(uint)(auVar5._8_4_ < 0.0);
  uVar4 = -(uint)(auVar5._12_4_ < 0.0);
  auVar5._0_4_ = (int)(float)(~uVar1 & (uint)(auVar6._0_4_ * _DAT_102b8a20 + _DAT_102b8a30) |
                             (uint)_DAT_102b8a30 & uVar1);
  auVar5._4_4_ = (int)(float)(~uVar2 & (uint)(auVar6._4_4_ * _UNK_102b8a24 + _UNK_102b8a34) |
                             (uint)_UNK_102b8a34 & uVar2);
  auVar5._8_4_ = (int)(float)(~uVar3 & (uint)(auVar6._8_4_ * _UNK_102b8a28 + _UNK_102b8a38) |
                             (uint)_UNK_102b8a38 & uVar3);
  auVar5._12_4_ =
       (uint)(float)(~uVar4 & (uint)(auVar6._12_4_ * _UNK_102b8a2c + _UNK_102b8a3c) |
                    (uint)_UNK_102b8a3c & uVar4);
  auVar6._4_4_ = _UNK_102b8a44;
  auVar6._0_4_ = _UNK_102b8a44;
  auVar6._8_4_ = _UNK_102b8a4c;
  auVar6._12_4_ = _UNK_102b8a4c;
  return (uint)((auVar6._8_8_ & 0xffffffff) * (ulonglong)auVar5._12_4_) |
         _UNK_102b8a44 * auVar5._4_4_ |
         (uint)((auVar5._8_8_ & 0xffffffff) * (ulonglong)_UNK_102b8a48) |
         auVar5._0_4_ * _DAT_102b8a40;
}

