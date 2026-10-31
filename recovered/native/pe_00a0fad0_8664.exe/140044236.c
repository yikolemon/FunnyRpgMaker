/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140044236 */

longlong FUN_140044236(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 local_60 [32];
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_2;
  local_28 = param_3;
  local_20 = param_1;
  FUN_140006874(local_60,param_2);
  FUN_1400445e8(local_20,local_60);
  FUN_1400017de(local_60);
  local_40 = local_20 + 0x40;
  FUN_14002ca6e(local_40,local_28);
  local_38 = local_20 + 0x80;
  *(undefined8 *)(local_20 + 0x80) = 0;
  *(undefined8 *)(local_20 + 0x88) = 0;
  *(undefined8 *)(local_20 + 0x90) = 0;
  *(undefined8 *)(local_20 + 0x98) = 0xf;
  *(undefined4 *)(local_20 + 0xa0) = 0xffffffff;
  *(undefined2 *)(local_20 + 0xa4) = 1;
  FUN_1400017de(local_30);
  plVar1 = (longlong *)local_28[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != local_28);
  }
  return local_20;
}

