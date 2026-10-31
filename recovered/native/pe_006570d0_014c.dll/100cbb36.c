/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cbb36 */

void __fastcall FUN_100cbb36(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100cc530;
  local_14 = ExceptionList;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    local_c = 0xffffffff;
    piVar2 = *(int **)(iVar1 + 0x2c);
    ExceptionList = &local_14;
    local_1c = iVar1;
    piVar3 = &local_1c;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(iVar1 + 8));
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      piVar3 = (int *)local_18;
    }
    local_18 = (undefined1 *)piVar3;
    FUN_102283a0(local_1c,0x38);
    ExceptionList = local_14;
  }
  return;
}

