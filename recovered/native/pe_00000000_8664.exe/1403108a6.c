/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403108a6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1403108a6(undefined1 (*param_1) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar5 = *param_1;
  auVar6 = minps(_DAT_1404efa90,auVar5);
  uVar1 = -(uint)(auVar5._0_4_ < 0.0);
  uVar2 = -(uint)(auVar5._4_4_ < 0.0);
  uVar3 = -(uint)(auVar5._8_4_ < 0.0);
  uVar4 = -(uint)(auVar5._12_4_ < 0.0);
  auVar5._0_4_ = (int)(float)(~uVar1 & (uint)(auVar6._0_4_ * _DAT_1404efaa0 + _DAT_1404efab0) |
                             (uint)_DAT_1404efab0 & uVar1);
  auVar5._4_4_ = (int)(float)(~uVar2 & (uint)(auVar6._4_4_ * _UNK_1404efaa4 + _UNK_1404efab4) |
                             (uint)_UNK_1404efab4 & uVar2);
  auVar5._8_4_ = (int)(float)(~uVar3 & (uint)(auVar6._8_4_ * _UNK_1404efaa8 + _UNK_1404efab8) |
                             (uint)_UNK_1404efab8 & uVar3);
  auVar5._12_4_ =
       (uint)(float)(~uVar4 & (uint)(auVar6._12_4_ * _UNK_1404efaac + _UNK_1404efabc) |
                    (uint)_UNK_1404efabc & uVar4);
  auVar6._4_4_ = _UNK_1404efac4;
  auVar6._0_4_ = _UNK_1404efac4;
  auVar6._8_4_ = _UNK_1404efacc;
  auVar6._12_4_ = _UNK_1404efacc;
  return (uint)((auVar6._8_8_ & 0xffffffff) * (ulonglong)auVar5._12_4_) |
         _UNK_1404efac4 * auVar5._4_4_ |
         (uint)((auVar5._8_8_ & 0xffffffff) * (ulonglong)_UNK_1404efac8) |
         auVar5._0_4_ * _DAT_1404efac0;
}

