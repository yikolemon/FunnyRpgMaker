/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021c918 */

int __fastcall FUN_1021c918(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_94 [32];
  uint local_14;
  
  piVar3 = local_94;
  local_14 = DAT_10388d00 ^ (uint)local_94;
  **(undefined4 **)(param_1 + 0x18) = 0x7fffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc) = 0;
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x14);
  do {
    iVar4 = *(int *)(param_1 + 0xc) - iVar2;
    if (iVar4 != 0 && iVar2 <= *(int *)(param_1 + 0xc)) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      iVar2 = 0;
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar2 * 4) = uVar1;
        iVar2 = iVar2 + 1;
      } while (iVar4 != iVar2);
    }
    *(uint *)(param_1 + 0x20) = (iVar4 * 4 + 0xfU & 0xfffffff0) + *(int *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x10) = 0;
    iVar2 = FUN_1021ca13();
    if (iVar2 == 0x62) {
      if (iVar4 >> 1 == 0) goto LAB_1021c9e5;
      iVar2 = *(int *)(param_1 + 4);
      *piVar3 = iVar2;
      piVar3 = piVar3 + 1;
      iVar2 = (iVar4 >> 1) + iVar2;
    }
    else {
      if (iVar2 != 0) {
LAB_1021c9e5:
        if (DAT_10388d00 == (local_14 ^ (uint)local_94)) {
          return iVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
      if (*(int *)(param_1 + 0x4c) == 0) {
        FUN_1021cc7f();
      }
      else {
        FUN_1021ca50();
      }
      if (piVar3 == local_94) goto LAB_1021c9e5;
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
      iVar2 = piVar3[-1];
      piVar3 = piVar3 + -1;
    }
    *(int *)(param_1 + 4) = iVar2;
  } while( true );
}

