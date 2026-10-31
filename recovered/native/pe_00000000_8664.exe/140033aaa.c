/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140033aaa */

void FUN_140033aaa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVar1 = FUN_140019bd2();
  if (*(longlong *)(lVar1 + 8) != 0) {
    FUN_140033b30(param_1,lVar1,param_4);
    return;
  }
  FUN_140030a1c(local_48,0,param_1 + 8,param_4);
  FUN_140030a90(local_48);
  return;
}

