/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00484440 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00484440(LPCWSTR param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
                 UINT param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LPCWSTR lpWideCharStr;
  LPCWSTR lpDestStr;
  LPCWSTR local_10;
  LPCWSTR local_c;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  iVar3 = param_4;
  if (0 < param_4) {
    iVar1 = FUN_0048d190(param_3,param_4);
    iVar3 = iVar1 + 1;
    if (param_4 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  iVar1 = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,param_3,iVar3,(LPWSTR)0x0,0);
  if ((iVar1 == 0) ||
     (uVar2 = iVar1 * 2 + 8, uVar2 = -(uint)((uint)(iVar1 * 2) < uVar2) & uVar2, uVar2 == 0))
  goto LAB_00484508;
  if (uVar2 < 0x401) {
    puVar4 = (undefined4 *)&stack0xffffffe4;
    lpWideCharStr = (LPCWSTR)&stack0xffffffe4;
    if (&stack0x00000000 != (undefined1 *)0x1c) {
LAB_004844d5:
      lpWideCharStr = (LPCWSTR)(puVar4 + 2);
    }
  }
  else {
    puVar4 = (undefined4 *)FUN_004924d0(uVar2);
    lpWideCharStr = (LPCWSTR)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0xdddd;
      goto LAB_004844d5;
    }
  }
  local_10 = lpWideCharStr;
  if (lpWideCharStr == (LPCWSTR)0x0) {
LAB_00484508:
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
  }
  iVar3 = MultiByteToWideChar(param_7,1,param_3,iVar3,lpWideCharStr,iVar1);
  if ((iVar3 == 0) ||
     (iVar3 = LCMapStringEx(param_1,param_2,lpWideCharStr,iVar1,(LPWSTR)0x0,0,(LPNLSVERSIONINFO)0x0,
                            (LPVOID)0x0,0), iVar3 == 0)) {
    if (*(int *)(lpWideCharStr + -4) == 0xdddd) {
      thunk_FUN_00495f00(lpWideCharStr + -4);
    }
    goto LAB_00484508;
  }
  if ((param_2 & 0x400) != 0) {
    if ((param_6 != 0) &&
       ((param_6 < iVar3 ||
        (iVar3 = LCMapStringEx(param_1,param_2,lpWideCharStr,iVar1,param_5,param_6,
                               (LPNLSVERSIONINFO)0x0,(LPVOID)0x0,0), iVar3 == 0)))) {
      FUN_00484660((int *)&local_10);
                    /* WARNING: Subroutine does not return */
      FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
    }
    goto LAB_0048463a;
  }
  uVar2 = iVar3 * 2 + 8;
  uVar2 = -(uint)((uint)(iVar3 * 2) < uVar2) & uVar2;
  if (uVar2 == 0) {
    local_c = (LPCWSTR)0x0;
  }
  else {
    if (uVar2 < 0x401) {
      puVar4 = (undefined4 *)&stack0xffffffe4;
      lpDestStr = (LPCWSTR)&stack0xffffffe4;
      if (&stack0x00000000 != (undefined1 *)0x1c) {
LAB_004845d3:
        lpDestStr = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = (undefined4 *)FUN_004924d0(uVar2);
      lpDestStr = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_004845d3;
      }
    }
    local_c = lpDestStr;
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
  FUN_00484660((int *)&local_c);
LAB_0048463a:
  FUN_00484660((int *)&local_10);
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

