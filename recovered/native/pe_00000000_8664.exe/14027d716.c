/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027d716 */

void FUN_14027d716(undefined8 *param_1,undefined4 *param_2)

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
  local_48 = FUN_14049df00(local_50);
  FUN_140213408(local_40,&local_50,0);
  FUN_14027d82a(param_1 + 4);
  FUN_140215304(param_1 + 4,local_40);
  FUN_14021331c(local_40);
  return;
}

