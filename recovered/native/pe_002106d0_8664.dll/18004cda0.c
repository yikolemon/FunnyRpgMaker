/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004cda0 */

longlong FUN_18004cda0(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
                      undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  FUN_18004c49e(param_1,param_3);
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_18004ced8(param_1 + 0x48,param_2,param_5);
  *(undefined1 *)(param_1 + 0xe8) = param_4;
  *(undefined1 *)(param_1 + 0xe9) = param_6;
  uVar2 = FUN_18004d054(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  plVar1 = (longlong *)param_3[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
  }
  return param_1;
}

