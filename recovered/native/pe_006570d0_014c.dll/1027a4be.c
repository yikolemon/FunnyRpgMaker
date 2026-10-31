/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a4be */

/* Library Function - Single Match
    __wfullpath
   
   Library: Visual Studio 2019 Release */

wchar_t * __cdecl __wfullpath(wchar_t *_FullPath,wchar_t *_Path,size_t _SizeInWords)

{
  wchar_t *pwVar1;
  
  pwVar1 = (wchar_t *)FUN_1027a4fd(_FullPath,_Path,_SizeInWords,1,0,0);
  return pwVar1;
}

