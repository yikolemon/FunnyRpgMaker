/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401256ec */

void FUN_1401256ec(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_2 + 0x100);
  uStack_24 = *(undefined4 *)(param_2 + 0x104);
  uStack_20 = *(undefined4 *)(param_2 + 0x108);
  uStack_1c = *(undefined4 *)(param_2 + 0x10c);
  local_18 = *(undefined4 *)(param_2 + 0x110);
  uStack_14 = *(undefined4 *)(param_2 + 0x114);
  uStack_10 = *(undefined4 *)(param_2 + 0x118);
  uStack_c = *(undefined4 *)(param_2 + 0x11c);
  FUN_14010bfb4();
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_48);
}

