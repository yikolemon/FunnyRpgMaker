/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005feed */

undefined ** FUN_14005feed(char *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) &&
     (puVar2 = (ulonglong *)thunk_FUN_14001ccd6(param_1,param_2 + 0x98), puVar2 != (ulonglong *)0x0)
     ) {
    uVar1 = *puVar2;
    if (0x51 < uVar1) {
      return (undefined **)(*(longlong *)(param_2 + 0x88) + uVar1 * 0x18 + -0x7b0);
    }
    return &PTR_s_ADD_STYLE_NAME_1400f9010 + uVar1 * 3;
  }
  return (undefined **)0x0;
}

