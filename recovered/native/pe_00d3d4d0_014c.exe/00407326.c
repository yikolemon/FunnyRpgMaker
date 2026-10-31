/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00407326 */

int * __thiscall FUN_00407326(void *this,int param_1)

{
  void **ppvVar1;
  void *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_00417fb0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = this;
  ppvVar1 = &local_28;
  if (param_1 != 0) {
    *(undefined ***)this = &PTR_004a8908;
    *(undefined **)((int)this + 0x10) = &DAT_004a8910;
    FUN_004088d0((undefined4 *)((int)this + 0x68));
    ppvVar1 = (void **)local_20;
  }
  local_20 = (undefined1 *)ppvVar1;
  *(undefined ***)((int)this + *(int *)(*(int *)this + 4)) =
       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
  *(int *)((int)this + *(int *)(*(int *)this + 4) + -4) = *(int *)(*(int *)this + 4) + -0x68;
  local_28 = (void *)((int)this + 0x18);
  local_14 = 0;
  FUN_00408968(this,local_28,0);
  local_14 = 1;
  *(undefined ***)((int)local_24 + *(int *)(*local_24 + 4)) =
       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
  *(int *)((int)local_24 + *(int *)(*local_24 + 4) + -4) = *(int *)(*local_24 + 4) + -0x68;
  FUN_00408a84(local_28,3);
  ExceptionList = local_1c;
  return local_24;
}

