/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027661e */

/* Library Function - Single Match
    ___acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___acrt_initialize_multibyte(void)

{
  undefined4 uVar1;
  
  if (DAT_103a545c == '\0') {
    DAT_103a5454 = &DAT_1039b6b0;
    DAT_103a5450 = &DAT_1039b9d8;
    DAT_103a544c = &DAT_1039b8d0;
    uVar1 = FUN_102743db();
    FUN_102769df(0xfffffffd,1,uVar1,&DAT_103a5454);
    DAT_103a545c = '\x01';
  }
  return 1;
}

