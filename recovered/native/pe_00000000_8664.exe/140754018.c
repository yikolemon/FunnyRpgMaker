/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140754018 */

void FUN_140754018(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uStack_28;
  
  piVar8 = (int *)((ulonglong)param_1 & 0xffffffff);
  iVar3 = *param_1;
  if (iVar3 == param_1[1]) {
    if (iVar3 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar3 / 2 + iVar3;
    }
    iVar7 = iVar3 + 1;
    if (iVar3 + 1 < iVar4) {
      iVar7 = iVar4;
    }
    uStack_28 = (ulonglong)(uint)(iVar7 * 0xc);
    uVar2 = FUN_1407520ca();
    uVar5 = (ulonglong)((int)&uStack_28 + 4);
    uVar9 = (ulonglong)uVar2;
    uVar1 = piVar8[2];
    if (uVar1 != 0) {
      *(ulonglong *)(uVar5 - 8) = (ulonglong)(uint)(*piVar8 * 0xc);
      *(ulonglong *)(uVar5 - 0x10) = (ulonglong)uVar1;
      *(ulonglong *)(uVar5 - 0x18) = uVar9;
      *(undefined8 *)(uVar5 - 0x20) = 0x140754078;
      FUN_1408b31a0();
      uVar6 = (ulonglong)((int)(uVar5 - 0x18) + 0xc);
      *(undefined8 *)(uVar6 - 8) = *(undefined8 *)(piVar8 + 2);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar6 - 0x10) = &UNK_140754083;
      FUN_14075219b();
    }
    piVar8[2] = uVar2;
    piVar8[1] = iVar7;
    iVar3 = *piVar8;
  }
  else {
    uVar9 = (ulonglong)(uint)piVar8[2];
  }
  *(undefined4 *)(uVar9 + 8 + (ulonglong)(uint)(iVar3 * 3) * 4) =
       *(undefined4 *)((undefined8 *)(unaff_RBX >> 0x20) + 1);
  *(undefined8 *)(uVar9 + (ulonglong)(uint)(iVar3 * 3) * 4) = *(undefined8 *)(unaff_RBX >> 0x20);
  *piVar8 = *piVar8 + 1;
  return;
}

