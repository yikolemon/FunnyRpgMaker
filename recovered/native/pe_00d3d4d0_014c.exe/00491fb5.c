/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00491fb5 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined8 __cdecl FUN_00491fb5(FILE *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  void *local_14;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 7) = 1;
    param_2[6] = 0x16;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    uVar2 = 0xffffffff;
    uVar1 = 0xffffffff;
  }
  else {
    __lock_file(param_1);
    uVar1 = FUN_00491e14(param_1,param_2);
    FUN_0049203e();
    uVar2 = extraout_EDX;
  }
  ExceptionList = local_14;
  return CONCAT44(uVar2,uVar1);
}

