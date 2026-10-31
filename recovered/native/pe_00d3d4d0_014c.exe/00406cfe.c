/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00406cfe */

void __thiscall FUN_00406cfe(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = std::_Func_impl_no_alloc<`wmain'::`1'::<lambda_0>,void>::vftable;
  uVar1 = *(undefined4 *)((int)this + 8);
  uVar2 = *(undefined4 *)((int)this + 0xc);
  uVar3 = *(undefined4 *)((int)this + 0x10);
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  return;
}

