/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025eb50 */

undefined4 * __thiscall FUN_1025eb50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  puVar3 = PTR_DAT_1039b4c4;
  puVar2 = PTR_PTR_1039b4c0;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = param_2[1];
    param_1[3] = *param_2;
    *(undefined1 *)(param_1 + 5) = 1;
    param_1[4] = uVar1;
    return param_1;
  }
  if (DAT_103a5004 == 0) {
    *(undefined1 *)(param_1 + 5) = 1;
    param_1[4] = puVar3;
    param_1[3] = puVar2;
  }
  return param_1;
}

