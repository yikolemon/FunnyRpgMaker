/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00402cd0 */

uint * __thiscall FUN_00402cd0(void *this,uint param_1,undefined2 param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 in_stack_ffffffdc;
  undefined1 local_18;
  
  uVar4 = DAT_0050e8c0 ^ (uint)&stack0xffffffd8;
  iVar1 = *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 0x14) - iVar1 < param_1) {
    puVar2 = FUN_00402d78(this,param_1,CONCAT31((int3)((uint)in_stack_ffffffdc >> 8),local_18),
                          param_1,param_2);
    if (DAT_0050e8c0 == (uVar4 ^ (uint)&stack0xffffffd8)) {
      return puVar2;
    }
  }
  else {
    *(uint *)((int)this + 0x10) = iVar1 + param_1;
    pvVar5 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar5 = *(void **)this;
    }
    if (param_1 != 0) {
      uVar3 = 0;
      do {
        *(undefined2 *)((int)pvVar5 + uVar3 * 2 + iVar1 * 2) = param_2;
        uVar3 = uVar3 + 1;
      } while (param_1 != uVar3);
    }
    *(undefined2 *)((int)pvVar5 + (iVar1 + param_1) * 2) = 0;
    if (DAT_0050e8c0 == (uVar4 ^ (uint)&stack0xffffffd8)) {
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(uVar4 ^ (uint)&stack0xffffffd8);
}

