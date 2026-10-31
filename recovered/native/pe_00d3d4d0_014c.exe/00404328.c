/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00404328 */

uint * __thiscall FUN_00404328(void *this,uint param_1,byte param_2)

{
  int iVar1;
  uint *puVar2;
  void *pvVar3;
  undefined4 in_stack_ffffffdc;
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)local_18;
  iVar1 = *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 0x14) - iVar1 < param_1) {
    puVar2 = FUN_004043d0(this,param_1,CONCAT31((int3)((uint)in_stack_ffffffdc >> 8),local_18[0]),
                          param_1,param_2);
    if (DAT_0050e8c0 == (local_14 ^ (uint)local_18)) {
      return puVar2;
    }
  }
  else {
    *(uint *)((int)this + 0x10) = iVar1 + param_1;
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(void **)this;
    }
    _memset((void *)(iVar1 + (int)pvVar3),(uint)param_2,param_1);
    *(undefined1 *)((int)pvVar3 + iVar1 + param_1) = 0;
    if (DAT_0050e8c0 == (local_14 ^ (uint)local_18)) {
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)local_18);
}

