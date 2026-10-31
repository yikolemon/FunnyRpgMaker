/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402739e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1402739e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  uVar1 = FUN_14022da8b(puVar2,param_2[2]);
  FUN_140254d40(param_1,local_30,param_2,uVar1);
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_58)) {
    return local_28 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_58);
}

