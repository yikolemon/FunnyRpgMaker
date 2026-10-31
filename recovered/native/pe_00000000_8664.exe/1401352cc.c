/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401352cc */

void FUN_1401352cc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ushort *puVar3;
  ushort *puVar4;
  char cVar5;
  longlong lVar6;
  
  if (0 < (longlong)*(int *)(param_1 + 0x1c)) {
    puVar3 = *(ushort **)(param_1 + 0x20);
    puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0x1c) * 0x18;
    lVar1 = *(longlong *)(param_2 + 8);
    lVar2 = *(longlong *)(param_2 + 0x10);
    lVar6 = 0;
    do {
      *(undefined4 *)(lVar1 + lVar6 * 8) = *(undefined4 *)(puVar3 + 8);
      *(undefined4 *)(lVar1 + 4 + lVar6 * 8) = *(undefined4 *)(puVar3 + 10);
      cVar5 = '\x02' - ((*puVar3 & 2) == 0);
      if ((*puVar3 & 1) != 0) {
        cVar5 = '\0';
      }
      *(char *)(lVar2 + lVar6) = cVar5;
      puVar3 = puVar3 + 0x18;
      lVar6 = lVar6 + 1;
    } while (puVar3 < puVar4);
  }
  return;
}

