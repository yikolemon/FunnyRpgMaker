/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009edc0 */

undefined1 FUN_14009edc0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 uVar8;
  int *piVar9;
  int iVar10;
  undefined1 local_res10;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_140096cf8();
  }
  uVar8 = 0;
  iVar10 = 0;
  local_res10 = 0;
  if (0 < *param_2) {
    do {
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_14008d690();
      piVar9 = (int *)((longlong)iVar7 + lVar4 + 4);
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_14008d690();
      iVar7 = *(int *)(lVar4 + iVar7);
      if (0 < iVar7) {
        do {
          iVar1 = *piVar9;
          lVar4 = FUN_14008d690();
          puVar3 = *(uint **)(param_1 + 0x30);
          iVar2 = param_2[1];
          lVar5 = FUN_14008d650();
          uVar6 = FUN_14009efd0((byte *)(lVar5 + (longlong)iVar10 * 0x14 + (longlong)iVar2),
                                (byte *)(iVar1 + lVar4),puVar3);
          if ((int)uVar6 != 0) {
            local_res10 = 1;
            uVar8 = 1;
            break;
          }
          iVar7 = iVar7 + -1;
          piVar9 = piVar9 + 1;
          uVar8 = local_res10;
        } while (0 < iVar7);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *param_2);
  }
  return uVar8;
}

