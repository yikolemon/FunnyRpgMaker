/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00482820 */

uint __fastcall FUN_00482820(int *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  uint uVar3;
  
  pbVar1 = *(byte **)param_1[7];
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + *(int *)param_1[0xb])) {
    return (uint)*pbVar1;
  }
  pcVar2 = *(code **)(*param_1 + 0x1c);
  (*(code *)PTR_guard_check_icall_00508898)();
  uVar3 = (*pcVar2)();
  if (uVar3 == 0xffffffff) {
    return 0xffffffff;
  }
  pcVar2 = *(code **)(*param_1 + 0x10);
  (*(code *)PTR_guard_check_icall_00508898)(uVar3);
  (*pcVar2)();
  return uVar3;
}

