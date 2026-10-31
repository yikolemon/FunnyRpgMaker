/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028351f */

/* Library Function - Single Match
    ___acrt_DownlevelLocaleNameToLCID
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___acrt_DownlevelLocaleNameToLCID(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_102835c9(param_1);
    if ((-1 < (int)uVar1) && (uVar1 < 0xe4)) {
      return *(undefined4 *)(&DAT_10326218 + uVar1 * 8);
    }
  }
  return 0;
}

