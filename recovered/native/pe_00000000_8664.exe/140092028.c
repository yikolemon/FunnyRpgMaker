/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140092028 */

undefined8 FUN_140092028(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)FUN_140076e46(DAT_140f2a910,param_1);
  if ((0.0 < *(float *)(pcVar1 + 8) || *(float *)(pcVar1 + 8) == 0.0) && (*pcVar1 == '\0')) {
    uVar2 = FUN_140091dcf(param_1,param_2);
    return uVar2;
  }
  return 0;
}

