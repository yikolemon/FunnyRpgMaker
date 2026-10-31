/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140283e74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140283e74(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_78;
  FUN_1402845bb(local_38,param_3);
  local_48 = 1;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_40 = local_38;
  FUN_140216d1f(param_1);
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_78);
}

