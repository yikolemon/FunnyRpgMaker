/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045ddce */

uint __fastcall FUN_0045ddce(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  uVar3 = 0;
  do {
    if (*(&PTR_s_Ascender_004e6950)[uVar3] == (char)uVar1) {
      while( true ) {
        if (*(&PTR_s_Ascender_004e6950)[uVar3] != (char)uVar1) {
          return 0x4b;
        }
        uVar2 = FUN_00493180((int)(&PTR_s_Ascender_004e6950)[uVar3],param_1,param_2);
        if (uVar2 == 0) break;
        uVar3 = uVar3 + 1;
        if (uVar3 == 0x4a) {
          return 0x4b;
        }
      }
      return uVar3;
    }
    bVar4 = uVar3 < 0x49;
    uVar3 = uVar3 + 1;
  } while (bVar4);
  return 0x4b;
}

