/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10234470 */

void __thiscall FUN_10234470(int param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_10234710(param_2);
  pcVar1 = *(code **)(*piVar3 + 0xc);
  (*(code *)PTR_guard_check_icall_1035d810)();
  cVar2 = (*pcVar1)();
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  *(int **)(param_1 + 0x38) = piVar3;
  *(undefined4 **)(param_1 + 0xc) = (undefined4 *)(param_1 + 4);
  *(undefined4 **)(param_1 + 0x10) = (undefined4 *)(param_1 + 8);
  *(undefined4 **)(param_1 + 0x1c) = (undefined4 *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x20) = (undefined4 *)(param_1 + 0x18);
  *(undefined4 **)(param_1 + 0x2c) = (undefined4 *)(param_1 + 0x24);
  *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

