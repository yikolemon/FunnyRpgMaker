/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004854d0 */

void __cdecl FUN_004854d0(int *param_1)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  code *pcVar4;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  puStack_10 = &LAB_004858c0;
  local_14 = ExceptionList;
  local_c = DAT_0050e8c0 ^ 0x50cba0;
  ExceptionList = &local_14;
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[4] == 3)) &&
     ((((iVar1 = param_1[5], iVar1 == 0x19930520 || (iVar1 == 0x19930521)) || (iVar1 == 0x19930522))
      && (pbVar2 = (byte *)param_1[7], pbVar2 != (byte *)0x0)))) {
    if (*(undefined **)(pbVar2 + 4) != (undefined *)0x0) {
      local_8 = 0;
      FUN_004855f0(param_1[6],*(undefined **)(pbVar2 + 4));
      ExceptionList = local_14;
      return;
    }
    if (((*pbVar2 & 0x10) != 0) && (piVar3 = *(int **)param_1[6], piVar3 != (int *)0x0)) {
      pcVar4 = *(code **)(*piVar3 + 8);
      (*(code *)PTR_guard_check_icall_00508898)(piVar3);
      (*pcVar4)();
    }
  }
  ExceptionList = local_14;
  return;
}

