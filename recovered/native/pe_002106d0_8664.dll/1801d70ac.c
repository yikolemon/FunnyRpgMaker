/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d70ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801d70ac(undefined8 param_1)

{
  undefined1 local_1e8 [64];
  undefined1 local_1a8;
  undefined1 local_1a0 [64];
  undefined1 local_160;
  undefined1 local_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  undefined **local_108 [7];
  undefined ***local_d0;
  undefined **local_c8 [7];
  undefined ***local_90;
  undefined **local_88 [7];
  undefined ***local_50;
  undefined1 local_48;
  undefined ***local_40;
  undefined ***local_38;
  undefined ***local_30;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_1a8 = 0;
  local_138 = _DAT_180330be0;
  uStack_130 = _UNK_180330be8;
  local_128 = _DAT_180330bc0;
  uStack_124 = _UNK_180330bc4;
  uStack_120 = _UNK_180330bc8;
  uStack_11c = _UNK_180330bcc;
  local_118 = 1;
  local_160 = 0;
  local_21 = 1;
  local_50 = local_88;
  local_88[0] = std::
                _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::OutlineVariant(void)'::`1'::<lambda_49>,material_color_utilities::DynamicColor,material_color_utilities::DynamicScheme_const&___ptr64>
                ::vftable;
  local_48 = 1;
  local_25 = 1;
  local_d0 = local_108;
  local_108[0] = std::
                 _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::OutlineVariant(void)'::`1'::<lambda_48>,double,material_color_utilities::DynamicScheme_const&___ptr64>
                 ::vftable;
  local_23 = 1;
  local_90 = local_c8;
  local_c8[0] = std::
                _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::OutlineVariant(void)'::`1'::<lambda_47>,material_color_utilities::TonalPalette,material_color_utilities::DynamicScheme_const&___ptr64>
                ::vftable;
  local_40 = local_90;
  local_38 = local_d0;
  local_30 = local_50;
  FUN_180001e92(local_158,"outline_variant");
  local_24 = 0;
  local_23 = 0;
  FUN_1801e00aa(param_1,local_158,local_c8,local_108,0,local_88,local_1a0,&local_138,local_1e8);
  return param_1;
}

