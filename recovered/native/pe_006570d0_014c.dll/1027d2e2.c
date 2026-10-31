/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027d2e2 */

/* Library Function - Single Match
    _TestDefaultCountry
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 _TestDefaultCountry(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_10325a70 + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}

