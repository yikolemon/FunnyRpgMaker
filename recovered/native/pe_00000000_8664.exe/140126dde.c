/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140126dde */

longlong FUN_140126dde(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                      undefined1 param_5,longlong *param_6,longlong *param_7,undefined4 *param_8,
                      longlong *param_9)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_14000372c(param_1,param_2);
  FUN_140007f78(param_1 + 0x20,param_3);
  FUN_140007f78(param_1 + 0x60,param_4);
  *(undefined1 *)(param_1 + 0xa0) = param_5;
  FUN_14012494e(param_1 + 0xa8,param_6);
  FUN_14012494e(param_1 + 0xf0,param_7);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_8 + 8);
  uVar2 = *param_8;
  uVar3 = param_8[1];
  uVar4 = param_8[2];
  uVar5 = param_8[3];
  uVar6 = param_8[5];
  uVar7 = param_8[6];
  uVar8 = param_8[7];
  *(undefined4 *)(param_1 + 0x148) = param_8[4];
  *(undefined4 *)(param_1 + 0x14c) = uVar6;
  *(undefined4 *)(param_1 + 0x150) = uVar7;
  *(undefined4 *)(param_1 + 0x154) = uVar8;
  *(undefined4 *)(param_1 + 0x138) = uVar2;
  *(undefined4 *)(param_1 + 0x13c) = uVar3;
  *(undefined4 *)(param_1 + 0x140) = uVar4;
  *(undefined4 *)(param_1 + 0x144) = uVar5;
  FUN_14012494e(param_1 + 0x160,param_9);
  FUN_14000109c(param_2);
  plVar1 = (longlong *)param_3[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
    param_3[7] = 0;
  }
  plVar1 = (longlong *)param_4[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_4);
    param_4[7] = 0;
  }
  if (((char)param_6[8] == '\x01') && (plVar1 = (longlong *)param_6[7], plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_6);
    param_6[7] = 0;
  }
  if (((char)param_7[8] == '\x01') && (plVar1 = (longlong *)param_7[7], plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_7);
    param_7[7] = 0;
  }
  if (((char)param_9[8] == '\x01') && (plVar1 = (longlong *)param_9[7], plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_9);
  }
  return param_1;
}

