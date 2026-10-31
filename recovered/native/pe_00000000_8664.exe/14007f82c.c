/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007f82c */

void FUN_14007f82c(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  *(undefined4 *)(DAT_140f2a910 + 0x2974) = 0;
  if (param_1 != 0) {
    local_20 = 0;
    uVar1 = FUN_140096b54();
    lVar2 = FUN_1400780ec(param_1,&DAT_140ec332a);
    if (lVar2 != 0) {
      thunk_FUN_1401a4ca4(uVar1,1,local_20,lVar2);
      FUN_14007826c(lVar2);
    }
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

