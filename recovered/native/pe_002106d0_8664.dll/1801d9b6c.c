/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d9b6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801d9b6c(undefined8 param_1)

{
  undefined1 local_1f0 [64];
  undefined1 local_1b0;
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
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
                _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::TertiaryContainer(void)'::`1'::<lambda_97>,material_color_utilities::ToneDeltaPair,material_color_utilities::DynamicScheme_const&___ptr64>
                ::vftable;
  local_98 = 1;
  local_188 = _DAT_180330be0;
  uStack_180 = _UNK_180330be8;
  local_178 = _DAT_180330bc0;
  uStack_174 = _UNK_180330bc4;
  uStack_170 = _UNK_180330bc8;
  uStack_16c = _UNK_180330bcc;
  local_168 = 1;
  local_1b0 = 0;
  local_21 = 1;
  local_58 = local_90;
  local_90[0] = std::
                _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::TertiaryContainer(void)'::`1'::<lambda_96>,material_color_utilities::DynamicColor,material_color_utilities::DynamicScheme_const&___ptr64>
                ::vftable;
  local_50 = 1;
  local_25 = 1;
  local_120 = local_158;
  local_158[0] = std::
                 _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::TertiaryContainer(void)'::`1'::<lambda_95>,double,material_color_utilities::DynamicScheme_const&___ptr64>
                 ::vftable;
  local_23 = 1;
  local_e0 = local_118;
  local_118[0] = std::
                 _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::TertiaryContainer(void)'::`1'::<lambda_94>,material_color_utilities::TonalPalette,material_color_utilities::DynamicScheme_const&___ptr64>
                 ::vftable;
  local_48 = local_e0;
  local_40 = local_120;
  local_38 = local_58;
  local_30 = local_a0;
  FUN_180001e92(local_1a8,"tertiary_container");
  local_24 = 0;
  local_23 = 0;
  FUN_1801e00aa(param_1,local_1a8,local_118,local_158,1,local_90,local_1f0,&local_188,local_d8);
  return param_1;
}

