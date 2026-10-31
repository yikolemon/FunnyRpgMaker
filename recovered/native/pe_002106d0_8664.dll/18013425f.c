/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013425f */

void FUN_18013425f(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  lVar2 = DAT_180419160;
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined4 *)(DAT_180419160 + 0xdf8);
  *(undefined4 *)(DAT_180419160 + 0xdf8) = 0;
  local_28 = 0;
  FUN_180133fde(param_1,&local_28,0x8000);
  *(undefined4 *)(lVar2 + 0xdf8) = uVar1;
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
}

