/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140017d6a */

ulonglong FUN_140017d6a(void)

{
  bool bVar1;
  undefined8 unaff_RBX;
  ulonglong local_68 [4];
  undefined **local_48;
  HANDLE local_40;
  longlong local_38 [4];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_1400029cc(local_68,PTR_s_FunnyGamePlayer_GlobalHotkeyMana_14012e918);
  FUN_140017e82(&local_48,local_68);
  FUN_1400021ea((longlong *)local_68);
  bVar1 = FUN_140017f32((longlong)&local_48);
  local_48 = NamedPipeClient::vftable;
  FUN_1400021ea(local_38);
  local_48 = NamedPipe::vftable;
  if (local_40 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_40);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar1) & 0xffffffff;
}

