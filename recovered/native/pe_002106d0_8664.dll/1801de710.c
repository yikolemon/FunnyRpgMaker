/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801de710 */

void FUN_1801de710(undefined8 param_1,longlong param_2)

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
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_2 + 0x40);
  uStack_24 = *(undefined4 *)(param_2 + 0x44);
  uStack_20 = *(undefined4 *)(param_2 + 0x48);
  uStack_1c = *(undefined4 *)(param_2 + 0x4c);
  local_18 = *(undefined4 *)(param_2 + 0x50);
  uStack_14 = *(undefined4 *)(param_2 + 0x54);
  uStack_10 = *(undefined4 *)(param_2 + 0x58);
  uStack_c = *(undefined4 *)(param_2 + 0x5c);
  FUN_18019efc0();
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_48);
}

