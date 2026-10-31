/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d6262 */

undefined8 FUN_1801d6262(undefined8 param_1)

{
  undefined1 local_1d8 [32];
  undefined1 local_1b8;
  undefined1 local_1b0 [64];
  undefined1 local_170;
  undefined1 local_168 [64];
  undefined1 local_128;
  undefined1 local_120 [64];
  undefined1 local_e0;
  undefined1 local_d8 [32];
  undefined **local_b8 [7];
  undefined ***local_80;
  undefined **local_78 [7];
  undefined ***local_40;
  undefined ***local_38;
  undefined ***local_30;
  undefined1 local_25;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_170 = 0;
  local_1b8 = 0;
  local_128 = 0;
  local_25 = 1;
  local_e0 = 0;
  local_23 = 1;
  local_80 = local_b8;
  local_b8[0] = std::
                _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::SurfaceVariant(void)'::`1'::<lambda_35>,double,material_color_utilities::DynamicScheme_const&___ptr64>
                ::vftable;
  local_21 = 1;
  local_40 = local_78;
  local_78[0] = std::
                _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::SurfaceVariant(void)'::`1'::<lambda_34>,material_color_utilities::TonalPalette,material_color_utilities::DynamicScheme_const&___ptr64>
                ::vftable;
  local_38 = local_40;
  local_30 = local_80;
  FUN_180001e92(local_d8,"surface_variant");
  local_22 = 0;
  local_21 = 0;
  FUN_1801e00aa(param_1,local_d8,local_78,local_b8,1,local_120,local_168,local_1d8,local_1b0);
  return param_1;
}

