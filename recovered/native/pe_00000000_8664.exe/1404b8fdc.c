/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b8fdc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __dcrt_write_console
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

int __dcrt_write_console(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = (*ram0x00014059e298)(DAT_140627d40,param_1,param_2,param_3,0);
  if (iVar1 == 0) {
    iVar2 = (*_DAT_14059df60)();
    if (iVar2 == 6) {
      if (DAT_140627d40 < 0xfffffffffffffffe) {
        (*ram0x00014059dd60)();
      }
      DAT_140627d40 =
           (*(code *)s_GetDateFormatW_14059dda8._0_8_)
                     (L"emfunctions-l1-1-0",0x40000000,3,0,CONCAT44(uVar3,3),0,0);
      iVar1 = (*ram0x00014059e298)(DAT_140627d40,param_1,param_2,param_3,0);
    }
  }
  return iVar1;
}

