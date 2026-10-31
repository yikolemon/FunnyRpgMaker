/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802037e2 */

uint FUN_1802037e2(undefined8 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [44];
  byte local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1801ce682(*param_1,local_1c);
  uVar2 = 0;
  if ((iVar1 == 0) && ((ulonglong)*(byte *)((longlong)param_1 + 0x14) != 0)) {
    uVar2 = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar2 << 8 | (uint)local_1c[uVar3];
      uVar3 = uVar3 + 1;
    } while (*(byte *)((longlong)param_1 + 0x14) != uVar3);
  }
  *param_2 = iVar1;
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

