/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140078692 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140078692(undefined1 (*param_1) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar5 = *param_1;
  auVar6 = minps(_DAT_140211330,auVar5);
  uVar1 = -(uint)(auVar5._0_4_ < 0.0);
  uVar2 = -(uint)(auVar5._4_4_ < 0.0);
  uVar3 = -(uint)(auVar5._8_4_ < 0.0);
  uVar4 = -(uint)(auVar5._12_4_ < 0.0);
  auVar5._0_4_ = (int)(float)(~uVar1 & (uint)(auVar6._0_4_ * _DAT_140210030 + _DAT_140211340) |
                             (uint)_DAT_140211340 & uVar1);
  auVar5._4_4_ = (int)(float)(~uVar2 & (uint)(auVar6._4_4_ * _UNK_140210034 + _UNK_140211344) |
                             (uint)_UNK_140211344 & uVar2);
  auVar5._8_4_ = (int)(float)(~uVar3 & (uint)(auVar6._8_4_ * _UNK_140210038 + _UNK_140211348) |
                             (uint)_UNK_140211348 & uVar3);
  auVar5._12_4_ =
       (uint)(float)(~uVar4 & (uint)(auVar6._12_4_ * _UNK_14021003c + _UNK_14021134c) |
                    (uint)_UNK_14021134c & uVar4);
  auVar6._4_4_ = _UNK_140211354;
  auVar6._0_4_ = _UNK_140211354;
  auVar6._8_4_ = _UNK_14021135c;
  auVar6._12_4_ = _UNK_14021135c;
  return (uint)((auVar6._8_8_ & 0xffffffff) * (ulonglong)auVar5._12_4_) |
         _UNK_140211354 * auVar5._4_4_ |
         (uint)((auVar5._8_8_ & 0xffffffff) * (ulonglong)_UNK_140211358) |
         auVar5._0_4_ * _DAT_140211350;
}

