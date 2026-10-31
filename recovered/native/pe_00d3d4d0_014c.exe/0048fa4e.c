/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048fa4e */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __cdecl
FUN_0048fa4e(FILE *param_1,undefined4 param_2,undefined4 param_3,PLARGE_INTEGER param_4,int *param_5
            )

{
  bool bVar1;
  undefined4 uVar2;
  void *local_14;
  
  if (param_1 != (FILE *)0x0) {
    if (((param_4 == (PLARGE_INTEGER)0x0) || (param_4 == (PLARGE_INTEGER)0x1)) ||
       (param_4 == (PLARGE_INTEGER)0x2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      __lock_file(param_1);
      uVar2 = FUN_0048f962(param_1,param_2,param_3,param_4,param_5);
      FUN_0048faee();
      ExceptionList = local_14;
      return uVar2;
    }
  }
  param_5[6] = 0x16;
  *(undefined1 *)(param_5 + 7) = 1;
  FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
  ExceptionList = local_14;
  return 0xffffffff;
}

