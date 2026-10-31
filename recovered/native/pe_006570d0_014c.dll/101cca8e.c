/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101cca8e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101cca8e(undefined4 param_1)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_178 [24];
  undefined **local_160 [9];
  undefined ***local_13c;
  undefined **local_138 [9];
  undefined ***local_114;
  undefined **local_10c [9];
  undefined ***local_e8;
  undefined1 local_e4;
  undefined1 local_dc [40];
  undefined1 local_b4;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 local_8c;
  undefined1 local_84 [40];
  undefined1 local_5c;
  int *piStack_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
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
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_54 = (undefined1 *)&local_54;
  piStack_58 = &local_1c;
  local_18 = &LAB_101d5f10;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)piStack_58;
  local_28 = auStack_178;
  local_20 = auStack_178;
  local_50 = local_84;
  local_5c = 0;
  local_ac = _DAT_103083e0;
  uStack_a8 = _UNK_103083e4;
  uStack_a4 = _UNK_103083e8;
  uStack_a0 = _UNK_103083ec;
  local_9c = _DAT_103083b0;
  uStack_98 = _UNK_103083b4;
  uStack_94 = _UNK_103083b8;
  uStack_90 = _UNK_103083bc;
  local_8c = 1;
  local_4c = local_dc;
  local_b4 = 0;
  local_21 = 1;
  local_40 = local_10c;
  local_10c[0] = std::
                 _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::Outline(void)'::`1'::<lambda_46>,material_color_utilities::DynamicColor,material_color_utilities::DynamicScheme_const&>
                 ::vftable;
  local_e4 = 1;
  local_2b = 1;
  local_44 = local_138;
  local_138[0] = std::
                 _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::Outline(void)'::`1'::<lambda_45>,double,material_color_utilities::DynamicScheme_const&>
                 ::vftable;
  local_29 = 1;
  local_48 = local_160;
  local_160[0] = std::
                 _Func_impl_no_alloc<`public:_static_struct_material_color_utilities::DynamicColor___cdecl_material_color_utilities::MaterialDynamicColors::Outline(void)'::`1'::<lambda_44>,material_color_utilities::TonalPalette,material_color_utilities::DynamicScheme_const&>
                 ::vftable;
  local_14 = 0xe;
  local_3c = local_40;
  local_38 = local_44;
  local_34 = local_48;
  local_e8 = local_40;
  local_114 = local_44;
  local_13c = local_48;
  FUN_10001f66("outline");
  local_28[0x68] = 0;
  local_2a = 0;
  local_29 = 0;
  local_14 = 0xc;
  FUN_101d62ac();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

