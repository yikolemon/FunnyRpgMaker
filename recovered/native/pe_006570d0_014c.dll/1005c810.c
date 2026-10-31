/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005c810 */

void FUN_1005c810(int param_1)

{
  undefined1 auStack_24 [4];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = auStack_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c19f0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10259450(&LAB_1006a3d4);
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    local_14 = 0;
    (**(code **)(**(int **)(param_1 + 0x24) + 8))();
    ExceptionList = local_1c;
    return;
  }
  local_14 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_10228590();
}

