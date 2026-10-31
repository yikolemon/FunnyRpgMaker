/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10279eb7 */

int FUN_10279eb7(void)

{
  LPWCH pWVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  
  pWVar1 = GetEnvironmentStringsW();
  if (pWVar1 == (LPWCH)0x0) {
    return 0;
  }
  pwVar2 = find_end_of_double_null_terminated_sequence(pWVar1);
  uVar4 = (int)pwVar2 - (int)pWVar1 & 0xfffffffe;
  iVar3 = FUN_10274170(uVar4);
  if (iVar3 != 0) {
    FUN_1025b2d0(iVar3,pWVar1,uVar4);
  }
  FUN_10274120(0);
  FreeEnvironmentStringsW(pWVar1);
  return iVar3;
}

