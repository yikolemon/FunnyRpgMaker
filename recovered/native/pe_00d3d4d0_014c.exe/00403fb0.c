/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00403fb0 */

void __thiscall FUN_00403fb0(void *this,uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  if (param_2 < 0x7fffffff) {
    if (param_2 < 8) {
      *(uint *)((int)this + 0x10) = param_2;
      *(undefined4 *)((int)this + 0x14) = 7;
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      *(uint *)this = *param_1;
      *(uint *)((int)this + 4) = uVar1;
      *(uint *)((int)this + 8) = uVar2;
      *(uint *)((int)this + 0xc) = uVar3;
    }
    else {
      local_18 = 10;
      if (10 < (param_2 | 7)) {
        local_18 = param_2 | 7;
      }
      if (0x7ffffffd < local_18) {
        local_18 = 0x7ffffffe;
      }
      puVar4 = (uint *)FUN_00402eae(this,(int *)&local_18);
      *(uint **)this = puVar4;
      *(uint *)((int)this + 0x10) = param_2;
      *(uint *)((int)this + 0x14) = local_18;
      FUN_004878c0(puVar4,param_1,param_2 * 2 + 2);
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

