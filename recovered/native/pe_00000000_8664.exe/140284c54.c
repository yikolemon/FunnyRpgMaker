/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140284c54 */

void FUN_140284c54(undefined1 *param_1,undefined8 param_2)

{
  undefined1 local_1b0 [280];
  undefined1 local_98 [56];
  wchar_t *local_60;
  undefined8 local_58;
  undefined1 local_50 [32];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_14028fe42(local_1b0,param_2,0x22,0x40,1);
  if (param_1 + 0x10 != local_1b0) {
    FUN_140286f86(param_1 + 0x28);
    FUN_140290472(param_1 + 0x10,local_1b0);
  }
  FUN_140285006(local_1b0);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    *param_1 = 0;
    return;
  }
  FUN_140214a5a(local_50,param_2);
  local_60 = L"_ImGui_ImplWin32_EnableAlphaCompositing__";
  local_58 = 0x16;
  FUN_14028fe99(local_1b0,&local_60,local_50);
  FUN_14028ff16(local_98,local_1b0);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_98,&DAT_1405b79b0);
}

