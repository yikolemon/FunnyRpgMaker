/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401067c4 */

undefined8 FUN_1401067c4(longlong param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0x800000) {
    bVar1 = **(byte **)(param_1 + 0x28);
    if ((byte)((bVar1 & 0xdf) + 0xbf) < 0x1a) {
      **(byte **)(param_1 + 0x28) = bVar1 ^ 0x20;
    }
    *(undefined1 *)(param_1 + 0x23) = 1;
    **(int **)(param_1 + 0x10) = **(int **)(param_1 + 0x10) + 1;
  }
  else if (iVar2 == 0x80000) {
    if (*(int *)(param_1 + 0x1c) == 0x204) {
      FUN_1400bfea0(param_1,0,*(undefined4 *)(param_1 + 0x30));
      pcVar3 = "Pressed Down!";
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0x203) {
        return 0;
      }
      FUN_1400bfea0(param_1,0,*(undefined4 *)(param_1 + 0x30));
      pcVar3 = "Pressed Up!";
    }
    FUN_1400bfefc(param_1,0,pcVar3,0);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
  }
  else if (iVar2 == 0x40000) {
    FUN_1400bfefc(param_1,*(undefined4 *)(param_1 + 0x38),"..",0);
  }
  return 0;
}

