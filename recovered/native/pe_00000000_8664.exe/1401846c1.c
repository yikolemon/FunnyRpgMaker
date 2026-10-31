/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401846c1 */

undefined4 FUN_1401846c1(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  iVar2 = FUN_14012d612(param_1,*(int *)(param_1 + 8) + -4);
  uVar4 = 0;
  if (iVar2 == 0) {
    uVar3 = FUN_14012dffe(param_1,&local_2c);
    uVar4 = 0;
    if (local_2c == 0) {
      uVar4 = uVar3;
    }
    FUN_14012d612(param_1,uVar1);
  }
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
}

