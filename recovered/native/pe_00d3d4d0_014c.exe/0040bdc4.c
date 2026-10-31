/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040bdc4 */

void __thiscall FUN_0040bdc4(void *this,uint param_1,int param_2)

{
  int iVar1;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  void *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  FUN_0040c038((char *)&local_28,(int)this + 0x10,param_1);
  if ((char)local_28 == '\r') {
    iVar1 = *(int *)this;
    *(int *)this = param_2;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - (param_2 - iVar1 >> 1);
  }
  local_40 = *(undefined4 *)((int)this + 0x10);
  local_3c = *(undefined8 *)((int)this + 0x14);
  local_34 = *(undefined4 *)((int)this + 0x1c);
  local_30 = this;
  FUN_0040c061(&local_2c,&local_40,local_28,uStack_24,uStack_20,uStack_1c);
  *(undefined4 *)((int)this + 0x10) = local_2c;
  if (DAT_0050e8c0 == (local_14 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&stack0xfffffffc);
}

