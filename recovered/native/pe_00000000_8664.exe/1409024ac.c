/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1409024ac */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014090258f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_1409024ac(ulonglong param_1,uint *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  code *pcVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  char *pcVar9;
  uint *in_RAX;
  uint *puVar10;
  uint *puVar11;
  code *unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong unaff_R13;
  bool bVar12;
  ulonglong uVar3;
  
  if (-1 < *(int *)(param_1 - 0x3f) - (int)param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(int *)(param_1 - 0x3f) == (int)param_1) {
    *param_2 = ~*param_2;
    *in_RAX = *in_RAX & (uint)in_RAX;
    bVar8 = (byte)in_RAX;
    bVar12 = CARRY1((byte)*in_RAX,bVar8);
    uVar6 = *in_RAX;
    *(byte *)in_RAX = (byte)*in_RAX + bVar8;
    if (SCARRY1((byte)uVar6,bVar8) != (char)(byte)*in_RAX < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((byte)*in_RAX != 0) {
      pcVar9 = (char *)((ulonglong)((uint)in_RAX + 0xcc64d100 + (uint)bVar12) | 0x21);
      *pcVar9 = *pcVar9 + (char)pcVar9;
      pcVar9[-0x32] = pcVar9[-0x32] + (char)(param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar1 = (ulonglong *)(param_3 + -0x3f1de03b + (longlong)in_RAX);
    uVar4 = (ulonglong)bVar12;
    uVar2 = *puVar1;
    uVar3 = *puVar1;
    *puVar1 = (uVar3 - unaff_R13) - uVar4;
    if ((longlong)*puVar1 < 0) {
      param_1 = param_1 | 0x3b;
      _DAT_16994509e = _DAT_16994509e >> 1;
      *(byte *)in_RAX = (byte)*in_RAX + bVar8;
      unaff_RBP[(longlong)param_2 * 8 + -0x1c0ddd70] =
           (code)((char)unaff_RBP[(longlong)param_2 * 8 + -0x1c0ddd70] + (char)param_1);
      puVar11 = (uint *)(unaff_RDI & 0xffffffff);
      do {
        puVar10 = puVar11;
        pcVar9 = (char *)((ulonglong)in_RAX & 0xffffffff);
        *(uint *)(param_1 + 0xaaaeccc) = *(uint *)(param_1 + 0xaaaeccc) | (uint)in_RAX;
        cVar7 = (char)pcVar9;
        *pcVar9 = *pcVar9 + cVar7;
        bVar12 = ((uint)CONCAT62((int6)((ulonglong)pcVar9 >> 0x10),
                                 CONCAT11((char)((ulonglong)pcVar9 >> 8) + cVar7,cVar7)) |
                 0x7d3b9e1b) == 0;
        puVar11 = (uint *)(*unaff_RBP)();
        in_RAX = puVar10;
      } while (bVar12);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1 - 1 != 0 && *puVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(unaff_RSI + -0x27) =
         (*(char *)(unaff_RSI + -0x27) - (char)(param_1 - 1 >> 8)) -
         (uVar2 < unaff_R13 || uVar3 - unaff_R13 < uVar4);
    pcVar5 = (code *)swi(0x6c);
    pcVar9 = (char *)(*pcVar5)();
    cVar7 = (char)pcVar9 - *pcVar9;
    pcVar9 = (char *)CONCAT71((int7)((ulonglong)pcVar9 >> 8),cVar7);
    *pcVar9 = *pcVar9 + cVar7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

