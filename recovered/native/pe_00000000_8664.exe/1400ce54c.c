/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ce54c */

void FUN_1400ce54c(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(DAT_140f2a910 + 0x2560);
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x1a) & 0x10) != 0)) {
    lVar3 = FUN_14008ac08(param_1);
    if ((lVar3 != 0) &&
       (((*(byte *)(lVar3 + 0x495) & 1) != 0 && (lVar1 = *(longlong *)(lVar3 + 0x4c0), lVar1 != 0)))
       ) {
      uVar2 = FUN_1400cc97b(param_1,lVar3);
      FUN_1400cc8c5(*(undefined8 *)(lVar1 + 0x40),uVar2);
      *(byte *)(lVar3 + 0x495) = *(byte *)(lVar3 + 0x495) | 8;
    }
  }
  else {
    uVar2 = FUN_1400cc97b(param_1,0);
    lVar3 = FUN_1400cc72f(lVar3,uVar2);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x30) = 1;
    }
  }
  return;
}

