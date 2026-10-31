/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009185f */

undefined8 FUN_14009185f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  lVar1 = DAT_140f2a910;
  pcVar2 = (char *)FUN_140076e46(DAT_140f2a910,param_1);
  if (*pcVar2 == '\x01') {
    uVar3 = FUN_140091774(*(float *)(pcVar2 + 4) - *(float *)(lVar1 + 0x48),*(float *)(pcVar2 + 4),
                          param_2,param_3);
    return uVar3;
  }
  return 0;
}

