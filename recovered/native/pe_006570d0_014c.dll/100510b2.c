/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100510b2 */

void __thiscall FUN_100510b2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_8;
  if (*(int **)(param_1 + 0x24) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    uStack_c = 0x100510f3;
    FUN_10228590();
  }
  puStack_10 = (undefined1 *)&param_3;
  puStack_14 = (undefined1 *)&param_2;
  uStack_c = param_4;
  (**(code **)(**(int **)(param_1 + 0x24) + 8))();
  if (DAT_10388d00 == ((uint)puStack_14 ^ (uint)&puStack_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

