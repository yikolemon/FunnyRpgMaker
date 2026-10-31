/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00408748 */

uint * __thiscall
FUN_00408748(void *this,uint param_1,undefined4 param_2,int param_3,int param_4,undefined2 param_5)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint local_2c;
  int local_28;
  uint *local_24;
  uint *local_20;
  void *local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_2c;
  iVar5 = *(int *)((int)this + 0x10);
  if (0x7ffffffeU - iVar5 < param_1) {
    FUN_004027e3();
  }
  else {
    local_2c = param_1 + iVar5;
    uVar1 = *(uint *)((int)this + 0x14);
    uVar4 = local_2c | 7;
    local_18 = 0x7ffffffe;
    if (((uVar4 < 0x7fffffff) && (uVar1 <= 0x7ffffffe - (uVar1 >> 1))) &&
       (local_18 = (uVar1 >> 1) + uVar1, local_18 < uVar4)) {
      local_18 = uVar4;
    }
    local_28 = iVar5;
    local_1c = this;
    puVar3 = (uint *)FUN_00402eae(this,(int *)&local_18);
    *(uint *)((int)this + 0x10) = local_2c;
    *(uint *)((int)this + 0x14) = local_18;
    local_2c = uVar1;
    if (uVar1 < 8) {
      FUN_004878c0(puVar3,this,param_3 * 2);
      if (param_4 != 0) {
        iVar5 = 0;
        do {
          *(undefined2 *)((int)puVar3 + iVar5 * 2 + param_3 * 2) = param_5;
          iVar5 = iVar5 + 1;
        } while (param_4 != iVar5);
      }
      FUN_004878c0((uint *)((int)puVar3 + param_4 * 2 + param_3 * 2),
                   (uint *)((int)this + param_3 * 2),(local_28 - param_3) * 2 + 2);
    }
    else {
      local_24 = *(uint **)this;
      FUN_004878c0(puVar3,local_24,param_3 * 2);
      puVar2 = local_24;
      if (param_4 != 0) {
        iVar5 = 0;
        do {
          *(undefined2 *)((int)puVar3 + iVar5 * 2 + param_3 * 2) = param_5;
          iVar5 = iVar5 + 1;
        } while (param_4 != iVar5);
      }
      local_20 = puVar3;
      FUN_004878c0((uint *)((int)puVar3 + param_4 * 2 + param_3 * 2),
                   (uint *)((int)local_24 + param_3 * 2),(local_28 - param_3) * 2 + 2);
      FUN_00402ece(this,puVar2,local_2c);
      puVar3 = local_20;
    }
    *(uint **)this = puVar3;
    if (DAT_0050e8c0 == (local_14 ^ (uint)&local_2c)) {
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_2c);
}

