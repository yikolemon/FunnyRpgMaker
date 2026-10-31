/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027617e */

/* Library Function - Single Match
    ___acrt_LCMapStringA
   
   Library: Visual Studio 2019 Release */

void ___acrt_LCMapStringA
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9)

{
  int local_14;
  undefined1 local_10 [8];
  char local_8;
  
  FUN_1025be8b(param_1);
  FUN_102761c7(local_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return;
}

