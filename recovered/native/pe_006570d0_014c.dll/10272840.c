/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10272840 */

undefined4 FUN_10272840(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  int *piVar9;
  int local_14;
  undefined1 local_5;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  iVar1 = *param_2;
  uVar7 = 0;
  local_5 = 0;
  local_14 = 0;
  if (0 < iVar1) {
    iVar2 = *(int *)(param_1 + 0x1c);
    piVar3 = *(int **)(iVar2 + 0xc);
    iVar4 = *piVar3;
    do {
      if (0 < iVar4) {
        iVar5 = param_2[1];
        iVar8 = iVar4;
        piVar9 = piVar3;
        do {
          piVar9 = piVar9 + 1;
          iVar6 = FUN_10272a50(local_14 * 0x10 + iVar5,*piVar9,iVar2);
          if (iVar6 != 0) {
            local_5 = 1;
            uVar7 = local_5;
            break;
          }
          iVar8 = iVar8 + -1;
          uVar7 = local_5;
        } while (0 < iVar8);
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar1);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),uVar7);
}

