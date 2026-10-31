/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140755578 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140755578(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  puVar9 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x14);
  uVar2 = *(uint *)((longlong)puVar9 + 0x30);
  uVar12 = (ulonglong)*(uint *)((longlong)puVar9 + 0x2c);
  while( true ) {
    uVar8 = (ulonglong)_DAT_150af2cd9;
    *puVar9 = *(undefined4 *)(uVar8 + 0x14cc);
    uVar5 = *(uint *)(uVar8 + 0x2764);
    puVar9[3] = *(undefined4 *)(uVar8 + 0x2768);
    *(undefined4 *)(uVar8 + 0x2768) = 0;
    *(undefined4 *)(uVar8 + 0x2764) = 0;
    if (uVar2 == 0) {
      *(undefined8 *)(puVar9 + -2) = 0;
      *(ulonglong *)(puVar9 + -4) = uVar12;
      *(undefined8 *)(puVar9 + -6) = 0x1407555c0;
      uVar2 = FUN_14075544d();
      puVar9 = (uint *)(ulonglong)((int)(puVar9 + -4) + 8);
    }
    if (*(int *)((longlong)puVar9 + 0x28) != 0) {
      *(undefined4 *)((longlong)puVar9 + 8) =
           *(undefined4 *)((ulonglong)*(uint *)((longlong)puVar9 + 0x28) + 4);
      *(undefined4 *)((longlong)puVar9 + 4) = *(undefined4 *)(uVar8 + 0x276c);
      uVar1 = *(undefined4 *)(uVar8 + 0xd10);
      puVar10 = (undefined4 *)(ulonglong)((int)puVar9 - 8);
      puVar10[1] = *(undefined4 *)(uVar8 + 0xd20);
      *puVar10 = uVar1;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar10 + -2) = &UNK_140755610;
      FUN_140755a9a();
    }
    if (uVar5 != 0) {
      *(ulonglong *)((longlong)puVar9 + -8) = (ulonglong)uVar5;
      *(undefined8 *)((longlong)puVar9 + -0x10) = 0x140755665;
      iVar3 = FUN_1408c85c0();
      uVar11 = (ulonglong)((int)(undefined1 *)((longlong)puVar9 + -8) + 4);
      *(ulonglong *)(uVar11 - 8) = (ulonglong)(iVar3 + uVar5);
      *(ulonglong *)(uVar11 - 0x10) = (ulonglong)uVar5;
      *(undefined8 *)(uVar11 - 0x18) = *(undefined8 *)(uVar11 + 0x20);
      *(undefined8 *)(uVar11 - 0x20) = 0x140755675;
      FUN_140755578();
      puVar9 = (uint *)(ulonglong)((int)(uVar11 - 0x18) + 0xc);
    }
    uVar5 = *puVar9;
    iVar3 = *(int *)((ulonglong)uVar5 + 0x1cc);
    iVar4 = *(int *)(uVar8 + 0x2770);
    iVar7 = iVar3;
    if (iVar3 < *(int *)(uVar8 + 0x2770)) {
      *(int *)(uVar8 + 0x2770) = iVar3;
      iVar7 = *(int *)((ulonglong)uVar5 + 0x1cc);
      iVar4 = iVar3;
    }
    *puVar9 = (iVar7 - iVar4) * 4;
    do {
      *(ulonglong *)((longlong)puVar9 + -8) = (ulonglong)uVar2;
      *(ulonglong *)((longlong)puVar9 + -0x10) = uVar12;
      *(undefined8 *)((longlong)puVar9 + -0x18) = 0x1407556a8;
      uVar5 = FUN_1407521fe();
      puVar9 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar9 + -0x10) + 8);
      if (((uint)uVar12 != uVar5) || (uVar5 != uVar2)) {
        uVar6 = 1;
        if (*(char *)(uVar8 + 0x2749) != '\0') {
          uVar6 = (ulonglong)*puVar9;
        }
        *(ulonglong *)(puVar9 + -2) = uVar12;
        *(ulonglong *)(puVar9 + -4) = (ulonglong)(uVar5 - (uint)uVar12);
        puVar9[-6] = 0x10356101;
        puVar9[-5] = 0;
        *(ulonglong *)(puVar9 + -8) = uVar6;
        puVar9[-10] = 0x1033408f;
        puVar9[-9] = 0;
        puVar9[-0xc] = 0x407556db;
        puVar9[-0xb] = 1;
        FUN_140768ac6();
        puVar9 = (uint *)(ulonglong)((int)(puVar9 + -10) + 0x14);
        *(undefined1 *)(uVar8 + 0x2749) = 0;
        if (*(char *)(ulonglong)uVar5 == '\n') {
          *(undefined8 *)((longlong)puVar9 + -8) = 0x10355ea0;
          *(undefined8 *)((longlong)puVar9 + -0x10) = 0x1407556f4;
          FUN_140768ac6();
          puVar9 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar9 + -8) + 4);
          *(undefined1 *)(uVar8 + 0x2749) = 1;
        }
      }
      uVar12 = (ulonglong)(uVar5 + 1);
    } while (uVar5 != uVar2);
    uVar2 = *(uint *)((longlong)puVar9 + 0xc);
    uVar12 = (ulonglong)uVar2;
    if (uVar2 == 0) break;
    *(ulonglong *)((longlong)puVar9 + -8) = uVar12;
    *(undefined8 *)((longlong)puVar9 + -0x10) = 0x140755713;
    iVar3 = FUN_1408c85c0();
    puVar9 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar9 + -8) + 4);
    uVar2 = iVar3 + uVar2;
  }
  return;
}

