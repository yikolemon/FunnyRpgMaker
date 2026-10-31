/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00491311 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined2 __cdecl FUN_00491311(WCHAR param_1,FILE *param_2,int *param_3)

{
  undefined2 uVar1;
  void *local_14;
  
  if (param_2 == (FILE *)0x0) {
    *(undefined1 *)(param_3 + 7) = 1;
    param_3[6] = 0x16;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_3);
    uVar1 = 0xffff;
  }
  else {
    __lock_file(param_2);
    uVar1 = FUN_004911a5(param_1,param_2,param_3);
    FUN_00491399();
  }
  ExceptionList = local_14;
  return uVar1;
}

