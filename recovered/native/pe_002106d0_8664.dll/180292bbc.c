/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180292bbc */

/* WARNING: Type propagation algorithm not settling */

void FUN_180292bbc(void)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  undefined1 auStack_248 [32];
  longlong local_228 [2];
  short local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_248;
  psVar3 = (short *)0x0;
  DAT_1804161c0 = 0xffffffff;
  DAT_180421330 = 0;
  DAT_1804161b0 = 0xffffffff;
  local_228[0] = 0;
  iVar1 = thunk_FUN_180286e80(local_228,local_218,0x100,&DAT_180387888);
  if (iVar1 == 0) {
    psVar2 = local_218;
LAB_180292cbd:
    if (*psVar2 != 0) {
      FUN_18029293c(psVar2);
      goto LAB_180292c35;
    }
  }
  else if (iVar1 == 0x22) {
    psVar2 = (short *)_malloc_base(local_228[0] * 2);
    if (psVar2 == (short *)0x0) {
      psVar2 = (short *)0x0;
    }
    else {
      local_228[1] = 0;
      iVar1 = thunk_FUN_180286e80(local_228 + 1,psVar2,local_228[0],&DAT_180387888);
      if (iVar1 == 0) {
        FUN_180290e40(0);
        psVar3 = psVar2;
        if (psVar2 == local_218) {
          psVar3 = (short *)0x0;
        }
        goto LAB_180292cbd;
      }
    }
    FUN_180290e40(psVar2);
  }
  FUN_1802926d0();
LAB_180292c35:
  FUN_180290e40(psVar3);
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_248);
}

