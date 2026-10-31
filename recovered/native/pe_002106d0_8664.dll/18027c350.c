/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027c350 */

void FUN_18027c350(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_348 [32];
  undefined1 local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_18027e66c();
    *puVar2 = 0x16;
    FUN_180290a50();
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
  }
  else {
    uVar1 = FUN_18027cba4(param_1,param_2,local_328);
    FUN_18027c994(uVar1,local_328,param_3);
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_348);
}

