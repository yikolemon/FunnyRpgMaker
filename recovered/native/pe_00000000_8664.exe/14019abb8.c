/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019abb8 */

void FUN_14019abb8(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_348 [32];
  undefined1 local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_14019e8cc();
    *puVar2 = 0x16;
    FUN_1401ae640();
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
  }
  else {
    uVar1 = FUN_14019b4b4(param_1,param_2,local_328);
    FUN_14019b13c(uVar1,local_328,param_3);
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_348);
}

