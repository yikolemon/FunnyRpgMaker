/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002a842 */

ulonglong * FUN_18002a842(ulonglong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  undefined1 auVar6 [16];
  int iVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  
  iVar11 = (param_2 + 0x124) / 0x1b;
  iVar7 = iVar11 * 0x1b + -0x124;
  lVar9 = (longlong)iVar11 * 0x10;
  uVar10 = *(ulonglong *)(&DAT_1802b27b0 + lVar9);
  uVar12 = *(ulonglong *)(&DAT_1802b27b8 + lVar9);
  iVar11 = param_2 - iVar7;
  if (iVar11 != 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *(ulonglong *)(&DAT_1802b2930 + (longlong)iVar11 * 8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar12;
    bVar8 = (char)((uint)(param_2 * 0x1a934f) >> 0x13) -
            ((char)((uint)(iVar7 * 0x1a934f) >> 0x13) + (char)iVar11);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulonglong *)(&DAT_1802b2930 + (longlong)iVar11 * 8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar10;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = SUB168(auVar2 * auVar4,8);
    auVar6 = auVar1 * auVar3 + auVar6;
    uVar10 = auVar6._0_8_;
    bVar5 = bVar8 & 0x3f;
    uVar12 = uVar10 >> bVar5 | auVar6._8_8_ << 0x40 - bVar5;
    bVar8 = bVar8 & 0x3f;
    uVar10 = (SUB168(auVar2 * auVar4,0) >> bVar8 | uVar10 << 0x40 - bVar8) + 1;
  }
  *param_1 = uVar10;
  param_1[1] = uVar12;
  return param_1;
}

