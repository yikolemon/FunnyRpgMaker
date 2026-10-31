/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e3912 */

void FUN_1407e3912(ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong unaff_RBX;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint unaff_retaddr;
  ulonglong uStack_28;
  
  puVar6 = &stack0xffffffffffffffe0;
  if (0xffffff < unaff_retaddr) {
    uVar7 = param_1 & 0xffffffff;
    uVar1 = *(uint *)(param_1 + 0x38);
    if (uVar1 == *(uint *)(param_1 + 0x3c)) {
      if (uVar1 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = (int)uVar1 / 2 + uVar1;
      }
      iVar5 = uVar1 + 1;
      if ((int)(uVar1 + 1) < iVar4) {
        iVar5 = iVar4;
      }
      uStack_28 = (ulonglong)(uint)(iVar5 * 8);
      uVar2 = FUN_1407520ca();
      puVar6 = (undefined1 *)(ulonglong)((int)&uStack_28 + 4);
      uVar8 = (ulonglong)uVar2;
      uVar1 = *(uint *)(uVar7 + 0x40);
      if (uVar1 != 0) {
        *(ulonglong *)(puVar6 + -8) = (ulonglong)(uint)(*(int *)(uVar7 + 0x38) << 3);
        *(ulonglong *)(puVar6 + -0x10) = (ulonglong)uVar1;
        *(ulonglong *)(puVar6 + -0x18) = uVar8;
        *(undefined8 *)(puVar6 + -0x20) = 0x1407e397c;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(puVar6 + -0x18) + 0xc) - 8) =
             *(undefined8 *)(uVar7 + 0x40);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(puVar6 + -0x18) + 0xc) - 0x10) = &UNK_1407e3987;
        FUN_14075219b();
      }
      *(uint *)(uVar7 + 0x40) = uVar2;
      *(int *)(uVar7 + 0x3c) = iVar5;
      uVar1 = *(uint *)(uVar7 + 0x38);
    }
    else {
      uVar8 = (ulonglong)*(uint *)(uVar7 + 0x40);
    }
    uVar2 = *(uint *)(puVar6 + 0x18);
    *(undefined8 *)(uVar8 + (ulonglong)uVar1 * 8) = *(undefined8 *)(unaff_RBX >> 0x20);
    iVar4 = *(int *)(uVar7 + 0x38);
    uVar1 = iVar4 + 1;
    *(uint *)(uVar7 + 0x38) = uVar1;
    if (uVar1 == *(uint *)(uVar7 + 0x3c)) {
      iVar4 = iVar4 + 2;
      if (uVar1 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = (int)uVar1 / 2 + uVar1;
      }
      if (iVar4 < iVar5) {
        iVar4 = iVar5;
      }
      *(ulonglong *)(puVar6 + -8) = (ulonglong)(uint)(iVar4 * 8);
      *(undefined8 *)(puVar6 + -0x10) = 0x1407e39de;
      uVar3 = FUN_1407520ca();
      puVar6 = (undefined1 *)(ulonglong)((int)(puVar6 + -8) + 4);
      uVar8 = (ulonglong)uVar3;
      uVar1 = *(uint *)(uVar7 + 0x40);
      if (uVar1 != 0) {
        *(ulonglong *)(puVar6 + -8) = (ulonglong)(uint)(*(int *)(uVar7 + 0x38) << 3);
        *(ulonglong *)(puVar6 + -0x10) = (ulonglong)uVar1;
        *(ulonglong *)(puVar6 + -0x18) = uVar8;
        *(undefined8 *)(puVar6 + -0x20) = 0x1407e39f8;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(puVar6 + -0x18) + 0xc) - 8) =
             *(undefined8 *)(uVar7 + 0x40);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(puVar6 + -0x18) + 0xc) - 0x10) = &UNK_1407e3a03;
        FUN_14075219b();
      }
      *(uint *)(uVar7 + 0x40) = uVar3;
      *(int *)(uVar7 + 0x3c) = iVar4;
      uVar1 = *(uint *)(uVar7 + 0x38);
    }
    else {
      uVar8 = (ulonglong)*(uint *)(uVar7 + 0x40);
    }
    uVar3 = *(uint *)(puVar6 + 0x1c);
    *(undefined8 *)(uVar8 + (ulonglong)uVar1 * 8) = *(undefined8 *)(ulonglong)uVar2;
    iVar4 = *(int *)(uVar7 + 0x38);
    uVar1 = iVar4 + 1;
    *(uint *)(uVar7 + 0x38) = uVar1;
    if (uVar1 == *(uint *)(uVar7 + 0x3c)) {
      iVar4 = iVar4 + 2;
      if (uVar1 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = (int)uVar1 / 2 + uVar1;
      }
      if (iVar4 < iVar5) {
        iVar4 = iVar5;
      }
      *(ulonglong *)(puVar6 + -8) = (ulonglong)(uint)(iVar4 * 8);
      *(undefined8 *)(puVar6 + -0x10) = 0x1407e3a5b;
      uVar2 = FUN_1407520ca();
      puVar6 = (undefined1 *)(ulonglong)((int)(puVar6 + -8) + 4);
      uVar8 = (ulonglong)uVar2;
      uVar1 = *(uint *)(uVar7 + 0x40);
      if (uVar1 != 0) {
        *(ulonglong *)(puVar6 + -8) = (ulonglong)(uint)(*(int *)(uVar7 + 0x38) << 3);
        *(ulonglong *)(puVar6 + -0x10) = (ulonglong)uVar1;
        *(ulonglong *)(puVar6 + -0x18) = uVar8;
        *(undefined8 *)(puVar6 + -0x20) = 0x1407e3a75;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(puVar6 + -0x18) + 0xc) - 8) =
             *(undefined8 *)(uVar7 + 0x40);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(puVar6 + -0x18) + 0xc) - 0x10) = &UNK_1407e3a80;
        FUN_14075219b();
      }
      *(uint *)(uVar7 + 0x40) = uVar2;
      *(int *)(uVar7 + 0x3c) = iVar4;
      uVar1 = *(uint *)(uVar7 + 0x38);
    }
    else {
      uVar8 = (ulonglong)*(uint *)(uVar7 + 0x40);
    }
    uVar2 = *(uint *)(puVar6 + 0x20);
    *(undefined8 *)(uVar8 + (ulonglong)uVar1 * 8) = *(undefined8 *)(ulonglong)uVar3;
    iVar4 = *(int *)(uVar7 + 0x38);
    uVar1 = iVar4 + 1;
    *(uint *)(uVar7 + 0x38) = uVar1;
    if (uVar1 == *(uint *)(uVar7 + 0x3c)) {
      iVar4 = iVar4 + 2;
      if (uVar1 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = (int)uVar1 / 2 + uVar1;
      }
      if (iVar4 < iVar5) {
        iVar4 = iVar5;
      }
      *(ulonglong *)(puVar6 + -8) = (ulonglong)(uint)(iVar4 * 8);
      *(undefined8 *)(puVar6 + -0x10) = 0x1407e3ad7;
      uVar3 = FUN_1407520ca();
      puVar6 = (undefined1 *)(ulonglong)((int)(puVar6 + -8) + 4);
      uVar8 = (ulonglong)uVar3;
      uVar1 = *(uint *)(uVar7 + 0x40);
      if (uVar1 != 0) {
        *(ulonglong *)(puVar6 + -8) = (ulonglong)(uint)(*(int *)(uVar7 + 0x38) << 3);
        *(ulonglong *)(puVar6 + -0x10) = (ulonglong)uVar1;
        *(ulonglong *)(puVar6 + -0x18) = uVar8;
        *(undefined8 *)(puVar6 + -0x20) = 0x1407e3af1;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(puVar6 + -0x18) + 0xc) - 8) =
             *(undefined8 *)(uVar7 + 0x40);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(puVar6 + -0x18) + 0xc) - 0x10) = &UNK_1407e3afc;
        FUN_14075219b();
      }
      *(uint *)(uVar7 + 0x40) = uVar3;
      *(int *)(uVar7 + 0x3c) = iVar4;
      uVar1 = *(uint *)(uVar7 + 0x38);
    }
    else {
      uVar8 = (ulonglong)*(uint *)(uVar7 + 0x40);
    }
    *(undefined8 *)(uVar8 + (ulonglong)uVar1 * 8) = *(undefined8 *)(ulonglong)uVar2;
    uVar1 = *(uint *)(uVar7 + 0x38);
    uVar2 = *(uint *)(uVar7 + 0x40);
    *(uint *)(uVar7 + 0x38) = uVar1;
    *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + 0x24);
    *(ulonglong *)(puVar6 + -0x10) = (ulonglong)uVar1;
    *(ulonglong *)(puVar6 + -0x18) = (ulonglong)uVar2;
    *(undefined8 *)(puVar6 + -0x20) = 0x1407e3b29;
    FUN_1407e1238(uVar7);
    *(undefined4 *)(uVar7 + 0x38) = 0;
  }
  return;
}

