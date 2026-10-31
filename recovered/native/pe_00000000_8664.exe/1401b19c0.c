/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b19c0 */

/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_multibyte(void)

{
  undefined8 uVar1;
  
  if (DAT_140f33204 == '\0') {
    DAT_140f331f0 = &DAT_140f29d00;
    DAT_140f331f8 = &DAT_140f299c0;
    DAT_140f331e8 = &DAT_140f29bf0;
    uVar1 = FUN_1401aece4();
    FUN_1401b1eb8(0xfffffffd,1,uVar1,&DAT_140f331f8);
    DAT_140f33204 = '\x01';
  }
  return 1;
}

