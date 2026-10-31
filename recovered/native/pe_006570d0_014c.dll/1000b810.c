/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000b810 */

undefined4 __thiscall FUN_1000b810(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xc);
  if (-1 < iVar1) {
    *(int *)(*(int *)(param_1 + 4) + 0xc) = iVar1 + 1;
    FUN_1000679b(param_2,*(undefined4 *)(param_1 + 8),iVar1);
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10006198("Can not switch from manual to automatic indexing");
}

