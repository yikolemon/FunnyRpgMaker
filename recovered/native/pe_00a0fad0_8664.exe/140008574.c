/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140008574 */

undefined8
FUN_140008574(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
             longlong *param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [35];
  undefined1 local_35 [5];
  ulonglong local_30;
  
  local_30 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  *param_5 = param_3;
  uVar3 = *param_2;
  iVar1 = FUN_1400da5d0(local_35,0,param_2,param_1 + 0x10);
  if (iVar1 < 1) {
    uVar3 = 2;
  }
  else {
    uVar2 = (ulonglong)(iVar1 - 1);
    if (param_4 - *param_5 < (longlong)uVar2) {
      *param_2 = uVar3;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      if (iVar1 != 1) {
        FUN_140135ff0(*param_5,local_35,uVar2);
        *param_5 = *param_5 + uVar2;
      }
    }
  }
  if (DAT_1401c9640 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_30 ^ (ulonglong)auStack_58);
}

