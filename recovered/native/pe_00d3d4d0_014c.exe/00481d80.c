/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00481d80 */

void __cdecl FUN_00481d80(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  LPVOID pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &DAT_004a7200;
  uVar5 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 == 0) ||
     ((&DAT_0051bbf8)[iVar1] = (&DAT_0051bbf8)[iVar1] + -1, (char)(&DAT_0051bbf8)[iVar1] < '\x01'))
  {
    puVar6 = *(undefined4 **)(param_1 + 0x2c);
    local_8 = 0;
    for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)*puVar6) {
      pcVar2 = (code *)puVar6[2];
      (*(code *)PTR_guard_check_icall_00508898)(0,param_1,puVar6[1],uVar5);
      (*pcVar2)();
    }
    puVar6 = *(undefined4 **)(param_1 + 0x28);
    while (puVar6 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar6;
      FUN_0047f280(puVar6);
      puVar6 = puVar3;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    puVar6 = *(undefined4 **)(param_1 + 0x2c);
    while (puVar6 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar6;
      FUN_0047f280(puVar6);
      puVar6 = puVar3;
    }
    pvVar4 = *(LPVOID *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (pvVar4 != (LPVOID)0x0) {
      if (*(int **)((int)pvVar4 + 4) != (int *)0x0) {
        pcVar2 = *(code **)(**(int **)((int)pvVar4 + 4) + 8);
        (*(code *)PTR_guard_check_icall_00508898)();
        puVar6 = (undefined4 *)(*pcVar2)();
        if (puVar6 != (undefined4 *)0x0) {
          pcVar2 = *(code **)*puVar6;
          (*(code *)PTR_guard_check_icall_00508898)(1);
          (*pcVar2)();
        }
      }
      FUN_0047f280(pvVar4);
    }
  }
  ExceptionList = local_10;
  return;
}

