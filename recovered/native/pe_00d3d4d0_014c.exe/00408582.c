/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00408582 */

void __thiscall FUN_00408582(void *this,undefined2 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  if (param_2 < 0x7fffffff) {
    if (param_2 < 8) {
      *(uint *)((int)this + 0x10) = param_2;
      *(undefined4 *)((int)this + 0x14) = 7;
      if (param_2 != 0) {
        uVar1 = 0;
        do {
          *(undefined2 *)((int)this + uVar1 * 2) = param_1;
          uVar1 = uVar1 + 1;
        } while (param_2 != uVar1);
      }
      *(undefined2 *)((int)this + param_2 * 2) = 0;
    }
    else {
      local_18 = 10;
      if (10 < (param_2 | 7)) {
        local_18 = param_2 | 7;
      }
      if (0x7ffffffd < local_18) {
        local_18 = 0x7ffffffe;
      }
      iVar2 = FUN_00402eae(this,(int *)&local_18);
      *(int *)this = iVar2;
      *(uint *)((int)this + 0x10) = param_2;
      *(uint *)((int)this + 0x14) = local_18;
      uVar1 = 0;
      do {
        *(undefined2 *)(iVar2 + uVar1 * 2) = param_1;
        uVar1 = uVar1 + 1;
      } while (param_2 != uVar1);
      *(undefined2 *)(iVar2 + param_2 * 2) = 0;
    }
    if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
      return;
    }
  }
  else {
    FUN_004027e3();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

