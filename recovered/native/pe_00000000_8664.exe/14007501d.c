/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007501d */

void FUN_14007501d(void)

{
  longlong lVar1;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 local_b0 [53];
  undefined2 local_7b;
  undefined4 local_58;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  FUN_1400e0f8a(local_b0);
  local_7b = 0x101;
  local_58 = 0x41980000;
  lVar1 = FUN_140081200();
  local_c0 = 0;
  local_c8 = local_b0;
  FUN_1400e2732(*(undefined8 *)(lVar1 + 0x38),&DAT_1401d4480,0x3bb12,DAT_14020ff94);
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_e8);
}

