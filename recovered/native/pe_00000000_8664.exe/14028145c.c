/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028145c */

undefined8 *
FUN_14028145c(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4,
             undefined1 *param_5,undefined2 *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = &DAT_1404c9628;
  puVar1 = param_1 + 1;
  FUN_1402141fc();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_140255dba(param_1 + 5,param_3[1] - *param_3,param_3,param_3 + 1,puVar1,param_1 + 5,uVar2);
  *(int *)(param_1 + 8) = (int)param_3[3];
  *(undefined1 *)(param_1 + 9) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x4c) = *param_4;
  *(undefined2 *)(param_1 + 10) = *param_6;
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)(param_6 + 1);
  return param_1;
}

