/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180293e20 */

/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_multibyte(void)

{
  undefined8 uVar1;
  
  if (DAT_180421854 == '\0') {
    DAT_180421840 = &DAT_180416560;
    DAT_180421848 = &DAT_180416220;
    DAT_180421838 = &DAT_180416450;
    uVar1 = FUN_1802910f4();
    FUN_180294318(0xfffffffd,1,uVar1,&DAT_180421848);
    DAT_180421854 = '\x01';
  }
  return 1;
}

