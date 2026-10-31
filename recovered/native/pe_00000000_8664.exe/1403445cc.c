/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403445cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403445cc(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  lVar1 = DAT_14062a630;
  local_18 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  *(undefined1 *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) == '\0') {
    FUN_14031010a(&local_20,&local_28,param_1,param_2);
    FUN_140344100(local_20,local_28,1);
  }
  if (ram0x000140613b10 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_18 ^ (ulonglong)auStack_48);
}

