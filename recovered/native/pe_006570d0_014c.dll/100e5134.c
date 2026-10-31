/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e5134 */

undefined4 * __thiscall FUN_100e5134(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_24;
  local_10 = 0xffffffff;
  local_14 = &LAB_100eaac0;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  *param_1 = 0x3306b;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0x802] = 3000;
  local_20 = param_1;
  uVar2 = FUN_1022c7e0();
  puVar1 = local_20;
  *(undefined8 *)(param_1 + 0x804) = uVar2;
  local_24 = param_1 + 0x806;
  param_1[0x80f] = 0;
  local_10 = 0;
  *(undefined1 *)(local_20 + 1) = param_2;
  local_20[0x802] = param_3;
  uVar2 = FUN_1022c7e0();
  *(undefined8 *)(puVar1 + 0x804) = uVar2;
  _memset((void *)((int)puVar1 + 5),0,0x2000);
  ExceptionList = local_18;
  return local_20;
}

