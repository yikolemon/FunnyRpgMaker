/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004057ac */

undefined4 * __thiscall FUN_004057ac(void *this,undefined4 param_1,undefined4 param_2)

{
  UINT local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined ***)this = std::ctype<wchar_t>::vftable;
  FUN_004812c0(&local_34);
  *(UINT *)((int)this + 8) = local_34;
  *(undefined4 *)((int)this + 0xc) = uStack_30;
  *(undefined4 *)((int)this + 0x10) = uStack_2c;
  *(undefined4 *)((int)this + 0x14) = uStack_28;
  FUN_00481340(&local_34);
  *(undefined4 *)((int)this + 0x34) = local_18;
  *(undefined4 *)((int)this + 0x38) = uStack_14;
  *(undefined4 *)((int)this + 0x3c) = uStack_10;
  *(undefined4 *)((int)this + 0x40) = uStack_c;
  *(undefined4 *)((int)this + 0x28) = uStack_24;
  *(undefined4 *)((int)this + 0x2c) = uStack_20;
  *(undefined4 *)((int)this + 0x30) = uStack_1c;
  *(undefined4 *)((int)this + 0x34) = local_18;
  *(UINT *)((int)this + 0x18) = local_34;
  *(undefined4 *)((int)this + 0x1c) = uStack_30;
  *(undefined4 *)((int)this + 0x20) = uStack_2c;
  *(undefined4 *)((int)this + 0x24) = uStack_28;
  return this;
}

