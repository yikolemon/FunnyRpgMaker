/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102684d0 */

bool FUN_102684d0(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  pcVar1 = (code *)FUN_10268530();
  if (pcVar1 == (code *)0x0) {
    bVar3 = false;
  }
  else {
    (*(code *)PTR_guard_check_icall_1035d810)(param_1);
    iVar2 = (*pcVar1)();
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}

