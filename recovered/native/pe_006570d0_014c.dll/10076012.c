/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10076012 */

undefined4 * __thiscall FUN_10076012(undefined4 *param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_7c;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c2b50;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  param_1[1] = param_2;
  *param_1 = std::codecvt<wchar_t,char,_Mbstatet>::vftable;
  FUN_1000daa4("C");
  local_10 = 0;
  FUN_1022bf80(&local_7c);
  param_1[9] = local_60;
  param_1[10] = uStack_5c;
  param_1[0xb] = uStack_58;
  param_1[0xc] = uStack_54;
  param_1[6] = uStack_6c;
  param_1[7] = uStack_68;
  param_1[8] = uStack_64;
  param_1[9] = local_60;
  param_1[2] = local_7c;
  param_1[3] = uStack_78;
  param_1[4] = uStack_74;
  param_1[5] = uStack_70;
  local_10 = 0xffffffff;
  FUN_1000dcbe();
  *unaff_FS_OFFSET = local_18;
  return param_1;
}

