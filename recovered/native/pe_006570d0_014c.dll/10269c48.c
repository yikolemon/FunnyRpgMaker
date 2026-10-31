/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10269c48 */

undefined4 FUN_10269c48(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (DAT_103a4e88 == (int *)0x0) {
LAB_10269cbe:
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = *DAT_103a4e88;
    piVar4 = DAT_103a4e88;
    while (iVar1 != 0) {
      iVar1 = FUN_102741c1(0,0,iVar1,0xffffffff,0,0);
      if (iVar1 == 0) goto LAB_10269cbe;
      iVar2 = FUN_10275d90(iVar1,2);
      if (iVar2 == 0) {
        iVar2 = 0;
LAB_10269cb8:
        FUN_10274120(iVar2);
        goto LAB_10269cbe;
      }
      iVar1 = FUN_102741c1(0,0,*piVar4,0xffffffff,iVar2,iVar1);
      if (iVar1 == 0) goto LAB_10269cb8;
      FUN_10279f3c(iVar2,0);
      FUN_10274120(0);
      piVar4 = piVar4 + 1;
      iVar1 = *piVar4;
    }
    uVar3 = 0;
  }
  return uVar3;
}

