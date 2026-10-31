/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140257bd4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140257bd4(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  if (2 < (ulonglong)param_2[1]) {
                    /* WARNING: Subroutine does not return */
    FUN_14021738c(
                 "kendFlags_RendererHasTextures, and font atlas is not built! Update backend OR make sure you called ImGui_ImplXXXX_NewFrame() function for renderer backend, which should call io.Fonts->GetTexDataAsRGBA32() / GetTexDataAsAlpha8()."
                 );
  }
  uVar1 = thunk_FUN_140257d5a(*param_2,*param_2 + param_2[1] * 2,*param_1 + 0x10);
  local_1a = 0;
  FUN_140257d05(uVar1,*param_1 + 0x14);
  *(char *)(*param_1 + 0xe) = (char)param_2[1];
  if (ram0x000140613b10 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_18 ^ (ulonglong)auStack_48);
}

