/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140752c0d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140752c0d(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint unaff_retaddr;
  
  auVar5 = *(undefined1 (*) [16])(ulonglong)unaff_retaddr;
  auVar6 = minps(_DAT_150a0b62e,auVar5);
  uVar1 = -(uint)(auVar5._0_4_ < 0.0);
  uVar2 = -(uint)(auVar5._4_4_ < 0.0);
  uVar3 = -(uint)(auVar5._8_4_ < 0.0);
  uVar4 = -(uint)(auVar5._12_4_ < 0.0);
  auVar5._0_4_ = (int)(float)(~uVar1 & (uint)(auVar6._0_4_ * _DAT_150a0b64c + _DAT_150a0b663) |
                             (uint)_DAT_150a0b663 & uVar1);
  auVar5._4_4_ = (int)(float)(~uVar2 & (uint)(auVar6._4_4_ * fRam0000000150a0b650 +
                                             fRam0000000150a0b667) |
                             (uint)fRam0000000150a0b667 & uVar2);
  auVar5._8_4_ = (int)(float)(~uVar3 & (uint)(auVar6._8_4_ * fRam0000000150a0b654 +
                                             fRam0000000150a0b66b) |
                             (uint)fRam0000000150a0b66b & uVar3);
  auVar5._12_4_ =
       (uint)(float)(~uVar4 & (uint)(auVar6._12_4_ * fRam0000000150a0b658 + fRam0000000150a0b66f) |
                    (uint)fRam0000000150a0b66f & uVar4);
  auVar6._4_4_ = iRam0000000150a0b68f;
  auVar6._0_4_ = iRam0000000150a0b68f;
  auVar6._8_4_ = uRam0000000150a0b697;
  auVar6._12_4_ = uRam0000000150a0b697;
  return (uint)((auVar6._8_8_ & 0xffffffff) * (ulonglong)auVar5._12_4_) |
         iRam0000000150a0b68f * auVar5._4_4_ |
         (uint)((auVar5._8_8_ & 0xffffffff) * (ulonglong)uRam0000000150a0b693) |
         auVar5._0_4_ * _DAT_150a0b68b;
}

