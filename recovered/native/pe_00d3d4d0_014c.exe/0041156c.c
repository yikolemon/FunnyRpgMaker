/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041156c */

void __thiscall FUN_0041156c(void *this,uint param_1)

{
  ulonglong uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_15;
  uint local_14;
  
  if ((*(byte *)((int)this + 0xc) < 0xb) &&
     ((0x47eU >> (*(byte *)((int)this + 0xc) & 0x1f) & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ba4e(0x504af0);
  }
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  FUN_004112d6(this,(char *)&local_28,param_1);
  uVar1 = FUN_0041149d(&local_15,local_28,uStack_24,uStack_20,uStack_1c);
  if ((int)uVar1 < 0 || (int)(uVar1 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ba4e(0x504add);
  }
  *(int *)(*(int *)this + 4) = (int)uVar1;
  if (DAT_0050e8c0 == (local_14 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&stack0xfffffffc);
}

