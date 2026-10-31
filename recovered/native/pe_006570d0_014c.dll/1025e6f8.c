/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025e6f8 */

/* Library Function - Single Match
    ___acrt_uninitialize
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___acrt_uninitialize(char param_1)

{
  undefined4 uVar1;
  
  if (param_1 != '\0') {
    if (DAT_103a4d4c != 0) {
      __flushall();
    }
    return 1;
  }
  uVar1 = ___acrt_execute_uninitializers(&PTR_LAB_103236b8,&DAT_10323738);
  return uVar1;
}

