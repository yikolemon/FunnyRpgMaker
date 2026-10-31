/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e92ea */

void FUN_1407e92ea(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined8 *puVar15;
  
  puVar13 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x24);
  iVar1 = *(int *)((ulonglong)*(uint *)((longlong)puVar13 + 0x38) + 0x284);
  if (iVar1 != 0) {
    *(undefined4 *)((longlong)puVar13 + 0x10) = *(undefined4 *)((longlong)puVar13 + 0x3c);
    iVar2 = *(int *)((longlong)puVar13 + 0x44);
    iVar3 = *(int *)((longlong)puVar13 + 0x48);
    uVar8 = *(uint *)((ulonglong)*(uint *)((longlong)puVar13 + 0x38) + 0x28c);
    *(uint *)((longlong)puVar13 + 0x14) = uVar8 + iVar1 * 4;
    do {
      *(uint *)((longlong)puVar13 + 0x18) = uVar8;
      uVar9 = (ulonglong)*(uint *)(ulonglong)uVar8;
      if (((*(uint *)(uVar9 + 0x54) == 0) ||
          (*(char *)((ulonglong)*(uint *)(uVar9 + 0x54) + 1) == '\x01')) &&
         (*(int *)(uVar9 + 0x48) != 0)) {
        uVar8 = *(uint *)(uVar9 + 0x50);
        *(uint *)((longlong)puVar13 + 0x1c) = uVar8 + *(int *)(uVar9 + 0x48) * 4;
        do {
          puVar13[8] = uVar8;
          piVar14 = (int *)(ulonglong)*(uint *)(ulonglong)uVar8;
          if (((0 < *piVar14) && (piVar14[0x19] == iVar3 && piVar14[0x18] == iVar2)) &&
             (piVar14[0x16] == puVar13[4])) {
            puVar10 = (undefined4 *)((ulonglong)(puVar13 + 0x13) & 0xffffffff);
            uVar4 = puVar10[1];
            uVar5 = puVar10[2];
            uVar6 = puVar10[3];
            *puVar13 = *puVar10;
            puVar13[1] = uVar4;
            puVar13[2] = uVar5;
            puVar13[3] = uVar6;
            *(undefined8 *)(puVar13 + -2) = 0x1407e9380;
            FUN_1407e0384(piVar14);
            puVar13 = (undefined4 *)(ulonglong)((int)puVar13 - 0x10);
          }
          iVar1 = piVar14[0x24];
          if (iVar1 != 0) {
            uVar8 = piVar14[0x26];
            uVar9 = (ulonglong)uVar8;
            uVar12 = 0;
            do {
              if ((*(int *)(uVar9 + 0xc + uVar12) == iVar3 && *(int *)(uVar9 + 8 + uVar12) == iVar2)
                 && (*(int *)(uVar9 + uVar12) == *(int *)((longlong)puVar13 + 0x10))) {
                puVar15 = (undefined8 *)(ulonglong)(uVar8 + (int)uVar12);
                uVar7 = ((undefined8 *)((ulonglong)((longlong)puVar13 + 0x4c) & 0xffffffff))[1];
                *puVar15 = *(undefined8 *)((ulonglong)((longlong)puVar13 + 0x4c) & 0xffffffff);
                puVar15[1] = uVar7;
              }
              uVar11 = (int)uVar12 + 0x10;
              uVar12 = (ulonglong)uVar11;
            } while (iVar1 << 4 != uVar11);
          }
          uVar8 = *(int *)((longlong)puVar13 + 0x20) + 4;
        } while (uVar8 != *(uint *)((longlong)puVar13 + 0x1c));
      }
      uVar8 = *(int *)((longlong)puVar13 + 0x18) + 4;
    } while (uVar8 != *(uint *)((longlong)puVar13 + 0x14));
  }
  return;
}

