/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001c578 */

int FUN_14001c578(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStackY_58 [32];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStackY_58;
  iVar1 = 0;
  if (((int)param_1[1] != 0) && (iVar1 = 0, param_1[8] == 0)) {
    lVar2 = FUN_14001c617(*param_1,8,0,(int)param_1[1] * 2,0,&local_1c);
    param_1[8] = lVar2;
    iVar1 = local_1c;
    if (local_1c == 0) {
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      param_1[9] = lVar2 + (ulonglong)*(uint *)(param_1 + 1) * 8;
      FUN_14001c6bf((longlong)param_1);
      iVar1 = 0;
    }
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStackY_58)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStackY_58);
}

