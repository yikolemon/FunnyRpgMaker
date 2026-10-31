/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00482160 */

uint __fastcall FUN_00482160(int *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x18);
  (*(code *)PTR_guard_check_icall_00508898)();
  iVar3 = (*pcVar1)();
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  *(int *)param_1[0xb] = *(int *)param_1[0xb] + -1;
  pbVar2 = *(byte **)param_1[7];
  *(byte **)param_1[7] = pbVar2 + 1;
  return (uint)*pbVar2;
}

