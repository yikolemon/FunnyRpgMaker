/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140b9c145 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_140b9c145(longlong param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char *in_RAX;
  char cVar5;
  char *pcVar6;
  char *unaff_RBX;
  undefined1 *unaff_RDI;
  char in_CF;
  char in_ZF;
  
  pcVar6 = (char *)(param_1 + -1);
  cVar2 = (char)in_RAX;
  if (pcVar6 == (char *)0x0 || in_ZF != '\0') {
    *in_RAX = *in_RAX + cVar2 + in_CF;
    *unaff_RDI = *unaff_RDI;
    _DAT_182c9c161 = _DAT_182c9c161 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar4 = (char)((ulonglong)in_RAX >> 8);
  cVar3 = cVar2 + cVar4;
  cVar5 = (char)pcVar6;
  if (SCARRY1(cVar2,cVar4)) {
    pcVar1 = (char *)(param_1 + 0x16 + CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3) * 8);
    *pcVar1 = *pcVar1 + cVar5;
    *pcVar6 = *pcVar6 + cVar3;
    *unaff_RBX = *unaff_RBX + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar6 = *pcVar6 + cVar3;
  *unaff_RBX = *unaff_RBX + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

