/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140087080 */

void FUN_140087080(longlong param_1,undefined8 *param_2,longlong param_3,WCHAR *param_4,
                  longlong *param_5,LPSTR param_6,LPSTR param_7,longlong *param_8)

{
  WCHAR *pWVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  CHAR local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  *param_5 = param_3;
  *param_8 = (longlong)param_6;
  pWVar1 = (WCHAR *)*param_5;
  do {
    if ((pWVar1 == param_4) || (param_6 == param_7)) goto LAB_140087158;
    if ((longlong)param_7 - (longlong)param_6 < 5) {
      uVar2 = *param_2;
      iVar3 = FUN_140088a70(local_48,*pWVar1,param_2,(UINT *)(param_1 + 0x10));
      if (iVar3 < 0) goto LAB_140087158;
      uVar4 = (ulonglong)iVar3;
      if ((longlong)param_7 - *param_8 < (longlong)uVar4) {
        *param_2 = uVar2;
LAB_140087158:
                    /* WARNING: Subroutine does not return */
        FUN_140086440(local_40 ^ (ulonglong)auStack_68);
      }
      FUN_1400b3550((undefined8 *)*param_8,(undefined8 *)local_48,uVar4);
      *param_5 = *param_5 + 2;
      *param_8 = *param_8 + uVar4;
    }
    else {
      iVar3 = FUN_140088a70(param_6,*pWVar1,param_2,(UINT *)(param_1 + 0x10));
      if (iVar3 < 0) goto LAB_140087158;
      *param_5 = *param_5 + 2;
      *param_8 = *param_8 + (longlong)iVar3;
    }
    pWVar1 = (WCHAR *)*param_5;
    param_6 = (LPSTR)*param_8;
  } while( true );
}

