/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008a651 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008a651(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_88 [32];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  lVar7 = DAT_140f2a910;
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(DAT_140f2a910 + 0x1608);
  uVar1 = *(undefined4 *)(DAT_140f2a910 + 0x1570);
  *(undefined4 *)(DAT_140f2a910 + 0x1570) = *(undefined4 *)(lVar2 + 0x10);
  uVar3 = *(undefined8 *)(lVar2 + 0x68);
  local_48 = uVar3;
  FUN_140088c18();
  if (*(short *)(lVar2 + 0x118) != 1) {
    local_58 = *(undefined8 *)(lVar2 + 0x60);
    uStack_50 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar2 + 0x68) >> 0x20) +
                         (float)((ulonglong)local_58 >> 0x20),
                         (float)*(undefined8 *)(lVar2 + 0x68) + (float)local_58);
    FUN_14008ab92(lVar2);
    goto LAB_14008a7ea;
  }
  lVar4 = *(longlong *)(lVar7 + 0x1608);
  fVar5 = *(float *)(lVar4 + 0x158);
  fVar6 = *(float *)(lVar4 + 0x15c);
  local_58 = *(undefined8 *)(lVar4 + 0x158);
  fVar9 = (float)uVar3 + fVar5;
  fVar10 = (float)((ulonglong)uVar3 >> 0x20) + fVar6;
  uStack_50 = CONCAT44(fVar10,fVar9);
  FUN_14008a82c(&local_48,DAT_1401c86a4);
  uVar8 = *(uint *)(lVar2 + 0x1c);
  if (*(short *)(lVar2 + 0x1b4) == 0) {
    if ((*(byte *)(lVar2 + 0x1ba) & (uVar8 >> 8 & 1) == 0) != 0) goto LAB_14008a73d;
    FUN_14008a9ce(&local_58,*(undefined4 *)(lVar2 + 0xcc),0,2);
    if ((uVar8 >> 8 & 1) != 0) goto LAB_14008a7bc;
  }
  else if ((uVar8 >> 8 & 1) == 0) {
LAB_14008a73d:
    FUN_14008a9ce(&local_58,*(undefined4 *)(lVar2 + 0xcc),0,0);
    FUN_14007bdca(&local_58,*(undefined4 *)(lVar2 + 0xcc),0);
    if ((*(short *)(lVar2 + 0x1b4) == 0) && (lVar2 == *(longlong *)(lVar7 + 0x2200))) {
      local_68 = fVar5 + _DAT_140211520;
      fStack_64 = fVar6 + _UNK_140211524;
      fStack_60 = fVar9 + _UNK_140211528;
      fStack_5c = fVar10 + _UNK_14021152c;
      FUN_14007bdca(&local_68,*(undefined4 *)(lVar7 + 0x21f8),2);
    }
  }
  else {
    FUN_14008a9ce(&local_58,*(undefined4 *)(lVar2 + 0xcc),0,2);
LAB_14008a7bc:
    *(ushort *)(lVar4 + 0x1b6) = *(ushort *)(lVar4 + 0x1b6) | *(ushort *)(lVar2 + 0x1b6);
  }
  uVar8 = *(uint *)(lVar7 + 0x1fe8);
  if (*(longlong *)(lVar7 + 0x1610) == lVar2) {
    uVar8 = uVar8 | 0x80;
    *(uint *)(lVar7 + 0x1fe8) = uVar8;
  }
  *(uint *)(lVar2 + 0x224) = uVar8;
LAB_14008a7ea:
  *(undefined4 *)(lVar7 + 0x1570) = uVar1;
  *(undefined4 *)(lVar7 + 0x2a78) = 0xff7fffff;
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_88);
}

