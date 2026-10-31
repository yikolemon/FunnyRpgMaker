/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e03e6 */

void FUN_1407e03e6(ulonglong param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined8 in_RAX;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RBX;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  ulonglong uStack_30;
  undefined8 local_28;
  
  piVar7 = (int *)&local_28;
  piVar10 = (int *)(param_1 & 0xffffffff);
  iVar9 = (int)((ulonglong)unaff_RBX >> 0x20);
  iVar5 = (int)unaff_RBX;
  local_28 = in_RAX;
  if ((0xffff < (uint)(*(int *)(param_1 + 0x28) + iVar9)) && ((*(byte *)(piVar10 + 9) & 8) != 0)) {
    piVar10[0x1a] = piVar10[6];
    uStack_30 = 0x1407e0416;
    FUN_1407dff9a(piVar10);
  }
  piVar1 = (int *)(((ulonglong)(uint)piVar10[2] - 0x18) + (ulonglong)(uint)(*piVar10 << 6));
  *piVar1 = *piVar1 + iVar5;
  iVar4 = piVar10[6];
  iVar6 = piVar10[7];
  iVar9 = iVar9 + iVar4;
  if (iVar6 < iVar9) {
    local_28 = CONCAT44(local_28._4_4_,iVar4);
    if (iVar6 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar6 / 2 + iVar6;
    }
    if (iVar6 <= iVar9) {
      iVar6 = iVar9;
    }
    uStack_30 = (ulonglong)(uint)(iVar6 * 0x14);
    uVar3 = FUN_1407520ca();
    piVar7 = (int *)(ulonglong)((int)&uStack_30 + 4);
    uVar2 = piVar10[8];
    if (uVar2 != 0) {
      *(ulonglong *)(piVar7 + -2) = (ulonglong)(uint)(piVar10[6] * 0x14);
      *(ulonglong *)(piVar7 + -4) = (ulonglong)uVar2;
      *(ulonglong *)(piVar7 + -6) = (ulonglong)uVar3;
      piVar7[-8] = 0x407e0480;
      piVar7[-7] = 1;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(piVar7 + -6) + 0xc) - 8) = *(undefined8 *)(piVar10 + 8);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(piVar7 + -6) + 0xc) - 0x10) = &UNK_1407e048b;
      FUN_14075219b();
    }
    piVar10[8] = uVar3;
    piVar10[7] = iVar6;
    iVar5 = piVar7[6];
    iVar4 = *piVar7;
  }
  else {
    uVar3 = piVar10[8];
  }
  piVar10[6] = iVar9;
  piVar10[0xc] = uVar3 + iVar4 * 0x14;
  iVar9 = piVar10[3];
  iVar6 = piVar10[4];
  iVar5 = iVar5 + iVar9;
  if (iVar6 < iVar5) {
    if (iVar6 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar6 / 2 + iVar6;
    }
    *piVar7 = iVar5;
    if (iVar6 <= iVar5) {
      iVar6 = iVar5;
    }
    *(ulonglong *)(piVar7 + -2) = (ulonglong)(uint)(iVar6 * 2);
    piVar7[-4] = 0x407e04df;
    piVar7[-3] = 1;
    uVar3 = FUN_1407520ca();
    piVar8 = (int *)(ulonglong)((int)(piVar7 + -2) + 4);
    uVar2 = piVar10[5];
    if (uVar2 != 0) {
      *(ulonglong *)(piVar8 + -2) = (ulonglong)(uint)(piVar10[3] * 2);
      *(ulonglong *)(piVar8 + -4) = (ulonglong)uVar2;
      *(ulonglong *)(piVar8 + -6) = (ulonglong)uVar3;
      piVar8[-8] = 0x407e04f8;
      piVar8[-7] = 1;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(piVar8 + -6) + 0xc) - 8) = *(undefined8 *)(piVar10 + 5);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(piVar8 + -6) + 0xc) - 0x10) = &UNK_1407e0503;
      FUN_14075219b();
    }
    piVar10[5] = uVar3;
    piVar10[4] = iVar6;
    iVar5 = *piVar8;
  }
  else {
    uVar3 = piVar10[5];
  }
  piVar10[3] = iVar5;
  piVar10[0xd] = uVar3 + iVar9 * 2;
  return;
}

