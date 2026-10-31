/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f9692 */

void FUN_1800f9692(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_180054704(local_50,param_1);
  uVar1 = FUN_1800136a6(param_2,"isDockspaceSet");
  FUN_1800500c4(uVar1,local_50);
  FUN_180054704(local_40,param_1 + 1);
  uVar1 = FUN_1800136a6(param_2,&DAT_18035f516);
  FUN_1800500c4(uVar1,local_40);
  FUN_1800e1510(local_30,param_1 + 2);
  uVar1 = FUN_1800136a6(param_2,&DAT_1803773ae);
  FUN_1800500c4(uVar1,local_30);
  return;
}

