/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10287de0 */

uint FUN_10287de0(uint param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort in_FPUControlWord;
  
  uVar4 = (in_FPUControlWord & 1) << 4;
  uVar6 = uVar4 | 8;
  if ((in_FPUControlWord & 4) == 0) {
    uVar6 = uVar4;
  }
  uVar4 = uVar6 | 4;
  if ((in_FPUControlWord & 8) == 0) {
    uVar4 = uVar6;
  }
  uVar6 = uVar4 | 2;
  if ((in_FPUControlWord & 0x10) == 0) {
    uVar6 = uVar4;
  }
  uVar4 = uVar6 | 1;
  if ((in_FPUControlWord & 0x20) == 0) {
    uVar4 = uVar6;
  }
  uVar6 = uVar4 | 0x80000;
  if ((in_FPUControlWord & 2) == 0) {
    uVar6 = uVar4;
  }
  uVar1 = in_FPUControlWord & 0xc00;
  if (uVar1 < 0x801) {
    if (uVar1 == 0x800) {
      uVar6 = uVar6 | 0x200;
    }
    else if (((in_FPUControlWord & 0xc00) != 0) && (uVar1 == 0x400)) {
      uVar6 = uVar6 | 0x100;
    }
  }
  else if (uVar1 == 0xc00) {
    uVar6 = uVar6 | 0x300;
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar6 = uVar6 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar6 = uVar6 | 0x10000;
  }
  uVar4 = uVar6 | 0x40000;
  if ((in_FPUControlWord & 0x1000) == 0) {
    uVar4 = uVar6;
  }
  uVar6 = ~param_2 & uVar4 | param_1 & param_2;
  if (uVar6 != uVar4) {
    uVar1 = FUN_10288170(uVar6);
    uVar4 = (uVar1 & 1) << 4;
    uVar6 = uVar4 | 8;
    if ((uVar1 & 4) == 0) {
      uVar6 = uVar4;
    }
    uVar4 = uVar6 | 4;
    if ((uVar1 & 8) == 0) {
      uVar4 = uVar6;
    }
    uVar6 = uVar4 | 2;
    if ((uVar1 & 0x10) == 0) {
      uVar6 = uVar4;
    }
    uVar4 = uVar6 | 1;
    if ((uVar1 & 0x20) == 0) {
      uVar4 = uVar6;
    }
    uVar5 = uVar4 | 0x80000;
    if ((uVar1 & 2) == 0) {
      uVar5 = uVar4;
    }
    uVar2 = uVar1 & 0xc00;
    if (uVar2 < 0x801) {
      if (uVar2 == 0x800) {
        uVar5 = uVar5 | 0x200;
      }
      else if (((uVar1 & 0xc00) != 0) && (uVar2 == 0x400)) {
        uVar5 = uVar5 | 0x100;
      }
    }
    else if (uVar2 == 0xc00) {
      uVar5 = uVar5 | 0x300;
    }
    if ((uVar1 & 0x300) == 0) {
      uVar5 = uVar5 | 0x20000;
    }
    else if ((uVar1 & 0x300) == 0x200) {
      uVar5 = uVar5 | 0x10000;
    }
    uVar6 = uVar5 | 0x40000;
    if ((uVar1 & 0x1000) == 0) {
      uVar6 = uVar5;
    }
  }
  if (0 < DAT_1039d7b4) {
    uVar5 = MXCSR >> 3 & 0x10;
    uVar4 = uVar5 | 8;
    if ((MXCSR & 0x200) == 0) {
      uVar4 = uVar5;
    }
    uVar5 = uVar4 | 4;
    if ((MXCSR & 0x400) == 0) {
      uVar5 = uVar4;
    }
    uVar4 = uVar5 | 2;
    if ((MXCSR & 0x800) == 0) {
      uVar4 = uVar5;
    }
    uVar5 = uVar4 | 1;
    if ((MXCSR & 0x1000) == 0) {
      uVar5 = uVar4;
    }
    uVar4 = uVar5 | 0x80000;
    if ((MXCSR & 0x100) == 0) {
      uVar4 = uVar5;
    }
    uVar5 = MXCSR & 0x6000;
    if (uVar5 < 0x4001) {
      if (uVar5 == 0x4000) {
        uVar4 = uVar4 | 0x200;
      }
      else if ((uVar5 != 0) && (uVar5 == 0x2000)) {
        uVar4 = uVar4 | 0x100;
      }
    }
    else if (uVar5 == 0x6000) {
      uVar4 = uVar4 | 0x300;
    }
    uVar5 = MXCSR & 0x8040;
    if (uVar5 == 0x40) {
      uVar4 = uVar4 | 0x2000000;
    }
    else if (uVar5 == 0x8000) {
      uVar4 = uVar4 | 0x3000000;
    }
    else if (uVar5 == 0x8040) {
      uVar4 = uVar4 | 0x1000000;
    }
    uVar5 = ~(param_2 & 0x308031f) & uVar4 | param_2 & 0x308031f & param_1;
    if (uVar5 != uVar4) {
      uVar3 = FUN_10288270(uVar5);
      FUN_10281300(uVar3);
      uVar5 = MXCSR >> 3 & 0x10;
      uVar4 = uVar5 | 8;
      if ((MXCSR & 0x200) == 0) {
        uVar4 = uVar5;
      }
      uVar5 = uVar4 | 4;
      if ((MXCSR & 0x400) == 0) {
        uVar5 = uVar4;
      }
      uVar4 = uVar5 | 2;
      if ((MXCSR & 0x800) == 0) {
        uVar4 = uVar5;
      }
      uVar5 = uVar4 | 1;
      if ((MXCSR & 0x1000) == 0) {
        uVar5 = uVar4;
      }
      uVar4 = uVar5 | 0x80000;
      if ((MXCSR & 0x100) == 0) {
        uVar4 = uVar5;
      }
      uVar5 = MXCSR & 0x6000;
      if (uVar5 < 0x4001) {
        if (uVar5 == 0x4000) {
          uVar4 = uVar4 | 0x200;
        }
        else if ((uVar5 != 0) && (uVar5 == 0x2000)) {
          uVar4 = uVar4 | 0x100;
        }
      }
      else if (uVar5 == 0x6000) {
        uVar4 = uVar4 | 0x300;
      }
      uVar5 = MXCSR & 0x8040;
      if (uVar5 == 0x40) {
        uVar4 = uVar4 | 0x2000000;
      }
      else if (uVar5 == 0x8000) {
        uVar4 = uVar4 | 0x3000000;
      }
      else if (uVar5 == 0x8040) {
        uVar4 = uVar4 | 0x1000000;
      }
    }
    uVar5 = uVar4 | uVar6;
    if (((uVar4 ^ uVar6) & 0x8031f) != 0) {
      uVar5 = uVar4 | uVar6 | 0x80000000;
    }
    return uVar5;
  }
  return uVar6;
}

