/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140008356 */

undefined8
FUN_140008356(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
             longlong *param_5,longlong param_6,longlong param_7,longlong *param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1401c9640 ^ (ulonglong)auStack_78;
  local_48 = 0;
  *param_5 = param_3;
  *param_8 = param_6;
  lVar2 = *param_5;
  if (lVar2 != param_4) {
    uVar3 = 1;
    do {
      if (param_6 == param_7) goto LAB_140008404;
      local_58 = param_1 + 0x10;
      iVar1 = FUN_1400da650(param_6,lVar2,param_4 - lVar2,&local_48);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      else {
        if (iVar1 == -2) goto LAB_140008404;
        if (iVar1 == -1) {
          uVar3 = 2;
          goto LAB_140008404;
        }
      }
      *param_5 = *param_5 + (longlong)iVar1;
      param_6 = *param_8 + 2;
      *param_8 = param_6;
      lVar2 = *param_5;
    } while (lVar2 != param_4);
  }
  uVar3 = 0;
LAB_140008404:
  if (DAT_1401c9640 != (local_40 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_40 ^ (ulonglong)auStack_78);
  }
  return uVar3;
}

