/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ed2e2 */

int * FUN_1407ed2e2(ulonglong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined8 unaff_RBX;
  uint *puVar7;
  int *piVar8;
  int *piVar9;
  undefined8 unaff_RDI;
  undefined8 uStack_38;
  ulonglong uStack_30;
  undefined4 local_14;
  undefined4 uStack_10;
  uint local_c;
  
  uStack_10 = (undefined4)unaff_RBX;
  local_c = (uint)((ulonglong)unaff_RBX >> 0x20);
  local_14 = (undefined4)((ulonglong)unaff_RDI >> 0x20);
  param_2 = param_2 & 0xffffffff;
  piVar9 = (int *)(param_1 & 0xffffffff);
  uStack_30 = (ulonglong)local_c;
  uStack_38 = CONCAT44(uStack_10,local_14);
  FUN_1407ed382();
  puVar7 = (uint *)(ulonglong)((int)&uStack_38 + 8);
  uVar1 = piVar9[2];
  if ((uVar1 != 0) && (iVar2 = piVar9[1], (int)(local_c + iVar2) <= *(int *)(param_2 + 4))) {
    uVar3 = *(uint *)(param_2 + 0x1c);
    piVar5 = (int *)(ulonglong)uVar3;
    if (uVar3 != 0) {
      iVar6 = *piVar9;
      *piVar5 = iVar6;
      piVar5[1] = local_c + iVar2;
      *(int *)(param_2 + 0x1c) = piVar5[2];
      piVar5 = (int *)(ulonglong)*(uint *)(ulonglong)uVar1;
      iVar2 = *piVar5;
      *puVar7 = uVar3;
      if (iVar2 < iVar6) {
        uVar1 = piVar5[2];
        piVar5[2] = uVar3;
        piVar5 = (int *)(ulonglong)uVar1;
      }
      else {
        *(uint *)(ulonglong)uVar1 = uVar3;
      }
      iVar6 = iVar6 + puVar7[6];
      if (piVar5[2] != 0) {
        uVar3 = piVar5[2];
        uVar1 = (uint)piVar5;
        do {
          uVar4 = uVar3;
          piVar8 = (int *)(ulonglong)uVar4;
          if (iVar6 < *piVar8) break;
          *(undefined4 *)(ulonglong)(uVar1 + 8) = *(undefined4 *)(param_2 + 0x1c);
          *(int *)(param_2 + 0x1c) = (int)piVar5;
          piVar5 = piVar8;
          uVar3 = piVar8[2];
          uVar1 = uVar4;
        } while (piVar8[2] != 0);
      }
      *(int *)((ulonglong)*puVar7 + 8) = (int)piVar5;
      if (iVar6 <= *piVar5) {
        return piVar9;
      }
      *piVar5 = iVar6;
      return piVar9;
    }
  }
  piVar9[2] = 0;
  return piVar9;
}

