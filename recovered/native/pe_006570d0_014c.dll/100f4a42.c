/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f4a42 */

void FUN_100f4a42(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1005c104(*(undefined4 *)param_1[1],*(undefined4 *)param_1[2],*(undefined4 *)param_1[3]
                      );
  *(undefined4 *)*param_1 = uVar1;
  uVar1 = FUN_1005c518(*(undefined4 *)param_1[1],*(undefined4 *)param_1[2]);
  *(undefined4 *)param_1[4] = uVar1;
  *(undefined1 *)param_1[5] = 1;
  return;
}

