/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407522fb */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014075234f) */

void FUN_1407522fb(void)

{
  char cVar1;
  int iVar2;
  undefined8 unaff_RBX;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined8 in_R9;
  undefined4 uVar6;
  uint unaff_R13D;
  undefined4 unaff_000000ac;
  uint uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_R9 >> 0x20);
  uVar5 = (uint)in_R9;
  uVar7 = (uint)((ulonglong)unaff_RBX >> 0x20);
  cVar1 = *(char *)(ulonglong)uVar7;
  if ((cVar1 == '\t') || (cVar1 == ' ')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar4 = (undefined1 *)(ulonglong)uVar7;
  if (cVar1 != '\0') {
    iVar2 = FUN_1408c85c0();
    puVar3 = (undefined1 *)(ulonglong)(uVar7 + iVar2);
    puVar4 = puVar3;
    if (uVar5 < unaff_R13D) {
      do {
        if ((puVar3[-1] != ' ') && (puVar4 = puVar3, puVar3[-1] != '\t')) break;
        puVar4 = (undefined1 *)(ulonglong)uVar7;
      } while (CONCAT44(uVar6,uVar5) <= CONCAT44(unaff_000000ac,unaff_R13D) &&
               CONCAT44(unaff_000000ac,unaff_R13D) != CONCAT44(uVar6,uVar5));
    }
  }
  *puVar4 = 0;
  return;
}

