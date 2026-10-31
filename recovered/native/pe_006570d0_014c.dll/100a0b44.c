/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a0b44 */

uint __thiscall FUN_100a0b44(int param_1,ushort param_2)

{
  ushort *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    uVar10 = (uint)param_2;
    if (param_2 == 0xffff) {
      return 0;
    }
    iVar3 = **(int **)(param_1 + 0x20);
    iVar8 = **(int **)(param_1 + 0x30);
    if (0 < iVar8 && iVar3 != 0) {
      **(int **)(param_1 + 0x30) = iVar8 + -1;
      puVar1 = (ushort *)**(int **)(param_1 + 0x20);
      **(int **)(param_1 + 0x20) = (int)(puVar1 + 1);
      *puVar1 = param_2;
      *(int *)(param_1 + 0x38) = iVar3 + 2;
      return uVar10;
    }
    iVar5 = **(int **)(param_1 + 0xc);
    uVar9 = (iVar3 + iVar8 * 2) - iVar5 >> 1;
    if (iVar3 == 0) {
      uVar9 = 0;
    }
    iVar3 = 0x20;
    if (0x1f < uVar9) {
      if (uVar9 < 0x3fffffff) {
        iVar3 = uVar9 * 2;
      }
      else {
        iVar3 = 0x7fffffff;
        if (0x7ffffffe < uVar9) goto LAB_100a0c51;
      }
    }
    iVar4 = FUN_10001426(iVar3 * 2);
    iVar8 = uVar9 * 2;
    FUN_1025b2d0(iVar4,iVar5,iVar8,iVar5,iVar3,iVar8);
    *(uint *)(param_1 + 0x38) = iVar4 + uVar9 * 2 + 2;
    **(int **)(param_1 + 0x10) = iVar4;
    **(int **)(param_1 + 0x20) = iVar4 + uVar9 * 2;
    **(int **)(param_1 + 0x30) = iVar3 - uVar9;
    if ((*(byte *)(param_1 + 0x3c) & 4) == 0) {
      iVar3 = *(int *)(param_1 + 0x38);
      iVar7 = iVar4 + (**(int **)(param_1 + 0x1c) - iVar5);
      **(int **)(param_1 + 0xc) = iVar4;
      **(int **)(param_1 + 0x1c) = iVar7;
      iVar3 = iVar3 - iVar7 >> 1;
    }
    else {
      **(int **)(param_1 + 0xc) = iVar4;
      **(int **)(param_1 + 0x1c) = iVar4;
      iVar3 = 0;
    }
    **(int **)(param_1 + 0x2c) = iVar3;
    uVar6 = *(uint *)(param_1 + 0x3c);
    if ((uVar6 & 1) != 0) {
      if (0x7ff < uVar9) {
        if (0x1f < (uint)((iVar5 + -4) - *(int *)(iVar5 + -4))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        iVar8 = iVar8 + 0x23;
        iVar5 = *(int *)(iVar5 + -4);
      }
      FUN_102283a0(iVar5,iVar8);
      uVar6 = *(uint *)(param_1 + 0x3c);
    }
    *(uint *)(param_1 + 0x3c) = uVar6 | 1;
    **(int **)(param_1 + 0x30) = **(int **)(param_1 + 0x30) + -1;
    puVar1 = (ushort *)**(int **)(param_1 + 0x20);
    **(int **)(param_1 + 0x20) = (int)(puVar1 + 1);
    *puVar1 = param_2;
  }
  else {
LAB_100a0c51:
    uVar10 = 0xffffffff;
  }
  return uVar10;
}

