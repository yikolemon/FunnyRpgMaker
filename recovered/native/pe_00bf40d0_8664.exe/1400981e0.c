/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400981e0 */

undefined2 FUN_1400981e0(FILE *param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  __acrt_ptd *p_Var7;
  undefined *puVar8;
  WCHAR *pWVar9;
  undefined *puVar10;
  WCHAR local_res8 [4];
  byte local_res10;
  undefined1 local_res11;
  WCHAR local_38;
  WCHAR local_36 [7];
  
  puVar10 = &DAT_14013bf10;
  uVar4 = 1;
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    iVar2 = FUN_1400a5bb4((longlong)param_1);
    if ((iVar2 == -1) || (iVar2 = FUN_1400a5bb4((longlong)param_1), iVar2 == -2)) {
      puVar8 = &DAT_14013bf10;
    }
    else {
      iVar2 = FUN_1400a5bb4((longlong)param_1);
      uVar3 = FUN_1400a5bb4((longlong)param_1);
      puVar8 = (undefined *)
               ((ulonglong)(uVar3 & 0x3f) * 0x48 + (&DAT_1401433a0)[(longlong)iVar2 >> 6]);
    }
    if (puVar8[0x39] != '\0') {
      local_38 = L'\0';
      pWVar9 = &local_38;
      do {
        uVar4 = _fgetc_nolock(&param_1->_ptr);
        if ((int)uVar4 == -1) {
          return 0xffff;
        }
        *(char *)pWVar9 = (char)uVar4;
        pWVar9 = (WCHAR *)((longlong)pWVar9 + 1);
      } while (pWVar9 != local_36);
      return local_38;
    }
  }
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    iVar2 = FUN_1400a5bb4((longlong)param_1);
    if ((iVar2 != -1) && (iVar2 = FUN_1400a5bb4((longlong)param_1), iVar2 != -2)) {
      iVar2 = FUN_1400a5bb4((longlong)param_1);
      uVar3 = FUN_1400a5bb4((longlong)param_1);
      puVar10 = (undefined *)
                ((ulonglong)(uVar3 & 0x3f) * 0x48 + (&DAT_1401433a0)[(longlong)iVar2 >> 6]);
    }
    if ((char)puVar10[0x38] < '\0') {
      local_res8[0] = L'\0';
      uVar5 = _fgetc_nolock(&param_1->_ptr);
      if ((int)uVar5 != -1) {
        local_res10 = (byte)uVar5;
        lVar6 = FUN_14008ec04();
        if (*(short *)(lVar6 + (ulonglong)local_res10 * 2) < 0) {
          uVar4 = _fgetc_nolock(&param_1->_ptr);
          if ((int)uVar4 == -1) {
            ungetc((int)(char)local_res10,param_1);
            return 0xffff;
          }
          local_res11 = (undefined1)uVar4;
          uVar4 = 2;
        }
        iVar2 = FUN_1400a5508(local_res8,&local_res10,uVar4);
        if (iVar2 != -1) {
          return local_res8[0];
        }
        p_Var7 = FUN_140095e5c();
        *(undefined4 *)p_Var7 = 0x2a;
      }
      return 0xffff;
    }
  }
  if (*(int *)&param_1->_base < 2) {
    uVar1 = thunk_FUN_1400abdcc(&param_1->_ptr);
  }
  else {
    *(int *)&param_1->_base = *(int *)&param_1->_base + -2;
    uVar1 = *(undefined2 *)param_1->_ptr;
    param_1->_ptr = param_1->_ptr + 2;
  }
  return uVar1;
}

