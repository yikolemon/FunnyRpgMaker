/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004077de */

undefined8 __thiscall FUN_004077de(void *this,uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined4 in_stack_ffffffe4;
  undefined1 local_14 [4];
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)local_14;
  if (*(uint *)((int)this + 0x14) < param_2) {
    this = FUN_00407872(this,param_2,CONCAT31((int3)((uint)in_stack_ffffffe4 >> 8),local_14[0]),
                        param_1);
    uVar1 = DAT_0050e8c0;
    if (DAT_0050e8c0 == (local_10 ^ (uint)local_14)) {
LAB_0040785e:
      return CONCAT44(uVar1,this);
    }
  }
  else {
    puVar2 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      puVar2 = *(uint **)this;
    }
    *(uint *)((int)this + 0x10) = param_2;
    uVar3 = FUN_004878c0(puVar2,param_1,param_2 * 2);
    uVar1 = (uint)(uVar3 >> 0x20);
    *(undefined2 *)((int)puVar2 + param_2 * 2) = 0;
    if (DAT_0050e8c0 == (local_10 ^ (uint)local_14)) goto LAB_0040785e;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)local_14);
}

