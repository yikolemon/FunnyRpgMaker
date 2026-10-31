/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076ba7d */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14076ba7d(int param_1,int param_2)

{
  undefined8 unaff_RBX;
  short sVar1;
  ulonglong uVar2;
  uint unaff_R14D;
  uint uVar3;
  
  uVar3 = (uint)((ulonglong)unaff_RBX >> 0x20);
  uVar2 = (ulonglong)_DAT_150b091d7;
  sVar1 = (short)((ulonglong)unaff_RBX >> 0x20);
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((uVar3 >> 10 & 1) == 0) {
      if ((uVar3 >> 0xc & 1) == 0) {
        return 0;
      }
      if (sVar1 < 0) {
        return 400;
      }
      if ((param_2 != 0) && (*(int *)(uVar2 + 0x1528) == param_2)) {
        return 300;
      }
      if ((unaff_R14D >> 0xe & 1) != 0) {
        return 200;
      }
      return 0;
    }
    if ((param_2 != 0) && (*(int *)(uVar2 + 0x1528) == param_2)) {
      return 300;
    }
  }
  else {
    if ((param_2 != 0) && (*(int *)(uVar2 + 0x1528) == param_2)) {
      return 300;
    }
    if ((param_1 != 0) && (0 < *(int *)(uVar2 + 0x2068))) {
      if (*(int *)((ulonglong)*(uint *)(uVar2 + 0x2070) + 0x800000000) != param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (-1 < sVar1) {
        return 199;
      }
      return 599;
    }
  }
  return 0;
}

