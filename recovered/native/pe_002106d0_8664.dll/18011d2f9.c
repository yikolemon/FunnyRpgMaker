/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011d2f9 */

void FUN_18011d2f9(undefined4 param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_180419160;
  if ((*(char *)(DAT_180419160 + 0x2a40) == '\0') &&
     (((param_2 != (char *)0x0 ||
       (param_2 = *(char **)(DAT_180419160 + 0x58), param_2 != (char *)0x0)) && (*param_2 != '\0')))
     ) {
    lVar2 = FUN_1800fee30(param_2,&DAT_18036b659);
    if (lVar2 != 0) {
      FUN_18011d246(2,param_1);
      *(longlong *)(lVar1 + 0x2a50) = lVar2;
    }
  }
  return;
}

