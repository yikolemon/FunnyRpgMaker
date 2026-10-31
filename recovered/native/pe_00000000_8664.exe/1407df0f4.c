/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407df0f4 */

void FUN_1407df0f4(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uStack_28;
  uint uVar11;
  
  uVar11 = (uint)((ulonglong)unaff_RBX >> 0x20);
  uVar6 = (ulonglong)uVar11;
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x2c);
  if (*(uint *)(param_1 + 0x2c) != 0) {
    uVar1 = *(uint *)(uVar2 + 0x48);
    piVar5 = (int *)(ulonglong)*(uint *)(uVar2 + 0x50);
    uVar10 = *(uint *)(uVar2 + 0x50) + uVar1 * 4;
    if (0 < (int)uVar1) {
      do {
        if (*piVar5 == (int)param_1) break;
        uVar4 = (int)piVar5 + 4;
        piVar5 = (int *)(ulonglong)uVar4;
      } while (uVar4 < uVar10);
    }
    if ((uint)piVar5 < uVar10) {
      if ((uint)piVar5 < uVar10 - 4) {
        *piVar5 = *(int *)(ulonglong)(uVar10 - 4);
        uVar1 = *(uint *)(uVar2 + 0x48);
      }
      *(ulonglong *)(param_3 + 0x48) = (ulonglong)uVar1;
    }
  }
  *(uint *)((param_1 & 0xffffffff) + 0x2c) = uVar11;
  if (uVar11 != 0) {
    uVar11 = *(uint *)(uVar6 + 0x48);
    if (uVar11 == *(uint *)(uVar6 + 0x4c)) {
      if (uVar11 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = (int)uVar11 / 2 + uVar11;
      }
      iVar9 = uVar11 + 1;
      if ((int)(uVar11 + 1) < iVar3) {
        iVar9 = iVar3;
      }
      uStack_28 = (ulonglong)(uint)(iVar9 * 4);
      uVar1 = FUN_1407520ca();
      uVar7 = (ulonglong)((int)&uStack_28 + 4);
      uVar2 = (ulonglong)uVar1;
      uVar11 = *(uint *)(uVar6 + 0x50);
      if (uVar11 != 0) {
        *(ulonglong *)(uVar7 - 8) = (ulonglong)(uint)(*(int *)(uVar6 + 0x48) << 2);
        *(ulonglong *)(uVar7 - 0x10) = (ulonglong)uVar11;
        *(ulonglong *)(uVar7 - 0x18) = uVar2;
        *(undefined8 *)(uVar7 - 0x20) = 0x1407df18c;
        FUN_1408b31a0();
        uVar8 = (ulonglong)((int)(uVar7 - 0x18) + 0xc);
        *(undefined8 *)(uVar8 - 8) = *(undefined8 *)(uVar6 + 0x50);
                    /* WARNING: Subroutine does not return */
        *(undefined **)(uVar8 - 0x10) = &UNK_1407df197;
        FUN_14075219b();
      }
      *(uint *)(uVar6 + 0x50) = uVar1;
      *(int *)(uVar6 + 0x4c) = iVar9;
      uVar11 = *(uint *)(uVar6 + 0x48);
    }
    else {
      uVar2 = (ulonglong)*(uint *)(uVar6 + 0x50);
    }
    *(int *)(uVar2 + (ulonglong)uVar11 * 4) = (int)param_1;
    *(int *)(uVar6 + 0x48) = *(int *)(uVar6 + 0x48) + 1;
  }
  return;
}

