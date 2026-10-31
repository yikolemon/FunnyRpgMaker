/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180082a64 */

undefined8 * FUN_180082a64(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  param_1[0xe] = &DAT_1803861e4;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar2 = (undefined8 *)FUN_180287560();
  if ((char *)*puVar2 == (char *)0x0) {
    iVar1 = 0x2e;
  }
  else {
    iVar1 = (int)*(char *)*puVar2;
  }
  *(int *)(param_1 + 0x12) = iVar1;
  param_1[0x13] = 0xffffffffffffffff;
  return param_1;
}

