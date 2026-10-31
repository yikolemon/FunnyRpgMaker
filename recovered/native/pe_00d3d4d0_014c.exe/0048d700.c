/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048d700 */

bool __cdecl FUN_0048d700(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  pcVar1 = (code *)FUN_0048d760();
  if (pcVar1 == (code *)0x0) {
    bVar3 = false;
  }
  else {
    (*(code *)PTR_guard_check_icall_00508898)(param_1);
    iVar2 = (*pcVar1)();
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}

