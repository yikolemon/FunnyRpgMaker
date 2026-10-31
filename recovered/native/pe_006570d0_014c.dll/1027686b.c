/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027686b */

/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2019 Release */

int __cdecl getSystemCP(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_8;
  
  FUN_1025be8b(0);
  DAT_103a5458 = 0;
  if (param_1 == -2) {
    DAT_103a5458 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_103a5458 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_103a5458 = 1;
    param_1 = *(UINT *)(local_10 + 8);
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return param_1;
}

