/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032936e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14032936e(longlong *param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  iVar1 = FUN_1403101d8(&local_24,4,
                        *(undefined4 *)(param_1[0x2a] + -4 + (longlong)(int)param_1[0x29] * 4));
  if (*(int *)(*param_1 + 0x1660) == iVar1) {
    FUN_140329037(iVar1,4,(longlong)param_2,0);
  }
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_48);
}

