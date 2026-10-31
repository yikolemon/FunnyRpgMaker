/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076e1dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076e1dc(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong unaff_RBX;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  undefined1 local_28 [8];
  
  puVar7 = (uint *)local_28;
  uVar8 = (uint)unaff_RBX;
  uVar9 = (ulonglong)_DAT_150b0b937;
  if ((*(byte *)(uVar9 + 0x27b4) & 8) != 0) {
    uStack_30 = unaff_RBX >> 0x20 & 0xff;
    uStack_40 = 0x1034cd6a;
    uStack_38 = unaff_RBX & 0xffffffff;
    FUN_1407518b6();
    puVar7 = (uint *)(ulonglong)((int)&uStack_40 + 0xc);
    if (((*(byte *)(uVar9 + 0x27b4) & 8) != 0) &&
       (iVar3 = *(int *)(uVar9 + 0x1fbc), (int)uVar8 < iVar3)) {
      uVar6 = (ulonglong)(uVar8 * 0x28 + 4);
      do {
        if ((*(byte *)(uVar9 + 0x27b4) & 8) != 0) {
          uVar1 = *(uint *)(uVar9 + 0x1fc4);
          uVar2 = *(uint *)(uVar1 + uVar6);
          if (uVar2 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = (ulonglong)*(uint *)((ulonglong)uVar2 + 4);
          }
          *(ulonglong *)((longlong)puVar7 + -8) = uVar5;
          *(undefined8 *)((longlong)puVar7 + -0x10) =
               *(undefined8 *)(((ulonglong)uVar1 - 4) + uVar6);
          *(undefined8 *)((longlong)puVar7 + -0x18) = 0x10355d05;
          *(undefined8 *)((longlong)puVar7 + -0x20) = 0x14076e256;
          FUN_1407518b6();
          puVar7 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar7 + -0x18) + 0xc);
          iVar3 = *(int *)(uVar9 + 0x1fbc);
        }
      } while ((int)uVar8 < iVar3);
    }
  }
  iVar3 = *(int *)(uVar9 + 0x1fc0);
  uVar1 = *(uint *)((ulonglong)*(uint *)(uVar9 + 0x1fc4) + 4 + (ulonglong)(uVar8 * 5) * 8);
  uVar6 = (ulonglong)uVar1;
  uVar2 = *(uint *)((ulonglong)*(uint *)(uVar9 + 0x1fc4) + 8 + (ulonglong)(uVar8 * 5) * 8);
  if (iVar3 < (int)uVar8) {
    *puVar7 = uVar2;
    if (iVar3 == 0) {
      uVar8 = 8;
    }
    else {
      uVar8 = iVar3 / 2 + iVar3;
    }
    if ((int)uVar8 <= (int)puVar7[6]) {
      uVar8 = puVar7[6];
    }
    *(ulonglong *)(puVar7 + -2) = (ulonglong)(uVar8 * 0x28);
    puVar7[-4] = 0x4076e2ba;
    puVar7[-3] = 1;
    uVar4 = FUN_1407520ca();
    puVar7 = (uint *)(ulonglong)((int)(puVar7 + -2) + 4);
    uVar2 = *(uint *)(uVar9 + 0x1fc4);
    if (uVar2 != 0) {
      *(ulonglong *)(puVar7 + -2) = (ulonglong)(uint)(*(int *)(uVar9 + 0x1fbc) * 0x28);
      *(ulonglong *)(puVar7 + -4) = (ulonglong)uVar2;
      *(ulonglong *)(puVar7 + -6) = (ulonglong)uVar4;
      puVar7[-8] = 0x4076e2dd;
      puVar7[-7] = 1;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(puVar7 + -6) + 0xc) - 8) = *(undefined8 *)(uVar9 + 0x1fc4);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(puVar7 + -6) + 0xc) - 0x10) = &UNK_14076e2eb;
      FUN_14075219b();
    }
    *(uint *)(uVar9 + 0x1fc4) = uVar4;
    *(uint *)(uVar9 + 0x1fc0) = uVar8;
    uVar8 = puVar7[6];
    uVar2 = *puVar7;
  }
  *(uint *)(uVar9 + 0x1fbc) = uVar8;
  if ((*(char *)((longlong)puVar7 + 0x1c) != '\0') && (uVar1 != 0)) {
    if ((*(byte *)(uVar6 + 0xf) & 0x10) != 0) {
      uVar2 = *(uint *)(uVar6 + 0x3a0);
    }
    if ((uVar2 == 0) || (*(char *)((ulonglong)uVar2 + 0xfa) != '\0')) {
      *(ulonglong *)((longlong)puVar7 + -8) = (ulonglong)(*(int *)(uVar9 + 0x2050) == 0);
      *(ulonglong *)((longlong)puVar7 + -0x10) = (ulonglong)uVar2;
      *(undefined8 *)((longlong)puVar7 + -0x18) = 0x14076e33e;
      FUN_14075b3b2();
    }
    else {
      *(undefined8 *)((longlong)puVar7 + -8) = 1;
      *(undefined8 *)((longlong)puVar7 + -0x10) = 0;
      *(undefined8 *)((longlong)puVar7 + -0x18) = 0;
      *(ulonglong *)((longlong)puVar7 + -0x20) = uVar6;
      *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14076e354;
      FUN_14075f7d8();
    }
  }
  return;
}

