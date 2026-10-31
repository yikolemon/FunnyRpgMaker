/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b2c77 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1402b2c77(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  undefined1 *local_78;
  undefined1 local_70 [80];
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_c8;
  local_a8 = param_6;
  thunk_FUN_1402b45d3(local_70,param_3,param_4,param_5);
  local_80 = 4;
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  local_78 = local_70;
  FUN_140255e8c(param_1);
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_c8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_c8);
}

