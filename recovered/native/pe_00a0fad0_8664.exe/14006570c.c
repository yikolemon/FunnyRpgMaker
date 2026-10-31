/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006570c */

undefined8 FUN_14006570c(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  iVar1 = FUN_140065f7e();
  if (iVar1 == 0x2f) {
    do {
      iVar1 = FUN_140065f7e(param_1);
    } while ((iVar1 + 1U < 0xf & (byte)(0x4803 >> ((byte)(iVar1 + 1U) & 0x1f))) == 0);
LAB_14006576c:
    uVar2 = 1;
  }
  else {
    if (iVar1 == 0x2a) {
      do {
        while( true ) {
          iVar1 = FUN_140065f7e(param_1);
          if (iVar1 != 0x2a) break;
          iVar1 = FUN_140065f7e(param_1);
          if (iVar1 == 0x2f) goto LAB_14006576c;
          FUN_140066032(param_1);
        }
      } while (1 < iVar1 + 1U);
      pcVar3 = "invalid comment; missing closing \'*/\'";
    }
    else {
      pcVar3 = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
    }
    *(char **)(param_1 + 0x70) = pcVar3;
    uVar2 = 0;
  }
  return uVar2;
}

