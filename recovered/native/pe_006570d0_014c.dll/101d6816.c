/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d6816 */

void __thiscall FUN_101d6816(int param_1,undefined4 param_2)

{
  float10 fVar1;
  undefined1 local_48 [40];
  uint uStack_20;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (*(int **)(param_1 + 0x3c) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10228590();
  }
  (**(code **)(**(int **)(param_1 + 0x3c) + 8))(local_48,param_2);
  fVar1 = (float10)FUN_101d6890(param_2);
  FUN_101c953a((double)fVar1);
  if (DAT_10388d00 == (uStack_20 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

