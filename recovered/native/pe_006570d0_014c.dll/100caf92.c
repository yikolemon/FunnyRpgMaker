/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100caf92 */

void __fastcall FUN_100caf92(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100cc480;
  local_1c = ExceptionList;
  local_14 = 1;
  iVar4 = *(int *)(param_1 + 0x48);
  ExceptionList = &local_1c;
  local_24 = param_1;
  piVar3 = &local_28;
  if (iVar4 != 0) {
    piVar3 = &local_28;
    if (*(int **)(param_1 + 0xdc) != (int *)0x0) {
      local_28 = iVar4;
      (**(code **)(**(int **)(param_1 + 0xdc) + 8))(param_1 + 0x4c,&local_28);
      iVar4 = *(int *)(local_24 + 0x48);
      piVar3 = (int *)local_20;
    }
    local_20 = (undefined1 *)piVar3;
    iVar2 = local_24;
    FUN_1026d543(iVar4);
    *(undefined4 *)(iVar2 + 0x48) = 0;
    piVar1 = *(int **)(iVar2 + 0x104);
    piVar3 = (int *)local_20;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(local_24 + 0x4c);
      piVar3 = (int *)local_20;
    }
  }
  local_20 = (undefined1 *)piVar3;
  local_14 = 0xffffffff;
  FUN_100c96fc();
  FUN_10001fee();
  FUN_100c9cbc();
  ExceptionList = local_1c;
  return;
}

