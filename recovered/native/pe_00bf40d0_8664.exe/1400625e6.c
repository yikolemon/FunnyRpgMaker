/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400625e6 */

int FUN_1400625e6(char *param_1,size_t param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  bool bVar6;
  
  cVar1 = *param_1;
  ppuVar5 = &PTR_s_Ascender_1400f9c20;
  iVar4 = 1;
  do {
    if (**ppuVar5 == cVar1) {
      while( true ) {
        if (**ppuVar5 != cVar1) {
          return 0x4b;
        }
        iVar3 = strncmp(*ppuVar5,param_1,param_2);
        if (iVar3 == 0) break;
        ppuVar5 = ppuVar5 + 1;
        bVar6 = iVar4 == 0x4a;
        iVar4 = iVar4 + 1;
        if (bVar6) {
          return 0x4b;
        }
      }
      return iVar4 + -1;
    }
    ppuVar5 = ppuVar5 + 1;
    uVar2 = iVar4 - 1;
    iVar4 = iVar4 + 1;
  } while (uVar2 < 0x49);
  return 0x4b;
}

