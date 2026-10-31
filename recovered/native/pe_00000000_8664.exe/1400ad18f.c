/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ad18f */

void FUN_1400ad18f(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  lVar2 = DAT_140f2a910;
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined4 *)(DAT_140f2a910 + 0xdf8);
  *(undefined4 *)(DAT_140f2a910 + 0xdf8) = 0;
  local_28 = 0;
  FUN_1400acf0e(param_1,&local_28,0x8000);
  *(undefined4 *)(lVar2 + 0xdf8) = uVar1;
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
}

