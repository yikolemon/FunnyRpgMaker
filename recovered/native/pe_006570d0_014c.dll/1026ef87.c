/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026ef87 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined8 FUN_1026ef87(FILE *param_1,int param_2)

{
  undefined8 uVar1;
  void *local_14;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 0x1c) = 1;
    *(undefined4 *)(param_2 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_2);
    uVar1 = 0xffffffffffffffff;
  }
  else {
    __lock_file(param_1);
    uVar1 = FUN_1026ed34(param_1,param_2);
    FUN_1026f010();
  }
  ExceptionList = local_14;
  return uVar1;
}

