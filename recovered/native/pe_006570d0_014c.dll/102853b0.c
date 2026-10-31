/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102853b0 */

void FUN_102853b0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 >> 0x18;
  uVar4 = param_1 & 0xc00;
  uVar1 = param_1 >> 0x16 & 0x300;
  if (uVar4 == 0x400) {
    uVar2 = 0x8040;
  }
  else if (uVar4 == 0x800) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x8000;
    if (uVar4 != 0xc00) {
      uVar2 = 0;
    }
  }
  if (uVar1 < 0x201) {
    if (uVar1 == 0x200) {
      uVar1 = 0x4000;
      goto LAB_10285560;
    }
    if ((uVar1 != 0) && (uVar1 == 0x100)) {
      uVar1 = 0x2000;
      goto LAB_10285560;
    }
  }
  else if (uVar1 == 0x300) {
    uVar1 = 0x6000;
    goto LAB_10285560;
  }
  uVar1 = 0;
LAB_10285560:
  if (0 < DAT_1039d7b4) {
    MXCSR = MXCSR & 0xffff003f |
            uVar1 | -(uint)((uVar3 & 1) != 0) & 0x1000 | -(uint)((uVar3 & 2) != 0) & 0x800 |
                    -(uint)((uVar3 & 4) != 0) & 0x400 | -(uint)((uVar3 & 8) != 0) & 0x200 |
                    -(uint)((uVar3 & 0x10) != 0) & 0x80 | -(uint)((uVar3 & 0x20) != 0) & 0x100 |
            uVar2;
  }
  return;
}

