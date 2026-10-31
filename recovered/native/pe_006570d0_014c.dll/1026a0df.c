/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026a0df */

/* Library Function - Single Match
    unsigned int __cdecl __acrt_get_utf8_acp_compatibility_codepage(void)
   
   Library: Visual Studio 2019 Release */

uint __cdecl __acrt_get_utf8_acp_compatibility_codepage(void)

{
  int iVar1;
  uint uVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_8;
  
  FUN_1025be8b(0);
  uVar2 = 0xfde9;
  if (*(int *)(local_10 + 8) != 0xfde9) {
    iVar1 = ___acrt_AreFileApisANSI_0();
    uVar2 = 0;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return uVar2;
}

