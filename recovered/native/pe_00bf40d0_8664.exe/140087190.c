/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140087190 */

void FUN_140087190(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  CHAR local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  *param_5 = param_3;
  uVar1 = *param_2;
  iVar2 = FUN_140088a70(local_28,L'\0',param_2,(UINT *)(param_1 + 0x10));
  if (0 < iVar2) {
    uVar3 = (ulonglong)(iVar2 + -1);
    if (param_4 - *param_5 < (longlong)uVar3) {
      *param_2 = uVar1;
    }
    else if (0 < iVar2 + -1) {
      FUN_1400b3550((undefined8 *)*param_5,(undefined8 *)local_28,uVar3);
      *param_5 = *param_5 + uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_48);
}

