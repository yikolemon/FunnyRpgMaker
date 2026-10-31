/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800666d3 */

undefined8 FUN_1800666d3(undefined8 param_1,uint param_2)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_58;
  if ((param_2 < 0x110000) && ((param_2 & 0xfffff800) != 0xd800)) {
    thunk_FUN_180066751();
    if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_58)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_10 ^ (ulonglong)auStack_58);
  }
  FUN_180063fee(local_30);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_30,&DAT_1803a6330);
}

