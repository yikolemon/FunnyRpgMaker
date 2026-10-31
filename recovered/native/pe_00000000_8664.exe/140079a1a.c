/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140079a1a */

void FUN_140079a1a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    uVar1 = FUN_140077ab4(0);
    if (param_1[4] != 0) {
      FUN_1401c5180(uVar1,param_1[4],(longlong)*(int *)(param_1 + 3) * 0xc);
      FUN_140077b90(param_1[4]);
    }
    param_1[4] = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}

