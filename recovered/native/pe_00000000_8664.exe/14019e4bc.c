/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019e4bc */

/* Library Function - Single Match
    _initialize_onexit_table
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _initialize_onexit_table(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_140f17b40;
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_140f17b40;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
  }
  return 0;
}

