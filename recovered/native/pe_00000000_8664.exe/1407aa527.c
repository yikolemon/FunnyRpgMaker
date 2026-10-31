/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407aa527 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1407aa527(uint param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  puVar8 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x10);
  bVar2 = 0;
  if ((0 < param_2) && (uVar11 = (ulonglong)param_1, (*(uint *)(uVar11 + 8) & 0x400) == 0)) {
    uVar5 = *(uint *)(uVar11 + 0x14);
    uVar12 = (ulonglong)(param_2 + uVar5);
    *(ulonglong *)((longlong)puVar8 + -8) = uVar12;
    *(ulonglong *)((longlong)puVar8 + -0x10) = (ulonglong)uVar5;
    *(undefined8 *)((longlong)puVar8 + -0x18) = 0x1407aa561;
    uVar5 = FUN_140752a1a();
    uVar9 = (ulonglong)((int)(undefined1 *)((longlong)puVar8 + -0x10) + 8);
    *(ulonglong *)(uVar9 - 8) = (ulonglong)(uint)(*(int *)(uVar11 + 0x14) + *(int *)(uVar11 + 0x10))
    ;
    *(ulonglong *)(uVar9 - 0x10) = uVar12;
    *(int **)(uVar9 - 0x18) = (int *)(uVar9 + 8 & 0xffffffff);
    *(undefined8 *)(uVar9 - 0x20) = 0x1407aa578;
    FUN_140750fa5();
    uVar10 = (ulonglong)((int)(uVar9 - 0x18) + 0xc);
    *(ulonglong *)(uVar10 - 8) =
         (ulonglong)(uint)(*(int *)(uVar11 + 0x14) + *(int *)(uVar11 + 0x10));
    *(ulonglong *)(uVar10 - 0x10) = (ulonglong)uVar5;
    *(ulonglong *)(uVar10 - 0x18) = uVar10 + 4 & 0xffffffff;
    *(undefined8 *)(uVar10 - 0x20) = 0x1407aa58d;
    uVar7 = FUN_140750fa5();
    puVar8 = (undefined4 *)(ulonglong)((int)(uVar10 - 0x18) + 0xc);
    uVar6 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    iVar1 = *(int *)(uVar9 + 8 & 0xffffffff);
    if ((iVar1 != 9) && ((iVar1 != 0x20 && (iVar1 != 0x3000)))) {
      uVar6 = 0;
    }
    *puVar8 = uVar6;
    *(undefined8 *)(puVar8 + -2) = 0x1407aa5b1;
    bVar2 = FUN_1407aa08d();
    iVar1 = puVar8[1];
    bVar3 = 0;
    if (((iVar1 != 9) && (iVar1 != 0x20)) && (bVar3 = 0, iVar1 != 0x3000)) {
      bVar3 = (byte)*puVar8;
    }
    *(undefined8 *)(puVar8 + -2) = 0x1407aa5d5;
    cVar4 = FUN_1407aa08d();
    bVar2 = bVar2 ^ 1;
    if (cVar4 == '\0') {
      bVar2 = bVar3;
    }
  }
  if (_DAT_150b332f4 != (*(uint *)((longlong)puVar8 + 0xc) ^ (uint)puVar8)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((longlong)puVar8 + -8) = FUN_1407aa60b;
    FUN_1408802b0(*(uint *)((longlong)puVar8 + 0xc) ^ (uint)puVar8);
  }
  return bVar2;
}

