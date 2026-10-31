/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002c316 */

undefined8 * FUN_14002c316(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1400038fa(param_1,param_2);
  FUN_140004bec((longlong)(param_1 + 4),(longlong)(param_2 + 4));
  FUN_140004bec((longlong)(param_1 + 0xc),(longlong)(param_2 + 0xc));
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  FUN_14002c68c((longlong)(param_1 + 0x15),(longlong)(param_2 + 0x15));
  FUN_14002c68c((longlong)(param_1 + 0x1e),(longlong)(param_2 + 0x1e));
  param_1[0x2b] = param_2[0x2b];
  uVar1 = param_2[0x27];
  uVar2 = param_2[0x28];
  uVar3 = param_2[0x2a];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = uVar3;
  param_1[0x27] = uVar1;
  param_1[0x28] = uVar2;
  FUN_14002c68c((longlong)(param_1 + 0x2c),(longlong)(param_2 + 0x2c));
  return param_1;
}

