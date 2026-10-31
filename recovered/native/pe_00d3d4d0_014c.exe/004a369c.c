/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a369c */

/* Library Function - Single Match
    ___acrt_DownlevelLocaleNameToLCID
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __cdecl ___acrt_DownlevelLocaleNameToLCID(ushort *param_1)

{
  uint uVar1;
  
  if (param_1 != (ushort *)0x0) {
    uVar1 = FUN_004a3746(param_1);
    if ((-1 < (int)uVar1) && (uVar1 < 0xe4)) {
      return *(undefined4 *)(&DAT_004fa5d8 + uVar1 * 8);
    }
  }
  return 0;
}

