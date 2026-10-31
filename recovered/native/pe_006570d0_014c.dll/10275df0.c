/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10275df0 */

void FUN_10275df0(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 local_8c;
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_8c = param_3;
  *param_5 = 0;
  if (param_2 == 1) {
    iVar1 = FUN_10275fa0(param_1,param_3,param_4,local_88,0x80);
    if (iVar1 != 0) {
      iVar2 = FUN_10275d90(iVar1,1);
      *param_5 = iVar2;
      FUN_10274120(0);
      if ((*param_5 != 0) && (iVar1 = FUN_10283660(*param_5,iVar1,local_88,iVar1 + -1), iVar1 != 0))
      {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_10275f86;
    }
    DVar3 = GetLastError();
    if ((DVar3 != 0x7a) || (iVar1 = FUN_10275fa0(param_1,param_3,param_4,0,0), iVar1 == 0))
    goto LAB_10275f86;
    iVar2 = FUN_10275d90(iVar1,1);
    if (iVar2 != 0) {
      iVar1 = FUN_10275fa0(param_1,local_8c,param_4,iVar2,iVar1);
LAB_10275ef5:
      if (iVar1 != 0) {
        *param_5 = iVar2;
        iVar2 = 0;
      }
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 0) {
        local_8c = 0;
        iVar1 = ___acrt_GetLocaleInfoEx_16(param_3,param_4 | 0x20000000,&local_8c,2);
        if (iVar1 != 0) {
          *(undefined1 *)param_5 = (undefined1)local_8c;
        }
      }
      goto LAB_10275f86;
    }
    iVar1 = ___acrt_GetLocaleInfoEx_16(param_3,param_4,0,0);
    if (iVar1 == 0) goto LAB_10275f86;
    iVar2 = FUN_10275d90(iVar1,2);
    if (iVar2 != 0) {
      iVar1 = ___acrt_GetLocaleInfoEx_16(local_8c,param_4,iVar2,iVar1);
      goto LAB_10275ef5;
    }
  }
  FUN_10274120(iVar2);
LAB_10275f86:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

