/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235020 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_10235020(LPCWSTR param_1,uint param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6
                 ,UINT param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LPCWSTR lpWideCharStr;
  LPCWSTR lpDestStr;
  
  iVar3 = param_4;
  if (0 < param_4) {
    iVar1 = FUN_102682c0(param_3,param_4);
    iVar3 = iVar1 + 1;
    if (param_4 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  iVar1 = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,param_3,iVar3,(LPWSTR)0x0,0);
  if ((iVar1 == 0) ||
     (uVar2 = iVar1 * 2 + 8, uVar2 = -(uint)((uint)(iVar1 * 2) < uVar2) & uVar2, uVar2 == 0))
  goto LAB_102350e8;
  if (uVar2 < 0x401) {
    puVar4 = (undefined4 *)&stack0xffffffe0;
    lpWideCharStr = (LPCWSTR)&stack0xffffffe0;
    if (&stack0x00000000 != &DAT_00000020) {
LAB_102350b5:
      lpWideCharStr = (LPCWSTR)(puVar4 + 2);
    }
  }
  else {
    puVar4 = (undefined4 *)FUN_1026faa0(uVar2);
    lpWideCharStr = (LPCWSTR)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0xdddd;
      goto LAB_102350b5;
    }
  }
  if (lpWideCharStr == (LPCWSTR)0x0) {
LAB_102350e8:
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  iVar3 = MultiByteToWideChar(param_7,1,param_3,iVar3,lpWideCharStr,iVar1);
  if ((iVar3 == 0) ||
     (iVar3 = LCMapStringEx(param_1,param_2,lpWideCharStr,iVar1,(LPWSTR)0x0,0,(LPNLSVERSIONINFO)0x0,
                            (LPVOID)0x0,0), iVar3 == 0)) {
    if (*(int *)(lpWideCharStr + -4) == 0xdddd) {
      thunk_FUN_10274120(lpWideCharStr + -4);
    }
    goto LAB_102350e8;
  }
  if ((param_2 & 0x400) != 0) {
    if ((param_6 != 0) &&
       ((param_6 < iVar3 ||
        (iVar3 = LCMapStringEx(param_1,param_2,lpWideCharStr,iVar1,param_5,param_6,
                               (LPNLSVERSIONINFO)0x0,(LPVOID)0x0,0), iVar3 == 0)))) {
      FUN_10235000();
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    goto LAB_1023521a;
  }
  uVar2 = iVar3 * 2 + 8;
  uVar2 = -(uint)((uint)(iVar3 * 2) < uVar2) & uVar2;
  if (uVar2 != 0) {
    if (uVar2 < 0x401) {
      puVar4 = (undefined4 *)&stack0xffffffe0;
      lpDestStr = (LPCWSTR)&stack0xffffffe0;
      if (&stack0x00000000 != &DAT_00000020) {
LAB_102351b3:
        lpDestStr = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = (undefined4 *)FUN_1026faa0(uVar2);
      lpDestStr = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_102351b3;
      }
    }
    if ((lpDestStr != (LPCWSTR)0x0) &&
       (iVar1 = LCMapStringEx(param_1,param_2,lpWideCharStr,iVar1,lpDestStr,iVar3,
                              (LPNLSVERSIONINFO)0x0,(LPVOID)0x0,0), iVar1 != 0)) {
      if (param_6 == 0) {
        WideCharToMultiByte(param_7,0,lpDestStr,iVar3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else {
        WideCharToMultiByte(param_7,0,lpDestStr,iVar3,(LPSTR)param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0
                           );
      }
    }
  }
  FUN_10235000();
LAB_1023521a:
  FUN_10235000();
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

