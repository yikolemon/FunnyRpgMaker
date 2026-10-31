/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011c974 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14011c974(undefined8 param_1)

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
  local_138 = _DAT_140e94b90;
  uStack_130 = _UNK_140e94b98;
  local_128 = _DAT_140e94ba0;
  uStack_124 = _UNK_140e94ba4;
  uStack_120 = _UNK_140e94ba8;
  uStack_11c = _UNK_140e94bac;
  local_118 = 1;
  local_160 = 0;
  local_21 = 1;
  local_50 = local_88;
  local_88[0] = std::
                _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::OnSurface(void)'::`1'::<lambda_33>,material_color_utilities::DynamicColor,material_color_utilities::DynamicScheme_const&___ptr64>
                ::vftable;
  local_48 = 1;
  local_25 = 1;
  local_d0 = local_108;
  local_108[0] = std::
                 _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::OnSurface(void)'::`1'::<lambda_32>,double,material_color_utilities::DynamicScheme_const&___ptr64>
                 ::vftable;
  local_23 = 1;
  local_90 = local_c8;
  local_c8[0] = std::
                _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::OnSurface(void)'::`1'::<lambda_31>,material_color_utilities::TonalPalette,material_color_utilities::DynamicScheme_const&___ptr64>
                ::vftable;
  local_40 = local_90;
  local_38 = local_d0;
  local_30 = local_50;
  FUN_1400027d2(local_158,"on_surface");
  local_24 = 0;
  local_23 = 0;
  FUN_140126dde(param_1,local_158,local_c8,local_108,0,local_88,local_1a0,&local_138,local_1e8);
  return param_1;
}

