/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021b9e6 */

void FUN_14021b9e6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((ulonglong)param_2[1] < 5) {
    lVar1 = thunk_FUN_14021bb5c(*param_2,param_2[1] + *param_2,*param_1 + 0xf);
    thunk_FUN_1404b9e70(lVar1,0,(*param_1 - lVar1) + 0x13);
    *(char *)(*param_1 + 0xe) = (char)param_2[1];
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14021738c(
               "kendFlags_RendererHasTextures, and font atlas is not built! Update backend OR make sure you called ImGui_ImplXXXX_NewFrame() function for renderer backend, which should call io.Fonts->GetTexDataAsRGBA32() / GetTexDataAsAlpha8()."
               );
}

