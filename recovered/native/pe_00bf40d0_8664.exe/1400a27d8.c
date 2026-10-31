/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a27d8 */

void FUN_1400a27d8(__crt_locale_pointers *param_1,int param_2,ushort *param_3,uint param_4,
                  longlong *param_5)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  LPVOID pvVar4;
  LPWSTR pWVar5;
  undefined1 auStackY_108 [32];
  undefined4 local_d8 [4];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_108;
  *param_5 = 0;
  if (param_2 == 1) {
    iVar1 = FUN_1400a29a0(param_1,param_3,param_4,(ulonglong)local_c8,0x80);
    if (iVar1 != 0) {
      pvVar4 = _calloc_base((longlong)iVar1,1);
      *param_5 = (longlong)pvVar4;
      FUN_1400a1290((LPVOID)0x0);
      if ((*param_5 != 0) &&
         (iVar1 = FUN_1400b0270((char *)*param_5,(longlong)iVar1,(longlong)local_c8,
                                (longlong)(iVar1 + -1)), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_1400a2969;
    }
    DVar2 = GetLastError();
    if (DVar2 != 0x7a) goto LAB_1400a2969;
    iVar1 = FUN_1400a29a0(param_1,param_3,param_4,0,0);
    if (iVar1 == 0) goto LAB_1400a2969;
    pWVar5 = _calloc_base((longlong)iVar1,1);
    if (pWVar5 != (LPWSTR)0x0) {
      iVar1 = FUN_1400a29a0(param_1,param_3,param_4,(ulonglong)pWVar5,iVar1);
      goto LAB_1400a28d7;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 0) {
        local_d8[0] = 0;
        iVar1 = FUN_1400a1e0c(param_3,param_4 | 0x20000000,(LPWSTR)local_d8,2);
        if (iVar1 != 0) {
          *(undefined1 *)param_5 = (undefined1)local_d8[0];
        }
      }
      goto LAB_1400a2969;
    }
    uVar3 = FUN_1400a1e0c(param_3,param_4,(LPWSTR)0x0,0);
    if (uVar3 == 0) goto LAB_1400a2969;
    pWVar5 = _calloc_base((longlong)(int)uVar3,2);
    if (pWVar5 != (LPWSTR)0x0) {
      iVar1 = FUN_1400a1e0c(param_3,param_4,pWVar5,uVar3);
LAB_1400a28d7:
      if (iVar1 != 0) {
        *param_5 = (longlong)pWVar5;
        pWVar5 = (LPWSTR)0x0;
      }
    }
  }
  FUN_1400a1290(pWVar5);
LAB_1400a2969:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_108);
}

