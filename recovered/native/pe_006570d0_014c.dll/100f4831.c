/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f4831 */

void FUN_100f4831(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1005c375(*(undefined4 *)param_1[1],*(undefined4 *)param_1[2]);
  *(undefined8 *)*param_1 = uVar2;
  uVar1 = FUN_1005c484(*(undefined4 *)param_1[1],*(undefined4 *)param_1[2]);
  *(undefined4 *)param_1[3] = uVar1;
  *(undefined1 *)param_1[4] = 1;
  return;
}

