/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407735f9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407735f9(ulonglong param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  int *piVar11;
  ulonglong uVar4;
  
  puVar8 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  uVar7 = (ulonglong)param_2;
  piVar11 = (int *)(param_1 & 0xffffffff);
  uVar1 = *(undefined4 *)((longlong)puVar8 + 0x1c);
  if ((*(byte *)((ulonglong)_DAT_42444891039d74c + 0x27b5) & 4) != 0) {
    *(undefined8 *)((longlong)puVar8 + -8) = *(undefined8 *)(uVar7 + 4);
    *(undefined8 *)((longlong)puVar8 + -0x10) = *(undefined8 *)piVar11;
    *(undefined8 *)((longlong)puVar8 + -0x18) = 0x10355a1e;
    *(undefined8 *)((longlong)puVar8 + -0x20) = 0x140773629;
    FUN_1407518b6();
    puVar8 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar8 + -0x18) + 0xc);
  }
  *(undefined4 *)(uVar7 + 0x430) = 0;
  *(byte *)(uVar7 + 0x409) = *(byte *)(uVar7 + 0x409) & 0xf6;
  *(undefined4 *)(uVar7 + 0x438) = uVar1;
  uVar3 = *(uint *)(uVar7 + 0xc) & 0xfeffffff;
  uVar4 = (ulonglong)uVar3;
  *(uint *)(uVar7 + 0xc) = uVar3;
  uVar3 = *(uint *)(uVar7 + 0x3a0);
  if (uVar3 != 0) {
    iVar2 = *(int *)((ulonglong)uVar3 + 0x1d8);
    *puVar8 = uVar3;
    uVar3 = *(uint *)((ulonglong)uVar3 + 0x1e0);
    puVar6 = (uint *)(ulonglong)uVar3;
    uVar10 = uVar3 + iVar2 * 4;
    if (0 < iVar2) {
      puVar6 = (uint *)(ulonglong)uVar3;
      do {
        if (*puVar6 == param_2) break;
        uVar5 = (int)puVar6 + 4;
        puVar6 = (uint *)(ulonglong)uVar5;
      } while (uVar5 < uVar10);
    }
    uVar5 = (uint)puVar6;
    if (uVar5 < uVar10) {
      *(ulonglong *)(puVar8 + -2) = (ulonglong)((iVar2 + (~(uVar5 - uVar3) >> 2)) * 4);
      *(ulonglong *)(puVar8 + -4) = (ulonglong)(uVar5 + 4);
      *(uint **)(puVar8 + -6) = puVar6;
      puVar8[-8] = 0x4077369a;
      puVar8[-7] = 1;
      FUN_1408b31a0();
      puVar8 = (uint *)(ulonglong)((int)(puVar8 + -6) + 0xc);
      *(int *)((ulonglong)*puVar8 + 0x1d8) = *(int *)((ulonglong)*puVar8 + 0x1d8) + -1;
      uVar4 = (ulonglong)*(uint *)(uVar7 + 0xc);
    }
  }
  *(undefined8 *)((longlong)puVar8 + -8) = 0;
  *(ulonglong *)((longlong)puVar8 + -0x10) = uVar4;
  *(ulonglong *)((longlong)puVar8 + -0x18) = uVar7;
  *(undefined8 *)((longlong)puVar8 + -0x20) = 0x1407736b2;
  FUN_140765368();
  puVar9 = (undefined1 *)(ulonglong)((int)(undefined1 *)((longlong)puVar8 + -0x18) + 0xc);
  if ((piVar11[0x1e] != 0) && (*(char *)((ulonglong)(uint)piVar11[0x1e] + 0xf8) == '\x01')) {
    *(undefined4 *)(uVar7 + 0x3c) = 0;
    *(undefined4 *)(uVar7 + 0x40) = 0;
    *(undefined1 *)(uVar7 + 0xf8) = 0;
    *(undefined1 *)(uVar7 + 0x101) = 1;
  }
  uVar3 = piVar11[9];
  if (0 < (int)uVar3) {
    uVar10 = piVar11[0xb];
    do {
      if (*(uint *)(ulonglong)uVar10 == param_2) {
        *(ulonglong *)(puVar9 + -8) = (ulonglong)(uVar3 * 4 - 4);
        *(ulonglong *)(puVar9 + -0x10) = (ulonglong)(uVar10 + 4);
        *(ulonglong *)(puVar9 + -0x18) = (ulonglong)uVar10;
        *(undefined8 *)(puVar9 + -0x20) = 0x14077370e;
        FUN_1408b31a0();
        puVar9 = (undefined1 *)(ulonglong)((int)(puVar9 + -0x18) + 0xc);
        uVar3 = piVar11[9];
        *(ulonglong *)(piVar11 + 9) = (ulonglong)uVar3;
        break;
      }
    } while (uVar3 != 0);
  }
  if (piVar11[0x1f] == param_2) {
    piVar11[0x1f] = 0;
  }
  *(byte *)((longlong)piVar11 + 0xad) = *(byte *)((longlong)piVar11 + 0xad) | 2;
  uVar10 = piVar11[0xc];
  if (uVar10 == 0) {
LAB_14077375e:
    if (uVar3 == 0) {
      if (((*(byte *)((longlong)piVar11 + 0x11) & 0xc) == 0) &&
         (*(int *)(uVar7 + 0x438) != *piVar11)) {
        *(undefined8 *)(puVar9 + -8) = 1;
        *(undefined8 *)(puVar9 + -0x10) = 0x1407737b2;
        FUN_1407748d7(*(undefined4 *)(puVar9 + 4),piVar11);
        return;
      }
      goto LAB_140773797;
    }
  }
  else {
    *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(uVar7 + 0xb8);
    *(ulonglong *)(puVar9 + -0x10) = (ulonglong)uVar10;
    *(undefined8 *)(puVar9 + -0x18) = 0x14077373e;
    FUN_1407a76b0();
    puVar9 = (undefined1 *)(ulonglong)((int)(puVar9 + -0x10) + 8);
    uVar3 = piVar11[9];
    if ((int)uVar3 < (int)(((*(byte *)((longlong)piVar11 + 0x11) & 8) == 0) + 1)) {
      *(undefined8 *)(puVar9 + -8) = 0x14077375b;
      FUN_14078209e(piVar11);
      uVar3 = piVar11[9];
      goto LAB_14077375e;
    }
  }
  if (((uVar3 == 1) && ((*(byte *)((longlong)piVar11 + 0x11) & 8) == 0)) && (piVar11[0x1e] != 0)) {
    *(undefined1 *)((ulonglong)*(uint *)(ulonglong)(uint)piVar11[0xb] + 0xfc) =
         *(undefined1 *)((ulonglong)(uint)piVar11[0x1e] + 0xfc);
  }
LAB_140773797:
  FUN_140781956(piVar11);
  return;
}

