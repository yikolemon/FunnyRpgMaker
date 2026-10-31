/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ec316 */

void FUN_100ec316(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  float10 fVar4;
  
  cVar3 = FUN_1015650c(&DAT_1032f3fa,&DAT_1039d52f,0x3f000000,0x3f4ccccd);
  if (cVar3 != '\0') {
    FUN_100ed592();
    FUN_100de916();
    FUN_10132188();
    return;
  }
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    iVar2 = *(int *)(iVar1 + 0x1f0);
    iVar1 = *(int *)(iVar1 + 0x1e8);
    fVar4 = (float10)FUN_100fdbca(*(undefined4 *)(DAT_1039d74c + 0xdc0),0x3f800000);
    FUN_10131f58((iVar2 == 0) + (iVar1 != 0) * '\x04' + '\x01',(float)fVar4);
  }
  return;
}

