/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001c600 */

undefined8 FUN_14001c600(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2 < 0) {
    param_2 = -param_2;
    uVar1 = 0x100002d;
  }
  else {
    uVar1 = *(undefined4 *)((longlong)&DAT_1401c8050 + (ulonglong)(*(uint *)param_1[1] >> 8 & 0xc));
  }
  FUN_14000372c(local_78,param_1 + 2);
  FUN_14000372c(local_58,param_1 + 6);
  FUN_14001d11c(local_b8,local_58,local_78);
  FUN_14001cc4d(local_38,*param_1,param_2,uVar1,param_1[1],local_b8);
  FUN_14000109c(local_98);
  FUN_14000109c(local_b8);
  return 1;
}

