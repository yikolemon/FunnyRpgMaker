/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026a7a4 */

/* Library Function - Single Match
    bool __cdecl compute_size(struct _BY_HANDLE_FILE_INFORMATION const &,long &)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl compute_size(_BY_HANDLE_FILE_INFORMATION *param_1,long *param_2)

{
  undefined4 *puVar1;
  
  *param_2 = 0;
  if ((param_1->nFileSizeHigh == 0) && (param_1->nFileSizeLow < 0x80000000)) {
    *param_2 = param_1->nFileSizeLow;
    return true;
  }
  puVar1 = (undefined4 *)FUN_10268ffd();
  *puVar1 = 0x84;
  return false;
}

