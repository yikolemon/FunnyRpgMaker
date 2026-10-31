/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b079a */

void Unwind_1401b079a(void)

{
  uint in_EAX;
  int iVar1;
  short *psVar2;
  short *psVar3;
  short unaff_SI;
  undefined2 unaff_00000032;
  undefined4 unaff_00000034;
  longlong local_res18;
  undefined1 local_res20 [8];
  ulonglong in_stack_00000228;
  
  DAT_140f29950 = in_EAX & 0x8d480010;
  local_res18 = CONCAT44(unaff_00000034,CONCAT22(unaff_00000032,unaff_SI));
  iVar1 = thunk_FUN_1401a50c0(&local_res18);
  if (iVar1 == 0) {
    psVar2 = (short *)&stack0x00000028;
    psVar3 = (short *)(ulonglong)CONCAT22(unaff_00000032,unaff_SI);
LAB_1401b085d:
    if (*psVar2 != unaff_SI) {
      FUN_1401b04dc(psVar2);
      goto LAB_1401b07d5;
    }
  }
  else {
    if (iVar1 == 0x22) {
      psVar2 = (short *)_malloc_base(local_res18 * 2);
      if (psVar2 == (short *)0x0) {
        psVar2 = (short *)0x0;
      }
      else {
        iVar1 = thunk_FUN_1401a50c0(local_res20,psVar2,local_res18,&DAT_140edd5fc);
        if (iVar1 == 0) {
          FUN_1401aea30(0);
          psVar3 = psVar2;
          if (psVar2 == (short *)&stack0x00000028) {
            psVar3 = (short *)CONCAT44(unaff_00000034,CONCAT22(unaff_00000032,unaff_SI));
          }
          goto LAB_1401b085d;
        }
      }
      FUN_1401aea30(psVar2);
    }
    psVar3 = (short *)CONCAT44(unaff_00000034,CONCAT22(unaff_00000032,unaff_SI));
  }
  FUN_1401b0270();
LAB_1401b07d5:
  FUN_1401aea30(psVar3);
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(in_stack_00000228 ^ (ulonglong)&stack0xfffffffffffffff8);
}

