/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001860e */

int __thiscall FUN_1001860e(int param_1,int param_2)

{
  undefined4 uVar1;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100591a0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_14 = 0;
  local_24 = param_1;
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (**(code **)**(undefined4 **)(param_2 + 0x24))(param_1);
    *(undefined4 *)(local_24 + 0x24) = uVar1;
  }
  ExceptionList = local_1c;
  return local_24;
}

