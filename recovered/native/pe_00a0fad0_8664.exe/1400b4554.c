/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b4554 */

longlong FUN_1400b4554(undefined4 param_1,longlong param_2,longlong param_3,longlong *param_4,
                      longlong *param_5,longlong param_6,longlong param_7,longlong param_8,
                      undefined1 *param_9)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 == 0 || param_2 == 0) {
    *param_9 = 0;
    param_3 = 0;
  }
  else {
    FUN_140135ff0(param_9);
    param_9[param_3] = 0;
  }
  *(undefined8 *)(param_9 + 0x7f8) = 0;
  param_9 = param_9 + param_3;
  FUN_1400d20b2(param_1,param_9,0x7f8 - param_3,param_8 + *param_5 + 4);
  lVar2 = param_4[1];
  while (lVar2 != -1) {
    FUN_1400d20b2(param_1,param_9,0x7f8 - param_3,param_8 + *(longlong *)(param_6 + *param_4) + 4);
    plVar1 = param_4 + 1;
    param_4 = (longlong *)(*plVar1 + param_7);
    lVar2 = *(longlong *)(param_7 + 8 + *plVar1);
  }
  iVar3 = FUN_1400d2196(param_1,param_9);
  iVar4 = FUN_1400d1d88(param_1);
  return param_3 + iVar4 * iVar3;
}

