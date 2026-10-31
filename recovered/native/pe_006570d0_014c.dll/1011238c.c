/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011238c */

void FUN_1011238c(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar1 = DAT_1039d74c;
  iVar3 = DAT_1039d74c;
  if (*(int *)(DAT_1039d74c + 0x2048) != param_1) {
    if ((*(byte *)(DAT_1039d74c + 0x27b4) & 4) != 0) {
      if (param_1 == 0) {
        pcVar2 = "<NULL>";
      }
      else {
        pcVar2 = *(char **)(param_1 + 4);
      }
      FUN_100f99e6("[focus] SetNavWindow(\"%s\")\n",pcVar2);
    }
    iVar3 = DAT_1039d74c;
    *(int *)(iVar1 + 0x2048) = param_1;
    *(undefined4 *)(iVar1 + 0x2094) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x2090) = 0xffffffff;
  }
  *(undefined2 *)(iVar1 + 0x20d8) = 0;
  *(undefined1 *)(iVar1 + 0x209a) = 0;
  uVar4 = 1;
  if (*(char *)(iVar3 + 0x20d9) == '\0') {
    uVar4 = *(undefined1 *)(iVar3 + 0x209a);
  }
  *(undefined1 *)(iVar3 + 0x2099) = uVar4;
  return;
}

