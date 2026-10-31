/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f8fee */

void FUN_1800f8fee(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18005b224(*(undefined4 *)param_1[1],*(undefined8 *)param_1[2],
                        *(undefined8 *)param_1[3]);
  *(undefined8 *)*param_1 = uVar1;
  uVar1 = FUN_18005b757(*(undefined4 *)param_1[1],*(undefined8 *)param_1[2]);
  *(undefined8 *)param_1[4] = uVar1;
  *(undefined1 *)param_1[5] = 1;
  return;
}

