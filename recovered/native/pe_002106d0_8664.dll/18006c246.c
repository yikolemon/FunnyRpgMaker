/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006c246 */

void FUN_18006c246(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *local_50;
  undefined8 local_48;
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *(undefined4 *)(param_1 + 2) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2[9];
  *(undefined4 *)((longlong)param_1 + 0x1c) = 6;
  if ((*(byte *)((longlong)param_2 + 1) & 4) == 0) {
    param_1[1] = CONCAT44(param_2[7],param_2[8]);
    *param_1 = *(undefined8 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x2e;
  }
  local_50 = param_2 + 0xb;
  local_48 = FUN_18028ca30(local_50);
  FUN_180001f38(local_40,&local_50,0);
  FUN_18006c35a(param_1 + 4);
  FUN_180003e34(param_1 + 4,local_40);
  FUN_180001e4c(local_40);
  return;
}

