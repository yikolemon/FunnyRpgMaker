/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14029d083 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14029d083(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_88;
  FUN_14029d23f(local_48,param_3,param_4);
  local_58 = 2;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_50 = local_48;
  FUN_140216d1f(param_1);
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_88)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_88);
}

