/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10279e17 */

int FUN_10279e17(void)

{
  LPWCH pWVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pWVar1 = GetEnvironmentStringsW();
  iVar5 = 0;
  if (pWVar1 != (LPWCH)0x0) {
    pwVar2 = find_end_of_double_null_terminated_sequence(pWVar1);
    iVar3 = (int)pwVar2 - (int)pWVar1 >> 1;
    iVar4 = FUN_10274283(0,0,pWVar1,iVar3,0,0,0,0);
    if (iVar4 == 0) {
      FreeEnvironmentStringsW(pWVar1);
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_10274170(iVar4);
      if (iVar5 == 0) {
        FUN_10274120();
        FreeEnvironmentStringsW(pWVar1);
        iVar5 = 0;
      }
      else {
        iVar3 = FUN_10274283(0,0,pWVar1,iVar3,iVar5,iVar4,0,0);
        if (iVar3 == 0) {
          FUN_10274120(iVar5);
          iVar5 = 0;
        }
        else {
          FUN_10274120(0);
        }
        FreeEnvironmentStringsW(pWVar1);
      }
    }
  }
  return iVar5;
}

