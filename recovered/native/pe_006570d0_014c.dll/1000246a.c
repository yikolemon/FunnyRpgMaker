/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000246a */

undefined4 __thiscall FUN_1000246a(int *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  uint local_14;
  int local_10;
  uint local_c;
  
  puStack_1c = (undefined1 *)&local_14;
  local_c = DAT_10388d00 ^ (uint)&local_14;
  uStack_18 = param_2;
  (**(code **)(*param_1 + 0xc))();
  uVar1 = *(uint *)(local_10 + 4) ^ *(uint *)(param_3[1] + 4);
  if (DAT_10388d00 == (local_14 ^ (uint)&puStack_1c)) {
    return CONCAT31((int3)(uVar1 >> 8),*param_3 == local_14 && uVar1 == 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

