/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020993d */

int FUN_18020993d(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_2c = 0;
  iVar1 = 0;
  if (param_3[0xc] == 0) {
    uVar2 = FUN_1801cc006(*param_3,(int)(param_2 - param_1) + 1,&local_2c);
    param_3[0xc] = uVar2;
    iVar1 = local_2c;
    if (local_2c == 0) {
      uVar3 = param_2 - param_1 & 0xffffffff;
      FUN_1802a82f0(uVar2,param_1,uVar3);
      *(undefined1 *)(param_3[0xc] + uVar3) = 0;
      iVar1 = local_2c;
    }
  }
  local_2c = iVar1;
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

