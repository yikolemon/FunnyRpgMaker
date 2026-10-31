/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140005522 */

undefined8 * FUN_140005522(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  *(undefined4 *)(param_1 + 1) = param_3;
  *param_1 = std::ctype<wchar_t>::vftable;
  FUN_140088880((undefined4 *)&local_40);
  param_1[4] = local_30;
  param_1[5] = CONCAT44(uStack_24,uStack_28);
  param_1[2] = local_40;
  param_1[3] = uStack_38;
  FUN_140088960(&local_40);
  *(ulonglong *)((longlong)param_1 + 0x4c) = CONCAT44(uStack_20,uStack_24);
  *(undefined8 *)((longlong)param_1 + 0x54) = uStack_1c;
  param_1[8] = local_30;
  param_1[9] = CONCAT44(uStack_24,uStack_28);
  param_1[6] = local_40;
  param_1[7] = uStack_38;
  return param_1;
}

