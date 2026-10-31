/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140061e7a */

void FUN_140061e7a(longlong param_1,undefined2 param_2)

{
  undefined1 auStack_38 [46];
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  local_a = param_2;
  FUN_14005e836(*(undefined8 *)(param_1 + 200),&local_a,&local_8,*(uint *)(param_1 + 0xe0) >> 8 & 1)
  ;
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}

