/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040b8dc */

uint * __thiscall
FUN_0040b8dc(void *this,uint param_1,undefined4 param_2,int param_3,uint *param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_20;
  puVar1 = *(uint **)((int)this + 0x10);
  if (0x7ffffffeU - (int)puVar1 < param_1) {
    FUN_004027e3();
  }
  else {
    local_1c = *(uint *)((int)this + 0x14);
    uVar4 = param_1 + (int)puVar1 | 7;
    local_18 = 0x7ffffffe;
    if (((uVar4 < 0x7fffffff) && (local_20 = puVar1, local_1c <= 0x7ffffffe - (local_1c >> 1))) &&
       (local_18 = (local_1c >> 1) + local_1c, local_18 < uVar4)) {
      local_18 = uVar4;
    }
    puVar3 = (uint *)FUN_00402eae(this,(int *)&local_18);
    *(uint *)((int)this + 0x10) = param_1 + (int)puVar1;
    *(uint *)((int)this + 0x14) = local_18;
    local_20 = puVar3;
    if (local_1c < 8) {
      FUN_004878c0(puVar3,this,param_3 * 2);
      puVar3 = (uint *)((int)puVar3 + param_3 * 2);
      FUN_004878c0(puVar3,param_4,param_5 * 2);
      FUN_004878c0((uint *)((int)puVar3 + param_5 * 2),(uint *)((int)this + param_3 * 2),
                   ((int)puVar1 - param_3) * 2 + 2);
    }
    else {
      puVar2 = *(uint **)this;
      FUN_004878c0(puVar3,puVar2,param_3 * 2);
      puVar3 = (uint *)((int)puVar3 + param_3 * 2);
      FUN_004878c0(puVar3,param_4,param_5 * 2);
      FUN_004878c0((uint *)(param_5 * 2 + (int)puVar3),(uint *)((int)puVar2 + param_3 * 2),
                   ((int)puVar1 - param_3) * 2 + 2);
      FUN_00402ece(this,puVar2,local_1c);
    }
    *(uint **)this = local_20;
    if (DAT_0050e8c0 == (local_14 ^ (uint)&local_20)) {
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_20);
}

