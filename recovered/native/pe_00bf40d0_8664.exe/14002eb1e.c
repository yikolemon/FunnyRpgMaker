/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002eb1e */

undefined8 *
FUN_14002eb1e(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             undefined1 param_5,longlong *param_6,longlong *param_7,undefined8 *param_8,
             longlong *param_9)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1400038fa(param_1,param_2);
  FUN_140004bec((longlong)(param_1 + 4),(longlong)param_3);
  FUN_140004bec((longlong)(param_1 + 0xc),(longlong)param_4);
  *(undefined1 *)(param_1 + 0x14) = param_5;
  FUN_14002c68c((longlong)(param_1 + 0x15),(longlong)param_6);
  FUN_14002c68c((longlong)(param_1 + 0x1e),(longlong)param_7);
  param_1[0x2b] = param_8[4];
  uVar2 = *param_8;
  uVar3 = param_8[1];
  uVar4 = param_8[3];
  param_1[0x29] = param_8[2];
  param_1[0x2a] = uVar4;
  param_1[0x27] = uVar2;
  param_1[0x28] = uVar3;
  FUN_14002c68c((longlong)(param_1 + 0x2c),(longlong)param_9);
  FUN_1400021ea(param_2);
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

