/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022bce0 */

int * FUN_1022bce0(char param_1)

{
  undefined *puVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  undefined2 *puVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_102887bd;
  local_10 = ExceptionList;
  uVar3 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_1022bea0(0);
  local_8 = 0;
  piVar4 = DAT_1039cd1c;
  if (DAT_1039cd1c == (int *)0x0) {
    piVar4 = (int *)FUN_1022ba60(0,uVar3);
    if (DAT_1039cd20 == '\0') {
      DAT_1039cd20 = '\x01';
      FUN_10234c50(&LAB_1022bdf0);
    }
    DAT_1039cd1c = piVar4;
    piVar4[4] = 0x3f;
    puVar1 = (undefined *)piVar4[6];
    if (puVar1 != &DAT_10357e78) {
      if (puVar1 != (undefined *)0x0) {
        thunk_FUN_10274120(puVar1);
      }
      piVar4[6] = 0;
      puVar5 = (undefined2 *)FUN_1026faa0(2);
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0x43;
      }
      piVar4[6] = (int)puVar5;
    }
    pcVar2 = *(code **)(*piVar4 + 4);
    (*(code *)PTR_guard_check_icall_1035d810)();
    (*pcVar2)();
    DAT_1039ccf4 = piVar4;
    DAT_1039cd10 = piVar4;
  }
  if (param_1 != '\0') {
    pcVar2 = *(code **)(*piVar4 + 4);
    (*(code *)PTR_guard_check_icall_1035d810)();
    (*pcVar2)();
  }
  FUN_1022bee0();
  ExceptionList = local_10;
  return piVar4;
}

