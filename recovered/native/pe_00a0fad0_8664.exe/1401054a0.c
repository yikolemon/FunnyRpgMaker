/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401054a0 */

void FUN_1401054a0(longlong param_1)

{
  short sVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x68) == 0) || (*(char *)(param_1 + 0x72) == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_10 ^ (ulonglong)auStack_68);
  }
  sVar1 = (*(code *)PTR__guard_dispatch_icall_140178c20)(param_1,0xffff);
  if (sVar1 != -1) {
    local_48 = &local_38;
    iVar2 = (*(code *)PTR__guard_dispatch_icall_140178c20)
                      (*(undefined8 *)(param_1 + 0x68),param_1 + 0x74,local_30,&local_10);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x72) = 0;
    }
    else if (iVar2 != 1) {
      if (iVar2 == 3) {
        *(undefined1 *)(param_1 + 0x72) = 0;
      }
      goto LAB_14010552c;
    }
    if (local_38 - (longlong)local_30 != 0) {
      FUN_140116e20(local_30,1,local_38 - (longlong)local_30,*(undefined8 *)(param_1 + 0x80));
    }
  }
LAB_14010552c:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_10 ^ (ulonglong)auStack_68);
}

