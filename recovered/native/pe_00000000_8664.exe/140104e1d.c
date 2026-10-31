/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140104e1d */

int FUN_140104e1d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res18;
  puVar3 = (ulonglong *)FUN_140011866();
  local_38 = 0;
  local_30 = &local_res18;
  iVar1 = FUN_1401934d4(*puVar3 | 1,param_1,0xffffffffffffffff,param_2);
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
}

