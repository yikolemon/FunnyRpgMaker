/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d2306 */

void FUN_100d2306(void)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  float local_18;
  float local_14 [2];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_18;
  FUN_10131ed3();
  FUN_1012d079(&DAT_1032efeb,0);
  FUN_10114a0e(0,0xbf800000);
  FUN_1010c3e4(local_14);
  fVar3 = (float10)FUN_101572bf(0x430c0000);
  local_18 = (float)fVar3;
  fVar4 = local_14[0];
  if (local_18 <= local_14[0]) {
    fVar4 = local_18;
  }
  FUN_100fb68f(fVar4);
  cVar1 = FUN_101412ec(&DAT_1033a2d9,6,&DAT_1039cfc8,0,0,0,0);
  if (cVar1 != '\0') {
    FUN_100d57cb();
  }
  FUN_10132188();
  cVar1 = FUN_1015650c(&DAT_1032f3fa,&DAT_10388e04,0x3f000000,0x3f4ccccd);
  if (cVar1 != '\0') {
    FUN_100d55a4();
    FUN_100de916();
  }
  FUN_10132188();
  fVar3 = (float10)FUN_101572bf(0x42c80000);
  FUN_1015626c(&PTR_DAT_10388d60,3,(float)fVar3);
  FUN_100d5641();
  FUN_10132188();
  fVar3 = (float10)FUN_101572bf(0x42c80000);
  iVar2 = FUN_1015626c(&PTR_DAT_10388d6c,2,(float)fVar3);
  if (iVar2 == 1) {
    FUN_100d58e7();
  }
  else if (iVar2 == 0) {
    FUN_100d5868();
  }
  FUN_10132188();
  cVar1 = FUN_1015650c(&DAT_1032f390,&DAT_10388e05,0x3f000000,0x3f4ccccd);
  if (cVar1 != '\0') {
    FUN_100d5966();
    FUN_100de916();
  }
  FUN_10114a0e(0,0xbf800000);
  FUN_1010c3e4(local_14);
  FUN_100fb68f(local_14[0]);
  cVar1 = FUN_1013838a("##movespeed",&DAT_10388e08,0x3d23d70a,0xfffffffb,10,&DAT_1033b386,0);
  if (cVar1 != '\0') {
    FUN_100d5966();
    FUN_100de916();
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

