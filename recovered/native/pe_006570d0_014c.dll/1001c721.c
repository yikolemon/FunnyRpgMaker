/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001c721 */

uint FUN_1001c721(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = 0x811c9dc5;
  }
  else {
    uVar1 = 0x811c9dc5;
    iVar2 = 0;
    do {
      uVar1 = (*(byte *)(param_1 + iVar2) ^ uVar1) * 0x1000193;
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
  }
  return uVar1;
}

