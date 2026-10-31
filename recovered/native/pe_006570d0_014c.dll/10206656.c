/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10206656 */

uint __fastcall FUN_10206656(char *param_1,size_t param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  cVar1 = *param_1;
  uVar3 = 0;
  do {
    if (*(&PTR_s_Ascender_103123b0)[uVar3] == cVar1) {
      while( true ) {
        if (*(&PTR_s_Ascender_103123b0)[uVar3] != cVar1) {
          return 0x4b;
        }
        iVar2 = _strncmp((&PTR_s_Ascender_103123b0)[uVar3],param_1,param_2);
        if (iVar2 == 0) break;
        uVar3 = uVar3 + 1;
        if (uVar3 == 0x4a) {
          return 0x4b;
        }
      }
      return uVar3;
    }
    bVar4 = uVar3 < 0x49;
    uVar3 = uVar3 + 1;
  } while (bVar4);
  return 0x4b;
}

