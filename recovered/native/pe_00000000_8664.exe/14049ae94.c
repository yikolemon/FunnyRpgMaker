/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14049ae94 */

/* Library Function - Single Match
    setlocale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

char * __cdecl setlocale(int _Category,char *_Locale)

{
  char *pcVar1;
  int local_res8 [2];
  char *local_res10;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_28 [2];
  int *local_20;
  char **local_18;
  
  local_res8[0] = _Category;
  local_res10 = _Locale;
  FUN_1404a355c();
  local_20 = local_res8;
  local_18 = &local_res10;
  local_res20[0] = 4;
  local_28[0] = 4;
  pcVar1 = (char *)operator()<>(local_res18,local_28,&local_20,local_res20);
  return pcVar1;
}

