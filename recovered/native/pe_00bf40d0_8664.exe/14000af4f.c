/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000af4f */

undefined8 *
FUN_14000af4f(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined **local_2a0;
  undefined8 *local_298;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 *local_280;
  undefined8 local_278 [64];
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined ***local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_290 = 0;
  local_288 = 0x100;
  local_2a0 = std::
              _Fmt_iterator_buffer<std::back_insert_iterator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>,wchar_t,std::_Fmt_buffer_traits>
              ::vftable;
  local_50 = *param_4;
  uStack_48 = param_4[1];
  local_78 = *param_3;
  lStack_70 = param_3[1];
  local_68 = 0;
  uStack_60 = 0;
  local_58 = &local_2a0;
  local_40 = param_5;
  local_38 = *param_3;
  lStack_30 = param_3[1];
  local_298 = local_278;
  local_280 = param_2;
  FUN_14000b043(&local_38,&local_78,param_3);
  puVar2 = local_280;
  uVar1 = local_290;
  local_290 = 0;
  FUN_14000b1f6(local_280,local_280[2],local_278,uVar1);
  *param_1 = puVar2;
  local_280 = puVar2;
  FUN_14000b17c((longlong)&local_2a0);
  return param_1;
}

