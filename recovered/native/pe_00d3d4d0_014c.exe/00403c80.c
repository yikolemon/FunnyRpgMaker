/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00403c80 */

undefined8 __thiscall FUN_00403c80(void *this,uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  ulonglong uVar4;
  undefined4 in_stack_ffffffdc;
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)local_18;
  iVar1 = *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 0x14) - iVar1 < param_2) {
    this = FUN_00403d22(this,param_2,CONCAT31((int3)((uint)in_stack_ffffffdc >> 8),local_18[0]),
                        param_1,param_2);
    uVar2 = DAT_0050e8c0;
    if (DAT_0050e8c0 == (local_14 ^ (uint)local_18)) {
LAB_00403d0c:
      return CONCAT44(uVar2,this);
    }
  }
  else {
    *(uint *)((int)this + 0x10) = iVar1 + param_2;
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(void **)this;
    }
    uVar4 = FUN_004878c0((uint *)(iVar1 + (int)pvVar3),param_1,param_2);
    uVar2 = (uint)(uVar4 >> 0x20);
    *(undefined1 *)((int)pvVar3 + iVar1 + param_2) = 0;
    if (DAT_0050e8c0 == (local_14 ^ (uint)local_18)) goto LAB_00403d0c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)local_18);
}

