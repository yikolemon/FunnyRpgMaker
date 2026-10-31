/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00482090 */

int * __thiscall FUN_00482090(void *this,byte param_1)

{
  int *piVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_004a7270;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)((int)this + -8);
  *(undefined ***)(*(int *)(*(int *)((int)this + -8) + 4) + -8 + (int)this) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*piVar1 + 4) + -0xc + (int)this) = *(int *)(*piVar1 + 4) + -8;
  local_8 = 0;
  *(undefined ***)this = std::ios_base::vftable;
  FUN_00481d80((int)this);
  if ((param_1 & 1) != 0) {
    FUN_0047f280(piVar1);
  }
  ExceptionList = local_10;
  return piVar1;
}

