/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c6f24 */

ulonglong FUN_1408c6f24(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined8 unaff_RBX;
  int *piVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined8 unaff_RSI;
  uint unaff_EDI;
  uint uVar18;
  
  uVar9 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar1 = *(uint *)(uVar9 + 0xc);
  uVar13 = (ulonglong)uVar1;
  uVar16 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0xc);
  *(undefined8 *)(uVar16 - 8) = unaff_RBX;
  *(undefined8 *)(uVar16 - 0x10) = unaff_RSI;
  puVar17 = (undefined1 *)(uVar16 - 0x18);
  *(ulonglong *)(uVar16 - 0x18) = (ulonglong)unaff_EDI;
  if ((uVar1 != 0) && (uVar2 = *(uint *)(uVar9 + 0x10), uVar2 != 0)) {
    uVar3 = *(uint *)(uVar9 + 0x14);
    piVar15 = (int *)(ulonglong)uVar3;
    if ((uVar3 != 0) &&
       ((*(int *)(uVar9 + 8) != 0 &&
        (param_2 = 0xffffffff % uVar13, uVar2 <= (uint)(0xffffffff / uVar13))))) {
      *(uint *)(uVar9 - 8) = uVar3 + 0xc;
      if ((*(uint *)(ulonglong)(uVar3 + 0xc) & 0x4c0) == 0) {
        uVar8 = 0x1000;
      }
      else {
        uVar8 = piVar15[6];
      }
      *(uint *)(uVar9 - 4) = uVar8;
      uVar18 = uVar1 * uVar2;
      do {
        while( true ) {
          if (uVar18 == 0) {
            return (ulonglong)*(uint *)(uVar9 + 0x10);
          }
          puVar14 = (uint *)(ulonglong)(uVar3 + 0xc);
          iVar6 = (int)puVar17;
          if (((*puVar14 & 0xc0) == 0) || (piVar15[2] == 0)) break;
          if (piVar15[2] < 0) {
            *(undefined8 *)(puVar17 + -8) = 0x10;
            LOCK();
            *puVar14 = *puVar14 | (uint)*(undefined8 *)(puVar17 + -8);
            UNLOCK();
            goto LAB_1408c709f;
          }
          if ((*puVar14 & 1) != 0) goto LAB_1408c709f;
          uVar8 = uVar18;
          if ((uint)piVar15[2] <= uVar18) {
            uVar8 = piVar15[2];
          }
          *(ulonglong *)(puVar17 + -8) = (ulonglong)uVar8;
          *(undefined8 *)(puVar17 + -0x10) = *(undefined8 *)(uVar9 + 8);
          *(uint *)(uVar9 - 0xc) = uVar8;
          *(undefined8 *)(puVar17 + -0x18) = *(undefined8 *)piVar15;
          *(undefined8 *)(puVar17 + -0x20) = 0x1408c6fdf;
          FUN_1408b31a0();
          uVar12 = *(uint *)(uVar9 - 0xc);
          puVar17 = (undefined1 *)(ulonglong)(iVar6 - 0xc);
          piVar15[2] = piVar15[2] - uVar12;
          uVar18 = uVar18 - uVar12;
          *piVar15 = *piVar15 + uVar12;
LAB_1408c7055:
          uVar8 = *(uint *)(uVar9 - 4);
          *(int *)(uVar9 + 8) = *(int *)(uVar9 + 8) + uVar12;
        }
        if (uVar8 <= uVar18) {
          if ((*puVar14 & 0xc0) != 0) {
            *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(uVar9 + 0x18);
            *(int **)(puVar17 + -0x10) = piVar15;
            *(undefined8 *)(puVar17 + -0x18) = 0x1408c7002;
            iVar7 = FUN_1408c5629();
            if (iVar7 != 0) goto LAB_1408c709f;
            uVar8 = *(uint *)(uVar9 - 4);
          }
          uVar12 = uVar18;
          if (uVar8 != 0) {
            uVar12 = uVar18 - uVar18 % *(uint *)(uVar9 - 4);
          }
          *(undefined8 *)(puVar17 + -8) = 0xfffffffffffffffe;
          uVar13 = *(ulonglong *)(puVar17 + -8);
          *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(uVar9 + 0x18);
          uVar10 = uVar13 & 0xffffffff;
          if (uVar12 < (uint)uVar13) {
            uVar10 = (ulonglong)uVar12;
          }
          *(ulonglong *)(puVar17 + -0x10) = uVar10;
          *(undefined8 *)(puVar17 + -0x18) = *(undefined8 *)(uVar9 + 8);
          *(int *)(uVar9 - 0xc) = (int)uVar10;
          *(int **)(puVar17 + -0x20) = piVar15;
          *(undefined8 *)(puVar17 + -0x28) = 0x1408c7036;
          uVar11 = FUN_1408d056e();
          uVar5 = *(undefined8 *)(puVar17 + -0x20);
          *(undefined8 *)(puVar17 + -0x20) = uVar11;
          *(undefined8 *)(puVar17 + -0x28) = 0x1408c703d;
          uVar8 = FUN_1408d6b76(uVar5);
          puVar17 = (undefined1 *)(ulonglong)(iVar6 - 0x10);
          if (uVar8 != 0xffffffff) {
            uVar4 = *(uint *)(uVar9 - 0xc);
            uVar12 = uVar8;
            if (uVar4 < uVar8) {
              uVar12 = uVar4;
            }
            uVar18 = uVar18 - uVar12;
            if (uVar4 <= uVar8) goto LAB_1408c7055;
          }
          uVar3 = *(uint *)(uVar9 - 8);
          *(undefined8 *)(puVar17 + -8) = 0x10;
          LOCK();
          *(uint *)(ulonglong)uVar3 =
               *(uint *)(ulonglong)uVar3 | (uint)*(undefined8 *)(puVar17 + -8);
          UNLOCK();
LAB_1408c709f:
          return (ulonglong)(uVar1 * uVar2 - uVar18) / (ulonglong)*(uint *)(uVar9 + 0xc);
        }
        uVar8 = *(uint *)(uVar9 + 8);
        *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(uVar9 + 0x18);
        *(int **)(puVar17 + -0x10) = piVar15;
        *(ulonglong *)(puVar17 + -0x18) = (ulonglong)(uint)(int)*(char *)(ulonglong)uVar8;
        *(undefined8 *)(puVar17 + -0x20) = 0x1408c706a;
        iVar7 = FUN_1408d78be();
        puVar17 = (undefined1 *)(ulonglong)(iVar6 - 0xc);
        if (iVar7 == -1) goto LAB_1408c709f;
        uVar8 = piVar15[6];
        *(uint *)(uVar9 - 4) = uVar8;
        if ((int)uVar8 < 1) {
          uVar8 = 0;
          *(undefined4 *)(uVar9 - 4) = 0;
        }
        *(int *)(uVar9 + 8) = *(int *)(uVar9 + 8) + iVar7;
      } while( true );
    }
    uVar9 = (ulonglong)*(uint *)(uVar9 + 0x18);
    *(ulonglong *)(uVar16 - 0x20) = uVar9;
    *(undefined1 *)(uVar9 + 0x1c) = 1;
    *(undefined4 *)(uVar9 + 0x18) = 0x16;
    *(undefined8 *)(uVar16 - 0x28) = 0;
    *(undefined8 *)(uVar16 - 0x30) = 0;
    *(undefined8 *)(uVar16 - 0x38) = 0;
    *(undefined8 *)(uVar16 - 0x40) = 0;
    *(undefined8 *)(uVar16 - 0x48) = 0;
    *(undefined8 *)(uVar16 - 0x50) = 0x1408c6f5f;
    FUN_1408cbf04(uVar13,param_2);
  }
  return 0;
}

