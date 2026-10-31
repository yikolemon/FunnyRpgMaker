/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140071f10 */

void FUN_140071f10(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  if ((undefined8 *)param_1[1] == (undefined8 *)param_1[2]) {
    FUN_14000d3b4(param_1);
    lVar1 = param_1[1];
  }
  else {
    *(undefined8 *)param_1[1] = *param_2;
    lVar1 = param_1[1] + 8;
    param_1[1] = lVar1;
  }
  lVar2 = lVar1 - *param_1 >> 3;
  if (1 < lVar2) {
    local_18 = *(undefined8 *)(lVar1 + -8);
    FUN_140072b95(*param_1,lVar2 + -1,&local_18,param_1[3]);
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_38);
}

