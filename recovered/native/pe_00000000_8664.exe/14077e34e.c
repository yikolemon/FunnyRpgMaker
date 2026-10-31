/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077e34e */

void FUN_14077e34e(uint *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong unaff_RBX;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uStack_28;
  
  puVar4 = &stack0xffffffffffffffe0;
  puVar8 = (uint *)((ulonglong)param_1 & 0xffffffff);
  uVar2 = *param_1;
  if (uVar2 == 0) {
    if (puVar8[1] == 0) {
      uStack_28 = 0x20;
      uVar3 = FUN_1407520ca();
      uVar5 = (ulonglong)((int)&uStack_28 + 4);
      uVar10 = (ulonglong)uVar3;
      uVar2 = puVar8[2];
      if (uVar2 != 0) {
        *(ulonglong *)(uVar5 - 8) = (ulonglong)(*puVar8 << 2);
        *(ulonglong *)(uVar5 - 0x10) = (ulonglong)uVar2;
        *(ulonglong *)(uVar5 - 0x18) = uVar10;
        *(undefined8 *)(uVar5 - 0x20) = 0x14077e403;
        FUN_1408b31a0();
        uVar6 = (ulonglong)((int)(uVar5 - 0x18) + 0xc);
        *(undefined8 *)(uVar6 - 8) = *(undefined8 *)(puVar8 + 2);
                    /* WARNING: Subroutine does not return */
        *(undefined **)(uVar6 - 0x10) = &UNK_14077e40e;
        FUN_14075219b();
      }
      puVar8[2] = uVar3;
      puVar8[1] = 8;
      uVar2 = *puVar8;
    }
    else {
      uVar10 = (ulonglong)puVar8[2];
      uVar2 = 0;
    }
    *(undefined4 *)(uVar10 + (ulonglong)uVar2 * 4) = *(undefined4 *)(unaff_RBX >> 0x20);
  }
  else {
    if (uVar2 == puVar8[1]) {
      iVar7 = 0;
      if (1 < param_4) {
        iVar7 = (int)uVar2 / 2;
      }
      uStack_28 = (ulonglong)((iVar7 + uVar2) * 4);
      uVar1 = FUN_1407520ca();
      puVar4 = (undefined1 *)(ulonglong)((int)&uStack_28 + 4);
      puVar9 = (undefined4 *)(ulonglong)uVar1;
      uVar3 = puVar8[2];
      if (uVar3 != 0) {
        *(ulonglong *)(puVar4 + -8) = (ulonglong)(*puVar8 << 2);
        *(ulonglong *)(puVar4 + -0x10) = (ulonglong)uVar3;
        *(undefined4 **)(puVar4 + -0x18) = puVar9;
        *(undefined8 *)(puVar4 + -0x20) = 0x14077e39d;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(puVar4 + -0x18) + 0xc) - 8) = *(undefined8 *)(puVar8 + 2);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(puVar4 + -0x18) + 0xc) - 0x10) = &UNK_14077e3a8;
        FUN_14075219b();
      }
      puVar8[2] = uVar1;
      puVar8[1] = iVar7 + uVar2;
      uVar2 = *puVar8;
    }
    else {
      puVar9 = (undefined4 *)(ulonglong)puVar8[2];
    }
    if (0 < (int)uVar2) {
      *(ulonglong *)(puVar4 + -8) = (ulonglong)(uVar2 << 2);
      *(undefined4 **)(puVar4 + -0x10) = puVar9;
      *(ulonglong *)(puVar4 + -0x18) = (ulonglong)((int)puVar9 + 4);
      *(undefined8 *)(puVar4 + -0x20) = 0x14077e3d7;
      FUN_1408b31a0();
      puVar9 = (undefined4 *)(ulonglong)puVar8[2];
    }
    *puVar9 = *(undefined4 *)(unaff_RBX >> 0x20);
  }
  *puVar8 = *puVar8 + 1;
  return;
}

