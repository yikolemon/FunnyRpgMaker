/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140041dc6 */

undefined8 * FUN_140041dc6(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 local_48 [32];
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  (**(code **)(*(longlong *)param_2[1] + 0x10))
            ((longlong *)param_2[1],local_48,*(undefined4 *)param_2);
  FUN_14000b166(param_1,local_48);
  local_28 = param_1;
  FUN_1400017de(local_48);
  *local_28 = std::_System_error::vftable;
  uVar1 = param_2[1];
  local_28[3] = *param_2;
  local_28[4] = uVar1;
  return local_28;
}

