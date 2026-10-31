/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cc2ee */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408cc2ee(void)

{
  char cVar1;
  int iVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  FUN_1408d1150();
  if (DAT_150c713ed != '\0') {
    *(undefined4 *)(unaff_RBP + -4) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*_DAT_150c2a2c6)();
  cVar1 = (char)_DAT_1fc45c71039b400;
  *(char *)(ulonglong)_DAT_1fc45c71039b400 = *(char *)(ulonglong)_DAT_1fc45c71039b400 + cVar1;
  *(char *)(unaff_RBX + 0x1674fff8) = *(char *)(unaff_RBX + 0x1674fff8) + cVar1;
  iVar2 = FUN_1408cca86();
  if (iVar2 == 0) {
    FUN_1408cc5d9();
  }
  (*_DAT_150c2a419)();
  FUN_1408d1190();
  return;
}

