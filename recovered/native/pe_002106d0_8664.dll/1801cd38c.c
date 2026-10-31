/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cd38c */

int FUN_1801cd38c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  iVar1 = 6;
  if (param_2 != (longlong *)0x0 && param_1 != 0) {
    plVar2 = (longlong *)FUN_1801c9a4b(param_1,0x178,&local_24);
    iVar1 = local_24;
    if (local_24 == 0) {
      *plVar2 = param_1;
      plVar2[1] = 0xe00000002;
      *(undefined4 *)(plVar2 + 2) = 3;
      *(undefined4 *)(plVar2 + 0x2e) = 1;
      *param_2 = (longlong)plVar2;
      iVar1 = 0;
    }
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
}

