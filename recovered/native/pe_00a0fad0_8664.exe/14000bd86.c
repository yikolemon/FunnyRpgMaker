/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000bd86 */

int FUN_14000bd86(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  iVar6 = -1;
  if ((*(byte *)(param_1 + 0x70) & 2) == 0) {
    if (param_2 == -1) {
      iVar6 = 0;
    }
    else {
      lVar9 = **(longlong **)(param_1 + 0x40);
      iVar4 = **(int **)(param_1 + 0x58);
      iVar6 = param_2;
      if (lVar9 == 0 || (longlong)iVar4 < 1) {
        lVar2 = **(longlong **)(param_1 + 0x18);
        uVar8 = (iVar4 + lVar9) - lVar2;
        if (lVar9 == 0) {
          uVar8 = 0;
        }
        lVar9 = 0x20;
        if (0x1f < uVar8) {
          if (uVar8 < 0x3fffffff) {
            lVar9 = uVar8 * 2;
          }
          else {
            lVar9 = 0x7fffffff;
            if (0x7ffffffe < uVar8) {
              return -1;
            }
          }
        }
        lVar7 = FUN_140006280(lVar9);
        FUN_140135ff0(lVar7,lVar2,uVar8);
        *(ulonglong *)(param_1 + 0x68) = lVar7 + uVar8 + 1;
        **(longlong **)(param_1 + 0x20) = lVar7;
        **(longlong **)(param_1 + 0x40) = lVar7 + uVar8;
        **(int **)(param_1 + 0x58) = (int)lVar9 - (int)uVar8;
        if ((*(byte *)(param_1 + 0x70) & 4) == 0) {
          iVar4 = *(int *)(param_1 + 0x68);
          lVar9 = lVar7 + (**(longlong **)(param_1 + 0x38) - lVar2);
          **(longlong **)(param_1 + 0x18) = lVar7;
          **(longlong **)(param_1 + 0x38) = lVar9;
          iVar4 = iVar4 - (int)lVar9;
        }
        else {
          **(longlong **)(param_1 + 0x18) = lVar7;
          **(longlong **)(param_1 + 0x38) = lVar7;
          iVar4 = 0;
        }
        **(int **)(param_1 + 0x50) = iVar4;
        uVar5 = *(uint *)(param_1 + 0x70);
        if ((uVar5 & 1) != 0) {
          lVar9 = lVar2;
          if (0xfff < uVar8) {
            lVar9 = *(longlong *)(lVar2 + -8);
            if (0x1f < (ulonglong)((lVar2 + -8) - lVar9)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar8 = uVar8 + 0x27;
          }
          thunk_FUN_1400ddcd0(lVar9,uVar8);
          uVar5 = *(uint *)(param_1 + 0x70);
        }
        *(uint *)(param_1 + 0x70) = uVar5 | 1;
        **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) + -1;
        puVar1 = (undefined1 *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(puVar1 + 1);
        *puVar1 = (char)param_2;
      }
      else {
        **(int **)(param_1 + 0x58) = iVar4 + -1;
        puVar1 = (undefined1 *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(puVar1 + 1);
        *puVar1 = (char)param_2;
        *(longlong *)(param_1 + 0x68) = lVar9 + 1;
      }
    }
  }
  return iVar6;
}

