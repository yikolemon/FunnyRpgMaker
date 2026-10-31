/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e9023 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e9023(void)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar9;
  
  iVar8 = (int)&stack0xffffffffffffffe0;
  puVar9 = (uint *)(ulonglong)(iVar8 - 8);
  uVar11 = puVar9[9];
  puVar12 = (undefined4 *)(ulonglong)puVar9[8];
  *puVar9 = *(undefined4 *)((ulonglong)puVar9[7] + 0x290);
  if ((*(byte *)((ulonglong)_DAT_3c74c0851039d74c + 0x27b5) & 1) != 0) {
    if (puVar12[6] == 0) {
      uVar4 = 0x1033cf31;
    }
    else {
      uVar4 = *(undefined4 *)(ulonglong)(uint)puVar12[8];
    }
    fVar2 = *(float *)((ulonglong)uVar11 + 0x10);
    puVar10 = (undefined4 *)(ulonglong)(iVar8 - 0x18);
    puVar10[3] = uVar4;
    *(double *)(puVar10 + 1) = (double)fVar2;
    *puVar10 = 0x10355d33;
    *(undefined8 *)(puVar10 + -2) = 0x1407e9081;
    FUN_1407518b6();
    puVar9 = (uint *)(ulonglong)(iVar8 - 8);
  }
  iVar8 = *(int *)((ulonglong)uVar11 + 0x24);
  if (iVar8 != 0) {
    uVar11 = *(uint *)((ulonglong)*(uint *)((longlong)puVar9 + 0x24) + 0x2c);
    uVar6 = 0;
    do {
      uVar5 = *(uint *)((ulonglong)uVar11 + 0x28 + uVar6);
      if (uVar5 != 0xffffffff) {
        *(ulonglong *)((longlong)puVar9 + -8) = (ulonglong)uVar5;
        *(undefined8 *)((longlong)puVar9 + -0x10) = *(undefined8 *)((longlong)puVar9 + 0x18);
        *(undefined8 *)((longlong)puVar9 + -0x18) = 0x1407e90aa;
        FUN_1407e8066();
        puVar9 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar9 + -0x10) + 8);
      }
      uVar5 = (int)uVar6 + 0x2c;
      uVar6 = (ulonglong)uVar5;
    } while (iVar8 * 0x2c != uVar5);
  }
  iVar8 = puVar12[6];
  uVar6 = (ulonglong)*(uint *)((ulonglong)*(uint *)((longlong)puVar9 + 0x24) + 0x4c);
  if (iVar8 == 0) {
    uVar7 = (ulonglong)*(uint *)((longlong)puVar9 + 0x24);
  }
  else {
    *(undefined4 *)((longlong)puVar9 + 4) = puVar12[8];
    uVar7 = 0;
    do {
      uVar11 = *(uint *)(*(uint *)((longlong)puVar9 + 4) + uVar7);
      uVar5 = *(uint *)((ulonglong)uVar11 + 0x74);
      if (uVar5 == 0) {
        uVar5 = *(uint *)((ulonglong)*(uint *)((longlong)puVar9 + 0x1c) + 0x294);
      }
      uVar3 = *(uint *)((ulonglong)uVar5 + 0x1c);
      if (uVar3 != 0) {
        *(ulonglong *)((longlong)puVar9 + -8) = uVar6;
        *(undefined8 *)((longlong)puVar9 + -0x10) = *(undefined8 *)((longlong)puVar9 + 0x20);
        *(ulonglong *)((longlong)puVar9 + -0x18) = (ulonglong)uVar11;
        *(undefined8 *)((longlong)puVar9 + -0x20) = *(undefined8 *)((longlong)puVar9 + 0x10);
        *(undefined8 *)((longlong)puVar9 + -0x28) = 0x1407e90f9;
        (*(code *)(ulonglong)uVar3)();
        puVar9 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar9 + -0x20) + 0x10);
      }
      uVar6 = (ulonglong)(uint)((int)uVar6 + *(int *)((ulonglong)uVar5 + 0x24));
      uVar11 = (int)uVar7 + 4;
      uVar7 = (ulonglong)uVar11;
    } while (iVar8 << 2 != uVar11);
    uVar7 = (ulonglong)*(uint *)((longlong)puVar9 + 0x24);
    uVar6 = (ulonglong)*(uint *)(uVar7 + 0x4c);
    puVar12 = (undefined4 *)(ulonglong)*(uint *)((longlong)puVar9 + 0x20);
  }
  if ((int)uVar6 != 0) {
    *(ulonglong *)(puVar9 + -2) = uVar6;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar9 + -4) = &UNK_1407e9121;
    FUN_14075219b();
  }
  uVar11 = *puVar9;
  puVar9[-2] = 0;
  puVar9[-1] = 0;
  *(undefined8 *)(puVar9 + -4) = *(undefined8 *)(uVar7 + 0x44);
  puVar9[-6] = 0x407e913f;
  puVar9[-5] = 1;
  FUN_14075324c(uVar11 + 0xc0);
  piVar1 = (int *)((ulonglong)uVar11 + 0xcc);
  *piVar1 = *piVar1 + 1;
  puVar9[-6] = 0x407e914c;
  puVar9[-5] = 1;
  FUN_1407e915c(uVar7);
  *(byte *)(uVar7 + 0x3f) = *(byte *)(uVar7 + 0x3f) | 4;
  *puVar12 = 0;
  return;
}

