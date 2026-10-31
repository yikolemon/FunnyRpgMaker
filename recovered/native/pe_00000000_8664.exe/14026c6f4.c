/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14026c6f4 */

undefined8 FUN_14026c6f4(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong local_48 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_38 = param_3;
  local_30 = param_2;
  local_24 = param_1;
  FUN_14026c79a(local_48);
  uVar1 = FUN_14026c805();
  FUN_1402718c0(local_48,local_48,*(undefined8 *)(local_48[0] + 8));
  thunk_FUN_1404a2310(local_48[0],0x30);
  return uVar1;
}

