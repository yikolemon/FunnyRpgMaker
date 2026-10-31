/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dd44ce */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dd44ce(void)

{
  char cVar1;
  int iVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  FUN_140ddafd0();
  if (DAT_1412f606d != '\0') {
    *(undefined4 *)(unaff_RBP + -4) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*_DAT_1412dd176)();
  cVar1 = (char)_DAT_1fc45c70051ae80;
  *(char *)(ulonglong)_DAT_1fc45c70051ae80 = *(char *)(ulonglong)_DAT_1fc45c70051ae80 + cVar1;
  *(char *)(unaff_RBX + 0x1674fff8) = *(char *)(unaff_RBX + 0x1674fff8) + cVar1;
  iVar2 = FUN_140dd4c07();
  if (iVar2 == 0) {
    FUN_140dd4775();
  }
  (*_DAT_1412dd265)();
  FUN_140ddb010();
  return;
}

