/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102694e4 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_102694e4(char *param_1,char *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_20;
  void *local_14;
  
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
  }
  else if (*param_1 == '\0') {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
  }
  else {
    __acrt_stdio_allocate_stream();
    if (local_20 != 0) {
      uVar2 = FUN_10279714(param_1,param_2,param_3,local_20);
      FUN_1026958f();
      ExceptionList = local_14;
      return uVar2;
    }
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x18;
  }
  ExceptionList = local_14;
  return 0;
}

