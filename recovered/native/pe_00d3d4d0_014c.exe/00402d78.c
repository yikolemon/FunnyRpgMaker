/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00402d78 */

uint * __thiscall
FUN_00402d78(void *this,uint param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int local_28;
  uint *local_24;
  uint local_20;
  uint *local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_28;
  iVar4 = *(int *)((int)this + 0x10);
  if (0x7ffffffeU - iVar4 < param_1) {
    FUN_004027e3();
  }
  else {
    local_20 = *(uint *)((int)this + 0x14);
    uVar3 = param_1 + iVar4 | 7;
    local_18 = 0x7ffffffe;
    if (((uVar3 < 0x7fffffff) && (local_20 <= 0x7ffffffe - (local_20 >> 1))) &&
       (local_18 = (local_20 >> 1) + local_20, local_18 < uVar3)) {
      local_18 = uVar3;
    }
    local_28 = iVar4;
    puVar2 = (uint *)FUN_00402eae(this,(int *)&local_18);
    iVar1 = local_28;
    *(uint *)((int)this + 0x10) = param_1 + iVar4;
    *(uint *)((int)this + 0x14) = local_18;
    local_24 = puVar2;
    if (local_20 < 8) {
      FUN_004878c0(puVar2,this,local_28 * 2);
      if (param_3 != 0) {
        iVar4 = 0;
        do {
          *(undefined2 *)((int)local_24 + iVar4 * 2 + iVar1 * 2) = param_4;
          iVar4 = iVar4 + 1;
        } while (param_3 != iVar4);
      }
      *(undefined2 *)((int)local_24 + param_3 * 2 + iVar1 * 2) = 0;
    }
    else {
      local_1c = *(uint **)this;
      FUN_004878c0(puVar2,local_1c,local_28 * 2);
      if (param_3 != 0) {
        iVar4 = 0;
        do {
          *(undefined2 *)((int)puVar2 + iVar4 * 2 + local_28 * 2) = param_4;
          iVar4 = iVar4 + 1;
        } while (param_3 != iVar4);
      }
      *(undefined2 *)((int)puVar2 + param_3 * 2 + local_28 * 2) = 0;
      FUN_00402ece(this,local_1c,local_20);
    }
    *(uint **)this = local_24;
    if (DAT_0050e8c0 == (local_14 ^ (uint)&local_28)) {
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_28);
}

