/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407539aa */

void FUN_1407539aa(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint in_R11D;
  int unaff_R14D;
  uint unaff_R15D;
  
  puVar8 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  iVar6 = puVar8[8];
  uVar12 = puVar8[9] - iVar6;
  if (uVar12 != 0) {
    uVar13 = (ulonglong)puVar8[7];
    uVar4 = param_1[3];
    *puVar8 = (int)param_1;
    if ((uVar4 == 0) || (*(char *)((uVar13 - 1) + (ulonglong)uVar4) == '\n')) {
      uVar1 = *param_1;
      if (uVar1 == param_1[1]) {
        if (uVar1 == 0) {
          uVar4 = 8;
        }
        else {
          uVar4 = (int)uVar1 / 2 + uVar1;
        }
        uVar2 = uVar1 + 1;
        if ((int)(uVar1 + 1) < (int)uVar4) {
          uVar2 = uVar4;
        }
        *(ulonglong *)(puVar8 + -2) = (ulonglong)(uVar2 * 4);
        *(undefined8 *)(puVar8 + -4) = 0x140753a0d;
        uVar1 = FUN_1407520ca();
        puVar8 = (uint *)(ulonglong)((int)(puVar8 + -2) + 4);
        uVar7 = (ulonglong)uVar1;
        param_1 = (uint *)(ulonglong)*puVar8;
        uVar4 = param_1[2];
        if (uVar4 != 0) {
          *(ulonglong *)(puVar8 + -2) = (ulonglong)(*param_1 << 2);
          *(ulonglong *)(puVar8 + -4) = (ulonglong)uVar4;
          *(ulonglong *)(puVar8 + -6) = uVar7;
          puVar8[-8] = 0x40753a29;
          puVar8[-7] = 1;
          FUN_1408b31a0();
          puVar9 = (uint *)(ulonglong)((int)(puVar8 + -6) + 0xc);
          *(undefined8 *)(puVar9 + -2) = *(undefined8 *)((ulonglong)*puVar9 + 8);
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar9 + -4) = &UNK_140753a37;
          FUN_14075219b();
        }
        param_1[2] = uVar1;
        param_1[1] = uVar2;
        uVar1 = *param_1;
        uVar4 = param_1[3];
        uVar13 = (ulonglong)puVar8[7];
      }
      else {
        uVar7 = (ulonglong)param_1[2];
      }
      *(uint *)(uVar7 + (ulonglong)uVar1 * 4) = uVar4;
      *param_1 = *param_1 + 1;
    }
    *(ulonglong *)((longlong)puVar8 + -8) = (ulonglong)uVar12;
    *(undefined8 *)((longlong)puVar8 + -0x10) = 10;
    *(ulonglong *)((longlong)puVar8 + -0x18) = (ulonglong)(uint)(iVar6 + (int)uVar13);
    *(undefined8 *)((longlong)puVar8 + -0x20) = 0x140753a5d;
    uVar12 = FUN_1408b1400();
    puVar10 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar8 + -0x18) + 0xc);
    if (uVar12 != 0) {
      iVar6 = (int)uVar13 + *(int *)((longlong)puVar10 + 0x24);
      *(int *)((longlong)puVar10 + 4) = iVar6;
      do {
        if (unaff_R15D < in_R11D) {
          puVar5 = (uint *)(ulonglong)*puVar10;
          uVar4 = *puVar5;
          if (uVar4 == puVar5[1]) {
            if (uVar4 == 0) {
              uVar1 = 8;
            }
            else {
              uVar1 = (int)uVar4 / 2 + uVar4;
            }
            if (unaff_R14D < (int)uVar1) {
              uVar4 = uVar1;
            }
            *(ulonglong *)(puVar10 + -2) = (ulonglong)(uVar4 * 4);
            puVar10[-4] = 0x40753aba;
            puVar10[-3] = 1;
            uVar2 = FUN_1407520ca();
            puVar10 = (uint *)(ulonglong)((int)(puVar10 + -2) + 4);
            uVar7 = (ulonglong)uVar2;
            puVar5 = (uint *)(ulonglong)*puVar10;
            uVar1 = puVar5[2];
            if (uVar1 != 0) {
              *(ulonglong *)(puVar10 + -2) = (ulonglong)(*puVar5 << 2);
              *(ulonglong *)(puVar10 + -4) = (ulonglong)uVar1;
              *(ulonglong *)(puVar10 + -6) = uVar7;
              puVar10[-8] = 0x40753ad6;
              puVar10[-7] = 1;
              FUN_1408b31a0();
              puVar11 = (uint *)(ulonglong)((int)(puVar10 + -6) + 0xc);
              *(undefined8 *)(puVar11 + -2) = *(undefined8 *)((ulonglong)*puVar11 + 8);
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar11 + -4) = &UNK_140753ae4;
              FUN_14075219b();
            }
            puVar5[2] = uVar2;
            puVar5[1] = uVar4;
            uVar4 = *puVar5;
          }
          else {
            uVar7 = (ulonglong)puVar5[2];
          }
          *(uint *)(uVar7 + (ulonglong)uVar4 * 4) = uVar12 - (int)uVar13;
          *puVar5 = *puVar5 + 1;
          uVar13 = (ulonglong)*(uint *)((longlong)puVar10 + 0x1c);
          iVar6 = *(int *)((longlong)puVar10 + 4);
        }
        *(ulonglong *)((longlong)puVar10 + -8) = (ulonglong)(iVar6 - uVar12);
        *(undefined8 *)((longlong)puVar10 + -0x10) = 10;
        *(ulonglong *)((longlong)puVar10 + -0x18) = (ulonglong)uVar12;
        *(undefined8 *)((longlong)puVar10 + -0x20) = 0x140753b0d;
        uVar12 = FUN_1408b1400();
        puVar10 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar10 + -0x18) + 0xc);
      } while (uVar12 != 0);
    }
    *(undefined8 *)((longlong)puVar10 + -8) = *(undefined8 *)((longlong)puVar10 + 0x24);
    uVar12 = *(uint *)((longlong)puVar10 + -4);
    *(undefined8 *)((longlong)puVar10 + -0x10) = *(undefined8 *)((ulonglong)uVar12 + 0xc);
    *(undefined8 *)((longlong)puVar10 + -0x18) = 0x140753b2a;
    uVar3 = FUN_140753b3a();
    *(undefined4 *)((ulonglong)uVar12 + 0xc) = uVar3;
  }
  return;
}

