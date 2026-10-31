/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10132188 */

void FUN_10132188(void)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    iVar2 = *(int *)(iVar1 + 0x1f0);
    iVar1 = *(int *)(iVar1 + 0x1e8);
    fVar3 = (float10)FUN_100fdbca(*(undefined4 *)(DAT_1039d74c + 0xdc0),0x3f800000);
    FUN_10131f58((iVar2 == 0) + (iVar1 != 0) * '\x04' + '\x01',(float)fVar3);
  }
  return;
}

