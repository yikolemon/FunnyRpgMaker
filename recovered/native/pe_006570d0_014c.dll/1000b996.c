/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000b996 */

undefined4 __thiscall FUN_1000b996(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(*(int *)(param_1 + 4) + 0xc) < 1) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = 0xffffffff;
    FUN_1000679b(param_2,*(undefined4 *)(param_1 + 8),param_3);
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10006198("Can not switch from automatic to manual indexing");
}

