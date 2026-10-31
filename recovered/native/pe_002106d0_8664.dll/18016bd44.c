/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016bd44 */

void FUN_18016bd44(void)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  
  lVar6 = DAT_180419160;
  lVar2 = *(longlong *)(DAT_180419160 + 0x24f8);
  lVar3 = *(longlong *)(lVar2 + 0x10);
  iVar15 = *(int *)(lVar3 + 0x14);
  if (iVar15 < 0) {
    iVar15 = 0;
    uVar11 = FUN_1800fe7f8(0);
    if (*(longlong *)(lVar3 + 0x18) != 0) {
      FUN_1802a82f0(uVar11,*(longlong *)(lVar3 + 0x18),(longlong)*(int *)(lVar3 + 0x10) << 4);
      FUN_1800fe8d4(*(undefined8 *)(lVar3 + 0x18));
    }
    *(undefined8 *)(lVar3 + 0x18) = uVar11;
    *(undefined4 *)(lVar3 + 0x14) = 0;
  }
  *(undefined4 *)(lVar3 + 0x10) = 0;
  iVar14 = (int)*(short *)(lVar2 + 0x202);
  if (iVar15 < iVar14) {
    uVar11 = FUN_1800fe7f8((longlong)iVar14 << 4);
    if (*(longlong *)(lVar3 + 0x18) != 0) {
      FUN_1802a82f0(uVar11,*(longlong *)(lVar3 + 0x18),(longlong)*(int *)(lVar3 + 0x10) << 4);
      FUN_1800fe8d4(*(undefined8 *)(lVar3 + 0x18));
    }
    *(undefined8 *)(lVar3 + 0x18) = uVar11;
    *(int *)(lVar3 + 0x14) = iVar14;
  }
  iVar15 = FUN_18011837d("##AngledHeaders");
  uVar5 = DAT_1802ac570;
  if ((longlong)*(short *)(lVar2 + 0x78) == 0) {
    lVar13 = lVar2 + 0x1a8;
  }
  else {
    lVar13 = *(longlong *)(lVar2 + 0x1c8) + (longlong)*(short *)(lVar2 + 0x78) * 0x18 + -0x18;
  }
  sVar4 = *(short *)(lVar2 + 0x218);
  if (*(short *)(lVar2 + 0x218) == -1) {
    sVar4 = *(short *)(lVar2 + 0x20e);
    if (*(short *)(lVar2 + 0x20e) == -1) {
      sVar4 = -1;
      if ((((*(short *)(lVar2 + 0x20a) != -1) && (*(int *)(lVar13 + 0x10) == 0)) &&
          (*(short *)(lVar2 + 0x20c) == -1)) &&
         (((*(int *)(lVar6 + 0x167c) == 0 || (*(int *)(lVar6 + 0x167c) == iVar15)) ||
          ((*(char *)(lVar2 + 0x248) != '\0' || (*(char *)(lVar6 + 0x2428) == '\x01')))))) {
        sVar4 = *(short *)(lVar2 + 0x20a);
      }
    }
  }
  uVar7 = FUN_18010129b(0x30,DAT_1802ac570);
  uVar8 = FUN_18010129b(0,uVar5);
  uVar5 = DAT_1802ac570;
  iVar14 = *(int *)(lVar2 + 0x6c);
  if (0 < iVar14) {
    uVar17 = 0;
    do {
      if ((*(uint *)(*(longlong *)(lVar2 + 0x48) + (uVar17 >> 5 & 0x7ffffff) * 4) >>
           ((uint)uVar17 & 0x1f) & 1) != 0) {
        sVar1 = *(short *)(*(longlong *)(lVar2 + 0x28) + uVar17 * 2);
        if ((*(byte *)(*(longlong *)(lVar2 + 0x18) + 2 + (longlong)sVar1 * 0x74) & 4) != 0) {
          uVar9 = 0;
          if (sVar4 == sVar1) {
            uVar9 = FUN_18010129b(0x19,uVar5);
          }
          iVar14 = *(int *)(lVar3 + 0x10);
          if (iVar14 == *(int *)(lVar3 + 0x14)) {
            if (iVar14 == 0) {
              iVar10 = 8;
            }
            else {
              iVar10 = iVar14 / 2 + iVar14;
            }
            iVar16 = iVar14 + 1;
            if (iVar14 + 1 < iVar10) {
              iVar16 = iVar10;
            }
            lVar13 = FUN_1800fe7f8((longlong)iVar16 << 4);
            if (*(longlong *)(lVar3 + 0x18) != 0) {
              FUN_1802a82f0(lVar13,*(longlong *)(lVar3 + 0x18),(longlong)*(int *)(lVar3 + 0x10) << 4
                           );
              FUN_1800fe8d4(*(undefined8 *)(lVar3 + 0x18));
            }
            *(longlong *)(lVar3 + 0x18) = lVar13;
            *(int *)(lVar3 + 0x14) = iVar16;
            iVar14 = *(int *)(lVar3 + 0x10);
          }
          else {
            lVar13 = *(longlong *)(lVar3 + 0x18);
          }
          lVar12 = (longlong)iVar14 * 0x10;
          *(short *)(lVar13 + lVar12) = sVar1;
          *(undefined4 *)(lVar13 + 4 + lVar12) = uVar8;
          *(undefined4 *)(lVar13 + 8 + lVar12) = uVar7;
          *(undefined4 *)(lVar13 + 0xc + lVar12) = uVar9;
          *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
          iVar14 = *(int *)(lVar2 + 0x6c);
        }
      }
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < (longlong)iVar14);
  }
  FUN_18016c036(iVar15,*(undefined4 *)(lVar6 + 0xe6c),0,*(undefined8 *)(lVar3 + 0x18),
                *(undefined4 *)(lVar3 + 0x10));
  return;
}

