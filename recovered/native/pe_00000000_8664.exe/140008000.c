/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140008000 */

undefined8 *
FUN_140008000(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lStack_78;
  ulonglong uStack_70;
  undefined1 auStack_68 [16];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined1 uStack_21;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *param_1 = param_2;
  local_58 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_38 = param_1 + 4;
  local_30 = param_3;
  local_20 = param_1;
  FUN_14000bb72();
  local_50 = local_20 + 8;
  FUN_14000bb72();
  local_20[0xc] = 0;
  *(undefined1 *)(local_20 + 0xd) = 0;
  local_48 = local_20 + 0xe;
  FUN_140004d3e(local_48,local_30);
  *(undefined1 *)(local_20 + 0x16) = param_4;
  puStack_40 = local_20 + 0x17;
  FUN_140005640(puStack_40,9);
  local_20[0x19] = param_5;
  uStack_21 = 1;
  uVar1 = local_20[7];
  lStack_78 = ((longlong)uVar1 >> 0x3f & 0xe000000000000000U) + (uVar1 >> 5) * 4 + local_20[4];
  uStack_70 = (ulonglong)((uint)uVar1 & 0x1f);
  FUN_14000bc34(local_38,auStack_68,&lStack_78,1,&uStack_21);
  plVar2 = (longlong *)local_30[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != local_30);
  }
  return local_20;
}

