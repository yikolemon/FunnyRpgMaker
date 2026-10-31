/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002fc20 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14002fc20(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined1 auStackY_24c8 [32];
  longlong local_2498 [10];
  longlong local_2448 [1154];
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_24c8;
  FUN_140031179(local_2448,*(undefined8 *)(param_1 + 0x10));
  FUN_140037b70(local_2498,local_2448);
  iVar1 = FUN_140037b8b(local_2498,param_1,*(longlong *)(param_2 + 8),param_4,param_5);
  FUN_14003811e(local_2498);
  FUN_140032392(local_2448);
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStackY_24c8)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStackY_24c8);
}

