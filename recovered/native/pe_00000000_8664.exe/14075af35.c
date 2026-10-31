/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075af35 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14075af35(void)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  
  puVar7 = (undefined8 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  uVar6 = *(uint *)((longlong)puVar7 + 0x1c);
  uVar9 = uVar6 & 0xffff0fff;
  *(undefined4 *)((longlong)puVar7 + 4) = _DAT_150af8692;
  if (uVar9 - 0x20f < 8) {
    *(undefined8 *)((longlong)puVar7 + -8) = 0x14075af64;
    uVar1 = FUN_14076b4b3((ulonglong)uVar9);
    uVar6 = uVar6 & ~uVar1;
  }
  else {
    uVar2 = 0x10356101;
    if (uVar6 != 0 && uVar9 == 0) goto LAB_14075af86;
  }
  *(ulonglong *)((longlong)puVar7 + -8) = (ulonglong)uVar9;
  *(undefined8 *)((longlong)puVar7 + -0x10) = 0x14075af83;
  uVar2 = FUN_14076b4e0();
  puVar7 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar7 + -8) + 4);
LAB_14075af86:
  *(undefined4 *)puVar7 = uVar2;
  uVar4 = 0x10347180;
  if (-1 < (short)uVar6) {
    uVar4 = 0x10356101;
  }
  uVar5 = 0x10347174;
  if ((uVar6 >> 0xe & 1) == 0) {
    uVar5 = 0x10356101;
  }
  uVar8 = 0x10347179;
  if ((uVar6 >> 0xd & 1) == 0) {
    uVar8 = 0x10356101;
  }
  uVar10 = 0x10347187;
  if ((uVar6 >> 0xc & 1) == 0) {
    uVar10 = 0x10356101;
  }
  puVar7[-1] = *puVar7;
  puVar7[-2] = uVar4;
  puVar7[-3] = uVar5;
  puVar7[-4] = uVar8;
  puVar7[-5] = uVar10;
  uVar11 = (ulonglong)(*(int *)((longlong)puVar7 + 4) + 0x29acU);
  puVar7[-6] = 0x10334156;
  puVar7[-7] = 0x40;
  puVar7[-8] = (ulonglong)(*(int *)((longlong)puVar7 + 4) + 0x29acU);
  puVar7[-9] = 0x14075afdc;
  FUN_140752381();
  if ((uVar9 == 0) && (uVar6 != 0)) {
    *(ulonglong *)((ulonglong)((int)(puVar7 + -8) + 0x20) - 8) = uVar11;
    *(undefined8 *)((ulonglong)((int)(puVar7 + -8) + 0x20) - 0x10) = 0x14075afed;
    lVar3 = FUN_1408c85c0();
    if ((int)lVar3 != 0) {
      *(undefined1 *)((uVar11 - 1) + lVar3) = 0;
    }
  }
  return uVar11;
}

