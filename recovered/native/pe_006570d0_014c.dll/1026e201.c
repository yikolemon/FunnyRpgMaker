/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026e201 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined2 FUN_1026e201(undefined4 param_1,FILE *param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 local_14;
  
  if (param_2 == (FILE *)0x0) {
    *(undefined1 *)(param_3 + 0x1c) = 1;
    *(undefined4 *)(param_3 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_3);
    uVar1 = 0xffff;
  }
  else {
    __lock_file(param_2);
    uVar1 = FUN_1026e095(param_1,param_2,param_3);
    FUN_1026e289();
  }
  ExceptionList = local_14;
  return uVar1;
}

