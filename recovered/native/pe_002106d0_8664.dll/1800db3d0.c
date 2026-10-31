/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800db3d0 */

void FUN_1800db3d0(longlong param_1,longlong param_2)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [56];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar2 = param_2 - param_1 >> 4;
  if (0 < (longlong)uVar2) {
    do {
      uVar3 = uVar2 - 1;
      local_30 = *(undefined8 *)(param_1 + uVar3 * 8);
      FUN_1800db45f(param_1,uVar3,param_2 - param_1 >> 3,&local_30);
      bVar1 = 1 < uVar2;
      uVar2 = uVar3;
    } while (bVar1);
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
}

