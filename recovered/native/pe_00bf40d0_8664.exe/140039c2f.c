/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140039c2f */

int FUN_140039c2f(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    iVar1 = 0x23;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xb8);
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      iVar1 = FUN_1400384ff(param_1,&local_20,param_3);
      if (iVar1 != 0) goto LAB_140039c7a;
      *(longlong *)(param_1 + 0xb8) = local_20;
      *(code **)(param_1 + 0xc0) = FUN_140038628;
      lVar2 = local_20;
    }
    *param_2 = lVar2;
    iVar1 = 0;
  }
LAB_140039c7a:
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

