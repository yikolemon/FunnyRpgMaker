/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077db76 */

void FUN_14077db76(int *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong unaff_RBX;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulonglong uStack_28;
  
  puVar4 = &stack0xffffffffffffffe0;
  piVar8 = (int *)((ulonglong)param_1 & 0xffffffff);
  iVar2 = *param_1;
  if (iVar2 == 0) {
    if (piVar8[1] == 0) {
      uStack_28 = 0x60;
      uVar3 = FUN_1407520ca();
      uVar5 = (ulonglong)((int)&uStack_28 + 4);
      uVar1 = piVar8[2];
      if (uVar1 != 0) {
        *(ulonglong *)(uVar5 - 8) = (ulonglong)(uint)(*piVar8 * 0xc);
        *(ulonglong *)(uVar5 - 0x10) = (ulonglong)uVar1;
        *(ulonglong *)(uVar5 - 0x18) = (ulonglong)uVar3;
        *(undefined8 *)(uVar5 - 0x20) = 0x14077dc33;
        FUN_1408b31a0();
        uVar6 = (ulonglong)((int)(uVar5 - 0x18) + 0xc);
        *(undefined8 *)(uVar6 - 8) = *(undefined8 *)(piVar8 + 2);
                    /* WARNING: Subroutine does not return */
        *(undefined **)(uVar6 - 0x10) = &UNK_14077dc3e;
        FUN_14075219b();
      }
      piVar8[2] = uVar3;
      piVar8[1] = 8;
      iVar2 = *piVar8;
    }
    else {
      uVar3 = piVar8[2];
      iVar2 = 0;
    }
    puVar9 = (undefined8 *)(ulonglong)(uVar3 + iVar2 * 0xc);
  }
  else {
    if (iVar2 == piVar8[1]) {
      iVar7 = 0;
      if (1 < param_4) {
        iVar7 = iVar2 / 2;
      }
      uStack_28 = (ulonglong)(uint)((iVar7 + iVar2) * 0xc);
      uVar1 = FUN_1407520ca();
      puVar4 = (undefined1 *)(ulonglong)((int)&uStack_28 + 4);
      puVar9 = (undefined8 *)(ulonglong)uVar1;
      uVar3 = piVar8[2];
      if (uVar3 != 0) {
        *(ulonglong *)(puVar4 + -8) = (ulonglong)(uint)(*piVar8 * 0xc);
        *(ulonglong *)(puVar4 + -0x10) = (ulonglong)uVar3;
        *(undefined8 **)(puVar4 + -0x18) = puVar9;
        *(undefined8 *)(puVar4 + -0x20) = 0x14077dbcb;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(puVar4 + -0x18) + 0xc) - 8) = *(undefined8 *)(piVar8 + 2);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(puVar4 + -0x18) + 0xc) - 0x10) = &UNK_14077dbd6;
        FUN_14075219b();
      }
      piVar8[2] = uVar1;
      piVar8[1] = iVar7 + iVar2;
      iVar2 = *piVar8;
    }
    else {
      puVar9 = (undefined8 *)(ulonglong)(uint)piVar8[2];
    }
    if (0 < iVar2) {
      *(ulonglong *)(puVar4 + -8) = (ulonglong)(uint)(iVar2 * 0xc);
      *(undefined8 **)(puVar4 + -0x10) = puVar9;
      *(ulonglong *)(puVar4 + -0x18) = (ulonglong)((int)puVar9 + 0xc);
      *(undefined8 *)(puVar4 + -0x20) = 0x14077dc08;
      FUN_1408b31a0();
      puVar9 = (undefined8 *)(ulonglong)(uint)piVar8[2];
    }
  }
  *(undefined4 *)(puVar9 + 1) = *(undefined4 *)((undefined8 *)(unaff_RBX >> 0x20) + 1);
  *puVar9 = *(undefined8 *)(unaff_RBX >> 0x20);
  *piVar8 = *piVar8 + 1;
  return;
}

