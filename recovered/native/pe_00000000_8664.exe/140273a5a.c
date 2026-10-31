/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140273a5a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140273a5a(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  puVar2 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar2 = (undefined8 *)*param_3;
  }
  uVar1 = FUN_14022da8b(puVar2,param_3[2]);
  FUN_140254d40(param_1,local_38,param_3,uVar1);
  if (local_30 == 0) {
    local_30 = *(longlong *)(param_1 + 8);
  }
  *param_2 = local_30;
  if (ram0x000140613b10 == (local_28 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_28 ^ (ulonglong)auStack_58);
}

