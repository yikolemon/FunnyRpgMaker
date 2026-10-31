/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180118547 */

undefined8 FUN_180118547(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  lVar1 = DAT_180419160;
  pcVar2 = (char *)FUN_1800fdb8a(DAT_180419160,param_1);
  if (*pcVar2 == '\x01') {
    uVar3 = FUN_18011845c(*(float *)(pcVar2 + 4) - *(float *)(lVar1 + 0x48),*(float *)(pcVar2 + 4),
                          param_2,param_3);
    return uVar3;
  }
  return 0;
}

