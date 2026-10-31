/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180118a82 */

undefined8 FUN_180118a82(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)FUN_1800fdb8a(DAT_180419160,param_1);
  if (*pcVar1 == '\x01') {
    uVar2 = FUN_180118ab7(param_1,param_2);
    return uVar2;
  }
  return 0;
}

