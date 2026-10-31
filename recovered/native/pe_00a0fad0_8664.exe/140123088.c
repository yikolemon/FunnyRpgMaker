/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140123088 */

void FUN_140123088(undefined8 param_1,int param_2,undefined8 param_3,uint param_4,longlong *param_5)

{
  int iVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined1 auStackY_108 [32];
  undefined4 local_d8 [4];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStackY_108;
  *param_5 = 0;
  if (param_2 == 1) {
    iVar1 = FUN_140123250(param_1,param_3,param_4,local_c8);
    if (iVar1 != 0) {
      lVar3 = _calloc_base((longlong)iVar1,1);
      *param_5 = lVar3;
      FUN_1401212e0(0);
      if ((*param_5 != 0) && (iVar1 = FUN_140130cc0(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_140123219;
    }
    DVar2 = GetLastError();
    if (DVar2 != 0x7a) goto LAB_140123219;
    iVar1 = FUN_140123250(param_1,param_3,param_4,0);
    if (iVar1 == 0) goto LAB_140123219;
    lVar3 = _calloc_base((longlong)iVar1,1);
    if (lVar3 != 0) {
      iVar1 = FUN_140123250(param_1,param_3,param_4,lVar3);
      goto LAB_140123187;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 0) {
        local_d8[0] = 0;
        iVar1 = FUN_140121f70(param_3,param_4 | 0x20000000,local_d8,2);
        if (iVar1 != 0) {
          *(undefined1 *)param_5 = (undefined1)local_d8[0];
        }
      }
      goto LAB_140123219;
    }
    iVar1 = FUN_140121f70(param_3,param_4,0,0);
    if (iVar1 == 0) goto LAB_140123219;
    lVar3 = _calloc_base((longlong)iVar1,2);
    if (lVar3 != 0) {
      iVar1 = FUN_140121f70(param_3,param_4,lVar3,iVar1);
LAB_140123187:
      if (iVar1 != 0) {
        *param_5 = lVar3;
        lVar3 = 0;
      }
    }
  }
  FUN_1401212e0(lVar3);
LAB_140123219:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)auStackY_108);
}

