/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140122eec */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140122eec(void)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  undefined1 auStack_248 [32];
  longlong local_228 [2];
  short local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_248;
  psVar3 = (short *)0x0;
  _DAT_1401ca960 = 0xffffffff;
  _DAT_140355110 = 0;
  _DAT_1401ca950 = 0xffffffff;
  local_228[0] = 0;
  iVar1 = thunk_FUN_140113ac4(local_228,local_218,0x100,&DAT_140174900);
  if (iVar1 == 0) {
    psVar2 = local_218;
LAB_140122fed:
    if (*psVar2 != 0) {
      FUN_140122c6c(psVar2);
      goto LAB_140122f65;
    }
  }
  else if (iVar1 == 0x22) {
    psVar2 = (short *)_malloc_base(local_228[0] * 2);
    if (psVar2 == (short *)0x0) {
      psVar2 = (short *)0x0;
    }
    else {
      local_228[1] = 0;
      iVar1 = thunk_FUN_140113ac4(local_228 + 1,psVar2,local_228[0],&DAT_140174900);
      if (iVar1 == 0) {
        FUN_1401212e0(0);
        psVar3 = psVar2;
        if (psVar2 == local_218) {
          psVar3 = (short *)0x0;
        }
        goto LAB_140122fed;
      }
    }
    FUN_1401212e0(psVar2);
  }
  FUN_140122a00();
LAB_140122f65:
  FUN_1401212e0(psVar3);
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_248);
}

