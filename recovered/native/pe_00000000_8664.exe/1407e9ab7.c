/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e9ab7 */

void FUN_1407e9ab7(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 in_RAX;
  uint unaff_EBX;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uStack_30;
  undefined8 local_28;
  
  puVar7 = (uint *)&local_28;
  uVar5 = *(uint *)((ulonglong)unaff_EBX + 0x30);
  uVar6 = (ulonglong)uVar5;
  uVar9 = (ulonglong)*(uint *)((ulonglong)unaff_EBX + 0x290);
  uVar8 = *(int *)(uVar6 + 0x1c) / 2;
  iVar1 = *(int *)(uVar9 + 0x54);
  if (iVar1 < (int)uVar8) {
    local_28 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),uVar5);
    if (iVar1 == 0) {
      uVar5 = 8;
    }
    else {
      uVar5 = iVar1 / 2 + iVar1;
    }
    if ((int)uVar5 <= (int)uVar8) {
      uVar5 = uVar8;
    }
    uStack_30 = (ulonglong)(uVar5 * 0xc);
    uVar4 = FUN_1407520ca();
    puVar7 = (uint *)(ulonglong)((int)&uStack_30 + 4);
    uVar10 = (ulonglong)uVar4;
    uVar2 = *(uint *)(uVar9 + 0x58);
    if (uVar2 != 0) {
      *(ulonglong *)(puVar7 + -2) = (ulonglong)(uint)(*(int *)(uVar9 + 0x50) * 0xc);
      *(ulonglong *)(puVar7 + -4) = (ulonglong)uVar2;
      *(ulonglong *)(puVar7 + -6) = uVar10;
      puVar7[-8] = 0x407e9b2c;
      puVar7[-7] = 1;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(puVar7 + -6) + 0xc) - 8) = *(undefined8 *)(uVar9 + 0x58);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(puVar7 + -6) + 0xc) - 0x10) = &UNK_1407e9b37;
      FUN_14075219b();
    }
    *(uint *)(uVar9 + 0x58) = uVar4;
    *(uint *)(uVar9 + 0x54) = uVar5;
    uVar6 = (ulonglong)*puVar7;
  }
  else {
    uVar10 = (ulonglong)*(uint *)(uVar9 + 0x58);
    local_28 = in_RAX;
  }
  *(uint *)(uVar9 + 0x50) = uVar8;
  uVar3 = *(undefined4 *)(uVar6 + 0x1c);
  *(ulonglong *)((longlong)puVar7 + -8) = (ulonglong)uVar8;
  *(ulonglong *)((longlong)puVar7 + -0x10) = uVar10;
  *(undefined8 *)((longlong)puVar7 + -0x18) = *(undefined8 *)(uVar6 + 0x20);
  *(undefined8 *)((longlong)puVar7 + -0x20) = 0x1407e9b55;
  FUN_1407ea4ee(uVar9,uVar3);
  *(undefined4 *)(uVar9 + 0x84) = 0;
  *(undefined4 *)(uVar9 + 0x88) = 0;
  *(undefined8 *)(uVar9 + 0x98) = 0;
  *(undefined8 *)(uVar9 + 0xa0) = 0;
  return;
}

