/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266316 */

undefined4 * __thiscall
FUN_10266316(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  puVar2 = param_1 + 0xb;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  return param_1;
}

