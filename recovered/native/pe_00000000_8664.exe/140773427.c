/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140773427 */

void FUN_140773427(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar5;
  ulonglong unaff_RBX;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  undefined4 local_res8;
  undefined1 local_resc;
  ulonglong uStack_28;
  ulonglong uVar4;
  
  puVar6 = &stack0xffffffffffffffe0;
  uVar8 = (undefined4)((ulonglong)unaff_RBP >> 0x20);
  uVar4 = unaff_RBX >> 0x20;
  iVar3 = *(int *)(uVar4 + 0x26a8);
  if (iVar3 == *(int *)(uVar4 + 0x26ac)) {
    if (iVar3 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar3 / 2 + iVar3;
    }
    iVar7 = iVar3 + 1;
    if (iVar3 + 1 < iVar5) {
      iVar7 = iVar5;
    }
    uStack_28 = (ulonglong)(uint)(iVar7 * 0x24);
    uVar2 = FUN_1407520ca();
    puVar6 = (undefined1 *)(ulonglong)((int)&uStack_28 + 4);
    uVar9 = (ulonglong)uVar2;
    uVar1 = *(uint *)(uVar4 + 0x26b0);
    if (uVar1 != 0) {
      *(ulonglong *)(puVar6 + -8) = (ulonglong)(uint)(*(int *)(uVar4 + 0x26a8) * 0x24);
      *(ulonglong *)(puVar6 + -0x10) = (ulonglong)uVar1;
      *(ulonglong *)(puVar6 + -0x18) = uVar9;
      *(undefined8 *)(puVar6 + -0x20) = 0x1407734ac;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(puVar6 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(uVar4 + 0x26b0);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(puVar6 + -0x18) + 0xc) - 0x10) = &UNK_1407734ba;
      FUN_14075219b();
    }
    *(uint *)(uVar4 + 0x26b0) = uVar2;
    *(int *)(uVar4 + 0x26ac) = iVar7;
    iVar3 = *(int *)(uVar4 + 0x26a8);
    local_resc = puVar6[0x2c];
    local_res8 = *(undefined4 *)(puVar6 + 0x28);
    unaff_retaddr = *(undefined4 *)(puVar6 + 0x20);
    uVar8 = *(undefined4 *)(puVar6 + 0x1c);
  }
  else {
    uVar9 = (ulonglong)*(uint *)(uVar4 + 0x26b0);
  }
  uVar4 = (ulonglong)(uint)(iVar3 * 9);
  *(undefined4 *)(uVar9 + uVar4 * 4) = 1;
  *(undefined4 *)(uVar9 + 4 + uVar4 * 4) = *(undefined4 *)(puVar6 + 0x18);
  *(undefined4 *)(uVar9 + 8 + uVar4 * 4) = uVar8;
  *(undefined4 *)(uVar9 + 0xc + uVar4 * 4) = unaff_retaddr;
  *(undefined4 *)(uVar9 + 0x10 + uVar4 * 4) = unaff_retaddr_00;
  *(undefined4 *)(uVar9 + 0x14 + uVar4 * 4) = local_res8;
  *(undefined1 *)(uVar9 + 0x18 + uVar4 * 4) = local_resc;
  *(undefined4 *)(uVar9 + 0x1c + uVar4 * 4) = 0;
  *(undefined4 *)(uVar9 + 0x20 + uVar4 * 4) = 0;
  *(int *)((ulonglong)*(uint *)(puVar6 + 0x14) + 0x26a8) =
       *(int *)((ulonglong)*(uint *)(puVar6 + 0x14) + 0x26a8) + 1;
  return;
}

