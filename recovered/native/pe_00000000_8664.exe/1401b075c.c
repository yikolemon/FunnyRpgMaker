/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b075c */

/* WARNING: Type propagation algorithm not settling */

void FUN_1401b075c(void)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  undefined1 auStack_248 [32];
  longlong alStack_228 [2];
  short asStack_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_248;
  psVar3 = (short *)0x0;
  DAT_140f29960 = 0xffffffff;
  DAT_140f32ce0 = 0;
  DAT_140f29950 = 0xffffffff;
  alStack_228[0] = 0;
  iVar1 = thunk_FUN_1401a50c0(alStack_228,asStack_218,0x100,&DAT_140edd5fc);
  if (iVar1 == 0) {
    psVar2 = asStack_218;
LAB_1401b085d:
    if (*psVar2 != 0) {
      FUN_1401b04dc(psVar2);
      goto LAB_1401b07d5;
    }
  }
  else if (iVar1 == 0x22) {
    psVar2 = (short *)_malloc_base(alStack_228[0] * 2);
    if (psVar2 == (short *)0x0) {
      psVar2 = (short *)0x0;
    }
    else {
      alStack_228[1] = 0;
      iVar1 = thunk_FUN_1401a50c0(alStack_228 + 1,psVar2,alStack_228[0],&DAT_140edd5fc);
      if (iVar1 == 0) {
        FUN_1401aea30(0);
        psVar3 = psVar2;
        if (psVar2 == asStack_218) {
          psVar3 = (short *)0x0;
        }
        goto LAB_1401b085d;
      }
    }
    FUN_1401aea30(psVar2);
  }
  FUN_1401b0270();
LAB_1401b07d5:
  FUN_1401aea30(psVar3);
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_248);
}

