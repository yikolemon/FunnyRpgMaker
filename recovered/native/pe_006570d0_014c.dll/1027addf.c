/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027addf */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_1027addf(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_14;
  
  if (param_1 < 0x2000) {
    uVar3 = 0;
    ___acrt_lock(7);
    iVar4 = 0;
    iVar2 = DAT_103a5430;
    while (iVar2 <= (int)param_1) {
      if ((&DAT_103a5230)[iVar4] == 0) {
        iVar2 = ___acrt_lowio_create_handle_array();
        (&DAT_103a5230)[iVar4] = iVar2;
        if (iVar2 == 0) {
          uVar3 = 0xc;
          break;
        }
        iVar2 = DAT_103a5430 + 0x40;
        DAT_103a5430 = iVar2;
      }
      iVar4 = iVar4 + 1;
    }
    FUN_1027ae74();
  }
  else {
    puVar1 = (undefined4 *)FUN_10268ffd();
    uVar3 = 9;
    *puVar1 = 9;
    FUN_10273ea8();
  }
  ExceptionList = local_14;
  return uVar3;
}

