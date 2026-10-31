/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140774c44 */

/* WARNING: Control flow encountered bad instruction data */

char FUN_140774c44(undefined4 param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong unaff_RDI;
  
  uVar1 = *(uint *)(param_2 + 0x434);
  uVar5 = (ulonglong)uVar1;
  if (uVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = '\x01';
  if (*(int *)(uVar5 + 0x1c) == 0) {
    iVar2 = *(int *)(uVar5 + 0x24);
    if (iVar2 < 1) {
      cVar3 = '\0';
    }
    else {
      do {
        uVar4 = param_2 & 0xffffffff;
        if (uVar1 != 0) {
          uVar4 = (ulonglong)*(uint *)((ulonglong)*(uint *)(uVar5 + 0x2c) + unaff_RDI * 4);
        }
        cVar3 = FUN_140783c2f(uVar4,param_1);
      } while ((cVar3 == '\0') &&
              (iVar6 = (int)unaff_RDI, unaff_RDI = (ulonglong)(iVar6 + 1), iVar2 != iVar6));
    }
  }
  return cVar3;
}

