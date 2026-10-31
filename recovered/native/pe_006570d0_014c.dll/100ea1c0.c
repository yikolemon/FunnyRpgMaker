/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ea1c0 */

void __thiscall FUN_100ea1c0(int param_1,int param_2)

{
  undefined1 local_1c [12];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_100ea3a2(local_1c,*(undefined4 *)(param_1 + 0x30),0,*(int *)(param_1 + 0x3c) + param_2);
  if (DAT_10388d00 == (local_10 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

