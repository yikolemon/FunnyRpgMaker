/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009112a */

int FUN_14009112a(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  iVar1 = FUN_140077fc4(&local_28,8,
                        *(undefined4 *)(param_1[0x2a] + -4 + (longlong)(int)param_1[0x29] * 4));
  if (*(int *)(*param_1 + 0x1660) == iVar1) {
    FUN_140090e7f(iVar1,0xc,param_2,0);
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
}

