/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14047b250 */

undefined8 FUN_14047b250(longlong *param_1,longlong param_2)

{
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this;
  longlong lVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  _Locinfo local_98 [8];
  longlong local_90;
  undefined1 local_88;
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  undefined2 local_68;
  longlong local_60;
  undefined2 local_58;
  longlong local_50;
  undefined1 local_48;
  longlong local_40;
  undefined1 local_38;
  
  lVar1 = 0;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    this = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
           FUN_14044ab00(0x58);
    lVar3 = lVar1;
    if (this != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      lVar1 = *(longlong *)(param_2 + 8);
      if (lVar1 == 0) {
        pwVar2 = L"pNonPic";
      }
      else {
        pwVar2 = *(wchar_t **)(lVar1 + 0x28);
        if (pwVar2 == (wchar_t *)0x0) {
          pwVar2 = (wchar_t *)(lVar1 + 0x30);
        }
      }
      FUN_14044e710(local_98,0);
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      if (pwVar2 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14044acc0(L"ay");
      }
      FUN_14044e1c0(local_98,pwVar2);
      lVar1 = std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::
              time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>
                        (this,local_98,0);
      lVar3 = 1;
    }
    *param_1 = lVar1;
    if (lVar3 != 0) {
      FUN_14044e280(local_98);
      if (local_40 != 0) {
        thunk_FUN_1404a2310();
      }
      local_40 = 0;
      if (local_50 != 0) {
        thunk_FUN_1404a2310();
      }
      local_50 = 0;
      if (local_60 != 0) {
        thunk_FUN_1404a2310();
      }
      local_60 = 0;
      if (local_70 != 0) {
        thunk_FUN_1404a2310();
      }
      local_70 = 0;
      if (local_80 != 0) {
        thunk_FUN_1404a2310();
      }
      local_80 = 0;
      if (local_90 != 0) {
        thunk_FUN_1404a2310();
      }
      local_90 = 0;
      FUN_14044e760(local_98);
    }
  }
  return 5;
}

