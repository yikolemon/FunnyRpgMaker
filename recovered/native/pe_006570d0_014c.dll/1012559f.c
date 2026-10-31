/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012559f */

void FUN_1012559f(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = FUN_10147bc2(param_2,"%s: %d entries, %d bytes",param_2,*param_1,*param_1 * 8);
  if (cVar3 != '\0') {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      iVar2 = param_1[2];
      iVar4 = 0;
      do {
        FUN_1012d551("Key 0x%08X Value { i: %d }",*(undefined4 *)(iVar2 + iVar4),
                     *(undefined4 *)(iVar2 + 4 + iVar4));
        FUN_10124092(*(undefined4 *)(iVar2 + iVar4));
        iVar4 = iVar4 + 8;
      } while (iVar1 << 3 != iVar4);
    }
    FUN_10149387();
    return;
  }
  return;
}

