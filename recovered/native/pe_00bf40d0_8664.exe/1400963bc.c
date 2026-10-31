/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400963bc */

undefined8 FUN_1400963bc(void)

{
  undefined8 *puVar1;
  short *psVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = 0;
  if (DAT_140142e98 == (undefined8 *)0x0) {
    psVar2 = (short *)FUN_1400a93b0();
    if (psVar2 == (short *)0x0) {
      FUN_1400a1290((LPVOID)0x0);
      uVar3 = 0xffffffff;
    }
    else {
      puVar4 = FUN_1400964a8(psVar2);
      puVar1 = puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        uVar3 = 0xffffffff;
        puVar4 = DAT_140142e98;
        puVar1 = DAT_140142ea0;
      }
      DAT_140142ea0 = puVar1;
      DAT_140142e98 = puVar4;
      FUN_1400a1290((LPVOID)0x0);
      FUN_1400a1290(psVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

