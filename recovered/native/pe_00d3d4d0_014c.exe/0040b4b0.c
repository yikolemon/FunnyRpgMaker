/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040b4b0 */

uint * __thiscall FUN_0040b4b0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_1c;
  iVar1 = *(int *)((int)this + 0x10);
  if (0x7ffffffeU - iVar1 < param_1) {
    FUN_004027e3();
  }
  else {
    uVar2 = *(uint *)((int)this + 0x14);
    uVar5 = param_1 + iVar1 | 7;
    local_18 = 0x7ffffffe;
    if (((uVar5 < 0x7fffffff) && (uVar2 <= 0x7ffffffe - (uVar2 >> 1))) &&
       (local_18 = (uVar2 >> 1) + uVar2, local_18 < uVar5)) {
      local_18 = uVar5;
    }
    local_1c = iVar1;
    puVar4 = (uint *)FUN_00402eae(this,(int *)&local_18);
    *(uint *)((int)this + 0x10) = param_1 + iVar1;
    *(uint *)((int)this + 0x14) = local_18;
    if (uVar2 < 8) {
      FUN_004878c0(puVar4,this,local_1c * 2 + 2);
    }
    else {
      puVar3 = *(uint **)this;
      FUN_004878c0(puVar4,puVar3,local_1c * 2 + 2);
      FUN_00402ece(this,puVar3,uVar2);
    }
    *(uint **)this = puVar4;
    if (DAT_0050e8c0 == (local_14 ^ (uint)&local_1c)) {
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_1c);
}

