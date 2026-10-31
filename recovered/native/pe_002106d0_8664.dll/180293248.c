/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180293248 */

void FUN_180293248(undefined8 param_1,int param_2,undefined8 param_3,uint param_4,longlong *param_5)

{
  int iVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined1 auStackY_108 [32];
  undefined4 local_d8 [4];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStackY_108;
  *param_5 = 0;
  if (param_2 == 1) {
    iVar1 = FUN_180293410(param_1,param_3,param_4,local_c8);
    if (iVar1 != 0) {
      lVar3 = _calloc_base((longlong)iVar1,1);
      *param_5 = lVar3;
      FUN_180290e40(0);
      if ((*param_5 != 0) && (iVar1 = FUN_1802a36a0(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_1802933d9;
    }
    DVar2 = GetLastError();
    if (DVar2 != 0x7a) goto LAB_1802933d9;
    iVar1 = FUN_180293410(param_1,param_3,param_4,0);
    if (iVar1 == 0) goto LAB_1802933d9;
    lVar3 = _calloc_base((longlong)iVar1,1);
    if (lVar3 != 0) {
      iVar1 = FUN_180293410(param_1,param_3,param_4,lVar3);
      goto LAB_180293347;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 0) {
        local_d8[0] = 0;
        iVar1 = FUN_180291b20(param_3,param_4 | 0x20000000,local_d8,2);
        if (iVar1 != 0) {
          *(undefined1 *)param_5 = (undefined1)local_d8[0];
        }
      }
      goto LAB_1802933d9;
    }
    iVar1 = FUN_180291b20(param_3,param_4,0,0);
    if (iVar1 == 0) goto LAB_1802933d9;
    lVar3 = _calloc_base((longlong)iVar1,2);
    if (lVar3 != 0) {
      iVar1 = FUN_180291b20(param_3,param_4,lVar3,iVar1);
LAB_180293347:
      if (iVar1 != 0) {
        *param_5 = lVar3;
        lVar3 = 0;
      }
    }
  }
  FUN_180290e40(lVar3);
LAB_1802933d9:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStackY_108);
}

