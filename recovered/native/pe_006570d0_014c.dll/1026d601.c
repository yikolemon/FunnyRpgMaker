/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026d601 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_1026d601(FILE *param_1,int param_2)

{
  undefined4 uVar1;
  void *local_14;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 0x1c) = 1;
    *(undefined4 *)(param_2 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_2);
  }
  else {
    if (((uint)param_1->_flag >> 0xc & 1) == 0) {
      __lock_file(param_1);
      uVar1 = FUN_1026d573(param_1,param_2);
      FUN_1026d690();
      ExceptionList = local_14;
      return uVar1;
    }
    __acrt_stdio_free_stream();
  }
  ExceptionList = local_14;
  return 0xffffffff;
}

