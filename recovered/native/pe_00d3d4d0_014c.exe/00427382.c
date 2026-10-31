/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00427382 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl FUN_00427382(void *param_1)

{
  undefined1 auStack_17c [24];
  undefined **local_164 [9];
  undefined ***local_140;
  undefined **local_13c [9];
  undefined ***local_118;
  undefined **local_110 [9];
  undefined ***local_ec;
  undefined1 local_e8;
  undefined1 local_e0 [40];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined **local_88 [9];
  undefined ***local_64;
  undefined1 local_60;
  void **ppvStack_5c;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined ***local_50;
  undefined ***local_4c;
  undefined ***local_48;
  undefined ***local_44;
  undefined ***local_40;
  undefined ***local_3c;
  undefined ***local_38;
  undefined ***local_34;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 *local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_58 = (undefined1 *)&local_58;
  ppvStack_5c = &local_1c;
  local_18 = &LAB_0042e660;
  local_1c = ExceptionList;
  local_20 = auStack_17c;
  local_28 = auStack_17c;
  local_40 = local_88;
  local_88[0] = std::
                _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::SecondaryContainer(void)'::`1'::<lambda_83>,material_color_utilities::ToneDeltaPair,material_color_utilities::DynamicScheme_const&>
                ::vftable;
  local_64 = local_88;
  local_60 = 1;
  local_b0 = _DAT_004dc980;
  uStack_ac = _UNK_004dc984;
  uStack_a8 = _UNK_004dc988;
  uStack_a4 = _UNK_004dc98c;
  local_a0 = _DAT_004dc970;
  uStack_9c = _UNK_004dc974;
  uStack_98 = _UNK_004dc978;
  uStack_94 = _UNK_004dc97c;
  local_90 = 1;
  local_54 = local_e0;
  local_b8 = 0;
  local_21 = 1;
  local_3c = local_110;
  local_110[0] = std::
                 _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::SecondaryContainer(void)'::`1'::<lambda_82>,material_color_utilities::DynamicColor,material_color_utilities::DynamicScheme_const&>
                 ::vftable;
  local_48 = local_110;
  local_e8 = 1;
  local_2b = 1;
  local_38 = local_13c;
  local_13c[0] = std::
                 _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::SecondaryContainer(void)'::`1'::<lambda_81>,double,material_color_utilities::DynamicScheme_const&>
                 ::vftable;
  local_4c = local_13c;
  local_29 = 1;
  local_50 = local_164;
  local_164[0] = std::
                 _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::SecondaryContainer(void)'::`1'::<lambda_80>,material_color_utilities::TonalPalette,material_color_utilities::DynamicScheme_const&>
                 ::vftable;
  local_14 = 0xf;
  ExceptionList = ppvStack_5c;
  local_44 = local_64;
  local_34 = local_50;
  local_ec = local_48;
  local_118 = local_4c;
  local_140 = local_50;
  FUN_00402bae(auStack_17c,(uint *)"secondary_container");
  local_28[0x68] = 1;
  local_2a = 0;
  local_29 = 0;
  local_14 = 0xd;
  FUN_0042e99c(param_1);
  ExceptionList = local_1c;
  return param_1;
}

