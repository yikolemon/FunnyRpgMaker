/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018c2d0 */

void FUN_14018c2d0(longlong param_1,undefined8 *param_2,longlong param_3,undefined2 *param_4,
                  longlong *param_5,longlong param_6,longlong param_7,longlong *param_8)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  *param_5 = param_3;
  *param_8 = param_6;
  puVar1 = (undefined2 *)*param_5;
  do {
    if ((puVar1 == param_4) || (param_6 == param_7)) goto LAB_14018c3a8;
    if (param_7 - param_6 < 5) {
      uVar2 = *param_2;
      iVar3 = FUN_14018a230(local_48,*puVar1,param_2,param_1 + 0x10);
      if (iVar3 < 0) goto LAB_14018c3a8;
      lVar4 = (longlong)iVar3;
      if (param_7 - *param_8 < lVar4) {
        *param_2 = uVar2;
LAB_14018c3a8:
                    /* WARNING: Subroutine does not return */
        FUN_140188a00(local_40 ^ (ulonglong)auStack_68);
      }
      FUN_1401c5180(*param_8,local_48,lVar4);
      *param_5 = *param_5 + 2;
      *param_8 = *param_8 + lVar4;
    }
    else {
      iVar3 = FUN_14018a230(param_6,*puVar1,param_2,param_1 + 0x10);
      if (iVar3 < 0) goto LAB_14018c3a8;
      *param_5 = *param_5 + 2;
      *param_8 = *param_8 + (longlong)iVar3;
    }
    puVar1 = (undefined2 *)*param_5;
    param_6 = *param_8;
  } while( true );
}

