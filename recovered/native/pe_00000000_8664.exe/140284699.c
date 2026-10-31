/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140284699 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140284699(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_a8;
  FUN_1402847cc(local_60,param_3,param_4,param_5);
  local_70 = 3;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  local_68 = local_60;
  FUN_140216d1f(param_1);
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_a8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_a8);
}

