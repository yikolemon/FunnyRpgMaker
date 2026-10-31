/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048fd70 */

undefined4 FUN_0048fd70(void)

{
  LPCSTR pCVar1;
  uint uVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (DAT_00521924 == (undefined4 *)0x0) {
LAB_0048fde6:
    uVar5 = 0xffffffff;
  }
  else {
    pCVar1 = (LPCSTR)*DAT_00521924;
    puVar6 = DAT_00521924;
    while (pCVar1 != (LPCSTR)0x0) {
      uVar2 = FUN_00495fa1(0,0,pCVar1,-1,(LPWSTR)0x0,0);
      if (uVar2 == 0) goto LAB_0048fde6;
      pwVar3 = FUN_00497060(uVar2,2);
      if (pwVar3 == (wchar_t *)0x0) {
        pwVar3 = (wchar_t *)0x0;
LAB_0048fde0:
        FUN_00495f00(pwVar3);
        goto LAB_0048fde6;
      }
      iVar4 = FUN_00495fa1(0,0,(LPCSTR)*puVar6,-1,pwVar3,uVar2);
      if (iVar4 == 0) goto LAB_0048fde0;
      FUN_0049d03d(pwVar3,0);
      FUN_00495f00((LPVOID)0x0);
      puVar6 = puVar6 + 1;
      pCVar1 = (LPCSTR)*puVar6;
    }
    uVar5 = 0;
  }
  return uVar5;
}

