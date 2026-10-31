/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140329a17 */

undefined8 FUN_140329a17(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  lVar1 = DAT_14062a630;
  pcVar2 = (char *)FUN_14030f05a(DAT_14062a630,param_1);
  if (*pcVar2 == '\x01') {
    uVar3 = FUN_14032992c(*(float *)(pcVar2 + 4) - *(float *)(lVar1 + 0x48),*(float *)(pcVar2 + 4),
                          param_2,param_3);
    return uVar3;
  }
  return 0;
}

