/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001f544 */

undefined4 * __thiscall FUN_1001f544(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_14 = ExceptionList;
  local_18 = (undefined1 *)&local_1c;
  ExceptionList = &local_14;
  local_10 = &LAB_10059570;
  local_c = 0xffffffff;
  *param_1 = std::_Node_assert::vftable;
  puVar2 = (undefined4 *)param_1[5];
  local_1c = param_1;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[3];
    puVar2[3] = 0;
    (**(code **)*puVar2)(1);
    puVar2 = puVar1;
  }
  local_c = 0xffffffff;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(local_1c,0x18);
  }
  ExceptionList = local_14;
  return local_1c;
}

