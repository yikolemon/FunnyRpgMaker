/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076b869 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14076b869(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  uint3 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 unaff_RBX;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint unaff_EBP;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 uStack_28;
  undefined4 local_c;
  
  uVar9 = _DAT_150b08fc3;
  local_c = (undefined4)((ulonglong)unaff_RBX >> 0x20);
  uVar11 = (ulonglong)_DAT_150b08fc3;
  uVar10 = unaff_EBP | 0xd000;
  if ((unaff_EBP & 0x3c00) != 0) {
    uVar10 = unaff_EBP;
  }
  uVar21 = (ulonglong)uVar10;
  uStack_28 = CONCAT44(unaff_EBP,local_c);
  uVar7 = FUN_14076b490();
  uVar15 = (ulonglong)((int)&uStack_28 + 4);
  uVar22 = (ulonglong)uVar7;
  if (*(uint *)(uVar11 + 0x1e38) == uVar7) {
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return uVar11;
  }
  if (((uVar10 >> 0x10 & 1) != 0) && (*(int *)(uVar11 + 0x2048) == 0)) goto LAB_14076ba31;
  uVar13 = (ulonglong)*(uint *)(uVar15 + 0x1c);
  if ((uVar10 >> 0xd & 1) != 0) {
    uVar14 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if ((*(byte *)(uVar11 + 0x27b5) & 2) != 0) {
      *(ulonglong *)(uVar15 - 8) = uVar22;
      *(undefined8 *)(uVar15 - 0x10) = 0x14076b937;
      uVar12 = FUN_14075af35();
      uVar17 = (ulonglong)((int)(uVar15 - 8) + 4);
      *(ulonglong *)(uVar17 - 8) = uVar13;
      *(ulonglong *)(uVar17 - 0x10) = uVar21;
      *(undefined8 *)(uVar17 - 0x18) = uVar12;
      *(undefined8 *)(uVar17 - 0x20) = 0x1034ca52;
      *(undefined8 *)(uVar17 - 0x28) = 0x14076b947;
      FUN_1407518b6();
    }
    goto LAB_14076ba33;
  }
  if ((*(uint *)(uVar11 + 0x1528) == 0) || (*(uint *)(uVar11 + 0x1528) == *(uint *)(uVar15 + 0x1c)))
  {
LAB_14076b998:
    if ((uVar10 >> 0x11 & 1) == 0) {
      uVar9 = uVar9 + 0x1e3c;
    }
    else {
      uVar9 = *(int *)((ulonglong)*(uint *)(uVar11 + 0x14cc) + 0x3a8) + 8;
    }
    uVar1 = *(undefined4 *)(ulonglong)uVar9;
    *(ulonglong *)(uVar15 - 8) = uVar21;
    *(undefined8 *)(uVar15 - 0x10) = 0x14076b9bd;
    uVar10 = FUN_14076ba7d(uVar1,uVar13);
    puVar18 = (undefined1 *)(ulonglong)((int)(uVar15 - 8) + 4);
    if ((*(byte *)(uVar11 + 0x27b5) & 2) != 0) {
      *(ulonglong *)(puVar18 + -8) = uVar22;
      *(undefined8 *)(puVar18 + -0x10) = 0x14076b9d1;
      uVar12 = FUN_14075af35();
      uVar19 = (ulonglong)((int)(puVar18 + -8) + 4);
      *(ulonglong *)(uVar19 - 8) = (ulonglong)uVar10;
      *(undefined8 *)(uVar19 - 0x10) = *(undefined8 *)(uVar19 + 0x18);
      *(ulonglong *)(uVar19 - 0x18) = uVar21;
      *(undefined8 *)(uVar19 - 0x20) = uVar12;
      *(undefined8 *)(uVar19 - 0x28) = 0x1034ced0;
      *(undefined8 *)(uVar19 - 0x30) = 0x14076b9e5;
      FUN_1407518b6();
      puVar18 = (undefined1 *)(ulonglong)((int)(uVar19 - 0x28) + 0x14);
    }
    if (uVar10 != 0) {
      *(ulonglong *)(puVar18 + -8) = uVar22;
      *(undefined8 *)(puVar18 + -0x10) = 0x14076b9f2;
      uVar21 = FUN_14076b723();
      uVar20 = (ulonglong)((int)(puVar18 + -8) + 4);
      uVar22 = uVar21 & 0xffffffff;
      iVar2 = *(int *)(uVar20 + 0x1c);
      if ((int)(uint)*(ushort *)(uVar21 + 6) < (int)uVar10) {
        *(int *)(uVar22 + 0xc) = iVar2;
        *(short *)(uVar22 + 6) = (short)uVar10;
      }
      if (*(int *)(uVar22 + 8) == iVar2) {
        uVar5 = (uint3)(uVar10 >> 8);
        uVar14 = CONCAT71((uint7)uVar5,1);
        if ((*(byte *)(uVar11 + 0x27b5) & 2) != 0) {
          *(undefined8 *)(uVar20 - 8) = 0x1034cb90;
          *(undefined8 *)(uVar20 - 0x10) = 0x14076ba26;
          FUN_1407518b6();
          uVar14 = (ulonglong)CONCAT31(uVar5,*(int *)(uVar22 + 8) == iVar2);
        }
        goto LAB_14076ba33;
      }
    }
  }
  else if ((uVar10 >> 10 & 1) == 0) {
    if (*(char *)(uVar11 + 0xbe) == '\x01') {
      *(undefined8 *)(uVar15 - 8) = 0x14076b8ed;
      cVar6 = FUN_14076ba3a(uVar22);
      if (cVar6 != '\0') {
        if ((*(byte *)(uVar11 + 0x27b5) & 2) != 0) {
          *(ulonglong *)(uVar15 - 8) = uVar22;
          *(undefined8 *)(uVar15 - 0x10) = 0x14076b908;
          uVar12 = FUN_14075af35();
          uVar16 = (ulonglong)((int)(uVar15 - 8) + 4);
          *(ulonglong *)(uVar16 - 8) = uVar13;
          *(ulonglong *)(uVar16 - 0x10) = uVar21;
          *(undefined8 *)(uVar16 - 0x18) = uVar12;
          *(undefined8 *)(uVar16 - 0x20) = 0x1034c8ca;
          *(undefined8 *)(uVar16 - 0x28) = 0x14076b918;
          FUN_1407518b6();
        }
        goto LAB_14076ba31;
      }
    }
    if ((-1 < (short)uVar10) && (*(char *)(uVar11 + 0x1e34) == '\x01')) {
      uVar8 = uVar7 & 0xffff0fff;
      if (((uVar7 & 0xffff0fff) == 0) && (uVar8 = uVar7, uVar7 - 1 < (uVar7 ^ uVar7 - 1))) {
        uVar3 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        uVar8 = uVar3 + 0x28b;
        if ((uVar3 & 0x1c) != 0xc) {
          uVar8 = uVar7;
        }
      }
      if (0xffffff87 < uVar8 - 0x278) goto LAB_14076ba31;
    }
    goto LAB_14076b998;
  }
LAB_14076ba31:
  uVar14 = 0;
LAB_14076ba33:
  return uVar14 & 0xffffffff;
}

