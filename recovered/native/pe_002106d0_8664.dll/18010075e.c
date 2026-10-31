/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010075e */

void FUN_18010075e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    uVar1 = FUN_1800fe7f8(0);
    if (param_1[4] != 0) {
      FUN_1802a82f0(uVar1,param_1[4],(longlong)*(int *)(param_1 + 3) * 0xc);
      FUN_1800fe8d4(param_1[4]);
    }
    param_1[4] = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}

