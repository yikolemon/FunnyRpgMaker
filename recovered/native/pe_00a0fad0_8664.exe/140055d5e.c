/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140055d5e */

undefined8 FUN_140055d5e(undefined8 *param_1,undefined8 param_2)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  lVar2 = param_1[2];
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  lVar4 = FUN_1400423eb();
  lVar3 = 0;
  do {
    lVar5 = lVar3;
    local_28 = (longlong)param_1 + lVar5 + lVar2 * 2;
    if ((local_28 == lVar4) ||
       (sVar1 = *(short *)((longlong)param_1 + lVar5 + lVar2 * 2 + -2), sVar1 == 0x5c)) break;
    lVar3 = lVar5 + -2;
  } while (sVar1 != 0x2f);
  local_20 = -lVar5 >> 1;
  FUN_1400423a4(param_2,&local_28,0);
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_48);
}

