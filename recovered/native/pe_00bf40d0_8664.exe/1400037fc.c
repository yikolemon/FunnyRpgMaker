/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400037fc */

longlong * FUN_1400037fc(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***local_48 [2];
  ulonglong local_38;
  ulonglong local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_3;
  if (param_3[2] != 0) {
    FUN_1400039e4(param_3,(undefined8 *)": ",2);
  }
  (**(code **)(**(longlong **)(param_2 + 2) + 0x10))(*(longlong **)(param_2 + 2),local_48,*param_2);
  ppppuVar5 = local_48;
  if (0xf < local_30) {
    ppppuVar5 = (undefined8 ****)local_48[0];
  }
  FUN_1400039e4(local_28,ppppuVar5,local_38);
  plVar4 = local_28;
  FUN_1400021ea((longlong *)local_48);
  lVar1 = *plVar4;
  lVar2 = plVar4[1];
  lVar3 = plVar4[3];
  param_1[2] = plVar4[2];
  param_1[3] = lVar3;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  plVar4[2] = 0;
  plVar4[3] = 0xf;
  *(undefined1 *)plVar4 = 0;
  FUN_1400021ea(local_28);
  return param_1;
}

