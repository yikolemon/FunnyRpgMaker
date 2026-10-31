/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140065170 */

longlong FUN_140065170(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
                      undefined1 param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  FUN_14002d81a(param_1,param_3);
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_1400652a0(param_1 + 0x48,param_2,param_5);
  *(undefined1 *)(param_1 + 0xe0) = param_4;
  uVar2 = FUN_140065468(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  plVar1 = (longlong *)param_3[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
  }
  return param_1;
}

