/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015561c */

void FUN_18015561c(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(DAT_180419160 + 0x2560);
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x1a) & 0x10) != 0)) {
    lVar3 = FUN_1801118f0(param_1);
    if ((lVar3 != 0) &&
       (((*(byte *)(lVar3 + 0x495) & 1) != 0 && (lVar1 = *(longlong *)(lVar3 + 0x4c0), lVar1 != 0)))
       ) {
      uVar2 = FUN_180153a4b(param_1,lVar3);
      FUN_180153995(*(undefined8 *)(lVar1 + 0x40),uVar2);
      *(byte *)(lVar3 + 0x495) = *(byte *)(lVar3 + 0x495) | 8;
    }
  }
  else {
    uVar2 = FUN_180153a4b(param_1,0);
    lVar3 = FUN_1801537ff(lVar3,uVar2);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x30) = 1;
    }
  }
  return;
}

