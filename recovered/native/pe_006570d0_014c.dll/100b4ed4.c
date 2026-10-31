/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b4ed4 */

undefined4 * __thiscall FUN_100b4ed4(undefined4 *param_1,int *param_2,undefined1 param_3)

{
  int *piVar1;
  undefined4 **ppuVar2;
  undefined1 uVar3;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4920;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = param_2;
  piVar1 = *(int **)((int)param_2 + *(int *)(*param_2 + 4) + 0x38);
  ppuVar2 = &local_24;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    ppuVar2 = (undefined4 **)local_20;
  }
  local_20 = (undefined1 *)ppuVar2;
  local_14 = 0;
  local_24 = param_1;
  uVar3 = FUN_100b4f82(param_3);
  *(undefined1 *)(local_24 + 1) = uVar3;
  ExceptionList = local_1c;
  return local_24;
}

