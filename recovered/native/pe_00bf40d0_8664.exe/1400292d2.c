/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400292d2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400292d2(undefined8 *param_1)

{
  longlong local_1f0 [8];
  undefined1 local_1b0;
  ulonglong local_1a8 [4];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined **local_158 [7];
  undefined ***local_120;
  undefined **local_118 [7];
  undefined ***local_e0;
  undefined **local_d8 [7];
  undefined ***local_a0;
  undefined1 local_98;
  undefined **local_90 [7];
  undefined ***local_58;
  undefined1 local_50;
  undefined ***local_48;
  undefined ***local_40;
  undefined ***local_38;
  undefined ***local_30;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_a0 = local_d8;
  local_d8[0] = std::
                _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::ErrorContainer(void)'::`1'::<lambda_111>,material_color_utilities::ToneDeltaPair,material_color_utilities::DynamicScheme_const&___ptr64>
                ::vftable;
  local_98 = 1;
  local_188 = _DAT_1400edd00;
  uStack_180 = _UNK_1400edd08;
  local_178 = _DAT_1400edcf0;
  uStack_170 = _UNK_1400edcf8;
  local_168 = 1;
  local_1b0 = 0;
  local_21 = 1;
  local_58 = local_90;
  local_90[0] = std::
                _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::ErrorContainer(void)'::`1'::<lambda_110>,material_color_utilities::DynamicColor,material_color_utilities::DynamicScheme_const&___ptr64>
                ::vftable;
  local_50 = 1;
  local_25 = 1;
  local_120 = local_158;
  local_158[0] = std::
                 _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::ErrorContainer(void)'::`1'::<lambda_109>,double,material_color_utilities::DynamicScheme_const&___ptr64>
                 ::vftable;
  local_23 = 1;
  local_e0 = local_118;
  local_118[0] = std::
                 _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::ErrorContainer(void)'::`1'::<lambda_108>,material_color_utilities::TonalPalette,material_color_utilities::DynamicScheme_const&___ptr64>
                 ::vftable;
  local_48 = local_e0;
  local_40 = local_120;
  local_38 = local_58;
  local_30 = local_a0;
  FUN_1400029cc(local_1a8,"error_container");
  local_24 = 0;
  local_23 = 0;
  FUN_14002eb1e(param_1,(longlong *)local_1a8,(longlong *)local_118,(longlong *)local_158,1,
                (longlong *)local_90,local_1f0,&local_188,(longlong *)local_d8);
  return param_1;
}

