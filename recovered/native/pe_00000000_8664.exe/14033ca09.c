/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14033ca09 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033ca09(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res10;
  uVar1 = FUN_140483874(1);
  puVar2 = (undefined8 *)FUN_1402549b2();
  local_38 = &local_res10;
  FUN_140483cf0(*puVar2,uVar1,param_1,0);
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_58);
}

