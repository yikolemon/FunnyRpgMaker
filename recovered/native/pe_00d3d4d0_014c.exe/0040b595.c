/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040b595 */

undefined4 * __cdecl
FUN_0040b595(undefined4 *param_1,void *param_2,uint *param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  undefined8 uVar2;
  undefined **local_258;
  uint *local_254;
  uint local_250;
  undefined4 local_24c;
  void *local_248;
  uint local_244 [128];
  uint *local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined ***local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_258;
  local_18 = &LAB_004181f0;
  local_1c = ExceptionList;
  local_254 = local_244;
  local_250 = 0;
  local_24c = 0x100;
  local_258 = std::
              _Fmt_iterator_buffer<std::back_insert_iterator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,wchar_t,std::_Fmt_buffer_traits>
              ::vftable;
  local_248 = param_2;
  local_14 = 0;
  local_44 = param_3;
  local_40 = param_4;
  local_3c = 0;
  local_38 = 0;
  local_34 = &local_258;
  local_30 = param_5;
  local_2c = param_6;
  local_28 = param_7;
  ExceptionList = &local_1c;
  FUN_0040b69d(param_3,param_4,&local_44);
  uVar1 = local_250;
  local_250 = 0;
  local_24 = local_248;
  uVar2 = FUN_0040b7b4(local_248,*(uint *)((int)local_248 + 0x10),local_244,uVar1);
  local_248 = local_24;
  *param_1 = local_24;
  local_14 = 0xffffffff;
  FUN_0040b758((int)&local_258,(int)((ulonglong)uVar2 >> 0x20));
  ExceptionList = local_1c;
  return param_1;
}

