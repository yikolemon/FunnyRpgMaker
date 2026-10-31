/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047f650 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl FUN_0047f650(char param_1)

{
  undefined *puVar1;
  code *pcVar2;
  int *piVar3;
  undefined2 *puVar4;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004a708d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0047f2d0(&local_14,0);
  local_8 = 0;
  piVar3 = DAT_0051bb54;
  if (DAT_0051bb54 == (int *)0x0) {
    piVar3 = FUN_0047f4d0(0);
    if (DAT_0051bb58 == '\0') {
      DAT_0051bb58 = '\x01';
      FUN_004843f0(&LAB_0047f760);
    }
    DAT_0051bb54 = piVar3;
    piVar3[4] = 0x3f;
    puVar1 = (undefined *)piVar3[6];
    if (puVar1 != &DAT_00505b60) {
      if (puVar1 != (undefined *)0x0) {
        thunk_FUN_00495f00(puVar1);
      }
      piVar3[6] = 0;
      puVar4 = (undefined2 *)FUN_004924d0(2);
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0x43;
      }
      piVar3[6] = (int)puVar4;
    }
    pcVar2 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_00508898)();
    (*pcVar2)();
    _DAT_0051bb2c = piVar3;
    DAT_0051bb48 = piVar3;
  }
  if (param_1 != '\0') {
    pcVar2 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_00508898)();
    (*pcVar2)();
  }
  FUN_0047f310(&local_14);
  ExceptionList = local_10;
  return piVar3;
}

