/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022dae0 */

void FUN_1022dae0(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &DAT_102888b0;
  uVar4 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 == 0) ||
     ((&DAT_1039d5e4)[iVar1] = (&DAT_1039d5e4)[iVar1] + -1, (char)(&DAT_1039d5e4)[iVar1] < '\x01'))
  {
    puVar5 = *(undefined4 **)(param_1 + 0x2c);
    local_8 = 0;
    for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
      pcVar2 = (code *)puVar5[2];
      (*(code *)PTR_guard_check_icall_1035d810)(0,param_1,puVar5[1],uVar4);
      (*pcVar2)();
    }
    puVar5 = *(undefined4 **)(param_1 + 0x28);
    while (puVar5 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar5;
      FUN_102283a0(puVar5,0x10);
      puVar5 = puVar3;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    puVar5 = *(undefined4 **)(param_1 + 0x2c);
    while (puVar5 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar5;
      FUN_102283a0(puVar5,0xc);
      puVar5 = puVar3;
    }
    iVar1 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (iVar1 != 0) {
      if (*(int **)(iVar1 + 4) != (int *)0x0) {
        pcVar2 = *(code **)(**(int **)(iVar1 + 4) + 8);
        (*(code *)PTR_guard_check_icall_1035d810)();
        puVar5 = (undefined4 *)(*pcVar2)();
        if (puVar5 != (undefined4 *)0x0) {
          pcVar2 = *(code **)*puVar5;
          (*(code *)PTR_guard_check_icall_1035d810)(1);
          (*pcVar2)();
        }
      }
      FUN_102283a0(iVar1,8);
    }
  }
  ExceptionList = local_10;
  return;
}

