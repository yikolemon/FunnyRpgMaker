/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180013ef1 */

void FUN_180013ef1(undefined8 param_1)

{
  longlong local_80 [7];
  longlong *local_48;
  undefined1 local_40 [32];
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_180003216(local_40,param_1);
  local_48 = (longlong *)0x0;
  local_20 = (longlong *)0x0;
  local_48 = (longlong *)FUN_1800599f8(local_40);
  local_20 = local_48;
  FUN_18001405b(local_80);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x20))(local_48,local_48 != local_80);
    local_48 = (longlong *)0x0;
  }
  FUN_180001ef2(local_40);
  return;
}

