/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011376b */

undefined4 FUN_1011376b(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_1039d74c;
  pcVar2 = (char *)FUN_100f9590(DAT_1039d74c,param_1);
  if (*pcVar2 == '\x01') {
    uVar3 = FUN_1011365b(*(float *)(pcVar2 + 4) - *(float *)(iVar1 + 0x48),*(float *)(pcVar2 + 4),
                         param_2,param_3);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

