/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076ad2a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076ad2a(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  ulonglong uVar6;
  
  uVar4 = _DAT_150b0848e;
  puVar10 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x10);
  uVar13 = (ulonglong)_DAT_150b0848e;
  if (*(char *)(uVar13 + 0x2824) != '\0') {
    uVar9 = *(undefined4 *)(puVar10 + 0x24);
    uVar12 = (ulonglong)*(uint *)(uVar13 + 0x14cc);
    iVar2 = (int)*(char *)(uVar13 + 0x2826);
    if (iVar2 == -1) {
      *(undefined1 *)(uVar13 + 0x2826) = 0;
      iVar2 = *(int *)(uVar12 + 0x138);
      iVar8 = *(int *)(uVar13 + 0x282c);
      if (iVar8 <= iVar2) {
        if (iVar8 == 0) {
          iVar8 = 8;
        }
        else {
          iVar8 = iVar8 / 2 + iVar8;
        }
        if (iVar8 <= iVar2 + 1) {
          iVar8 = iVar2 + 1;
        }
        *(ulonglong *)(puVar10 + -8) = (ulonglong)(uint)(iVar8 * 0xc);
        *(undefined8 *)(puVar10 + -0x10) = 0x14076ae08;
        uVar5 = FUN_1407520ca();
        puVar10 = (undefined1 *)(ulonglong)((int)(puVar10 + -8) + 4);
        uVar4 = *(uint *)(uVar13 + 0x2830);
        if (uVar4 != 0) {
          *(ulonglong *)(puVar10 + -8) = (ulonglong)(uint)(*(int *)(uVar13 + 0x2828) * 0xc);
          *(ulonglong *)(puVar10 + -0x10) = (ulonglong)uVar4;
          *(undefined8 *)(puVar10 + -0x18) = uVar5;
          *(int *)(puVar10 + -0xc) = (int)uVar5;
          *(undefined8 *)(puVar10 + -0x20) = 0x14076ae2d;
          FUN_1408b31a0();
          *(undefined8 *)((ulonglong)((int)(puVar10 + -0x18) + 0xc) - 8) =
               *(undefined8 *)(uVar13 + 0x2830);
                    /* WARNING: Subroutine does not return */
          *(undefined **)((ulonglong)((int)(puVar10 + -0x18) + 0xc) - 0x10) = &UNK_14076ae3b;
          FUN_14075219b();
        }
        *(int *)(uVar13 + 0x2830) = (int)uVar5;
        *(int *)(uVar13 + 0x282c) = iVar8;
        uVar9 = *(undefined4 *)(puVar10 + 0x24);
      }
      if (*(int *)(uVar13 + 0x2828) <= iVar2) {
        uVar4 = *(int *)(uVar13 + 0x2828) * 4 + 8;
        do {
          uVar6 = (ulonglong)uVar4;
          uVar7 = (ulonglong)*(uint *)(uVar13 + 0x2830);
          *(undefined4 *)((uVar7 - 4) + uVar6) = 0xff0000;
          *(undefined4 *)((uVar7 - 8) + uVar6) = 0;
          *(undefined4 *)(uVar7 + uVar6) = 0xffffffff;
          uVar4 = uVar4 + 0xc;
        } while (uVar4 != 0);
      }
      *(int *)(uVar13 + 0x2828) = iVar2 + 1;
      iVar2 = *(int *)(uVar12 + 0x138);
      if (-1 < iVar2) {
        uVar7 = 0;
        uVar6 = 0;
        do {
          iVar8 = (int)uVar7;
          uVar14 = uVar9;
          if (iVar8 < iVar2) {
            uVar14 = *(undefined4 *)((ulonglong)*(uint *)(uVar12 + 0x140) + uVar7 * 4);
          }
          *(undefined4 *)(*(uint *)(uVar13 + 0x2830) + uVar6) = uVar14;
          iVar2 = *(int *)(uVar12 + 0x138);
          uVar6 = (ulonglong)((int)uVar6 + 0xc);
          uVar7 = (ulonglong)(iVar8 + 1);
        } while (iVar8 < iVar2);
      }
    }
    else if (*(int *)(uVar12 + 0x138) == iVar2) {
      iVar8 = *(int *)(puVar10 + 0x28);
      iVar1 = *(int *)(uVar13 + 0x2830);
      uVar12 = (ulonglong)(uint)(iVar1 + iVar2 * 0xc);
      puVar11 = puVar10;
      if (*(int *)(uVar12 + 8) == -1) {
        *(undefined4 *)(puVar10 + 8) = 0;
        *(undefined4 *)(puVar10 + 4) = 0;
        uVar3 = iVar8 - 4;
        if (uVar3 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x00014076ada9 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((ulonglong)uVar3 * 4 + 0x102b9200))(iVar1,uVar9);
          return;
        }
        *(uint *)(uVar12 + 8) =
             *(int *)(uVar13 + 0x2834) + -1 + (uint)(*(int *)(uVar13 + 0x2834) == 0);
        *(ulonglong *)(puVar10 + -8) = (ulonglong)*(uint *)(puVar10 + 4);
        puVar11 = puVar10 + -0x10;
        *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + 4);
        *(undefined8 *)(puVar10 + -0x18) = 0x14076af50;
        FUN_1407537b0(uVar4 + 0x2834);
      }
      *(undefined1 *)(uVar12 + 5) = 1;
      puVar10 = puVar11;
      if (*(char *)(uVar12 + 6) == -1) {
        *(char *)(uVar12 + 6) = (char)iVar8;
      }
    }
  }
  if (_DAT_150af3c6b != (*(uint *)(puVar10 + 0xc) ^ (uint)puVar10)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar10 + -8) = FUN_14076af82;
    FUN_1408802b0(*(uint *)(puVar10 + 0xc) ^ (uint)puVar10);
  }
  return;
}

