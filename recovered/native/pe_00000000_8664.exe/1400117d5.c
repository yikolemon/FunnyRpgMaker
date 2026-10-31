/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400117d5 */

int FUN_1400117d5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 local_res20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  local_res20 = param_4;
  local_30 = &local_res20;
  puVar3 = (ulonglong *)FUN_140011866();
  local_48 = 0;
  local_40 = &local_res20;
  iVar1 = FUN_1401934d4(*puVar3 | 2,param_1,param_2,param_3);
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_68)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_68);
}

