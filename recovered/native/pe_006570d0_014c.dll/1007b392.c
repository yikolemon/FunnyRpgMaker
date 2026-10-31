/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007b392 */

int __thiscall FUN_1007b392(int param_1,int param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar3 = -1;
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    if (param_2 == -1) {
      iVar3 = 0;
    }
    else {
      iVar7 = **(int **)(param_1 + 0x20);
      iVar4 = **(int **)(param_1 + 0x30);
      iVar3 = param_2;
      if (iVar4 < 1 || iVar7 == 0) {
        iVar5 = **(int **)(param_1 + 0xc);
        uVar9 = (iVar4 + iVar7) - iVar5;
        if (iVar7 == 0) {
          uVar9 = 0;
        }
        iVar7 = 0x20;
        if (0x1f < uVar9) {
          if (uVar9 < 0x3fffffff) {
            iVar7 = uVar9 * 2;
          }
          else {
            iVar7 = 0x7fffffff;
            if (0x7ffffffe < uVar9) {
              return -1;
            }
          }
        }
        iVar4 = FUN_10001426(iVar7);
        FUN_1025b2d0(iVar4,iVar5,uVar9);
        *(uint *)(param_1 + 0x38) = iVar4 + uVar9 + 1;
        **(int **)(param_1 + 0x10) = iVar4;
        **(int **)(param_1 + 0x20) = iVar4 + uVar9;
        **(int **)(param_1 + 0x30) = iVar7 - uVar9;
        if ((*(byte *)(param_1 + 0x3c) & 4) == 0) {
          iVar7 = *(int *)(param_1 + 0x38);
          iVar8 = iVar4 + (**(int **)(param_1 + 0x1c) - iVar5);
          **(int **)(param_1 + 0xc) = iVar4;
          **(int **)(param_1 + 0x1c) = iVar8;
          iVar7 = iVar7 - iVar8;
        }
        else {
          **(int **)(param_1 + 0xc) = iVar4;
          **(int **)(param_1 + 0x1c) = iVar4;
          iVar7 = 0;
        }
        **(int **)(param_1 + 0x2c) = iVar7;
        uVar6 = *(uint *)(param_1 + 0x3c);
        if ((uVar6 & 1) != 0) {
          if (0xfff < uVar9) {
            if (0x1f < (uint)((iVar5 + -4) - *(int *)(iVar5 + -4))) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar9 = uVar9 + 0x23;
            iVar5 = *(int *)(iVar5 + -4);
          }
          FUN_102283a0(iVar5,uVar9);
          uVar6 = *(uint *)(param_1 + 0x3c);
        }
        *(uint *)(param_1 + 0x3c) = uVar6 | 1;
        **(int **)(param_1 + 0x30) = **(int **)(param_1 + 0x30) + -1;
        puVar1 = (undefined1 *)**(int **)(param_1 + 0x20);
        **(int **)(param_1 + 0x20) = (int)(puVar1 + 1);
        *puVar1 = (char)param_2;
      }
      else {
        **(int **)(param_1 + 0x30) = iVar4 + -1;
        puVar1 = (undefined1 *)**(int **)(param_1 + 0x20);
        **(int **)(param_1 + 0x20) = (int)(puVar1 + 1);
        *puVar1 = (char)param_2;
        *(int *)(param_1 + 0x38) = iVar7 + 1;
      }
    }
  }
  return iVar3;
}

