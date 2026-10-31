/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140287ba0 */

void FUN_140287ba0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 local_30 [8];
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 8) = param_2;
  FUN_140287c5a(local_30,param_1 + 0x10,param_2);
  FUN_140287cc0(param_1 + 0x10,local_30);
  if (local_28 != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(*local_28 + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}

