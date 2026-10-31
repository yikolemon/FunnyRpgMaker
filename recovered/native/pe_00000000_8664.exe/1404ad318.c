/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404ad318 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1404ad318(short *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  if (((param_1 == (short *)0x0) || (*param_1 == 0)) ||
     (iVar1 = FUN_1404b8040(param_1,"n."), iVar1 == 0)) {
    iVar1 = (*(code *)s_GetModuleHandleExW_14059df76._2_8_)
                      (*(undefined4 *)(param_2 + 8),0x20001004,local_res8,2);
    if (iVar1 != 0) {
      if (local_res8[0] != 0) {
        return (ulonglong)local_res8[0];
      }
      uVar2 = (*ram0x00014059de90)();
      return uVar2;
    }
  }
  else {
    iVar1 = FUN_1404b8040(param_1,"xpression.");
    if (iVar1 != 0) {
      uVar2 = FUN_1404b3804(param_1);
      return uVar2;
    }
    iVar1 = (*(code *)s_GetModuleHandleExW_14059df76._2_8_)
                      (*(undefined4 *)(param_2 + 8),0x2000000b,local_res8,2);
    if (iVar1 != 0) {
      return (ulonglong)local_res8[0];
    }
  }
  return 0;
}

