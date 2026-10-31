/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bb0c6 */

undefined8 *
FUN_1402bb0c6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = *param_2;
  puVar1 = param_1 + 1;
  FUN_140214a5a(puVar1,param_2 + 1,param_3,param_4,puVar1);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  puVar2 = param_1 + 6;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_140255dba(puVar2,param_2[7] - param_2[6],param_2 + 6,param_2 + 7,puVar1,puVar2);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_140255dba(param_1 + 9,param_2[10] - param_2[9],param_2 + 9,param_2 + 10,puVar1,puVar2,
                param_1 + 9);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_1402bb2ac(param_1 + 0xd,(longlong)(param_2[0xe] - param_2[0xd]) >> 5,param_2 + 0xd,
                param_2 + 0xe);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_140253d0a(param_1 + 0x10,(longlong)(param_2[0x11] - param_2[0x10]) >> 4,param_2 + 0x10,
                param_2 + 0x11);
  param_1[0x13] = param_2[0x13];
  return param_1;
}

