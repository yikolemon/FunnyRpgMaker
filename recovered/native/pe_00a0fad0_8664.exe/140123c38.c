/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140123c38 */

/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_multibyte(void)

{
  undefined8 uVar1;
  
  if (DAT_140355604 == '\0') {
    DAT_1403555f0 = &DAT_1401cad00;
    DAT_1403555f8 = &DAT_1401ca9c0;
    DAT_1403555e8 = &DAT_1401cabf0;
    uVar1 = FUN_140121594();
    FUN_140124130(0xfffffffd,1,uVar1,&DAT_1403555f8);
    DAT_140355604 = '\x01';
  }
  return 1;
}

