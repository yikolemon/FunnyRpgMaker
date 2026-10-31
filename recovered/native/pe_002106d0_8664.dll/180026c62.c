/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180026c62 */

undefined8 FUN_180026c62(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar1 = *(undefined4 *)((longlong)&DAT_1802b07c0 + (ulonglong)(*(uint *)param_1[1] >> 8 & 0xc));
  FUN_180003216(local_78,param_1 + 2);
  FUN_180003216(local_58,param_1 + 6);
  FUN_1800275e6(local_b8,local_58,local_78);
  FUN_180027117(local_38,*param_1,param_2,uVar1,param_1[1],local_b8);
  FUN_180001ef2(local_98);
  FUN_180001ef2(local_b8);
  return 1;
}

