/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004e070 */

undefined8 *
FUN_18004e070(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong local_78;
  ulonglong local_70;
  undefined1 local_68 [16];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined1 local_21;
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
  FUN_18001cad2();
  local_50 = local_20 + 8;
  FUN_18001cad2();
  local_20[0xc] = 0;
  *(undefined1 *)(local_20 + 0xd) = 0;
  local_48 = local_20 + 0xe;
  FUN_18004c49e(local_48,local_30);
  *(undefined1 *)(local_20 + 0x16) = param_4;
  local_40 = local_20 + 0x17;
  FUN_180013990(local_40,9);
  local_20[0x19] = param_5;
  local_21 = 1;
  uVar1 = local_20[7];
  local_78 = ((longlong)uVar1 >> 0x3f & 0xe000000000000000U) + (uVar1 >> 5) * 4 + local_20[4];
  local_70 = (ulonglong)((uint)uVar1 & 0x1f);
  FUN_18001f704(local_38,local_68,&local_78,1,&local_21);
  plVar2 = (longlong *)local_30[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != local_30);
  }
  return local_20;
}

