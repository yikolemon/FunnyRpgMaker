/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011ee10 */

undefined1 FUN_14011ee10(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 uVar7;
  int *piVar8;
  int iVar9;
  undefined1 local_res10;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_140115938();
  }
  uVar7 = 0;
  iVar9 = 0;
  local_res10 = 0;
  if (0 < *param_2) {
    do {
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_140107100();
      piVar8 = (int *)((longlong)iVar6 + lVar4 + 4);
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_140107100();
      iVar6 = *(int *)(lVar4 + iVar6);
      if (0 < iVar6) {
        do {
          iVar3 = *piVar8;
          lVar4 = FUN_140107100();
          uVar2 = *(undefined8 *)(param_1 + 0x30);
          iVar1 = param_2[1];
          lVar5 = FUN_1401070c0();
          iVar3 = FUN_14011f020(lVar5 + (longlong)iVar9 * 0x14 + (longlong)iVar1,iVar3 + lVar4,uVar2
                               );
          if (iVar3 != 0) {
            local_res10 = 1;
            uVar7 = 1;
            break;
          }
          iVar6 = iVar6 + -1;
          piVar8 = piVar8 + 1;
          uVar7 = local_res10;
        } while (0 < iVar6);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *param_2);
  }
  return uVar7;
}

