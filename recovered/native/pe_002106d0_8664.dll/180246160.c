/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180246160 */

void FUN_180246160(longlong param_1)

{
  short sVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x68) == 0) || (*(char *)(param_1 + 0x72) == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_10 ^ (ulonglong)auStack_68);
  }
  sVar1 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(param_1,0xffff);
  if (sVar1 != -1) {
    local_48 = &local_38;
    iVar2 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                      (*(undefined8 *)(param_1 + 0x68),param_1 + 0x74,local_30,&local_10);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x72) = 0;
    }
    else if (iVar2 != 1) {
      if (iVar2 == 3) {
        *(undefined1 *)(param_1 + 0x72) = 0;
      }
      goto LAB_1802461ec;
    }
    if (local_38 - (longlong)local_30 != 0) {
      FUN_180286a64(local_30,1,local_38 - (longlong)local_30,*(undefined8 *)(param_1 + 0x80));
    }
  }
LAB_1802461ec:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_68);
}

