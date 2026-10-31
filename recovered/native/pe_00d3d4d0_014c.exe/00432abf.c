/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00432abf */

void __fastcall FUN_00432abf(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  char cVar5;
  int iVar6;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    puVar4 = *(ushort **)(param_1 + 0x1c);
    puVar1 = puVar4 + *(int *)(param_1 + 0x18) * 0x14;
    iVar2 = *(int *)(param_2 + 4);
    iVar3 = *(int *)(param_2 + 8);
    iVar6 = 0;
    do {
      *(undefined4 *)(iVar2 + iVar6 * 8) = *(undefined4 *)(puVar4 + 8);
      *(undefined4 *)(iVar2 + 4 + iVar6 * 8) = *(undefined4 *)(puVar4 + 10);
      cVar5 = '\x02' - ((*puVar4 & 2) == 0);
      if ((*puVar4 & 1) != 0) {
        cVar5 = '\0';
      }
      *(char *)(iVar3 + iVar6) = cVar5;
      puVar4 = puVar4 + 0x14;
      iVar6 = iVar6 + 1;
    } while (puVar4 < puVar1);
  }
  return;
}

