/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00407872 */

undefined4 * __thiscall FUN_00407872(void *this,uint param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_1c;
  if (param_1 < 0x7fffffff) {
    local_1c = *(uint *)((int)this + 0x14);
    uVar1 = param_1 | 7;
    local_18 = 0x7ffffffe;
    if (((uVar1 < 0x7fffffff) && (local_1c <= 0x7ffffffe - (local_1c >> 1))) &&
       (local_18 = (local_1c >> 1) + local_1c, local_18 < uVar1)) {
      local_18 = uVar1;
    }
    puVar2 = (uint *)FUN_00402eae(this,(int *)&local_18);
    uVar1 = local_1c;
    *(uint *)((int)this + 0x10) = param_1;
    *(uint *)((int)this + 0x14) = local_18;
    FUN_004878c0(puVar2,param_3,param_1 * 2);
    *(undefined2 *)((int)puVar2 + param_1 * 2) = 0;
    if (7 < uVar1) {
      FUN_00402ece(this,*(LPVOID *)this,uVar1);
    }
    *(uint **)this = puVar2;
    if (DAT_0050e8c0 == (local_14 ^ (uint)&local_1c)) {
      return this;
    }
  }
  else {
    FUN_004027e3();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_1c);
}

