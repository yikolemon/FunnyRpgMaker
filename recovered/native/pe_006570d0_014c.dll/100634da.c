/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100634da */

undefined4 __fastcall FUN_100634da(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = -4;
    do {
      uVar1 = *param_1;
      if (uVar1 == 0) {
        return 0;
      }
      if (((uVar1 < 0x20) && (uVar1 != 0xd)) && (uVar1 != 10)) {
        return 1;
      }
      param_1 = param_1 + 1;
      uVar1 = iVar2 >> 2;
      iVar2 = iVar2 + -4;
    } while (uVar1 < param_2);
  }
  return 0;
}

