/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040269e */

undefined4 __thiscall FUN_0040269e(void *this,undefined4 param_1,uint *param_2)

{
  uint uVar1;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  uint local_14;
  int local_10;
  uint local_c;
  
  puStack_1c = (undefined1 *)&local_14;
  local_c = DAT_0050e8c0 ^ (uint)&local_14;
  uStack_18 = param_1;
  (**(code **)(*(int *)this + 0xc))();
  uVar1 = *(uint *)(local_10 + 4) ^ *(uint *)(param_2[1] + 4);
  if (DAT_0050e8c0 == (local_14 ^ (uint)&puStack_1c)) {
    return CONCAT31((int3)(uVar1 >> 8),*param_2 == local_14 && uVar1 == 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&puStack_1c);
}

