/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140062ef0 */

undefined2 *
FUN_140062ef0(longlong param_1,undefined2 *param_2,undefined2 *param_3,undefined1 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_45 [5];
  ulonglong local_40;
  
  local_40 = DAT_1401c9640 ^ (ulonglong)auStack_78;
  if (param_2 != param_3) {
    do {
      local_50 = 0;
      iVar2 = FUN_1400da5d0(local_45,*param_2,&local_50,param_1 + 0x30);
      uVar1 = local_45[0];
      if (iVar2 != 1) {
        uVar1 = param_4;
      }
      *param_5 = uVar1;
      param_2 = param_2 + 1;
      param_5 = param_5 + 1;
    } while (param_2 != param_3);
  }
  if (DAT_1401c9640 != (local_40 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_40 ^ (ulonglong)auStack_78);
  }
  return param_2;
}

