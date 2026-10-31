/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c9c0a */

undefined8 FUN_1400c9c0a(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  ulonglong local_80;
  
  lVar1 = DAT_140f2a910;
  local_80 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x1608);
  if ((*(char *)(lVar1 + 0x10e) == '\0') && ((*(byte *)(lVar1 + 0x15) & 4) != 0)) {
    FUN_1400937ae();
    FUN_1400912b0("##MenuBar");
    fVar11 = DAT_1401c86a0;
    fVar8 = (float)FUN_14007b71f((float)(int)((*(float *)(lVar1 + 0x9c) * DAT_1401c86a0 -
                                              *(float *)(lVar1 + 0xa0)) + DAT_1401c86a0),0);
    fVar12 = (float)(int)(*(float *)(lVar1 + 0x9c) * fVar11 + fVar11);
    fVar11 = *(float *)(lVar1 + 0x60);
    fVar14 = *(float *)(lVar1 + 100) + *(float *)(lVar1 + 0xa0);
    fVar10 = *(float *)(lVar1 + 0x70);
    fVar13 = *(float *)(lVar1 + 0xa4);
    fVar9 = (float)FUN_14007b71f(*(undefined4 *)(lVar1 + 0x98),fVar12);
    fVar10 = (float)FUN_14007b71f(fVar11,(fVar10 + fVar11) - fVar9);
    fVar12 = fVar12 + fVar11;
    fVar8 = fVar14 + fVar8;
    fVar10 = DAT_140211ec4 + fVar10;
    fVar13 = fVar13 + fVar14;
    fVar9 = (float)(int)((int)fVar12 - (uint)((float)(int)fVar12 != fVar12 && fVar12 < 0.0));
    fVar8 = (float)(int)((int)fVar8 - (uint)((float)(int)fVar8 != fVar8 && fVar8 < 0.0));
    fVar10 = (float)(int)((int)fVar10 - (uint)((float)(int)fVar10 != fVar10 && fVar10 < 0.0));
    fVar13 = (float)(int)((int)fVar13 - (uint)((float)(int)fVar13 != fVar13 && fVar13 < 0.0));
    uVar4 = -(uint)(*(float *)(lVar1 + 0x268) <= fVar9);
    uVar5 = -(uint)(*(float *)(lVar1 + 0x26c) <= fVar8);
    uVar6 = -(uint)(fVar10 < *(float *)(lVar1 + 0x270));
    uVar7 = -(uint)(fVar13 < *(float *)(lVar1 + 0x274));
    local_98._0_4_ = ~uVar4 & (uint)*(float *)(lVar1 + 0x268);
    local_98._4_4_ = ~uVar5 & (uint)*(float *)(lVar1 + 0x26c);
    local_98._8_4_ = ~uVar6 & (uint)*(float *)(lVar1 + 0x270);
    local_98._12_4_ = ~uVar7 & (uint)*(float *)(lVar1 + 0x274);
    auVar2._4_4_ = (uint)fVar8 & uVar5;
    auVar2._0_4_ = (uint)fVar9 & uVar4;
    auVar2._8_4_ = (uint)fVar10 & uVar6;
    auVar2._12_4_ = (uint)fVar13 & uVar7;
    local_98 = local_98 | auVar2;
    FUN_1400883a6(local_98,local_98 + 8,0);
    fVar11 = fVar11 + (float)*(undefined8 *)(lVar1 + 0x1bc);
    fVar14 = fVar14 + (float)((ulonglong)*(undefined8 *)(lVar1 + 0x1bc) >> 0x20);
    *(ulonglong *)(lVar1 + 0x170) = CONCAT44(fVar14,fVar11);
    *(ulonglong *)(lVar1 + 0x158) = CONCAT44(fVar14,fVar11);
    *(undefined4 *)(lVar1 + 0x214) = 0;
    *(undefined1 *)(lVar1 + 0x198) = 0;
    *(undefined4 *)(lVar1 + 0x1b0) = 1;
    *(undefined1 *)(lVar1 + 0x1bb) = 1;
    FUN_1400b08cd();
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  if (DAT_140f17b40 == (local_80 ^ (ulonglong)auStack_b8)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_80 ^ (ulonglong)auStack_b8);
}

