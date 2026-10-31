/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b7e14 */

void __fastcall FUN_101b7e14(undefined **param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  FUN_10165364(0,0);
  FUN_101657a1();
  uVar2 = DAT_1038ee3c & 0xffff7fff;
  if (param_1 == &PTR_s_Root_with_Long_Name_103022b8) {
    uVar2 = DAT_1038ee3c;
  }
  if ((int)param_1[4] < 1) {
    FUN_10148b8c(*param_1,uVar2 | 0x308);
    FUN_101657a1();
    FUN_1012d08c(&DAT_1033b386,param_1[2]);
    FUN_101657a1();
    FUN_1012d079(param_1[1],0);
  }
  else {
    cVar1 = FUN_10148b8c(*param_1,uVar2);
    if (-1 < (short)uVar2) {
      FUN_101657a1();
      FUN_1012d1be(&DAT_10347064);
      FUN_101657a1();
      FUN_1012d079(param_1[1],0);
    }
    if (cVar1 != '\0') {
      if (0 < (int)param_1[4]) {
        iVar3 = 0;
        do {
          FUN_101b7e14();
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)param_1[4]);
      }
      FUN_10149387();
      return;
    }
  }
  return;
}

