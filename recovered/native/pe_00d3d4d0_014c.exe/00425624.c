/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00425624 */

void * __cdecl FUN_00425624(void *param_1)

{
  undefined1 auStack_170 [24];
  undefined **local_158 [9];
  undefined ***local_134;
  undefined **local_130 [9];
  undefined ***local_10c;
  undefined1 local_104 [40];
  undefined1 local_dc;
  undefined1 local_d4 [40];
  undefined1 local_ac;
  undefined1 local_84;
  undefined1 local_7c [40];
  undefined1 local_54;
  void **ppvStack_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined ***local_3c;
  undefined ***local_38;
  undefined ***local_34;
  undefined ***local_30;
  undefined1 local_2a;
  undefined1 *local_28;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_4c = (undefined1 *)&local_4c;
  ppvStack_50 = &local_1c;
  local_18 = &LAB_0042e600;
  local_1c = ExceptionList;
  local_28 = auStack_170;
  local_20 = auStack_170;
  local_48 = local_7c;
  local_54 = 0;
  local_84 = 0;
  local_44 = local_d4;
  local_ac = 0;
  local_2a = 1;
  local_40 = local_104;
  local_dc = 0;
  local_23 = 1;
  local_38 = local_130;
  local_130[0] = std::
                 _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::SurfaceDim(void)'::`1'::<lambda_18>,double,material_color_utilities::DynamicScheme_const&>
                 ::vftable;
  local_21 = 1;
  local_3c = local_158;
  local_158[0] = std::
                 _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::SurfaceDim(void)'::`1'::<lambda_17>,material_color_utilities::TonalPalette,material_color_utilities::DynamicScheme_const&>
                 ::vftable;
  local_14 = 6;
  ExceptionList = ppvStack_50;
  local_34 = local_38;
  local_30 = local_3c;
  local_10c = local_38;
  local_134 = local_3c;
  FUN_00402bae(auStack_170,(uint *)"surface_dim");
  local_28[0x68] = 1;
  local_22 = 0;
  local_21 = 0;
  local_14 = 4;
  FUN_0042e99c(param_1);
  ExceptionList = local_1c;
  return param_1;
}

