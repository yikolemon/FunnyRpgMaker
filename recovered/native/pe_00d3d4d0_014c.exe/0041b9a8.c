/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041b9a8 */

void __thiscall FUN_0041b9a8(void *this,undefined4 param_1)

{
  float10 fVar1;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_18;
  
  local_18 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)((int)this + 0x18) = param_1;
  FUN_00424ae1(&local_60,param_1);
  *(undefined4 *)this = local_60;
  *(undefined4 *)((int)this + 4) = uStack_5c;
  *(undefined4 *)((int)this + 8) = uStack_58;
  *(undefined4 *)((int)this + 0xc) = uStack_54;
  fVar1 = (float10)FUN_00424c95();
  *(double *)((int)this + 0x10) = (double)fVar1;
  if (DAT_0050e8c0 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_18 ^ (uint)&stack0xfffffffc);
}

