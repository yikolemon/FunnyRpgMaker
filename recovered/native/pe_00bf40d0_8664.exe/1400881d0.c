/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400881d0 */

void FUN_1400881d0(longlong *param_1)

{
  short sVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  if ((param_1[0xd] == 0) || (*(char *)((longlong)param_1 + 0x72) == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_10 ^ (ulonglong)auStack_68);
  }
  sVar1 = (*(code *)PTR__guard_dispatch_icall_1401200f0)(param_1,0xffff);
  if (sVar1 != -1) {
    local_48 = &local_38;
    iVar2 = (*(code *)PTR__guard_dispatch_icall_1401200f0)
                      (param_1[0xd],(longlong)param_1 + 0x74,local_30,&local_10);
    if (iVar2 == 0) {
      *(undefined1 *)((longlong)param_1 + 0x72) = 0;
    }
    else if (iVar2 != 1) {
      if (iVar2 == 3) {
        *(undefined1 *)((longlong)param_1 + 0x72) = 0;
      }
      goto LAB_14008825c;
    }
    if (local_38 - (longlong)local_30 != 0) {
      FUN_1400997cc(local_30,1,local_38 - (longlong)local_30,param_1[0x10]);
    }
  }
LAB_14008825c:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStack_68);
}

